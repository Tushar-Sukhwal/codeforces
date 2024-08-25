#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int evaluateExpression(const vector<string>& expression) {
  stack<int> st;

  for (int i = expression.size() - 1; i >= 0; --i) {
    if (expression[i] == "1" || expression[i] == "0") {
      st.push(stoi(expression[i]));
    } else if (expression[i] == "!") {
      int operand = st.top();
      st.pop();
      st.push(1 - operand);
    } else if (expression[i] == "&") {
      int operand1 = st.top();
      st.pop();
      int operand2 = st.top();
      st.pop();
      st.push(operand1 & operand2);
    } else if (expression[i] == "|") {
      int operand1 = st.top();
      st.pop();
      int operand2 = st.top();
      st.pop();
      st.push(operand1 | operand2);
    }
  }

  return st.top();
}

vector<int> evaluateCircuitExpressions(
    const vector<vector<string>>& expressions) {
  vector<int> results;

  for (const auto& expr : expressions) {
    results.push_back(evaluateExpression(expr));
  }

  return results;
}

int main() {
  // Example input: multiple expressions
  vector<vector<string>> expressions = {
      {"&", "1", "!", "0"},      // [&, 1, [!, 0]] should return 1
      {"|", "0", "!", "1"},      // [|, 0, [!, 1]] should return 0
      {"!", "1"},                // [!, 1] should return 0
      {"&", "1", "|", "0", "1"}  // [&, 1, [|, 0, 1]] should return 1
  };

  vector<int> results = evaluateCircuitExpressions(expressions);

  for (int result : results) {
    cout << result << " ";
  }

  return 0;
}
