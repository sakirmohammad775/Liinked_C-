#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    stack<int>st;
    queue<int>q;

    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        st.push(val);
    }
    for(int i=0;i<m;i++){
        int val;
        cin>>val;
        q.push(val);
    }
    bool same=true;
    while(!st.empty() && !q.empty()){
        if(st.top()!=q.front()){
            same=false;
            break;
        }
        st.pop();
        q.pop();
    }
    if(!st.empty()||!q.empty()){
        same=false;
    }
    cout<<(same?"YES":"NO")<<endl;
    return 0;
}