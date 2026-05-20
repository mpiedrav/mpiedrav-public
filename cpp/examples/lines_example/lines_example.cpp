// From: https://cacm.acm.org/blogcacm/21st-century-c/

#include <iostream>
#include <unordered_map>

// import std;                  // make all of the standard library available
using namespace std;

// print unique lines from input
int main() {
  unordered_map<string, int> m; // hash table
  for (string line; getline(cin, line);)
    if (m[line]++ == 0)
      cout << line << '\n';
}
