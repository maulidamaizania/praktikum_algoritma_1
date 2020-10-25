#include <iostream>
#define PHI 3.14
using namespace std;
main ()
{
float r;
float Luas;
float s;

cout <<"Program Menghitung Luas Permukaan Kerucut\n";
cout <<"Maulida Maizani Assabila_123200152\n";
cout<< "\nMasukkan jari-jari	: ";
cin>> r;
		
cout<< "Masukkan garis pelukis	: ";
cin>> s;
		
Luas = PHI*r*(r+s);
		
cout<< "\nLuas Permukaan Kerucut= Luas Alas + Luas Selimut\n";
cout<< "Luas Permukaan Kerucut= phi * r * r + phi * r * s\n";
cout<< "Luas Permukaan Kerucut= " <<Luas<<endl;
		
return 0;
}
