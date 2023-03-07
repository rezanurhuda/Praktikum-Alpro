/*Nama File : JumDeret.c*/
/*Deskripsi : Menghitung jumlah total deret bilangan integer dari input N*/
/*Pembuat   : Farid Reza Nurhuda - 24060120140075*/
/*Tanggal   : Kamis, 02/03/2023, 02:18*/

#include <stdio.h>

int main() {

    /*Kamus*/
    int N;
    int total = 0;

    /*Algoritma*/
    printf("============PROGRAM JUMLAH DERET BILANGAN INTEGER POSITIF N============\n");
    printf("\nMasukkan bilangan N: ");
    scanf("%d", &N);

    if (N > 0) {
       for (int i = 1; i <= N; i++) {
        total += i;
       }
       printf("\nJumlah total deret bilangan N sebanyak %d", total);
    }
    else {
        printf("\nBilangan integer tidak boleh negatif");
    }

    return 0;
}