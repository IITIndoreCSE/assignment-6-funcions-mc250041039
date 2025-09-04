#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
	if (n<2){
		return false;
	}else if(n==2){
		return true;
	}else{
		if (n%2==0){
			return false;
		}else{
			for (int i=3; i<=pow(n,0.5);i=i+2){
				if (n%i==0){
					return false;
				}
			}
		}
	}
	return true;
}

bool isPalindrome(int n) {
	int org=n;
	int rev=0;
	// n=234
	while (n>0){
		int rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if (rev==org){
		return true;
	}
	return false;
}

bool primePalindrome(int n) {
    if (isPrime(n)==true && isPalindrome(n)==true){
		return true;
	}
	return false;
    
}

int main() {
    int n; cin >> n;
    cout << (primePalindrome(n) ? 1 : 0) << "\n";
    return 0;
}
