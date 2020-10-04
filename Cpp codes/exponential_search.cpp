#include <bits/stdc++.h>
using namespace std;

int exponentialSearch(int arr[], int n, int x)
{
    if (arr[0] == x)
        return 0;
 
    int i = 1;
    while (i < n && arr[i] <= x)
        i = i*2;
 
    return binarySearch(arr, i/2, min(i, n), x);
}


int main(void)
{
   int arr[] = {2, 3, 4, 10, 40};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int x = 10;
   int result = exponentialSearch(arr, n, x);
   (result == -1)? printf("Element is not present in array")
                 : printf("Element is present at index %d",
                                                    result);
   return 0;
}
