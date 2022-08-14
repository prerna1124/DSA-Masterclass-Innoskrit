#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr) {
    
    int start = 0, end = arr.size() - 1;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        
        if((arr[mid] > arr[mid - 1]) && (arr[mid] > arr[mid + 1]))
            return mid;
        else if(arr[mid] > arr[mid - 1]) start = mid + 1;
        else end = mid - 1;
        
    }

    return -1;
}

int main()
{
	vector<int> arr = {12, 15, 30, 33, 41, 20, 12, 10};
	cout << binarySearch(arr) << "\n";
    arr = {1, 2, 3, 1};
	cout << binarySearch(arr);
	return 0;
}
