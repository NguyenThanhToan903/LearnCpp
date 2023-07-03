#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float a, b, c;
	cin >> a >> b >> c;
	if(a == 0){
		if (b == 0 && c == 0) {
			cout << "Phuong trinh vo so nghiem!" << endl;
		}
		else if (b==0 && c != 0) {
			cout << "PPhuong trinh vo nghiem!" << endl;
		}
		else {
			cout << "Nghiem cua phuong trinh " << b << "x ";
			if (c >= 0) cout << "+ ";
			else cout << "- ";
			cout << c << " = 0 " << "la x = " << -b/c << endl;
		}
	}
	else {
		float delta = b * b - 4 * a*c;
		if (delta < 0) {
			cout << "Phuong trinh vo nghiem!" << endl;
		}
		else if (delta == 0) {
			cout << "Phuong trinh co nghiem kep x = " <<  -b/ (2 * a) << endl;
		}
		else {
			cout << "Phuong trinh co 2 nghiem phan biet: \n";
			float x1 = -b + sqrt(delta) / (2 * a);
			float x2 = -b - sqrt(delta) / (2 * a);
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
		}
	}
	return 0;
}
