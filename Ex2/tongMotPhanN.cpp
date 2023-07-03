#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i;
	float s = 0;
	for(i=1; i<=n;i++){
		s+= 1.0/i;
	}
	
	cout << s << endl;
	
	return 0;
}
