/*Nama File : BilPrimaN.c*/
/*Deskripsi : Mencetak bilangan prima dengan batas dari input bilangan N*/
/*Pembuat   : Farid Reza Nurhuda - 24060120140075*/
/*Tanggal   : Kamis, 02/03/2023, 17:57*/

#include <stdio.h>

int main() {

    /*Kamus*/
    int N;
    int i;
    int j;
    int batas;

    /*Algoritma*/
    printf("============PROGRAM CETAK BILANGAN PRIMA============\n");
    printf("\nMasukkan bilangan N: ");
    scanf("%d", &N);
    printf("\nN = %d", N);
    printf("\n");

    if (N > 0) {
        printf("Bilangan Primanya adalah ");
        for (i = 2; i <= N; i++) {
            batas = 1;
            for (j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    batas = 0;
                    break;
                }
            }
            if (batas == 1) {
                printf("%d ", i);
            }
        }
    }
    else {
        printf("Bilangan integer tidak boleh negatif");
    }

    return 0;
}