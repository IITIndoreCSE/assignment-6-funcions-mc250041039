#include <iostream>
using namespace std;

int gcd(int a, int b) {
	int r;
	if (b==0){
		return a;
	}else{
		while (b!= 0){
			int r=a%b;//a=12, b=8
			a=b;
			b=r;
		}
	}
	return a;
    
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    cout << gcd(num1, num2) << "\n";

    return 0;
}

