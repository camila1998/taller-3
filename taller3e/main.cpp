#include <iostream>

using namespace std;

int main()
{
    int cantidad;
	int vdolar;
	cout << "ingrese la valor de dolares" << endl;
	cin >> vdolar;
	cout << "ingrese la cantidad de dolares" << endl;
	cin >> cantidad;
	vdolar = vdolar*cantidad;
	cout << "la candidad de dinero en dolares es" << vdolar << endl;
	return 0;
}

