//! VECTORS

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> vec(5, 0);
    // vector<char> vec{'a', 'b', 'c', 'd'};
    vector<int> vec;
    cout << "Size = " << vec.size() << endl;
    vec.push_back(11);
    vec.push_back(12);
    cout << "After push Size = " << vec.size() << endl;
    // vec.pop_back();
    // cout << "After pop Size = " << vec.size() << endl;

    //! for each loop

    //? this is for int value
    // for (int val : vec)
    // {
    //     cout << val << endl;
    // }

    //? using for each for char
    // for (char val : vec)
    // {
    //     cout << val << endl;
    // }


    // cout<<vec.front()<<endl; // first element
    // cout<<vec.back()<<endl;  // last element
    cout<<vec.at(1)<<endl;
    return 0;
}

//* vector functions
//! vec.push_back(6); // adds 6 at the end of the vector
//! vec.pop_back();   // removes the last element of the vector
//! vec.size();      // returns the size of the vector
//! vec.front();     // returns the first element of the vector
//! vec.back();      // returns the last element of the vector
//! vec.at(2);      // returns the element at index 2