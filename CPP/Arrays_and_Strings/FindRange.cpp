#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int element, bool left) {
    
    int start = 0, end = arr.size() - 1, index = -1;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        
        if(arr[mid] == element) {
            index = mid;
            if(left == true) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        else if(arr[mid] > element) end = mid -1;
        else start = mid + 1;
        
    }

    return index;
}

vector<int> findRange(vector<int> &arr, int element) {
    vector<int> res = {-1, -1};
    res[0] = binarySearch(arr, element, true);
    if(res[0] != -1) {
        res[1] = binarySearch(arr, element, false);
    }

    return res;
}

int main()
{
    vector<int> arr = {1, 3, 8, 10, 15};
    vector<int> res = findRange(arr, 10);
    cout << "["<<res[0] << " " << res[1] << "]\n";
    arr = {4, 6, 6, 6, 9};
    res = findRange(arr, 6);
    cout << "["<<res[0] << " " << res[1] << "]\n";
    arr = {1, 3, 8, 10, 15};
    res = findRange(arr, 12);
    cout << "["<<res[0] << " " << res[1] << "]\n";
    return 0;
}
