#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <queue>
#include <string>
#include <sstream>
#include <algorithm>
using namespace sol893;
using namespace std;

/*takeaways
  - since we are allowed to make any number of swaps
    on either all the odd or the even positions, that
    means for a string we can perform a bubble sort (check question 899)
    on the substring that consists of just the even position
    chars or the odd positions
  - break each string into two strings with one
    consists of all chars in the odd position the
    other even positions. Sort each and concatenate
    the results to form a string to represent a group
*/

int Solution::countGroup(vector<string> &words)
{
  auto group = unordered_set<string>();

  for (auto w : words)
  {
    string odd, even;
    for (auto i = 0; i < w.size(); i++)
      if (i % 2 == 0)
        even.push_back(w[i]);
      else
        odd.push_back(w[i]);
    /* concept-wise we can perform a bubble sort
       - we can just perform a sort in implementation
    */
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    group.insert(even + odd);
  }

  return group.size();
}