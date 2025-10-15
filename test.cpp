#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(100);
    cout << "the current size is " << vec.size() << endl;
    vec.pop_back();
    cout<<"after pop back the size is "<<vec.size();
    vec.push_back(20);
    vec.push_back(30);
    cout<<vec.at(1);
    return 0;
}