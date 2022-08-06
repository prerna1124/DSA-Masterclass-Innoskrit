#include <bits/stdc++.h>
using namespace std;

long int binomialCoeff(int n, int k)
{
    long int res = 1;
    
	if(k > n - k) {
	    k = n - k;
	}
	
	for(int i = 0; i < k; i++) {
	    res *= (n - i);
	    res /= (i + 1);
	}
	
	return res;
}

long int catalan(int n) {
    long int coeff = binomialCoeff(2 * n, n);
    return coeff / (n + 1);
}

int main()
{
	int n = 20;
	cout << catalan(n);
	return 0;
}
