/*
 * Author : AyushK22
 */

#include <bits/stdc++.h>

#include "testlib.h"
using namespace std;

/**
 * @class TestCaseGenerator
 * @brief Generates test cases and writes them to an input file.
 */
class TestCaseGenerator {
 public:
  /**
   * @brief Constructor to initialize the TestCaseGenerator.
   * @param t Number of test cases.
   * @param sum_of_all_array_length Sum of all array lengths over all test
   * cases.
   * @param min_array_length Minimum array length.
   */
  TestCaseGenerator(int t, int sum_of_all_array_length, int min_array_length)
      : t(t),
        sum_of_all_array_length(sum_of_all_array_length),
        min_array_length(min_array_length) {}

  /**
   * @brief Generates input data and writes to the specified file.
   * @param filename Name of the file to write the input data.
   */
  void generateInput(const string& filename) {
    ofstream inputFile(filename);
    vector<int> n_list =
        rnd.partition(t, sum_of_all_array_length, min_array_length);

    inputFile << t << "\n";
    for (auto it : n_list) {
      int array_size = it;
      inputFile << array_size << "\n";
      vector<int> testCase;
      for (int i = 0; i < array_size; i++) {
        int low = 20, high = 10000;
        int randomNum = rnd.next(low, high);
        inputFile << randomNum << " ";
        testCase.push_back(randomNum);
      }
      inputFile << "\n";
      testCases.push_back(testCase);
    }
    inputFile.close();
  }

  /**
   * @brief Returns the generated test cases.
   * @return A vector of test cases.
   */
  const vector<vector<int>>& getTestCases() const { return testCases; }

 private:
  int t;
  int sum_of_all_array_length;
  int min_array_length;
  vector<vector<int>> testCases;
};

/**
 * @class Solution
 * @brief Contains the correct function to process test cases and write the
 * results to an output file.
 */
class Solution {
 public:
  /**
   * @brief Processes the input array and writes the result to the output file.
   * @param inputArray The input array to be processed.
   * @param outputFile The output file stream to write the result.
   */
  void correctFunction(const vector<int>& nums, ofstream& outputFile) {
    // Implement your correct function logic here
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX, min3 = INT_MAX;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] <= min1) {
        min2 = min1;
        min1 = nums[i];
      } else if (nums[i] <= min2) {
        min2 = nums[i];
      }
      if (nums[i] >= max1) {
        max3 = max2;
        max2 = max1;
        max1 = nums[i];
      } else if (nums[i] >= max2) {
        max3 = max2;
        max2 = nums[i];
      } else if (nums[i] >= max3) {
        max3 = nums[i];
      }
    }
    outputFile << max(min1 * min2 * max1, max1 * max2 * max3) << "\n";
  }
};

/**
 * @class TestCaseExecutor
 * @brief Executes the correct function on each test case and writes the results
 * to an output file.
 */
class TestCaseExecutor {
 public:
  /**
   * @brief Constructor to initialize the TestCaseExecutor.
   * @param testCases The test cases to be processed.
   */
  TestCaseExecutor(const vector<vector<int>>& testCases)
      : testCases(testCases) {}

  /**
   * @brief Processes the test cases and writes the results to the specified
   * file.
   * @param filename Name of the file to write the output data.
   */
  void generateOutput(const string& filename) {
    ofstream outputFile(filename);
    Solution solution;
    for (const auto& testCase : testCases) {
      solution.correctFunction(testCase, outputFile);
    }
    outputFile.close();
  }

 private:
  vector<vector<int>> testCases;
};

int main(int argc, char** argv) {
  registerGen(argc, argv, 1);

  int t = 300;  // Number of Independent Test Cases
  int sum_of_all_array_length =
      10000;                 // Sum of all array lengths over all test cases
  int min_array_length = 3;  // Minimum array length

  // Generate input.txt file
  TestCaseGenerator generator(t, sum_of_all_array_length, min_array_length);
  generator.generateInput("input.txt");

  // Generate output.txt file based on the test cases
  TestCaseExecutor executor(generator.getTestCases());
  executor.generateOutput("output.txt");

  return 0;
}

/*
to use this just change the value of t, sum_of_all_array_length and
min_array_length in the main function and change the correct fucntion . where
you use "cout" ,  use "outputFile" instead and just run the code.
*/