#include <iostream>
#include <string>
using namespace std;

int main(){

    string num;
    while (true)
    {
        
        cin >> num;
        if(num[0] == '0'){
            break;
        }
        int n = num.length();
        int end = n-1;
        for(int i= 0 ; i < n/2+1 ; i++){
            if(i >= end){
                cout << "yes"<<endl;
                break;
            }
            if(num[i]==num[end]){
                end--;
                continue;
            }
            else{
                cout << "no" << endl;
                break;
            }
        }
    }
}