#include <iostream>

int arrayToInteger(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; ++i) {
        result = result * 10 + arr[i];
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int integerValue = arrayToInteger(arr, size);
    std::cout << "Converted integer: " << integerValue << std::endl;

    return 0;
}
