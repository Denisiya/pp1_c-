#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int sum = 0;

    for (int i = s.size() - 1; i >= 0; --i) {
        if(isdigit(s[i])){
            sum += s[i] - '0';
        }
    }
    cout<<sum;

    return 0;
}