#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int Rev(int num){
    string a = to_string(num);
    reverse(a.begin(), a.end());
    return stoi(a);
}

int main(){
    int x,y;
    cin >> x >> y ;
    int sum = Rev(x) + Rev(y);

    cout << Rev(sum) << endl;
}
