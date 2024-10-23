#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int a =5;
	int b =5;
	int c =45;
	int d =90;
	int jumlah;
	int selisih;
	int perkalian;
	int pembagian;
	int modulus;
	int sudut_segitiga;
	
	printf("masukan dua angka dengan dipisahkan tanda koma (a,b) : ");
	scanf("%i,%i", &a, &b);
	printf("masukan dua angka dengan dipisahkan tanda koma(c,d) : ");
	scanf("%i,%i", &c, &d);
	system("cls");
	jumlah = a + b;
	printf("hasil jumlah dari dua angka yang diberikan :%i", jumlah);
	selisih = a - b;
	printf("\nhasil selisih dari dua angka yang diberikan :%i", selisih);
	perkalian = a * b;
	printf("\nhasil perkalian dari dua angka yang diberikan :%i", perkalian);
	pembagian = a / b;
	printf("\nhasil pembagian dari dua angka yang diberikan :%i", pembagian);
	modulus = a % b;
	printf("\nhasil modulus dari dua angka yang diberikan :%i", modulus);
	sudut_segitiga = 180 - c - d;
	printf("\nsudut ketiga dari segitiga:%i", sudut_segitiga);
		
}
