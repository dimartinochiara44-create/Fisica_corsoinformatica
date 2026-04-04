#include <iostream>
using namespace std;

int main()
{
	char carattere;
	cout << "Inserisci un carattere: ";
	cin >> carattere;

	if(carattere=='A' || carattere=='E' || carattere=='I' || carattere=='O' || carattere=='U')
	{
		cout << "Il carattere è una vocale" << endl;
	}
	else
	{
		cout << "Il carattere non è una vocale" << endl;
	}

	return 0;
}

