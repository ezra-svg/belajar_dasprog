#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	char nama[10];
	char tujuan_keberangkatan[15];
	int tanggal, bulan, tahun;
	int jumlah_penumpang;
	int harga_tiket;
	char pilihan;
	do{
	printf("==========================");
	printf("\n=Pesanan Tiket Kereta Api=");
	printf("\n==========================");
	/////     HALAMAN AWAL   ////
	
	printf("\nMasukan data diri Anda");
	printf("\nNama :");
    scanf("%s", nama);
    printf("Tujuan keberangkatan :");
    scanf("%s", tujuan_keberangkatan);
    printf("Tanggal keberangkatan :");
    scanf("%i %i %i", &tanggal, &bulan, &tahun);
    printf("Jumlah penumpang :");
    scanf("%i", &jumlah_penumpang);
    /////     HALAMAN AKHIR   ////
	    system("cls");
	printf("\n==================================================================");
    printf("\n                Tiket Anda Berhasil Diproses");
    printf("\n                Tujuan :%s",tujuan_keberangkatan);
    printf("\n                Tanggal keberangkatan:%i", tanggal);
    printf("/%i",bulan);
    printf("/%i",tahun);
    printf("\n                Jumlah penumpang:%i", jumlah_penumpang);
    harga_tiket= jumlah_penumpang * 150000;
	printf("\n                Harga Tiket :Rp.%i",harga_tiket);
	printf("\n==================================================================");
	printf("\n");
	printf("\nkembali(ketik huruf sembarang)");
	scanf(" %c", &pilihan);
	system("cls");
   } while (pilihan !='iwan');
   
}

