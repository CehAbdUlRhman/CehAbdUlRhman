#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums= {10,20,30,40};
    auto it = nums.begin();
    auto ite = nums.end()-1;
    auto Nit = nums.begin()+1;
    auto Nite = nums.end()-2;

    cout << nums.front() << "\n";
    cout << *it << "\n";
    cout << nums.at(0) << "\n";
    advance (Nit , -1);
    cout << *Nit << "\n";

    cout << "=====\n";

    cout << nums.back() << "\n";
    cout << *ite << "\n";
    cout << nums.at((nums.size())-1) << "\n";
    advance (Nite , 1);
    cout << *Nite;


}