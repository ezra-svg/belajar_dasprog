#include<stdio.h>
#include<stdlib.h>

int main()
{
	char nama[14];
	int gaji;
	int lama_bekerja;
	int pendapatan_total;
	
	
	printf("masukan nama anda : ");
	scanf("%s", &nama );
	printf("gaji(juta) : ");
	scanf("%i", &gaji);
	printf("lama_bekerja(bulan) : ");
	scanf("%i", &lama_bekerja  );
	pendapatan_total = gaji * lama_bekerja;
	system("cls");
	printf("nama :%s",nama );
	printf("\ngaji :%i(juta)", gaji);
	printf("\npendapatan_total :%i(juta)", pendapatan_total);          
}
