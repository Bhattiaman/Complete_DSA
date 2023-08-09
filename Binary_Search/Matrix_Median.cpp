#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 3,m = 3;
    int arr[n][m] = {{1,3,5},{2,6,9},{3,6,9}};
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   sort(arr.begin(), arr.end(), m);
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}