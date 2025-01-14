#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> stackItems(n);
    vector<int> queueItems(m);

    for (int i = 0; i < n; i++)
    {
        cin >> stackItems[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> queueItems[i];
    }

    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    int stackCount = 0;
    int queueCount = 0;

    bool same = true;
    while (stackCount >= 0 && queueCount < m)
    {
        if (stackItems[stackCount] == queueItems[queueCount])
        {
            same = false;
            break;
        }
        stackCount--;
        queueCount++;
    }
    cout << (same ? "YES" : "NO") << endl;
    return 0;
}