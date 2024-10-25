#include<stdio.h>
#include<conio.h>

void operasi_pemdas();
void operasi_sifat();
int a,b,c,x, y;
	
int main(){
	int a=3;
	int b=4;
	int c=5;
	printf("selamat datang di matematika ilmu menyenangkan\n");
	printf("nilai a=%i, b=%i dan c=%i\n\n", a, b, c);
	operasi_pemdas();
	operasi_sifat();
	
	return 0;
}
void operasi_pemdas(){
	int a=3;
	int b=4;
	int c=5;
	x = a+b+c;
	printf("hasil penjumlahan adalah %i", x);
	x = a-b-c;
	printf("\nhasil pengurangan adalah %i", x);
	x = a*b*c;
	printf("\nhasil perkalian adalah %i", x);
}
void operasi_sifat(){
	int a=3;
	int b=4;
	int c=5;
	x= a+b+c;
	y= a+b+c;
	printf("\nhasil operasi sifat asosiatif adalah %i dan %i\n", x,y);
	x=a*(b+c);
	y=(a*b)+(a*c);
	printf("hasil operasi sifat distributif adalah %i dan %i\n", x,y);
}
