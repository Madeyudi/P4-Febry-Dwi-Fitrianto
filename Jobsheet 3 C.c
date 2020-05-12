#include<stdio.h>
using namespace std;
main(){
	printf ("Nama     : I Made Yudi Dharmawan");
	printf ("\nNIM      : F1B019067");
	printf ("\nKelompok : 15\n\n");
	
	int matriks1 [2][2], matriks2 [2][2], i, j;
	printf ("Matriks 1\n");
	for (i = 0; i <= 1; i++){
		for (j = 0; j <= 1; j++){
			printf ("Elemen [%d][%d] : ", i, j);
			scanf ("%d", &matriks1 [i][j]);
		}
	}
	
	printf ("\nMatriks 2\n");
	for (i = 0; i <= 1; i++){
		for (j = 0; j <= 1; j++){
			printf ("Elemen [%d][%d] : ", i, j);
			scanf ("%d", &matriks2 [i][j]);
		}
	}
	
	printf ("\nHasil Pemjumlahan\n");
	for (i = 0; i <= 1; i++){
		for (j = 0; j <= 1; j++)
		printf ("%d\t", matriks1 [i][j] + matriks2 [i][j]);
		printf ("\n");
	}
}
