/*Nama File : CekBilPrima.c*/
/*Deskripsi : Menentukan dan mengecek apakah bilangan prima beserta faktornya*/
/*Pembuat   : Farid Reza Nurhuda - 24060120140075*/
/*Tanggal   : Kamis, 02/03/2023, 02:31*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    
    /*Kamus*/
    int N;
    bool is_prima = true;

    /*Algoritma*/
    printf("============PROGRAM CEK BILANGAN PRIMA============\n");
    printf("\nMasukkan bilangan N: ");
    scanf("%d", &N);
    printf("\nN = %d", N);

    if (N > 0) {
        for (int i = 2; i < N; i++) {
            if (N % i == 0) {
                is_prima = false;
                break;
            }
        }
        if (is_prima && N > 1) {
            printf("\nBilangan Prima {faktor bilangannya adalah ");
            for (int i = 1; i <= N; i++) {
                if (N % i == 0) {
                    printf("%d ", i);
                    if (i != 1 && i != N) {
                        is_prima = false;
                    }
                }
            }
        }
        else {
            printf("\nBukan Bilangan Prima {faktor bilangannya adalah ");
            for (int i = 1; i <= N; i++) {
                if (N % i == 0) {
                    printf("%d ", i);
                    if (i != 1 && i != N) {
                        is_prima = false;
                    }
                }
            }
        }
    }
    else {
        printf("\nBilangan integer tidak boleh negatif");
    }

    return 0;
}