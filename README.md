# Experiment--21
c plus plus and data structures experiment 21

AIM:- to learn and implement searching algorithms(binary and linear)

Software used:- VS code

Theory:-
Linear search:-Linear search is a simple algorithm that sequentially checks each element of a list until it finds the target value or reaches the end. It's used when the list is unsorted or small. The search starts from the first element and proceeds to the last, comparing each one with the target. If a match is found, its index is returned; otherwise, the search ends with no match.Time complexity O(n) as there are n no. of elements

Binary search:-Binary search is an efficient algorithm used to find a target element in a sorted array. It repeatedly divides the search interval in half. The search begins by comparing the middle element with the target. If the target matches, the search ends. If the target is smaller, the search continues in the left half; otherwise, it proceeds in the right half. This process is repeated until the target is found or the interval is empty.
1).Start by comparing the target element with the middle element of the array.
2).If the target element matches the middle element, return the index.
3).If the target element is smaller, repeat the search on the left half of the array.
4).If the target element is larger, repeat the search on the right half of the array.
5).Continue this process until the target element is found or the sub-array is reduced to size zero.

CODE:-
1)Linear search
```
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
```

2).Binary search
```
#include <iostream>
using namespace std;

int binsearch(int a[], int low, int high, int x)
{
while (low <= high) 
{
    int mid = low + (high - low) / 2;

    if (a[mid] == x)
        return mid;

    if (a[mid] < x)
        low = mid + 1;

    else
        high = mid - 1;
}

return -1;
}

int main(void)
{
int a[] = { 10,17,27,72,4 };
int x = 10;
int n = sizeof(a) / sizeof(a[0]);
int res = binsearch(a, 0, n - 1, x);
if(res == -1) cout << "Element is not present in array";
else cout << "Element is present at index " << res;
return 0;
}
```

OUTPUT:
![exp21](https://github.com/ashuydv-05/Experiment--21/blob/main/linear%20search.png)

![exp22](https://github.com/ashuydv-05/Experiment--21/blob/main/binary_search..png)





Conclusion:-In this experiment we learnt and implemented searching algorithms.

