#include <iostream>
using namespace std;

int main()
{
	int i;
	
	cout << "Masukkan jumlah suku Fibonacci: ";
	cin >> i;
	
	for (i=1; i<=10; i++) {
	cout<< i << " " << i+i;
}
	getchar();
}

