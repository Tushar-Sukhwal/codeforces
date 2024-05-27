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
  cout << 1e3 << "\n";

  for (int j = 0; j < 1e3; j++) {
    cout << 199 << endl;
    for (int i = 0; i < 199; i++) {
      char c = 97 + i % 26;
      cout << c;
    }
    cout << endl;
  }

  // Restore cout to the original buffer
  cout.rdbuf(coutbuf);
  // Close the file
  outFile.close();

  return 0;
}
