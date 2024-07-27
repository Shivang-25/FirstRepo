#include <bits/stdc++.h>
using namespace std;

int main() {
    string str, rev = "";
    cout << "Enter string: " << endl;
    cin >> str;
    int l = str.length();
    for(int i=l-1;i>=0;i--) {
        char ch = str[i];
        rev = rev + ch;
    }
    cout << "Reverse: " << rev << endl;
    return 0;
}
