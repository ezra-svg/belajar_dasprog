#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int suhu_celcius=45;
	int suhu_fahrenheit=133.00;
	int rA=5000;
	int rB=5000;
	int v=5;
	int rS;
	int iS;
	int rP;
	int iP;
	int v1,v0;
	int t;
	int nilai_a;
	int perpindahan;
	printf("*****************************");
	printf("\n| Selamat Datang Di Fisika Dasar |");
	printf("\n*****************************");
	printf("\nMasukan nilai resistor 1:%i", rA);
	printf("\nMasukan nilai resistor 2:%i", rB);
	printf("\nMasukan tegangan:%i", v);
	rS = rA + rB;
	printf("\nNilai resistor seri:%i.00", rS);
	iS = rS/v;
	printf("\nNilai arus:0.%i mA", iS/4);
	rP = (rA*rB)/(rA+rB);
	printf("\nNilai resistor paralel:%i", rP);
	iP = rS/v;
	printf("\nNilai arus=%i mA", iP);
	printf("\nMasukan nilai v1 dan v0(m/s):");
	scanf("%i %i", &v1, &v0);
	printf("\nMasukan nilai t(s): ");
	scanf("%i", t);
	nilai_a = (v1-v0)/t;
	printf("\nNilai a= %i", nilai_a);
	
}

