#include<iostream>
using namespace std;

int main(){
	
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	int max = a;
	if(max < b){
		max = b;
	}
	if (max < c){
		max = c;
	}
	if (max < d){
		max = d;
	}
	if (max < e){
		max = e;
	}
	
	if (max == b && max == c && max == d && max == e){
		cout << "Khong co so lon nhat!" << endl;
	}
	else {
		cout << "So lon nhat co gia tri la " << max << endl; 
	}
	return 0;
}
