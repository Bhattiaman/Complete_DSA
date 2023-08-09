#include<bits/stdc++.h>
using namespace std;
int main(){
    // Step => 1 compare two element 
    // 2 if first element is small the swap each other
    // else continue
    // print the array

  
    int arr[5] = {64,25,12,22,11};
    int min_ele = arr[0];
    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            if(arr[i] > arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
} 