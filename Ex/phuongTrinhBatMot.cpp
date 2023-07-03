#include<iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	if (a == 0) cout << "Phuong trinh nay vo nghiem!" << endl;
	else {
		cout << "Nghiem cua phuong trinh " << a << "x ";
		if (b >= 0) cout << "+ ";
		else cout << "- ";
		cout << -b << " = 0 " << "la: x = " << -b*1.0/a;
		
	}
	
	return 0;
}
