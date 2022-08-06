#include<iostream>
#include <cmath>
using namespace std;

int main() {
	int b = 7;
	bool isPrime = true;

	for(int i = 2; i < sqrt(b); i++) {
		if(b % i == 0) {
			isPrime = false;
			break;
		}
	}
    
    if(isPrime)
	    cout << "True";
	else cout<<"False";
	return 0;
}