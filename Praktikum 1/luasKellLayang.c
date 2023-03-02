/*Nama File : luasKellLayang.c*/
/*Deskripsi : Menghitung dan menampilkan luas dan keliling layang-layang*/
/*Pembuat   : Farid Reza Nurhuda - 24060120140075*/
/*Tanggal   : Selasa, 22 Februari 2023, 17:05*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    float luas; //luas layang-layang
    float kell; //keliling layang-layang
    float s1; //sisi satu layang-layang
    float s2; //sisi dua layang-layang
    float d1; //diagonal satu layang-layang
    float d2; //diagonal dua layang-layang

    /*Algoritma*/
    printf("============PROGRAM MENGHITUNG LUAS DAN KELILING LAYANG-LAYANG============\n");
    printf("\nMasukkan nilai diagonal satu (d1) = ");
    scanf("%f", &d1);
    printf("Diagonal satu (d1) = %.1f meter", d1);
    printf("\n");
    printf("\nMasukkan nilai diagonal dua (d2) = ");
    scanf("%f", &d2);
    printf("Diagonal dua (d2) = %.1f meter", d2);

    luas = 0.5 * d1 * d2; //proses menghitung luas layang-layang

    printf("\n");
    printf("\nHasil luas layang-layang sebesar %.1f meter persegi", luas); //menampilkan hasil luas layang-layang
    printf("\n");

    printf("\nMasukkan nilai sisi satu (s1) = ");
    scanf("%f", &s1);
    printf("Sisi satu (s1) = %.1f meter", s1);
    printf("\n");
    printf("\nMasukkan nilai sisi dua (s2) = ");
    scanf("%f", &s2);
    printf("Sisi dua (s2) = %.1f meter", d2);

    kell = 2 * (s1 + s2); //proses menghitung keliling layang-layang

    printf("\n");
    printf("\nHasil keliling layang-layang sebesar %.1f meter persegi", kell); //menampilkan hasil keliling layang-layang
    printf("\n");

    return 0;
}