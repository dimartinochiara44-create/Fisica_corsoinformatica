#include <iostream>
using namespace std;

int main()
{
	int nconto;                 //numero di conto del cliente
	char tipoconto;            //tipo di conto: 'S' o 'C'
	int saldomin;             //saldo minimo che ogni cliente deve preservare nel conto
	int saldoatt;            //saldo effettivo effettuato dal cliente
	cout << "Inserisci il numero identificativo di conto: " << endl;
	cin >> nconto;                                                            //legge il numero di conto
	cout << "Inserisci la tipologia di conto: " << endl;                    
	cin >> tipoconto;                                                        //legge il tipo di conto
	cout << "Inserisci il saldo minimo richiesto: " << endl;
	cin >> saldomin;                                                        //legge il saldo minimo da presentare
	cout << "Inserisci il saldo attuale: " << endl;
	cin >> saldoatt;                                                       //legge il saldo effettuato

	if(tipoconto=='S')
	{
		if(saldoatt>=saldomin)
		{
                        double interesseS = saldoatt*(4 / 100.0);                       //calcolo interesse conto di risparmio
		        double saldotot = saldoatt + interesseS;                       //calcolo del saldo totale compreso di interesse
			cout << "Il numero di conto è: " << nconto << endl;
		        cout << "La tipologia di conto è conto di risparmio" << endl;
			cout << "Il cliente non deve pagare alcuna commissione" << endl;
			cout << "L'interesse è: " << interesseS << endl;
			cout << "Il saldo totale è: " << saldotot << endl;
		}
		else
		{
			int commissioneS = 10;                            //commissione bancaria da pagare nel caso in cui il saldo versato nel conto S è al di sotto della soglia minima
			cout << "Il numero di conto è: " << nconto << endl;
			cout << "La tipologia di conto è conto di risparmio" << endl;
			cout << "Il cliente deve pagare una commissione pari a: " << commissioneS << endl;
			double saldotot = saldoatt - commissioneS;                //calcolo del saldo totale compreso di commissione bancaria
			cout << "Il saldo totale è: " << saldotot << endl;
		}
	}
	else if(tipoconto=='C')
	{
		if(saldoatt>=saldomin)
		{
			if((saldoatt-saldomin)<=5000)
			{
				double interesseC1 = saldoatt*(3 / 100.0);    //calcolo interesse conto corrente nel caso in cui il saldo è minore o uguale di 5000
				cout << "Il numero di conto è: " << nconto << endl;
				cout << "La tipologia di conto è conto corrente" << endl;
				cout << "Il cliente non deve pagare alcuna commissione" << endl;
				cout << "L'interesse è: " << interesseC1 << endl;
				double saldotot = saldoatt + interesseC1;                        //calcolo del saldo totale compreso di interesse
				cout << "Il saldo totale è: " << saldotot << endl;
			}
			else
			{
				double interesseC2 = saldoatt*(5 / 100.0);                   //calcolo interesse conto corrente negli altri casi
				cout << "Il numero di conto è: " << nconto << endl;
				cout << "La tipologia di conto è conto corrente" << endl;
				cout << "Il cliente non deve pagare alcuna commissione" << endl;
				cout << "L'interesse è: " << interesseC2 << endl;
				double saldotot = saldoatt + interesseC2;                  //calcolo del saldo totale compreso di interesse
				cout << "Il saldo totale è: " << saldotot << endl;
			}
		}
		else
		{
			int commissioneC = 25;                               //commissione bancaria da pagare nel caso in cui il saldo versato nel conto C è al di sotto della soglia minima
			cout << "Il numero di conto è: " << nconto << endl;
			cout << "La tipologia di conto è conto corrente" << endl;
			cout << "Il cliente deve pagare una commissione pari a: " << commissioneC << endl;
			double saldotot = saldoatt - commissioneC;                  //calcolo del saldo totale compreso di commissione bancaria
			cout << "Il saldo totale è: " << saldotot << endl;
		}
	}

	return 0;
}




