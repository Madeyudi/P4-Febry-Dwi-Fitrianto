#include <iostream>
#include <stdlib.h>
using namespace std;
main(){	
	cout<<"NAMA 		: I Made Yudi Dharmawan\n" ;
	cout<<"NIM  		: F1B019067\n";
	cout<<"KELOMPOK	    : 15\n";
	cout<<"saldo = 20000000\n\n\n\n";
	

	int kode , harga , i=1 , total_pembelian=0, diskon, total_bayar,saldo=20000000;
	char kar= 'y' ;
	
	cout<<"      *** TOKO HP SECOND MURAH DAN BERKUALITAS SAING ***\n\n\n" ;
	
	cout<<"                   UPDATE STOCK HARI INI\n"                     ;
	cout<<"   *========================================================*\n";
	cout<<"   |kode|             HP SECOND         |       harga       |\n";
	cout<<"   |========================================================|\n";
	cout<<"   |  1 |  IPHONE 6S 32GB GREY          | Rp. 2.200.000     |\n";
	cout<<"   |  2 |  IPHONE 6S 32GB ROSE GOLD     | Rp. 2.200.000     |\n";
	cout<<"   |  3 |  IPHONE 6S 64GB GOLD          | Rp. 2.400.000     |\n";
	cout<<"   |  4 |  IPHONE 6S 64GB GREY          | Rp. 2.400.000     |\n";
	cout<<"   |  5 |  IPHONE 6S 64GB SILVER        | Rp. 2.400.000     |\n";
	cout<<"   |  6 |  IPHONE 7 128GB BLACK MATE    | Rp. 3.400.000     |\n";
	cout<<"   |  7 |  IPHONE 7 128GB GOLD          | Rp. 3.400.000     |\n";
	cout<<"   |  8 |  IPHONE 7 128GB JET BLACK     | Rp. 3.400.000     |\n";
	cout<<"   |  9 |  IPHONE 7 128GB ROSE GOLD     | Rp. 3.400.000     |\n";
	cout<<"   | 10 |  IPHONE 7 128GB SILVER        | Rp. 3.400.000     |\n";
	cout<<"   | 11 |  IPHONE 7  32GB BLACK MATE    | Rp. 2.900.000     |\n";
	cout<<"   | 12 |  IPHONE 7  32GB GOLD          | Rp. 2.900.000     |\n";
	cout<<"   | 13 |  IPHONE 7  32GB JET BLACK     | Rp. 2.900.000     |\n";
	cout<<"   | 14 |  IPHONE 7  32GB ROSE GOLD     | Rp. 2.900.000     |\n";
	cout<<"   | 15 |  IPHONE 7  32GB SILVER        | Rp. 2.900.000     |\n";
	cout<<"   | 16 |  IPHONE 7 PLUS 128GB RED      | Rp. 5.100.000     |\n";
	cout<<"   | 17 |  IPHONE 7 PLUS 256GB RED      | Rp. 5.300.000     |\n";
    cout<<"   *========================================================*\n\n";
	
while (kar=='y'){
	cout<<"masukkan kode barang yang anda ingin beli :";
	cin>>kode;
	fflush (stdin);
	if (kode==1)	{
	cout<<"barang yang anda pilih adalah : IPHONE 6S 32GB GREY\n";
		harga = 2200000;
	cout<<"HARGANYA ="<<harga;cout<<"\n\n";
}else if (kode==2){
	cout<<"barang yang anda pilih adalah : IPHONE 6S 32GB ROSE GOLD\n";
		harga= 2200000;
	cout<<"HARGANYA = "<<harga;cout<<"\n\n";
}else if ( kode == 3){
	cout<<"barang yang anda pilih adalah : IPHONE 6S 64GB GOLD\n";
		harga = 2400000;
	cout<<"HARGANYA ="<<harga;cout<<"\n\n";
}else if ( kode == 4){
	cout<<"barang yang anda pilih adalah : IPHONE 6S 64GB GREY\n";
		harga = 2400000;
	cout<<"HARGANYA ="<<harga;cout<<"\n\n";
}else if ( kode == 5){
	cout<<"barang yang anda pilih adalah : IPHONE 6S 64GB SILVER\n";
		harga = 2400000;
	cout<<"HARGANYA ="<<harga;cout<<"\n\n";
}else if ( kode == 6){
	cout<<"barang yang anda pilih adalah : IPHONE 7 128GB BLACK MATE\n";
		harga = 3400000;
	cout<<"HARGANYA ="<<harga;cout<<"\n\n";
}else if ( kode == 7){
	cout<<"barang yang anda pilih adalah : IPHONE 7 128GB GOLD\n";
		harga = 3400000;
	cout<<"HARGANYA ="<<harga;cout<<"\n\n";
}else if ( kode == 8){
	cout<<"barang yang anda pilih adalah : IPHONE 7 128GB JET BLACK\n";
		harga = 3400000;
	cout<<"HARGANYA ="<<harga;cout<<"\n\n";
}else if ( kode == 9){
	cout<<"barang yang anda pilih adalah : IPHONE 7 128GB ROSE GOLD\n";
		harga = 3400000;
	cout<<"HARGANYA ="<<harga;cout<<"\n\n";
}else if ( kode == 10){
	cout<<"barang yang anda pilih adalah : IPHONE 7 128GB SILVER\n";
		harga = 3400000;
	cout<<"HARGANYA ="<<harga;cout<<"\n\n";
}else if ( kode == 11){
	cout<<"barang yang anda pilih adalah : IPHONE 7 32GB BLACK MATE\n";
		harga = 2900000;
	cout<<"HARGANYA ="<<harga;cout<<"\n\n";
}else if ( kode == 12){
	cout<<"barang yang anda pilih adalah : IPHONE 7 32GB GOLD\n";
		harga = 2900000;
	cout<<"HARGANYA ="<<harga;cout<<"\n\n";
}else if ( kode == 13){
cout<<"barang yang anda pilih adalah : IPHONE 7 32GB JET BLACK\n";
		harga = 2900000;
	cout<<"HARGANYA ="<<harga;cout<<"\n\n";
}else if ( kode == 14){
	cout<<"barang yang anda pilih adalah : IPHONE 7 32GB ROSE GOLD\n";
		harga = 2900000;
	cout<<"HARGANYA ="<<harga;cout<<"\n\n";
}else if ( kode == 15){
	cout<<"barang yang anda pilih adalah : IPHONE 7 32GB SILVER\n";
		harga = 2900000;
	cout<<"HARGANYA ="<<harga;cout<<"\n\n";
}else if ( kode == 16){
	cout<<"barang yang anda pilih adalah : IPHONE 7 PLUS 128GB RED\n";
		harga = 5100000;
	cout<<"HARGANYA ="<<harga;cout<<"\n\n";
}else if ( kode == 17){
	cout<<"barang yang anda pilih adalah : IPHONE 7 PLUS 256GB RED\n";
		harga = 5300000;
	cout<<"HARGANYA ="<<harga;cout<<"\n\n";
}else{
	cout<<"input kode barang salah!!! \n";
}

total_pembelian=total_pembelian+harga;
cout<<"MAU BELI BARANG LAGI?? [y/t]:";
cin>>kar;
i++;

}
cout<<"................................................\n";
cout<<"total pembelian = "<<total_pembelian;cout<<"\n";
if (total_pembelian > 5000000){
	diskon=0.05*total_pembelian;
	cout<<"diskon : "<<diskon;cout<<"\n";
	total_bayar=total_pembelian-diskon;
	
}else if (total_pembelian < 5000000){
	diskon= 0;
	cout<<"diskon : "<<diskon;cout<<"\n";
	total_bayar=total_pembelian-diskon;
}
{
cout<<"************************************************\n";
cout<<"total bayar="<<total_bayar;cout<<"\n";
cout<<"________________________________________________\n";
}(saldo-total_bayar);{
	saldo= 20000000 - total_bayar;
	cout<<"sisa saldo : "<<saldo;cout<<"\n";
	saldo = saldo-total_bayar;
}
}
