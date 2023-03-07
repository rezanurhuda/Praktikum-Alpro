/*Nama File : CekBilSemp.c*/
/*Deskripsi : Menentukan dan mengecek apakah bilangan sempurna beserta faktornya*/
/*Pembuat   : Farid Reza Nurhuda - 24060120140075*/
/*Tanggal   : Kamis, 02/03/2023, 02:59*/

#include <stdio.h>

int main() {

    /*Kamus*/
    int N;
    int faktor = 0;

    /*Algoritma*/
    printf("============PROGRAM CEK BILANGAN SEMPURNA============\n");
    printf("\nMasukkan bilangan N: ");
    scanf("%d", &N);
    printf("\nN = %d", N);

    if (N > 0) {
        printf("\nJumlah faktor bilangannya ");
        for (int i = 1; i < N; i++) {
            if (N % i == 0) {
                printf("%d ", i);
                faktor += i;
            }
        }
        if (faktor == N) {
            printf("\nBilangan Sempurna");
        }
        else {
            printf("\nBukan Bilangan Sempurna");
        }
    }
    else {
        printf("\nBilangan integer tidak boleh negatif");
    }

    return 0;
}