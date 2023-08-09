#include<bits/stdc++.h>
using namespace std;

int findMaxElement(vector<int> &a){
    int n = a.size();
    int s = 0;
    int e = n - 1;
    while(s <= e){
        int mid = s + (e - s)/2;
        if((mid == 0 || a[mid] > a[mid - 1]) && (mid == n-1 || a[mid] > a[mid + 1])){
            return a[mid];
        }else if(a[mid] < a[mid - 1]){
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::cout << "MaxElement = " << findMaxElement(a) << std::endl;
    return 0;
}