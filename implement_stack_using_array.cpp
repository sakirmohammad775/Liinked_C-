#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;     // vector is used as a stack
    void push(int val) // push operation void
    {
        v.push_back(val); // push_back is used to add element at the end of the vector
    }

    void pop()
    {
        v.pop_back(); // pop_back is used to remove element from the end of the vector
    }

    int top()
    {
        return v.back(); // back() is used to get the last element of the vector
    }
    bool empty()
    {
        return v.empty(); // empty() is used to check if the vector is empty or not
    }
};

int main()
{
    myStack st; // object of the class is created ,static
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }
  while(!st.empty( )){
    cout<<st.top()<<endl;
    st.pop();
  }
    return 0;
}