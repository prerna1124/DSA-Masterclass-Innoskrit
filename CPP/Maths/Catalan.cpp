#include<iostream>
using namespace std;

void catalan(int n)
{
    int catalan[n];
    
	if(n >= 1) {
	    catalan[0] = 1;
        cout << catalan[0] << " ";
	}
	
	if(n >= 2) {
	    catalan[1] = 1;
        cout << catalan[1] << " ";
	}

	for (int i = 2; i < n; i++) {
		catalan[i] = 0;
		for (int j = 0; j < i; j++)
			catalan[i] += catalan[j] * catalan[i - j - 1];
			
		cout << catalan[i] << " ";
	}
	

}

int main()
{
	int n = 10;
	catalan(n);
}
