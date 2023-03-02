/*Nama File : nomorHari.c*/
/*Deskripsi : Menampilkan sebuah teks hari dari inputan angka 1 hingga 7*/
/*Pembuat   : Farid Reza Nurhuda - 24060120140075*/
/*Tanggal   : Senin, 27 Februari 2023, 1:31*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int nomor;

    /*Algoritma*/
    printf("============PROGRAM TEKS HARI DARI INPUT ANGKA 1-7============\n");
    printf("\nMasukkan nilai nomor = ");
    scanf("%d", &nomor);
    if (nomor < 1 || nomor > 7) {
        printf("\nMasukan nomor hari tidak tepat");
    }
    else if (1 <= nomor <= 7){
        if (nomor == 1) {
            printf("\nSenin");
        }
        else if (nomor == 2) {
            printf("\nSelasa");
        }
        else if (nomor == 3) {
            printf("\nRabu");
        }
        else if (nomor == 4) {
            printf("\nKamis");
        }
        else if (nomor == 5) {
            printf("\nJumat");
        }
        else if (nomor == 6) {
            printf("\nSabtu");
        }
        else if (nomor == 7) {
            printf("\nMinggu");
        }
    }

    return 0;
}