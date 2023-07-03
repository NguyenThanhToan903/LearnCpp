#include<iostream>

using namespace std;
// UCLN
int main(){
	int a, b;
	cin >> a >> b;
	int r = a % b;
	
	while(r!=0){
		a = b;
		b = r;
		r = a % b;
	}
	
	cout << b << "\n";
	
	
	return 0;
}
