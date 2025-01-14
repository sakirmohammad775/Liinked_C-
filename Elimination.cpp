#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--){
        string cs;
        cin >> cs;
        stack<char>st;

        for(char c:cs){
            if(c=='0'){
                st.push(c);
            }
            else if(c=='1'){
                if(!st.empty() && st.top()=='0'){
                    st.pop();
                }
                else{
                    st.push(c);
                }
            }
        }
        cout<<(st.empty()?"YES":"NO")<<endl;

    }
    return 0;
}