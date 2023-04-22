#include <iostream>
using namespace std;

int main(){
    int n = 0, squ=1;
    long result=0;
    cin >> n ;

    for (int i = 0; i < n; i++){
        squ *= 2;
    }
    result = (squ+1)*(squ+1);
    // cout << squ ;
    cout << result << endl;
}
