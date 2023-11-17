#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> nums = { 5, 4, 3, 2, 1 };

  // Method One
  
  // reverse(nums.begin(), nums.end());
  
  // Method Two

  //sort (nums.begin(), nums.end());

  // Method Three -> Use Swap + Loop For Challenge
  int h = nums.size()-1;
  for(int j = 0 ; j<nums.size() ; j++)
  {
    swap(nums.at(j), nums.at(h));
    h--;
    if (h == 2)
    {
      break;
    }
  }

  
  for (int i : nums)
  {
    cout << i << "\n";
  }

  return 0;
}

// // Needed Output
// 1
// 2
// 3
// 4
// 5