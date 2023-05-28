#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;


int main(){
    int n, m, countd=0;
    cin >> n >> m;

    unordered_set<string> lst1;
    string element;
    for(int i = 0 ; i < n; i++){
        cin >> element;
        lst1.insert(element);
    }
    for(int i = 0 ; i < m; i++){
        cin >> element;
        if (lst1.count(element) > 0){
            countd++;
        }
    }

    cout << countd << endl;
}