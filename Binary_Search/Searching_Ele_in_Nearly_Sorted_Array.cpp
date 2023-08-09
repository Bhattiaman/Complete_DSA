#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n, int x,int e , int s){
   
    //nearly sorted means a elemen
    while(s <= e){
        int mid = (s + e)/2;
        if(arr[mid] == x){
            return mid;
        }
        if(arr[mid - 1]  == x && mid > s){
            return mid - 1;
        }
        if(arr[mid + 1] ==  x && mid < e){
            return mid + 1;
        }
        if(arr[mid] > x){
            return binarySearch(arr,n,mid-2,s);
        }else{
            return binarySearch(arr,n,e,mid+2);
        }
    
    }
    return -1;
}
int main(){
    int n = 5;
    int arr[n] = {5, 10, 30, 50, 20};
    int x = 20;
    int s = 0, e = n - 1;
    cout<<binarySearch(arr,n,e,s)<<endl;
   
    
    return 0;
}