#include <bits/stdc++.h>
using namespace std;

int indexOfFirstOne(int arr[], int low, int high)
{
	int mid;
	while (low <= high) {
		mid = (low + high) / 2;

		// if true, then 'mid' is the index of first '1'
		if (arr[mid] == 1 &&
			(mid == 0 || arr[mid - 1] == 0))
			break;

		// first '1' lies to the left of 'mid'
		else if (arr[mid] == 1)
			high = mid - 1;

		// first '1' lies to the right of 'mid'
		else
			low = mid + 1;
	}
	return mid;
}

int posOfFirstOne(int arr[])
{
	int l = 0, h = 1;
	while (arr[h] == 0) {

		l = h;
		h = 2 * h;
	}

	return indexOfFirstOne(arr, l, h);
}

int main()
{
	int arr[] = { 0, 0, 1, 1, 1, 1 };
	cout << "Index = "
		<< posOfFirstOne(arr);
	return 0;
}
