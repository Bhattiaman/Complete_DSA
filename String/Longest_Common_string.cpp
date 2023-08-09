#include<bits/stdc++.h>
using namespace std;
string LCP(vector<string> &arr){
    //sort the array of string
    int n = arr.size();

    sort(arr.begin(),arr.end()); // first string
    string s1 = arr[0];
    int i = 0;
    string s2 = arr[n-1] // last string
    int j = 0;

    string ans = "";
    while(i < s1.size() && j < s2.size()){
        if(s1[i] == s2[i]){
            ans += s1[i];
            i++;
            j++;
        }else {
            break;
        }
    }
    return ans;
}
int main(){
    int n = 3;
    vector<string> arr[n] = {"flower" , "flight", "flask"};

    cout<<"Longest common prefix => "<<LCP(arr)<<endl;
}