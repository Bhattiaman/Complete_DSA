#include<bits/stdc++.h>
using namespace std;
class Queue{
    int *arr;
    int start,end,maxSize,currSize;
    public:
    Queue(){
        arr = new int[16];
        start = -1;
        end = -1;
        currSize = 0;
    }
    Queue(int maxSize){
        
    }
};
int main(){
    Queue q(6);
    q.push(4);
    q.push(14);
    q.push(24);
    q.push(34);
    cout << "The peek of the queue before deleting any element " << q.top() << endl;
    cout << "The size of the queue before deletion " << q.size() << endl;
    cout << "The first element to be deleted " << q.pop() << endl;
    cout << "The peek of the queue after deleting an element " << q.top() << endl;
    cout << "The size of the queue after deleting an element " << q.size() << endl;

return 0;
}
