#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    string st;
    cin>>st;
    for(int k = 0; k <= n - 1; k++){
        st[n] = st[k];
        st[k] = st[k+1];
   }

    cout<<endl;
    int k = 0;
    while(k < n) {
       cout<<st[k]<<" ";
       k++;
   
    }
    return 0;
}