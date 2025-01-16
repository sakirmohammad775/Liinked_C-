#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    queue<string>ticketLine;

    while(q--){
        string commandLine;
        cin >> commandLine;
        if(commandLine == "0"){
            string person;
            cin >> person;
            ticketLine.push(person);
        }
        else if(commandLine == "1"){
            if(!ticketLine.empty()){
                cout << ticketLine.front() << endl;
                ticketLine.pop();
            }
            else cout << "Invalid" << endl;
        }
    }

    return 0;
}