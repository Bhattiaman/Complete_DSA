#include<bits/stdc++.h>
using namespace std;
int main(){
      
    int arr[5] = {64,25,12,22,11};
    int min_ele = arr[0];
   
    for(int i = 0; i< 5; i++){
        int temp = arr[i];
        int j = i -1;
        while(j >=0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    } 

    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
} 