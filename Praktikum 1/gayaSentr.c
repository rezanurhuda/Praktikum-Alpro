/*Nama File : gayaSentr.c*/
/*Deskripsi : Menghitung dan menampilkan gaya sentripetal terhadap benda*/
/*Pembuat   : Farid Reza Nurhuda - 24060120140075*/
/*Tanggal   : Selasa, 22 Februari 2023, 15:05*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    float v; //kecepatan
    float m; //massa
    float r; //jari-jari
    float s; //jarak
    float t; //waktu
    float F; //gaya

    /*Algoritma*/
    printf("============PROGRAM MENGHITUNG GAYA SENTRIPETAL BENDA============\n");
    printf("\nMasukkan nilai jarak (s) = ");
    scanf("%f", &s);
    printf("Jarak (s) = %.1f meter", s);
    printf("\n");
    printf("\nMasukkan nilai waktu (t) = ");
    scanf("%f", &t);
    printf("Waktu (t) = %.1f detik", t);
    printf("\n");
    printf("\nMasukkan nilai massa (m) = ");
    scanf("%f", &m);
    printf("Massa (m) = %.1f kg", m);
    printf("\n");
    printf("\nMasukkan nilai jari-jari (r) = ");
    scanf("%f", &r);
    printf("Jari-jari (r) = %.1f meter", r);

    v = s / t;
    F = m * ((v * v) / r); //proses menghitung gaya sentripetal benda

    printf("\n");
    printf("\nHasil gaya sentripetal benda sebesar %.1f Newton", F); //menampilkan hasil gaya sentripetal benda

    return 0;
}