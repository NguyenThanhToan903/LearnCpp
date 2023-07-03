#include<iostream>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	float l = a*b;
	int r = a % b;
	while(r!=0){
		a = b;
		b = r;
		r = a % b;
	}
	cout << l / b;
	return 0;
}
