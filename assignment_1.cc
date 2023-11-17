#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {100,200,300,400};
    for(int i : nums)
    {
        cout << i << "\n";
    }

    nums.push_back(500);

    cout << "The First Element Is : " << nums.front() << "\n";
    cout << "The Last  Element Is : " << nums.back() << "\n";
}