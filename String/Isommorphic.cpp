#include<iostream>
#include<string>
#include<vector>
using namespace std;

// TC = O(n)
// SC = O(128);

bool isIsomorphic(string s1, string s2){
    vector<int> v1(128,-1);
    vector<int> v2(128,-1);
    int n = s1.size();
    int m = s2.size();
    if(n != m){
        return false;
    }
    for(int i = 0; i < n; i++){
        if(v1[s1[i]] != v2[s2[i]]){
            return false;
        }
        v1[s1[i]] = v2[s2[i]] = i;
    }
    return true;

}

int main(){
    string s1,s2;
    cin>>s1>>s2;

    if(isIsomorphic(s1,s2)){
        cout<<"they are isomorphic"<<endl;
    }else{
        cout<<"they are not isomorphic"<<endl;
    }
}