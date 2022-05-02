#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol893;

/*
Input: ["a","b","c","a","c","c"]
Output: 3
Explanation: 3 groups ["a","a"], ["b"], ["c","c","c"]
*/
tuple<vector<string>, int>
testFixture1()
{
  auto input = vector<string>{"a", "b", "c", "a", "c", "c"};
  return make_tuple(input, 3);
}

/*
Input: ["aa","bb","ab","ba"]
Output: 4
Explanation: 4 groups ["aa"], ["bb"], ["ab"], ["ba"]
*/
tuple<vector<string>, int>
testFixture2()
{
  auto input = vector<string>{"aa", "bb", "ab", "ba"};
  return make_tuple(input, 4);
}

/*
Input: ["abc","acb","bac","bca","cab","cba"]
Output: 3
Explanation: 3 groups ["abc","cba"], ["acb","bca"], ["bac","cab"]
*/
tuple<vector<string>, int>
testFixture3()
{
  auto input = vector<string>{"abc", "acb", "bac", "bca", "cab", "cba"};
  return make_tuple(input, 3);
}

/*
Input: ["abcd","cdab","adcb","cbad"]
Output: 1
Explanation: 1 group ["abcd","cdab","adcb","cbad"]
*/
tuple<vector<string>, int>
testFixture4()
{
  auto input = vector<string>{"abcd", "cdab", "adcb", "cbad"};
  return make_tuple(input, 1);
}

void test1()
{
  auto f = testFixture1();
  Solution sol;
  cout << "Expect to see " << to_string(get<1>(f))
       << ": " << to_string(sol.countGroup(get<0>(f))) << endl;
}
void test2()
{
  auto f = testFixture2();
  Solution sol;
  cout << "Expect to see " << to_string(get<1>(f))
       << ": " << to_string(sol.countGroup(get<0>(f))) << endl;
}

void test3()
{
  auto f = testFixture3();
  Solution sol;
  cout << "Expect to see " << to_string(get<1>(f))
       << ": " << to_string(sol.countGroup(get<0>(f))) << endl;
}

void test4()
{
  auto f = testFixture4();
  Solution sol;
  cout << "Expect to see " << to_string(get<1>(f))
       << ": " << to_string(sol.countGroup(get<0>(f))) << endl;
}

main()
{
  test1();
  test2();
  test3();
  test4();
  return 0;
}