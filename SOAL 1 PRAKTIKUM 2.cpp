#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
    printf("    SELAMAT DATANG DI PROGRAM PENGHITUNG BILLING WARNET\n");
	char nama[16] = "Iwan";
    float lama_penggunaan = 0.25 ;
    float harga_per_jam = 15000;
    float total;

    printf("Nama           : %s\n", nama);
    printf("Lama Penggunaan: %.2f jam\n", lama_penggunaan);
    printf("Harga per Jam  : Rp.%.f\n", harga_per_jam);
    
    total = harga_per_jam * lama_penggunaan;
    printf("Total Biaya    : Rp.%.f.00\n", total);

    
}
