#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	(n%2!=0) ? cout<< n<<" la so le.\n": cout<< n<<" la so chan.\n";
	(n>=0) ? cout << n << " la so duong.\n" : cout << n << " la so am.\n";
	return 0;
}
