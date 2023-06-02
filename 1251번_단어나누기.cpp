#include <iostream>
#include <string>
using namespace std;

int main(){

    string str;
    string result="{";
    cin >> str;
    for(int i = 0; i<str.size()-2; i++){
        for(int j = i+1; j < str.size()-1; j++){
            string newstr = "";
            
            for(int k = i; k >= 0; k--){
                newstr += str[k];
            }
            for(int k = j; k > i; k--){
                newstr += str[k];
            }
            for(int k = str.size()-1; k > j ; k--){
                newstr += str[k];
            }
            // 사전순으로 앞서는 것을 출력 
            if (result > newstr){
                result = newstr;
            }
        }
    } 
    cout << result << endl;
}