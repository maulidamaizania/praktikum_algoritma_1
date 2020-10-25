#include <iostream>
#include <iomanip>
using namespace std;
main ()
{
	int NIM;
	char nama[50];
	char kelas[30];
	
	cout<< "Masukkan data Anda: \n";
	cout<< "Nama	: ";
	cin.getline (nama, sizeof (nama));
	cout<<"NIM	: ";
	cin>> NIM;
	cin.ignore ();
	cout<< "Plug 	: ";
	cin.getline (kelas, sizeof (kelas));
	
	cout<<"\nInilah data Anda : \n";
	cout<<"Nama	: " <<nama<<endl;
	cout<<"NIM	: " <<NIM<<endl;
	cout<<"Plug	: " <<kelas<<endl;
	 
	cout<<"\nDalam bentuk tabel : \n";
	cout<<"================================================================\n";
	cout<<"NIM"<<setw (15.7)<<"|"<<setw (15)<<"Nama"<<setw (12)<<"|"<<setw (12)<<"Plug\n";
	cout<<"================================================================\n";
	cout<<NIM<<setw (10)<<"| "<<setw (12)<<nama<<setw (2)<<"|"<<setw (11)<<kelas<<endl;
	cout<<"----------------------------------------------------------------\n";
	
	return 0;
}
