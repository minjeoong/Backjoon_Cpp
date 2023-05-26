#include <iostream>
#include <climits> 
using namespace std;

int main(){
    int n, x, y, result; 
    int max_x=INT_MIN, min_x=INT_MAX, max_y=INT_MIN, min_y=INT_MAX;
    
    cin >> n;
    while(n--){
        cin >> x >> y;
        if (max_x < x ){max_x = x;}
        if (min_x > x){min_x= x;}
        if (max_y < y ){max_y = y;}
        if (min_y > y){min_y= y;}
    }
    result = (max_x - min_x) * (max_y - min_y);
    cout << result << endl;
}