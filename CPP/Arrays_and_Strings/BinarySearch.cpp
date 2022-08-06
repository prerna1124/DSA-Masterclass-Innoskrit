#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int element) {
    
    int start = 0, end = arr.size() - 1;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        
        if(arr[mid] == element) return mid;
        else if(arr[mid] > element) end = mid -1;
        else start = mid + 1;
        
    }

    return -1;
}

int main()
{
	vector<int> arr = {12, 15, 30, 33, 41, 42, 52, 60};
	cout << binarySearch(arr, 52) << "\n";
	cout << binarySearch(arr, 43);
	return 0;
}
