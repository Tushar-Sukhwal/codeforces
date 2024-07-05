#ifndef DEBUG_H
#define DEBUG_H

#include <ext/pb_ds/assoc_container.hpp>  // Including pb_ds tree
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace __gnu_pbds;  // Namespace for policy-based data structures
using namespace std ; 

// Utility functions for printing various types
void __print(int x) { std::cerr << x; }
void __print(long x) { std::cerr << x; }
void __print(long long x) { std::cerr << x; }
void __print(unsigned x) { std::cerr << x; }
void __print(unsigned long x) { std::cerr << x; }
void __print(unsigned long long x) { std::cerr << x; }
void __print(float x) { std::cerr << x; }
void __print(double x) { std::cerr << x; }
void __print(long double x) { std::cerr << x; }
void __print(char x) { std::cerr << '\'' << x << '\''; }
void __print(const char *x) { std::cerr << '\"' << x << '\"'; }
void __print(const std::string &x) { std::cerr << '\"' << x << '\"'; }
void __print(bool x) { std::cerr << (x ? "true" : "false"); }

// Specialization for pairs
template <typename T, typename V>
void __print(const std::pair<T, V> &x) {
  std::cerr << '{';
  __print(x.first);
  std::cerr << ',';
  __print(x.second);
  std::cerr << '}';
}

// Specialization for vectors
template <typename T>
void __print(const std::vector<T> &x) {
  std::cerr << '{';
  for (size_t i = 0; i < x.size(); ++i) {
    if (i > 0) std::cerr << ',';
    __print(x[i]);
  }
  std::cerr << '}';
}

// Specialization for vector of vectors
template <typename T>
void __print(const std::vector<std::vector<T>> &x) {
  std::cerr << "{\n";
  for (size_t i = 0; i < x.size(); ++i) {
    if (i > 0) std::cerr << ",\n";
    std::cerr << "  ";
    __print(x[i]);
  }
  std::cerr << "\n}";
}

// Specialization for stacks
template <typename T>
void __print(const std::stack<T> &s) {
  std::stack<T> temp = s;
  std::vector<T> elements;
  while (!temp.empty()) {
    elements.push_back(temp.top());
    temp.pop();
  }
  __print(elements);
}

// Specialization for queues
template <typename T>
void __print(const std::queue<T> &q) {
  std::queue<T> temp = q;
  std::vector<T> elements;
  while (!temp.empty()) {
    elements.push_back(temp.front());
    temp.pop();
  }
  __print(elements);
}

// Specialization for tuples
template <typename... Args>
void __print_tuple_impl(const std::tuple<Args...> &t, std::index_sequence<0>) {
  __print(std::get<0>(t));
}

template <typename... Args, std::size_t I>
void __print_tuple_impl(const std::tuple<Args...> &t, std::index_sequence<I>) {
  std::cerr << ",";
  __print(std::get<I>(t));
}

template <typename... Args, std::size_t... Is>
void __print_tuple(const std::tuple<Args...> &t, std::index_sequence<Is...>) {
  (__print_tuple_impl(t, std::index_sequence<Is>{}), ...);
}

template <typename... Args>
void __print(const std::tuple<Args...> &t) {
  std::cerr << "[";
  __print_tuple(t, std::make_index_sequence<sizeof...(Args)>{});
  std::cerr << "]";
}

// Specialization for ordered_set
template <typename T>
void __print(const tree<T, null_type, less<T>, rb_tree_tag,
                        tree_order_statistics_node_update> &os) {
  std::vector<T> elements;
  for (const auto &val : os) {
    elements.push_back(val);
  }
  __print(elements);
}

// Specialization for pbds (policy-based data structure)
template <typename T, typename V>
void __print(const tree<T, V, less<T>, rb_tree_tag,
                        tree_order_statistics_node_update> &pb) {
  std::vector<std::pair<T, V>> elements;
  for (const auto &val : pb) {
    elements.push_back(val);
  }
  __print(elements);
}

void _print() {}

template <typename T, typename... V>
void _print(T t, V... v) {
  __print(t);
  if (sizeof...(v)) std::cerr << ", ";
  _print(v...);
}

#ifndef ONLINE_JUDGE
#define debug(x...)                 \
  std::cerr << "[" << #x << "] = "; \
  _print(x);                        \
  std::cerr << "\n"
#else
#define debug(x...)
#endif

#endif  // DEBUG_H
