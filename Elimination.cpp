#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string BinStr;
        cin >> BinStr;

        queue<char> q;
        for (char c : BinStr)
        {
            if (!q.empty())
            {
                if ((c == '1' && q.front() == '0') || (c == '0' && q.front() == '1'))
                {
                    q.pop();
                }
                else
                {
                    q.push(c);
                }
            }
            else
            {
                q.push(c);
            }
        }
        cout << (q.empty() ? "YES" : "NO") << endl;
    }
    return 0;
}