#include<stdio.h>
#include<stdlib.h>

int main(){
	char pil;
	int angkapertama, angkakedua; 
	int perkalian, penjumlahan;
	int exit;
	char pilihan;
	
	printf("*********OPERASI PENJUMLAHAN & PERKALIAN*********");
	printf("\nPilih menu : (ketik salah satu pilihan)");
	printf("\n1. OPERASI PERKALIAN");
	printf("\n2. OPERASI PENJUMLAHAN");
	printf("\n3. EXIT");
	
	printf("\n");
	
	scanf("%c", &pil);
	fflush(stdin);
	system("cls");
	switch(pil){
		case '1':
			system("cls");
			printf("*****OPERASI PERKALIAN*****");
			printf("\n");
			printf("Masukan angka pertama :");
			scanf("%i", &angkapertama);
			printf("Masukan angka kedua   :");
			scanf("%i", &angkakedua);
			perkalian = angkapertama * angkakedua;
			printf("Output perkalianya adalah %i ", angkapertama);
			printf("X %i", angkakedua);
			printf(" hasilnya adalah %i", perkalian);
			printf("\nKembali ke menu(tekan apa saja)");
		break;
		case '2':
			system("cls");
			printf("*****OPERASI PENJUMLAHAN*****");
			printf("\n");
			printf("Masukan angka pertama :");
			scanf("%i", &angkapertama);
			printf("Masukan angka kedua   :");
			scanf("%i", &angkakedua);
			penjumlahan = angkapertama + angkakedua;
			printf("Output penjumlahanya adalah %i +", angkapertama);
			printf(" %i", angkakedua);
			printf(" hasilnya adalah %i", penjumlahan);
			printf("\nKembali ke menu(tekan apa saja)");
			break;
		case '3':
			printf("Data anda tidak valid");
 
			
	}
	
	
}
