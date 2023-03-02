/*Nama File : nomorBulan.c*/
/*Deskripsi : Menampilkan sebuah teks bulan dari inputan angka 1 hingga 12*/
/*Pembuat   : Farid Reza Nurhuda - 24060120140075*/
/*Tanggal   : Senin, 27 Februari 2023, 1:42*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int nomor;

    /*Algoritma*/
    printf("============PROGRAM TEKS BULAN DARI INPUT ANGKA 1-12============\n");
    printf("\nMasukkan nilai nomor = ");
    scanf("%d", &nomor);
    if (nomor < 1 || nomor > 12) {
        printf("\nMasukan nomor hari tidak tepat");
    }
    else if (1 <= nomor <= 12){
        if (nomor == 1) {
            printf("\nJanuari");
        }
        else if (nomor == 2) {
            printf("\nFebruari");
        }
        else if (nomor == 3) {
            printf("\nMaret");
        }
        else if (nomor == 4) {
            printf("\nApril");
        }
        else if (nomor == 5) {
            printf("\nMei");
        }
        else if (nomor == 6) {
            printf("\nJuni");
        }
        else if (nomor == 7) {
            printf("\nJuli");
        }
        else if (nomor == 8) {
            printf("\nAgustus");
        }
        else if (nomor == 9) {
            printf("\nSeptember");
        }
        else if (nomor == 10) {
            printf("\nOktober");
        }
        else if (nomor == 11) {
            printf("\nNovember");
        }
        else if (nomor == 12) {
            printf("\nDesember");
        }
    }

    return 0;
}