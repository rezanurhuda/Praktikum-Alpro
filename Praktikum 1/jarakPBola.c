/*Nama File : jarakGLBB.c*/
/*Deskripsi : Menghitung dan menampilkan gerak parabola terhadap benda*/
/*Pembuat   : Farid Reza Nurhuda - 24060120140075*/
/*Tanggal   : Selasa, 22 Februari 2023, 14:05*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    float v0; //kecepatan awal
    float g = 0.00000000006672; //konstanta gravitasi
    float t; //waktu
    float y; //jarak

    /*Algoritma*/
    printf("============PROGRAM MENGHITUNG GERAK PARABOLA BENDA============");
    printf("\nMasukkan nilai jarak (y) = ");
    scanf("%f", &y);
    printf("Jarak (y) = %.1f meter", y);
    printf("\n");
    printf("\nMasukkan nilai waktu (t) = ");
    scanf("%f", &t);
    printf("Waktu (t) = %.1f detik", t);

    v0 = y / t;
    y = v0 * t - 0.5 * (g * (t * t)); //proses menghitung gerak parabola benda

    printf("\n");
    printf("\nHasil gerak parabola benda sebesar %.1f meter", y); //menampilkan hasil gerak parabola benda

    return 0;
}