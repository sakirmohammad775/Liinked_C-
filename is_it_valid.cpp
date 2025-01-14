#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc; // Read number of test cases
    while (tc--)
    {
        string s;
        cin >> s; // Read the string

        stack<char> st; // Stack to keep track of '0's and '1's

        for (char cs : s)
        {
            if (cs == '0')
            {
                st.push(cs); // Push '0' onto the stack
            }
            else if (cs == '1')
            {
                if (!st.empty() && st.top() == '0')
                {
                    st.pop(); // Pop '0' if there's a '1'
                }
                else
                {
                    st.push(cs); // Push '1' onto the stack if no '0' to pop
                }
            }
        }

        // After processing all characters, check if the stack is empty
        cout << (st.empty() ? "YES" : "NO") << endl;
    }
    return 0;
}