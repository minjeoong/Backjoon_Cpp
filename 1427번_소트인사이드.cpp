#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string s;
    cin >> s;
    sort(s.begin(), s.end(), greater<>());
    for(int i = 0 ; i < s.size(); i++){
        cout << s[i] ;
    }
    cout << endl;
}