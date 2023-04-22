#include <iostream>
using namespace std;

int main(){
    
    int n , lft;
    cin >> n;
    int arr[10] = {0,};

    for(int i = 0; i<n; i++){
        cin >> lft;

        for(int j = 0; j<n; j++){
            if (lft == 0 && arr[j]==0){
                arr[j] = i+1;
                // cout << j<<"   "<<arr[j]<<endl;
                break;
            }
            else if (arr[j] == 0){
                lft--;
            }
        }
    }

    for (int i = 0; i < n; i ++){
        cout << arr[i] << " ";
    }
}