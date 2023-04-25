#include <iostream>
using namespace std;

int main(){
    long n, result = 0;
    cin >> n;

    for (int i= 0;i < n;i++){
        result += 4;
    }
    cout << result << endl;
    return 0;
}