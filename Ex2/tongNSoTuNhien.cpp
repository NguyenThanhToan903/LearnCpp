#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i, s = 0;
	for( i=0; i<=n; i++){
		s+=i;
	}
	cout << s << endl;
	return 0;
}
