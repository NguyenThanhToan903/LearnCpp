#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int sn = 0, s1 = 0, s2 = 0;
	int i;
	for(i=0; i<=n; i++){
		sn += i;
		if(i%2==1) s1 += i;
		if(i%2==0) s2 += i;
	}
	
	cout << sn << endl << s1 << endl << s2 << endl;
	
	return 0;
}
