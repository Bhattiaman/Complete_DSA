#include <iostream>
#include <algorithm>

using namespace std;

int binarySearchMinDifference(int a[], int n, int target) {
    if (target < a[0])
        return a[0];
    if (target > a[n - 1])
        return a[n - 1];

        int mid = (start + end) / 2;

        if (target == a[mid]) {
            return a[mid];
        } else if (target < a[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }

    }
    if ((a[start] - target) < (target - a[end]))
        return a[start];
    return a[end];
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int target;
    cin >> target;

    cout << "MinimumDifferenceElementWith(" << target << ") = " << binarySearchMinDifference(a, n, target) << endl;
    return 0;
}