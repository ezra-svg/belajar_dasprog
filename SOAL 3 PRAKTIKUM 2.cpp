#include<stdio.h>
#include<stdlib.h>

int main(){
	int tanggal, bulan, tahun_sekarang;
	int tanggal_lahir;
	int bulan_lahir;
	int tahun_lahir;
	int a;
	int b;
	int c;
	int d;
	int e;
	
	printf("***********************************");
	printf("\n|SELAMAT DATANG DI KALKULATOR WAKTU");
	printf("\n***********************************");
	
	printf("\nMasukan tanggal,bulan dan tahun saat ini(dd MM YYYY): ");
	scanf("%i %i %i",  &tanggal, &bulan, &tahun_sekarang);
	printf("\nBulan dan tahun sekarang: tanggal %i Bulan %i Tahun %i ", tanggal , bulan , tahun_sekarang);
	printf("\nMasukan tanggal,bulan dan tahun lahir (dd MM YYYY): ");
	scanf("%i %i %i", &tanggal_lahir, &bulan_lahir, &tahun_lahir);
	a = (tahun_sekarang*360)+(bulan*30)+tanggal;
	b = (tahun_lahir*360)+(bulan_lahir*30)+tanggal_lahir;
	c = a - b;
	d = 270/30;
	e = 270- d*30;
	printf("Umur Anda :%i Tahun, %i Bulan, %i Hari", c/360,d,e );
}
