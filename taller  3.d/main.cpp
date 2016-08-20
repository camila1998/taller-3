#include <iostream>

using namespace std;

int main()
{
	int i;
	int tabla;
	i = 1;
	cout << "ingrese un numero" << endl;
	cin >> tabla;
	while ((i<=10)) {
		cout << "I=" << i << "*" << tabla << "=" << i*tabla << endl;
		i = i+1;
	}
	return 0;
}


