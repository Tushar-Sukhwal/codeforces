/*
 * Author : AyushK22
 */

#include <bits/stdc++.h>

#include "testlib.h"
using namespace std;
#define int long long

// Your correct function
void correctFunction(const vector<int>& nums, ofstream& outputFile) {
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

int32_t main(int32_t argc, char** argv) {
  registerGen(argc, argv, 1);

  // Generate input.txt file
  ofstream inputFile("input.txt");
  int t = 69;  // Number of Independent Test Cases
  int sum_of_all_array_length =
      10000;  // Example sum of all array lengths over all test cases
  int min_array_length = 3;

  vector<int> n_list =
      rnd.partition(t, sum_of_all_array_length, min_array_length);
  // Now n_list contains array lengths greater than 3 such that their sum is
  // sum_of_all_array_length
  inputFile << t << "\n";
  vector<vector<int>> testCases;

  // Determine how many all-negative cases to include
  int all_negative_cases =
      rnd.next(5, 10);  // Between 5 and 10 all-negative cases

  // Create a vector of booleans to represent which test cases will be
  // all-negative
  vector<bool> is_all_negative(t, false);
  for (int i = 0; i < all_negative_cases; i++) {
    int index;
    do {
      index = rnd.next(static_cast<int>(0), static_cast<int>(t - 1));
    } while (is_all_negative[index]);
    is_all_negative[index] = true;
  }

  for (int tc = 0; tc < t; tc++) {
    int array_size = n_list[tc];
    inputFile << array_size << "\n";
    vector<int> testCase;

    for (int i = 0; i < array_size; i++) {
      int randomNum;
      if (is_all_negative[tc]) {
        randomNum = rnd.next(
            static_cast<int>(-1000),
            static_cast<int>(-1));  // All negative numbers between -1000 and -1
      } else {
        int low = -1000, high = 1000;
        randomNum = rnd.next(
            static_cast<int>(low),
            static_cast<int>(
                high));  // Random integer between low and high inclusive
      }
      inputFile << randomNum << " ";
      testCase.push_back(randomNum);
    }
    testCases.push_back(testCase);
    inputFile << "\n";
  }
  inputFile.close();

  // Generate output.txt file
  ofstream outputFile("output.txt");
  for (const auto& testCase : testCases) {
    correctFunction(testCase, outputFile);
  }
  outputFile.close();

  return 0;
}