#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr) {
    int n = arr.size();
    int start = 0, end = n - 1;
        
    while(start < end) {
        
        int temp = arr[start];
    	arr[start] = arr[end];
    	arr[end] = temp;
    	
        start++;
        end--;
    }
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
}

int main()
{
	vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
	reverse(arr);
	return 0;
}
