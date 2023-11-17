#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> numbers = { 10, 20, 30, 40 };

  // Method One
  //  numbers.pop_back();

  // Method Two

  // auto it = numbers.end()-1;
  // numbers.erase(it);

  // Method Three
    numbers.clear();
    for(int i =1 ; i<4 ; i++)
    {
        numbers.push_back(i*10);
    }
  // Do Not Edit
  for (int i : numbers)
  {
    cout << i << "\n";
  }
  return 0;
}

// // Needed Output
// 10
// 20
// 30