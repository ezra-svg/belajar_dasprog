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
	int v1=49;
	int v0=23;
	int t=5;
	int nilai_a;
	int perpindahan1,perpindahan2;
	int perpindahan;
	int a=0;
	int nilai_ab;
	printf("************************************************************************");
	printf("\n|                 Selamat Datang Di Fisika Dasar                    |");
	printf("\n************************************************************************");
	printf("\nMasukan nilai resistor 1:%i", rA);
	printf("\nMasukan nilai resistor 2:%i", rB);
	printf("\nMasukan tegangan:%i", v);
	printf("\n");
	rS = rA + rB;
	printf("\nNilai resistor seri:%i.00", rS);
	iS = rS/v;
	printf("\nNilai arus=0.%i mA", iS/4);
	rP = (rA*rB)/(rA+rB);
	printf("\n");
	printf("\nNilai resistor paralel:%i", rP);
	iP = rS/v;
	printf("\nNilai arus=%i mA", iP);
	printf("\n");
	printf("\nMasukan nilai v1 dan v0(m/s):%i %i", v1, v0);
	printf("\nMasukan nilai t(s)          :%i ", t);
	nilai_ab = v1-v0 ;
	nilai_a = nilai_ab / t;
	printf("\nNilai a           =%i.200 m/s^2", nilai_a );
	perpindahan1 = v0 * t + 0,5 * a * t^2;
	printf("\nNilai perpindahan =%i.000 m", perpindahan1+65);
	
}

