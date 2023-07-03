#include<iostream>
using namespace std;
#define PI 3.14
int main(){
	float r;
	float C, S;
	cin >> r;
	if(r<0) cout << "Ban Kinh khong hop le!\n";
	else {
	C = 2 * PI * r;
	S = PI * r * r;
	cout << "Chu vi = " << C << "\nDien tich = " << S << endl;
		
	}
	
	return 0;
}
