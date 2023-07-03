#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int s = 0, temp = 1, i, j;
	for(i=1; i<=n; i++){
		temp = 1;
		for(j=1; j<=i; j++){
			temp*=j;
		}
		s+=temp;
	}
	cout << s << endl;
	return 0;
}
