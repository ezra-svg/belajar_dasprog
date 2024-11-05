#include <stdio.h>
#include <stdlib.h>

int main(){
    char nama[40];
    char pil;
    int sisi1, sisi2, sisi3;
    int pertambahan, pengurangan;
    int operatorr;
    char pil2;
    int bilpertama, bilkedua, hasil;
    float harga, jumlah, total_belanjaan, diskon, total_dibayar;
    
	printf("Masukan nama lengkap anda:");
	scanf("%s", nama);
	fflush(stdin);
	system("cls");
	
	printf("=========");
	printf("%s",nama);
	printf("=========");
	
	printf("\n1 : Tebak Segitiga");
	printf("\n2 : Operator");
	printf("\n3 : Kasir");
	printf("\ne : Exit");
	printf("\n");
	
	scanf("%c", &pil);
	fflush(stdin);
	switch(pil){
		case '1':
			system("cls");
			printf("Masukan panjang sisi 1:");
			scanf("%i", &sisi1);
			fflush(stdin);
			printf("Masukan panjang sisi 2:");
			scanf("%i", &sisi2);
			fflush(stdin);
			printf("Masukan panjang sisi 3:");
			scanf("%i", &sisi3);
			fflush(stdin);
			
			if(sisi1==sisi2 && sisi2==sisi3 && sisi3==sisi1){
				printf("\nSegitiga sama sisi");
			}
			else if(sisi1==sisi2 && sisi3){
				printf("\nSegitiga sama kaki");
			}
			if(sisi1 && sisi2 && sisi3);{
				printf("\nSegitiga sembarang");
			}
			break;
		
		case '2':
			system("cls");
			printf("Masukan bilangan pertama    :");
			scanf("%i", &bilpertama);
			fflush(stdin);
			printf("Masukan operator(+, -, *, /):");
			scanf("%c", &pil2);
			switch(pil2){
				case '-' :
					printf("Masukan bilangan kedua      :");
			    	scanf("%i", &bilkedua);
			    	hasil= bilpertama-bilkedua;
					printf("Hasil=%i", hasil);
					break;
				case '+':
					printf("Masukan bilangan kedua      :");
					scanf("%i", &bilkedua);
					hasil= bilpertama + bilkedua;
					printf("Hasil=%i", hasil);
					break;
				case '*':
					printf("Masukan bilangan kedua      :");
					scanf("%i", &bilkedua);
					hasil= bilpertama * bilkedua;
					printf("Hasil=%i", hasil);
					break;
				case '/':
					printf("Masukan bilangan kedua      :");
					scanf("%i", &bilkedua);
					hasil= bilpertama / bilkedua;
					printf("Hasil:%i", hasil);
					break;	
				default:
					printf("none");
					break;
			} 
			break;
		case '3':
			system("cls");
			printf("Masukan harga barang :");
			scanf("%f", &harga);
			printf("Masukan jumlah barang:");
			scanf("%f", &jumlah);
			total_belanjaan= harga * jumlah;
			if (total_belanjaan>10000000 && total_belanjaan<20000000){
				printf("\nAnda mendapatkan diskon 50%%");
				diskon = total_belanjaan * 0.5;
				total_dibayar=total_belanjaan - diskon;
				printf("\nTotal yang harus dibayar:%.2f", total_dibayar);
			}	
				if (total_belanjaan>1000000 && total_belanjaan<10000000){
				printf("\nAnda mendapatkan diskon 30%%");
				diskon= total_belanjaan * 0.3;
				total_dibayar=total_belanjaan- diskon;
				printf("\nTotal yang harus dibayar:%.2f", total_dibayar);	
			}	
				
				 if(total_belanjaan>100000 && total_belanjaan<1000000){
				 	printf("\nAnda mendapatkan diskon 10%%");
					diskon = total_belanjaan * 0.1;
					total_dibayar= total_belanjaan - diskon;
					printf("\nTotal yang harus dibayar:%.2f", total_dibayar);
				}
					
					
					if (total_belanjaan<100000 && total_belanjaan>0 ){
						printf("\nTotal belanjaan:%.2f", total_belanjaan);
					}
					
					
		}	
	}
