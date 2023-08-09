// Isomorphic => a single element is map with other unique single element
// then it is true else false
// ONE - ONE , ONTO, MANY - ONE

#include<bits/stdc++.h>
using namespace std;
int main(){
// steps =>  Create map and set'
// map for maping element
// set for make true if a element is used
string s = "egg",t = "add";
int n = s.size(); 
map<char , char> map;
set<char> st;
for(int i = 0; i < n ;i++){
    if(map.count(s[i]) == 0 && st.count(t[i]) == 0){
        map[s[i]] == t[i];
        st.insert(t[i]);
    }else if(map.count(s[i] == 0) && st.count(t[i])){
        return false;
    }else if(map[s[i]] != t[i]){
        return false;
    }
    
}
return true;
    return 0;
}