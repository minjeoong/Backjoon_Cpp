#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){

    vector<int> vec(3);
    int result;
    cin >> vec[0] >> vec[1] >> vec[2];
    sort(vec.begin(), vec.end());
    if (vec[2] < vec[1]+vec[0]){
        result = vec[2] + vec[1] +vec[0];
    }
    else{
        result = (vec[1] +vec[0])*2 -1;
    }
    cout << result << endl;

}