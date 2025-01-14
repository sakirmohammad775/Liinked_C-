#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;

        queue<char> q;

        bool valid = true;
        for (char cs : s)
        {
            if (cs == '0')
            {
                q.push(cs);
            }
            else if (cs == '1')
            {
                if (!q.empty() && q.front() == '0')
                {
                    q.pop();
                }

                else
                {
                    valid = false;
                    break;
                }
            }
        }
        cout << (valid && q.empty() ? "YES" : "NO") << endl;
    }
    return 0;
}