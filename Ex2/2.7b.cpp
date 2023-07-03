#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int i;
	int cnt=0;
	for(i=n; i>0; i--){
		if(n%i == 0 ) cnt++;
	}
	cout << cnt << "\n";
	
	return 0;
}
