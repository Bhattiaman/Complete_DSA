#include<bits/stdc++.h>
using namespace std;

string countSort(string str){
    vector<int> freq(26,0);
    // adding frequency of every character in string
    for(int i = 0; i < str.size(); i++){
        int index = str[i] - 'a';
        freq[index]++;
    }

    // create our sorted string
    for(int i = 0; i < 26; i++){
        while(freq[i]--){
            str[i++] = i + 'a';
        }
    }
    return str;
}

int main(){
    string str;
    cin>>str;
    cout<<countSort(str)<<endl;

}