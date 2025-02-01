#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin>>tc;
    cin.ignore();
    while(tc--){
        string line;
        getline(cin,line);

        unordered_map<string,int>wordCount;
        string mostFrequentWord;
        int maxCount = 0;
        stringstream sentence(line); 
        string word;
        while(sentence >> word) {
            wordCount[word]++;
            if (wordCount[word] > maxCount) {
                maxCount = wordCount[word];
                mostFrequentWord = word;
            }
        }
        cout<<mostFrequentWord<<" "<<maxCount<<endl;
    }
    return 0;
}