#include<bits/stdc++.h>
using namespace std;
string decodedString(string s){
    string res = "";
    // traversing the ecoded string
    for(int i = 0; i<s.size();i++){
        if(s[i] != ']'){
            res.push_back(s[i]);
        }else{
            //extract str from res
            string str = "";
            while(!res.empty() && res.back() != '['){
                str.push_back(res.back());
                res.pop_back();
            }
            //revere
            reverse(str.begin(),str.end());
            //remove lst char from result which is [
                res.pop_back();

                 //extract num from res
                 string num= "";
                 while(!res.empty() && (res.back() >= '0' && res.back()<='9')){
                    num.push_back(res.back());
                    res.pop_back();
                 }
                 reverse(num.begin(),num.end());

                 //convert string to integer
                 int int_num = stoi(num);

                 //inserting str in result int_num times
                 while(int_num){
                    res += str;
                    int_num--;
                 }
        }
    } return res ;
    }
int main(){

    // Input: s = "3[a]2[bc]"
    // Output: "aaabcbc"
    // Input: s = "3[a2[c]]"
    // Output: "accaccacc"
    string str;
    cin>>str;
    cout<<decodedString(str)<<endl;
    return 0;
}