/*Nama File : volBolaKerct.c*/
/*Deskripsi : Menghitung dan menampilkan volume bola dan kerucut*/
/*Pembuat   : Farid Reza Nurhuda - 24060120140075*/
/*Tanggal   : Selasa, 22 Februari 2023, 16:05*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    float phi = 3.1415; //konstanta phi
    float vb; //volume bola
    float vk; //volume kerucut
    float r; //jari-jari

    /*Algoritma*/
    printf("============PROGRAM MENGHITUNG VOLUME BOLA DAN KERUCUT============\n");
    printf("\nMasukkan nilai jari-jari (r) = ");
    scanf("%f", &r);
    printf("Jari-jari (r) = %.1f meter", r);

    vb = 1.33 * (phi * (r * r * r)); //proses menghitung volume bola

    printf("\n");
    printf("\nHasil volume bola sebesar %.1f meter kubik", vb); //menampilkan hasil volume bola

    vk = 0.5 * vb; //proses menghitung volume kerucut

    printf("\n");
    printf("\nHasil volume kerucut sebesar %.1f meter kubik", vk); //menampilkan hasil volume kerucut

    return 0;
}