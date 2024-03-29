#include <iostream>
#include <windows.h>
using namespace std;
int main ()
 {
	HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
	
	SetConsoleTextAttribute (H, 74);
	cout << "|==========================================================|" << endl;
	cout << "|                  Program Menghitung Harga BBM            |" << endl;
	cout << "|==========================================================|" << endl;
	cout << endl;
	
	int solar [50], pertalite[50], pertamax[50];
	int liter, harga_solar, harga_pertalite, harga_pertamax;
	
	SetConsoleTextAttribute (H, 7);
	cout << "Masukkan harga solar    : ";
	cin >> harga_solar;
	cout << "Masukkan harga pertalite : ";
	cin >> harga_pertalite;
	cout << "Masukkan harga pertamax  :";
	cin >> harga_pertamax;
	cout << "Masukkan jumlah perliter :";
	cin >> liter;
	cout << endl;
	
	SetConsoleTextAttribute (H, 74);
	cout << "|====================================== Dafta Harga ============================|" << endl;
	cout << "|===============================================================================|" << endl;
	cout << endl;
	
	SetConsoleTextAttribute (H, 7);
	cout << "Liter			Solar				PERTALITE					pertamax		" << endl;
	cout << "================================================================================|" << endl;
	
	for (int i = 1; i <= liter; i++)
	{
		solar[i] = i + harga_solar;
		pertalite[i] = i + harga_pertalite;
		pertamax[i] = i + harga_pertamax;
		
	cout << i << "            " << solar[i] << "          " << pertalite[i] << "           " << pertamax[i] <<endl;
	
	}
	cout << "|==========================================================================|" << endl;
	
	return 0;
}
