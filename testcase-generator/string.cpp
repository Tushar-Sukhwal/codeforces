/* * Author : AyushK22 */
#include <bits/stdc++.h>

#include "testlib.h"
using namespace std;

// Class to generate test cases and write them to a file
class TestCaseGenerator {
 public:
  TestCaseGenerator(int maxTotalLength, int desiredTestCount)
      : maxTotalLength(maxTotalLength), desiredTestCount(desiredTestCount) {}

  void generateInputFile(const string& filename) {
    ofstream inputFile(filename);
    int totalLength = 0;
    int testCount = 0;

    while (testCount < desiredTestCount && totalLength < maxTotalLength) {
      int remainingLength = maxTotalLength - totalLength;
      int averageLengthPerTest =
          max(1, remainingLength / (desiredTestCount - testCount));

      string testCase =
          generateTestCase(min(averageLengthPerTest, remainingLength));
      totalLength += testCase.length();
      testCases.push_back(testCase);
      testCount++;
    }

    // If we haven't reached the desired test count, add empty strings
    while (testCount < desiredTestCount) {
      testCases.push_back("");
      testCount++;
    }

    inputFile << testCount << "\n";
    for (const auto& testCase : testCases) {
      inputFile << testCase << "\n";
    }
    inputFile.close();
  }

  vector<string> getTestCases() const { return testCases; }

 private:
  int maxTotalLength;
  int desiredTestCount;
  vector<string> testCases;

  string generateTestCase(int remainingLength) {
    if (rnd.next(0, 1)) {
      // Generate a string that is a repeated pattern
      int patternLength = rnd.next(1, min(10, remainingLength));
      string pattern = rnd.next("[a-zA-Z]{%d}", patternLength);
      int repeatCount = rnd.next(1, remainingLength / patternLength);
      string result = "";
      for (int i = 0; i < repeatCount; ++i) {
        result += pattern;
      }
      return result;
    } else {
      // Generate a random string
      int stringLength = rnd.next(1, remainingLength);
      return rnd.next("[a-zA-Z]{%d}", stringLength);
    }
  }
};

// Class to process test cases and write the correct output to a file
class Solution {
 public:
  void processTestCases(const vector<string>& testCases,
                        const string& outputFilename) {
    ofstream outputFile(outputFilename);
    for (const auto& testCase : testCases) {
      processTestCase(testCase, outputFile);
    }
    outputFile.close();
  }

 private:
  void processTestCase(const string& testCase, ofstream& outputFile) {
    bool result = repeatedSubstringPattern(testCase);
    outputFile << (result ? "true" : "false") << "\n";
  }

  bool repeatedSubstringPattern(const string& str) {
    int i = 1, j = 0, n = str.size();
    vector<int> dp(n + 1, 0);
    while (i < str.size()) {
      if (str[i] == str[j])
        dp[++i] = ++j;
      else if (j == 0)
        i++;
      else
        j = dp[j];
    }
    return dp[n] && dp[n] % (n - dp[n]) == 0;
  }
};

// Main function to generate input and output files
int main(int argc, char** argv) {
  registerGen(argc, argv, 1);
  int maxTotalLength = 10000;  // Maximum total length of all test cases
  int desiredTestCount = 69;   // Desired number of test cases

  // Generate input file
  TestCaseGenerator generator(maxTotalLength, desiredTestCount);
  generator.generateInputFile("input.txt");

  // Process test cases and generate output file
  Solution solution;
  solution.processTestCases(generator.getTestCases(), "output.txt");

  return 0;
}