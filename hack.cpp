#include <bits/stdc++.h>

#include <fstream>
using namespace std;

int main() {
  // Open a text file for writing
  ofstream outFile("output.txt");

  // Check if the file is successfully opened
  if (!outFile.is_open()) {
    cerr << "Error opening the file." << endl;
    return 1;  // Exit with an error code
  }

  // Redirect cout to the file
  streambuf *coutbuf = cout.rdbuf();  // Save old cout buffer
  cout.rdbuf(outFile.rdbuf());        // Redirect cout to outFile

  // Your existing code
  cout << 1 << endl;
  cout << 2 * 1e4 << "\n";

  for (int i = 0; i < 2 * static_cast<int>(1e4); i++) {
    cout << INT_MAX << " ";
  }

  // Restore cout to the original buffer
  cout.rdbuf(coutbuf);
  cout << endl;
  // Close the file
  outFile.close();

  return 0;
}
