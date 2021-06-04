#include <iostream>
#include "Klas.h"
#include "Sklad.h"
#include <locale>

int main()
{
	setlocale(LC_ALL,"Russian");
	Klas kassa;
	kassa.Add(kassa.Scan(1));
	kassa.Add(kassa.Scan(1));
	kassa.Add(kassa.Scan(1));
	kassa.Add(kassa.Scan(2));
	cout << kassa.Chek();
	kassa.del("Iron", 2);
	cout << endl << kassa.Chek();
}
