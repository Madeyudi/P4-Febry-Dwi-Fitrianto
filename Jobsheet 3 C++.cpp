#include <iostream>
using namespace std;
main(){
	cout << "Nama     : I Made Yudi Dharmawan"<<endl;
	cout << "NIM      : F1B019067"<<endl;
	cout << "Kelompok : 15"<<"\n\n";
	
	int i,x;
	int matriks_1[2][2],
		matriks_2[2][2],
		matriks_3[2][2];
	char ulang;	
	do
	{	
		cout<< "Penjumlahan 2 matriks Ordo 2x2 \n\n";
		cout<< "Data matriks 1\n";
	for ( i=0; i<=1; i++ ) 
	{
		for ( x=0; x<=1; x++ ) 
		{ 
			cout<< "["<<i<<"]["<<x<<"] : "; 
			cin>>matriks_1[i][x];
		}
	}
	cout<<"\n";
	cout<< "Data matriks 2\n";
	for ( i=0; i<=1; i++ ) 
	{
		for ( x=0; x<=1; x++ ) 
		{ 
			cout<< "["<<i<<"]["<<x<<"] : "; 
			cin>>matriks_2[i][x];
		}
	}
	cout<<"\n";
	cout<< "Matriks 1 + Matriks 2 : "<<endl;
	for ( i=0; i<=1; i++ ) { 
	for ( x=0; x<=1; x++ ) {
	matriks_3[i][x]=matriks_1[i][x]+matriks_2[i][x];
	cout<<"\t"<<matriks_3[i][x];
	}	
	cout<<endl;
	}
	cout<<"\n";
	cout<<"Hitung lagi ? [y/t] : ";
	cin>>ulang;
}
	while(ulang!='t');
}
