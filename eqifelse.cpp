#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c;
	cout << "Inserisci il coefficiente a: " << endl;
	cin >> a;
	cout << "Inserisci il coefficiente b: " << endl;
	cin >> b;
	cout << "Inserisci il coefficiente c: " << endl;
	cin >> c;

	double delta = b*b -4*a*c;

	if(delta>0)
	{
		double X1 = (-b + sqrt(delta))/(2*a);
		double X2 = (-b - sqrt(delta))/(2*a);
		cout << "La soluzione X1 è uguale a: " << X1 << endl;
		cout << "La soluzione X2 è uguale a: " << X2 << endl;
	}
	else if(delta==0)
	{
		double X = (-b)/(2*a);
		cout << "La soluzione X è uguale a: " << X << endl;
	}
	else
	{
		cout << "Non ci sono soluzioni reali" << endl;
	}

	return 0;
}

