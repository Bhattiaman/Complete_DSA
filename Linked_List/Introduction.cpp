#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = 5;
    cout<<num<<endl;
    cout<<"address of the element : "<<&num<<endl;
    int *ptr = &num;
    cout<<"address is " << ptr<<endl;
    cout<<"value is "<< *ptr;
    return 0;
}