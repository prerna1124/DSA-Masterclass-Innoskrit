#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &arr, int element) {
    for(int i = 0; i < arr.size(); i++) {
    	if(arr[i] == element) {
    		return i;
    	}
    }

    return -1;
}

int main()
{
	vector<int> arr = {41, 15, 12, 30, 42, 52, 60, 33};
	cout << linearSearch(arr, 52) << "\n";
	cout << linearSearch(arr, 43);
	return 0;
}
