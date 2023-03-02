/*Nama File : jenisSegitiga.c*/
/*Deskripsi : Menampilkan jenis segitiga berdasarkan inputan tiga angka*/
/*Pembuat   : Farid Reza Nurhuda - 24060120140075*/
/*Tanggal   : Rabu, 01 Maret 2023, 05:37*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int sisi1;
    int sisi2;
    int sisi3;

    /*Algoritma*/
    printf("============PROGRAM TEKS JENIS SEGITIGA INPUT TIGA SISI============\n");
    printf("\nMasukkan nilai sisi 1 = ");
    scanf("%d", &sisi1);
    printf("\nMasukkan nilai sisi 2 = ");
    scanf("%d", &sisi2);
    printf("\nMasukkan nilai sisi 3 = ");
    scanf("%d", &sisi3);
    
    if (sisi1 <= 0 || sisi2 <= 0 || sisi3 <= 0) {
        printf("\nTerdapat nilai yang bukan sisi segitiga");
    }
    else {
        if (sisi1 == sisi2 && sisi2 == sisi3 && sisi1 == sisi3) {
            printf("\nSegitiga sama sisi");
        }
        else if (sisi1 == sisi2 || sisi2 == sisi3 || sisi1 == sisi3) {
            printf("\nSegitiga sama kaki");
        }
        else {
            printf("\nSegitiga sembarang");
        }
    }

    return 0;
}