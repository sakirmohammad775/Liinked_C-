#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string bs;
        cin >> bs;

        stack<char> st;

        for (char cs : bs)
        {
            if (!st.empty() && ((cs == '0' && st.top() == '1') || (cs == '1' && st.top() == '0')))
            {

                st.pop();
            }
            else
            {
                st.push(cs);
            }
        }
        cout << (st.empty() ? "YES" : "NO") << endl;
    }
    return 0;
}