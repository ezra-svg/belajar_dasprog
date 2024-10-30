#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	char nama[10];
	char tujuan_keberangkatan[15];
	int tanggal, bulan, tahun;
	int jumlah_penumpang;
	int harga_tiket;
	printf("=====================");
	printf("\n=Pesanan Tiket Kereta Api=");
	printf("\n=====================");
	printf("\nMasukan data diri Anda");
	printf("\nNama :");
    scanf("%s", nama);
    printf("Tujuan keberangkatan :");
    scanf("%s", tujuan_keberangkatan);
    printf("Tanggal keberangkatan :");
    scanf("%i %i %i", &tanggal, &bulan, &tahun);
    printf("Jumlah penumpang :");
    scanf("%i", &jumlah_penumpang);
    system("cls");
    printf("=====================");
    printf("\nTiket Anda Berhasil Diproses");
    printf("\nTujuan :%s", tujuan_keberangkatan);
    printf("\nTanggal keberangkatan: %i", tanggal);
    printf("/%i",bulan);
    printf("/%i",tahun);
    printf("\nJumlah penumpang:%i", jumlah_penumpang);
    harga_tiket= jumlah_penumpang * 150000;
	printf("\nHarga Tiket :Rp.%i",harga_tiket);
	printf("\n=====================");
	printf("\nkembali(ketik huruf sembarang)");
	printf("\\n=====================");
	printf("\n=Pesanan Tiket Kereta Api=");
	printf("\n=====================");
	printf("\nMasukan data diri Anda");
	printf("\nNama :");
	
}
