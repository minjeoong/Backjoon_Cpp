#include <iostream>
#include <set>
#include <string>
using namespace std;



int main(){
    string str;
    cin >> str;

    set<string> set;

    string newstr = "";
    for(int i= 0; i <str.size(); i++){
        for(int j =i ; j < str.size(); j++){
            newstr += str[j];
            set.insert(newstr);
        }
        newstr = "";
    }
    cout << set.size()<<endl;
}
