#include <iostream>
using namespace std;

int main()
{
	int l1,l2,l3;
	cout << "Inserisci tre numeri: " << endl;
	cin >> l1;
	cin >> l2;
	cin >> l3;

	if((l1+l2)>l3 && (l2+l3)>l1 && (l1+l3)>l2)
	{
		cout << "l1, l2, l3 sono lati di un triangolo" << endl;
	}
	else if(l1==l2==l3)
	{
		cout << "Il triangolo è equilatero" << endl;
	}
	else if(l1==l2 || l1==l3 || l2==l3)
	{
		cout << "Il triangolo è isoscele" << endl;
	}
	else if(l1!==l2 && l2!==l3 && l1!==l3)
	{
		cout << "Il triangolo è scaleno" << endl;
	}
	else
	{
		cout << "l1, l2, l3 non sono lati di un triangolo" << endl;
	}

	return 0;
}


