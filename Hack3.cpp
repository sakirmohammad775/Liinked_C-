#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    string word;
    int num;

    Node(string word, int num) {
        this->word = word;
        this->num = num;
    }
};

bool compare(Node &a, Node &b) {
    if (a.word == b.word) 
        return a.num > b.num;
    return a.word < b.word;
}

int main() {
    int n;
    cin >> n;

    vector<Node> v;
    
    for (int i = 0; i < n; i++) {
        string word;
        int num;
        cin >> word >> num;
        v.push_back(Node(word,num));
    }
    sort(v.begin(), v.end(), compare);

    for (auto &d : v) {
        cout << d.word << " " << d.num << endl;
    }

    return 0;
}
