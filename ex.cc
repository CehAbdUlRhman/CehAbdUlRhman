#include <iostream>
using namespace std;

int main()
{
    int nums[] = {1,2,3,4,5};

    for(int i =0; i<(sizeof(nums)/sizeof(nums[0])); i++)
    {
        int* ptr = nums;
        
        ptr +=i;
        cout << "Address Is : " << ptr << "\n";
        cout << "Value Is : " << *ptr << "\n";
        
    }
}