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





