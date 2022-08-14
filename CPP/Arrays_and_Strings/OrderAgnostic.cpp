#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int element) {
    
    int start = 0, end = arr.size() - 1;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        
        if(arr[mid] == element) return mid;

        if(arr[0] < arr[arr.size() - 1]) {
            if(arr[mid] > element) end = mid -1;
            else start = mid + 1;
        } else {
            if(arr[mid] < element) end = mid -1;
            else start = mid + 1;
        }
        
    }

    return -1;
}

int main()
{
    vector<int> arr = {4, 6, 10};
    cout << binarySearch(arr, 10) << "\n";
    arr = {1, 2, 3, 4, 5, 6, 7};
    cout << binarySearch(arr, 7) <<"\n";
    arr = {10, 6, 4};
    cout << binarySearch(arr, 10) <<"\n";
    arr = {10, 6, 4};
    cout << binarySearch(arr, 8);
    return 0;
}
