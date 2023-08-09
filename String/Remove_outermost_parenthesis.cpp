#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "(()())(())";
    int n = s.size();
    int count = 0;
    string ans ="";
    for(int  i = 0; i < n; i++){
        if(s[i] == '('){
            if(count == 0)  count++;
            else count++;
                ans.push_back(s[i]);
            else if(count == 1) count--;
            
        }
    }

    return 0;
}