#include<bits/stdc++.h>
using namespace std;
class Stack{
    int size;
    int *arr;
    int top;
    public:
        Stack(){
            top = -1;
            size = 1000;
            arr = new int[size];
        }
        void push(int x){
            top++;
            arr[top] = x;
        }
        int pop(){
            int x = arr[top];
            top--;
            return x;
        }
        int Top(){
            return arr[top];
        }
        int Size(){
            return top + 1;
        }
};

int main(){
    Stack st;
    st.push(6);
    st.push(5);
    st.push(3);
    st.push(4);
    cout << "Top of stack is before deleting any element " << st.Top() << endl;
    cout << "Size of stack before deleting any element " << st.Size() << endl;
    cout << "The element deleted is " << st.pop() << endl;
    cout << "Size of stack after deleting an element " << st.Size() << endl;
    cout << "Top of stack after deleting an element " << st.Top() << endl;

    return 0;
}