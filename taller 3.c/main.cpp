#include <iostream>

using namespace std;

int main()
{
    int horas_diurnas;
	int horas_dominical;
	int horas_festivos;
	int horas_nocturnas;
	float v_horas;
	float v_horas_diurnas;
	float v_horas_nocturnas;
	float v_hora_dominical;
	float v_hora_festivo;
	float v_salario;
	cout << "ingresar numero de horas diurnas" << endl;
	cin >> horas_diurnas;
	cout << "ingresar el numero de horas nocturnas" << endl;
	cin >> horas_nocturnas;
	cout << "ingresar el numero de horas dominicales" << endl;
	cin >> horas_dominical;
	cout << "ingresar el numero de horas festivos" << endl;
	cin >> horas_festivos;
	v_horas = 2500;
	v_horas_diurnas = v_horas*horas_diurnas;
	v_horas_nocturnas = v_horas*1.35*horas_nocturnas;
	v_hora_dominical = v_horas*1.50*horas_dominical;
	v_hora_festivo = v_horas*1.75*horas_festivos;
	v_salario = v_horas_diurnas+v_horas_nocturnas+v_hora_dominical+v_hora_festivo;
	cout << "valor de horas " << v_horas << endl;
	cout << "valor de horas diurnas " << v_horas_diurnas << endl;
	cout << "valor de horas nocturnas " << v_horas_nocturnas << endl;
	cout << "valor de horas dominicales " << v_hora_dominical << endl;
	cout << "valor de horas festivos " << v_hora_festivo << endl;
	cout << "total salario " << v_salario << endl;
    return 0;
}
