#include<iostream>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int i, s = 0;
	for( i=0; i<=n; i++){
		if(i%k==0) s+=i;
	}
	cout << s << endl;
	return 0;
}
