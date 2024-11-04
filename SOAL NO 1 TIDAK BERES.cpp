#include<stdio.h>

int main()
{
    char nama[40];
    int exit;
    int tebak_segitiga;
	printf("Masukan nama lengkap anda:");
	scanf("%s", &nama);
	printf("=========");
	printf("%s",nama);
	printf("=========");
	printf("\n1 : Tebak Segitiga");
	printf("\n2 : Operator");
	printf("\n3 : Kasir");
	printf("\ne : Exit");
	scanf("%i", &exit);
	if (exit==5)
	{
		printf("\nkeluar");
	} 
	printf("\n============");
if (tebak_segitiga==4 , 2 , 2)
	{
		printf("\nMasukan panjang sisi 1:");
		scanf("%i", &tebak_segitiga);
		printf("\nMasukan panjang sisi 2:");
		scanf("%i", &tebak_segitiga);
		printf("\nMasukan panjang sisi 3:");
		scanf("%i", &tebak_segitiga);
		printf("\nSegitiga ini adalah segitiga sama kaki");
	}
	else (tebak_segitiga== 3,3,3);
	{
		printf("\nMasukan panjang sisi 1:");
		scanf("%i", &tebak_segitiga);
		printf("\nMasukan panjang sisi 2:");
		scanf("%i", &tebak_segitiga);
		printf("\nMasukan panjang sisi 3:");
		scanf("%i", &tebak_segitiga);
		printf("\nSegitiga ini adalah segitiga sama sisi");
	}   
	if (tebak_segitiga== 2,3,4);
	{
		printf("\nMasukan panjang sisi 1:");
		scanf("%i", &tebak_segitiga);
		printf("\nMasukan panjang sisi 2:");
		scanf("%i", &tebak_segitiga);
		printf("\nMasukan panjang sisi 3:");
		scanf("%i", &tebak_segitiga);
		printf("\nSegitiga ini adalah segitiga sembarang");
	  }  
}
