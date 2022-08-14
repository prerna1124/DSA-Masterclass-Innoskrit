#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int element) {
    
    int start = 0, end = arr.size() - 1, floor = -1;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        
        if(arr[mid] > element) end = mid - 1;
        else {
            floor = mid;
            start = mid + 1;
        }
        
    }

    return floor;
}

int main()
{
	vector<int> arr = {1, 3, 8, 10, 15};
	cout << binarySearch(arr, 12) << "\n";
    arr = {3, 8, 10};
	cout << binarySearch(arr, 8) << "\n";
    arr = {3, 8, 10};
    cout << binarySearch(arr, 2) << "\n";
	return 0;
}
