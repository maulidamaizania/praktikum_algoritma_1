#include <iostream>
using namespace std;
main ()
{
	int C;
	int Reamur;
	int Kelvin;
	int Fahrenheit;
	
	cout <<"Program Mencari Konversi Suhu\n";
	cout <<"Maulida Maizani Assabila_123200152\n";
	cout<< "\nMasukkan Suhu dalam Celcius	: ";
	cin>> C;
	
	Fahrenheit= (9/5 * C)+32;
	Kelvin= 273+C;
	Reamur= (4/9 * C)+32;
	
	cout<<"\nFahrenheit	: (9/5 * C)+32\n";
	cout<<"Fahrenheit	: "<<Fahrenheit<<endl;
	cout<<"\nKelvin		: 273+C\n";
	cout<<"Kelvin		: "<<Kelvin<<endl;
	cout<<"\nReamur		:(4/9 * C)+32\n";
	cout<<"Reamur		: "<<Reamur	<<endl;
	
	return (0);
}
	
	
