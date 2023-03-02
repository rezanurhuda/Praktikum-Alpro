/*Nama File : cekInteger.c*/
/*Deskripsi : Mengecek sebuah input bilangan apakah bilangan integer atau bukan*/
/*Pembuat   : Farid Reza Nurhuda - 24060120140075*/
/*Tanggal   : Senin, 27 Februari 2023, 22:48*/

#include <stdio.h>

int main()
{
    /*Kamus*/
    int i;

    /*Algoritma*/
    printf("============PROGRAM MENGECEK INPUT BILANGAN INTEGER============\n");
    printf("\nMasukkan nilai i = ");
    if (scanf("%d", &i))
    {
        printf("\n%d", i);
    }
    else
    {
        printf("\nBukan termasuk sebuah bilangan");
    }

    return 0;
}