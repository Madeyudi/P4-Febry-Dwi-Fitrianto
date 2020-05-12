#include <stdio.h>
#include <stdlib.h>
main(){	
	printf("NAMA 		: I Made Yudi Dharmawan\n" );
	printf("NIM  		: F1B019067\n");
	printf("KELOMPOK	: 15\n");
	printf("saldo = 20000000\n\n\n\n");
	

	int kode , harga , i=1 , total_pembelian=0, diskon, total_bayar,saldo=20000000;
	char kar= 'y' ;
	
	printf ("       *** TOKO HP SECOND MURAH DAN BERKUALITAS SAING ***\n\n\n" );
	
	printf ("                    UPDATE STOCK HARI INI\n"                     );
	printf ("   *========================================================*\n");
	printf ("   |kode|             HP SECOND         |       harga       |\n");
	printf ("   |========================================================|\n");
	printf ("   |  1 |  IPHONE 6S 32GB GREY          | Rp. 2.200.000     |\n");
	printf ("   |  2 |  IPHONE 6S 32GB ROSE GOLD     | Rp. 2.200.000     |\n");
	printf ("   |  3 |  IPHONE 6S 64GB GOLD          | Rp. 2.400.000     |\n");
	printf ("   |  4 |  IPHONE 6S 64GB GREY          | Rp. 2.400.000     |\n");
	printf ("   |  5 |  IPHONE 6S 64GB SILVER        | Rp. 2.400.000     |\n");
	printf ("   |  6 |  IPHONE 7 128GB BLACK MATE    | Rp. 3.400.000     |\n");
	printf ("   |  7 |  IPHONE 7 128GB GOLD          | Rp. 3.400.000     |\n");
	printf ("   |  8 |  IPHONE 7 128GB JET BLACK     | Rp. 3.400.000     |\n");
	printf ("   |  9 |  IPHONE 7 128GB ROSE GOLD     | Rp. 3.400.000     |\n");
	printf ("   | 10 |  IPHONE 7 128GB SILVER        | Rp. 3.400.000     |\n");
	printf ("   | 11 |  IPHONE 7  32GB BLACK MATE    | Rp. 2.900.000     |\n");
	printf ("   | 12 |  IPHONE 7  32GB GOLD          | Rp. 2.900.000     |\n");
	printf ("   | 13 |  IPHONE 7  32GB JET BLACK     | Rp. 2.900.000     |\n");
	printf ("   | 14 |  IPHONE 7  32GB ROSE GOLD     | Rp. 2.900.000     |\n");
	printf ("   | 15 |  IPHONE 7  32GB SILVER        | Rp. 2.900.000     |\n");
	printf ("   | 16 |  IPHONE 7 PLUS 128GB RED      | Rp. 5.100.000     |\n");
	printf ("   | 17 |  IPHONE 7 PLUS 256GB RED      | Rp. 5.300.000     |\n");
    printf ("   *========================================================*\n\n");
	
	
while (kar=='y'){
	printf("masukkan kode barang yang anda ingin beli :");
	scanf ("%d", &kode);
	fflush (stdin);
	if (kode==1)	{
	printf("barang yang anda pilih adalah : IPHONE 6S 32GB GREY\n");
		harga = 2200000;
	printf("HARGANYA = %d \n\n", harga);
}else if (kode==2){
	printf("barang yang anda pilih adalah : IPHONE 6S 32GB ROSE GOLD\n");
		harga= 2200000;
	printf("HARGANYA = %d \n\n", harga);
}else if ( kode == 3){
	printf("barang yang anda pilih adalah : IPHONE 6S 64GB GOLD\n");
		harga= 2400000;
	printf("HARGANYA = %d \n\n", harga);
}else if ( kode == 4){
	printf("barang yang anda pilih adalah : IPHONE 6S 64GB GREY\n");
		harga= 2400000;
	printf("HARGANYA = %d \n\n", harga);
}else if ( kode == 5){
	printf("barang yang anda pilih adalah : IPHONE 6S 64GB SILVER\n");
		harga= 2400000;
	printf("HARGANYA = %d \n\n", harga);
}else if ( kode == 6){
	printf("barang yang anda pilih adalah : IPHONE 7 128GB BLACK MATE\n");
		harga= 3400000;
	printf("HARGANYA = %d \n\n", harga);
}else if ( kode == 7){
	printf("barang yang anda pilih adalah : IPHONE 7 128GB GOLD\n");
		harga= 3400000;
	printf("HARGANYA = %d \n\n", harga);
}else if ( kode == 8){
	printf("barang yang anda pilih adalah : IPHONE 7 128GB JET BLACK\n");
		harga= 3400000;
	printf("HARGANYA = %d \n\n", harga);
}else if ( kode == 9){
	printf("barang yang anda pilih adalah : IPHONE 7 128GB ROSE GOLD\n");
		harga= 3400000;
	printf("HARGANYA = %d \n\n", harga);
}else if ( kode == 10){
	printf("barang yang anda pilih adalah : IPHONE 7 128GB SILVER\n");
		harga= 3400000;
	printf("HARGANYA = %d \n\n", harga);
}else if ( kode == 11){
	printf("barang yang anda pilih adalah : IPHONE 7  32GB BLACK MATE\n");
		harga= 2900000;
	printf("HARGANYA = %d \n\n", harga);
}else if ( kode == 12){
	printf("barang yang anda pilih adalah : IPHONE 7  32GB GOLD\n");
		harga= 2900000;
	printf("HARGANYA = %d \n\n", harga);
}else if ( kode == 13){
	printf("barang yang anda pilih adalah : IPHONE 7  32GB JET BLACK\n");
		harga= 2900000;
	printf("HARGANYA = %d \n\n", harga);
}else if ( kode == 14){
	printf("barang yang anda pilih adalah : IPHONE 7  32GB ROSE GOLD\n");
		harga= 2900000;
	printf("HARGANYA = %d \n\n", harga);
}else if ( kode == 15){
	printf("barang yang anda pilih adalah : IPHONE 7  32GB SILVER\n");
		harga= 2900000;
	printf("HARGANYA = %d \n\n", harga);
}else if ( kode == 16){
	printf("barang yang anda pilih adalah : IPHONE 7 PLUS 128GB RED\n");
		harga= 5100000;
	printf("HARGANYA = %d \n\n", harga);
}else if ( kode == 17){
	printf("barang yang anda pilih adalah : IPHONE 7 PLUS 256GB RED\n");
		harga= 5300000;
	printf("HARGANYA = %d \n\n", harga);
}else{
	printf("input kode barang salah!!! \n");
}

total_pembelian=total_pembelian+harga;
printf("MAU BELI BARANG LAGI?? [y/t]:");
scanf("%c", &kar);
i++;

}
printf("................................................\n");
printf("total pembelian = %d\n", total_pembelian);
if (total_pembelian > 5000000){
	diskon=0.05*total_pembelian;
	printf ("diskon : %d\n", diskon);
	total_bayar=total_pembelian-diskon;
	
}else if (total_pembelian < 5000000){
	diskon= 0;
	printf ("diskon : %d\n", diskon);
	total_bayar=total_pembelian-diskon;
}
{
printf("************************************************\n");
printf("total bayar=%d\n",total_bayar);
printf("________________________________________________\n");
}(saldo-total_bayar);{
	saldo= 20000000 - total_bayar;
	printf("sisa saldo : %d\n",saldo);
	sisa saldo = saldo-total_bayar;
}
}
