#include <iostream>

using namespace std;

int main()
{
   float area;
	float diametro;
	float longi;
	float pi;
	float rd;
	cout << "ingresar el valor del radio" << endl;
	cin >> rd;
	pi=3,1416;
	area = pi*rd*rd;
	diametro = 2*rd;
	longi = 2*pi*rd;
	cout << "la circunferencia con radio es " << rd << endl;
	cout << "el area de la circunferencia es " << area << endl;
	cout << "la longitud de circunferencias es " << longi << endl;
	cout << "el diametro de circunferencias es " << diametro << endl;
	return 0;
}
