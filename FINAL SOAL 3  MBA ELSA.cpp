#include <stdio.h>
#include <stdlib.h>

int main(){
	char jalan2;
	char makan;
	int exit;
	char pil;
	int jumlah_penumpang, jarak, tarif, pajak, total_tarif, pilihan, pesanan, diskon, harga_total;
	char pil2;
	char pil3;
	int total;
	
	printf("#######Selamat datang di Aplikasi Greb#######");
	printf("\nPilih Menu :");
	printf("\n1-> Jalan-jalan ");
	printf("\n2-> Makan");
	printf("\n3-> Exit");
	scanf("\n%i", &exit);
	printf("data tidak valid");

	printf("\n");
	
	scanf("%c", &pil);
	fflush(stdin);
	system("cls");
	switch(pil){
		case'1':
			system("cls");
			printf("###Pilih Kendaraan###");
			printf("\na-> Motor");
			printf("\nb-> Mobil Reguler");
			printf("\nc-> Mobil Large");
			printf("\nd-> Kembali ke Menu");
			printf("\n");
			scanf("%c", &pil2);
			switch(pil2){
			case'a':
			printf("\nPilihan anda Motor");
			printf("\nJumlah penumpang");
			scanf("\n%i", &jumlah_penumpang);
			printf("\nJarak perjalanan(km):");
			scanf("%i", &jarak);
			system("cls");
			printf("======================");
			tarif = jarak * 10000;
			printf("\nTarif perjalanan anda       : %i", tarif );
			printf("\nJumlah penumpang            :%i", jumlah_penumpang);
			pajak = tarif / 10;
			printf("\nPajak (10)                  :%i", pajak);
			total_tarif = tarif + pajak;
			printf("\nTotal tarif perjalanan anda :%i", total_tarif);
			break;
				case'b':
				printf("\nPilihan anda Mobil Reguler");
				printf("\nJumlah penumpang");
				scanf("\n%i", &jumlah_penumpang);
				printf("\nJarak perjalanan(km):");
				scanf("%i", &jarak);
				system("cls");
				printf("======================");
				tarif = jarak * 20000;
				printf("\nTarif perjalanan anda       :%i", tarif );
				printf("\nJumlah penumpang            :%i", jumlah_penumpang);
				pajak = tarif / 10;
				printf("\nPajak (10)                  :%i", pajak);
				total_tarif = tarif + pajak;
				printf("\nTotal tarif perjalanan anda :%i", total_tarif);
				break;
					case'c':
					printf("\nPilihan anda Mobil Large");
					printf("\nJumlah penumpang");
					scanf("\n%i", &jumlah_penumpang);
					printf("\nJarak perjalanan(km):");
					scanf("%i", &jarak);
					system("cls");
					printf("======================");
					tarif = jarak * 30000;
					printf("\nTarif perjalanan anda       :%i", tarif );
					printf("\nJumlah penumpang            :%i", jumlah_penumpang);
					pajak = tarif / 10;
					printf("\nPajak (10)                  :%i", pajak);
					total_tarif = tarif + pajak;
					printf("\nTotal tarif perjalanan anda :%i", total_tarif);
					break;
				}
		case'2':
		system("cls");
		printf("\na-> Nasi Goreng");
		printf("\nb-> Ayam Geprek");
		printf("\nc-> Mie Ayam");
		
		printf("\n-------------------------");
		printf("\nMasukan pilihan anda ");
		scanf("%i", &pilihan);
		scanf("%c", &pil);
		switch(pil){
			case 'c':
			printf("\nMasukan banyak pesanan ");
			scanf("%i", &pesanan);
			printf("\n---------------");
			total = 12000 * pesanan;
			printf("\nTotal pesanan :%i", total);
			diskon = total * 0.05;
			printf("\nDiskon        :%i", diskon);
			pajak = total / 10;
			printf("\nPajak         :%i", pajak);
			harga_total= total + diskon;
			printf("\nHarga total   :%i", harga_total);
			printf("\n---------------");
			break;
			case 'b':
			printf("\nMasukan banyak pesanan ");
			scanf("%i", &pesanan);
			printf("\n---------------");
			total = 18000 * pesanan;
			printf("\nTotal pesanan :%i", total);
			diskon = total * 0.05;
			printf("\nDiskon        :%i", diskon);
			pajak = total / 10;
			printf("\nPajak         :%i", pajak);
			harga_total= total + diskon;
			printf("\nHarga total   :%i", harga_total);
			printf("\n---------------");
			break;
			case 'a':
			printf("\nMasukan banyak pesanan ");
			scanf("%i", &pesanan);
			printf("\n---------------");
			total = 15000 * pesanan;
			printf("\nTotal pesanan :%i", total);
			diskon = total * 0.05;
			printf("\nDiskon        :%i", diskon);
			pajak = total / 10;
			printf("\nPajak         :%i", pajak);
			harga_total= total + diskon;
			printf("\nHarga total   :%i", harga_total);
			printf("\n---------------");
			break;
			
		}
	}
}
