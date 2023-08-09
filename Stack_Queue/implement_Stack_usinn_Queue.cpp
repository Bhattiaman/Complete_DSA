#include<bits/stdc++.h>
using namespace std;

class Stack {
    int n;
    queue<int> q1;
    queue<int> q2;

    public:
 
    Stack(int val){
        int n = 0;
    }

    void Push(int val){
        q2.push(val);
        n++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    int Pop(){
        int x = q1.front(); 
        q1.pop();
        n--;
        return x;
    }
    
    int Top(){
        return q1.front();
    }

};

int main(){
    Stack st;
    st.Push(39);
    st.Push(19);
    st.Push(29);
    st.Push(9);
    cout<<st.Top()<<endl;
    return 0;
}