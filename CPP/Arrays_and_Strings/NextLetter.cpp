#include <bits/stdc++.h>
using namespace std;

char binarySearch(vector<char> &arr, char element) {
    
    int start = 0, end = arr.size() - 1;
    char ceil = 'a';
    while(start <= end) {
        int mid = start + (end - start) / 2;
        
        if(arr[mid] <= element) start = mid + 1;
        else {
            ceil = arr[mid];
            end = mid - 1;
        }
        
    }

    return ceil;
}

int main()
{
    vector<char> arr = {'a', 'c', 'f', 'h'};
    cout << binarySearch(arr, 'f') << "\n";
    arr = {'a', 'c', 'f', 'h'};
    cout << binarySearch(arr, 'b') << "\n";
    arr = {'a', 'c', 'f', 'h'};
    cout << binarySearch(arr, 'm') << "\n";
    arr = {'a', 'c', 'f', 'h'};
    cout << binarySearch(arr, 'h') << "\n";
    return 0;
}
