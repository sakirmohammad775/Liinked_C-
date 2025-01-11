#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v; // vector is used as a stack
    void push(int val ) // push operation void
    { 
        v.push_back(val); // push_back is used to add element at the end of the vector
    }

    void pop(){
        v.pop_back(); // pop_back is used to remove element from the end of the vector 
    }

    void top(){
        v.back(); // back() is used to get the last element of the vector
    }
};

int main()
{
    return 0;
}