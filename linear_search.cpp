#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
for (int i = 0; i < n; i++) {
    if (arr[i] == key)
        return i;
}
return -1;
}

int main() {
int arr[] = {10,17,27,72,4};
int n = sizeof(arr) / sizeof(arr[0]);
int key = 27;
int result = linearSearch(arr, n, key);

if (result != -1)
    cout << "Element found at index: " << result;
else
    cout << "Element not found.";

return 0;
}