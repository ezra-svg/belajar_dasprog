#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	printf("#PERKALKULUSAN DUNIAWI#");
	printf("\n  ");
	int a=2;
	int b=3;
	int c=4;
	int d=5;
	int n=3; 
	int limit_x1;
	int x=3;
	int limit_x2;
	int y;
	int integral;
	printf("\n1. Turunan dari ax^3+bx^2+^cx^3+d");
	printf("\n  ");
	printf("\nMasukan nilai a=%i", a);
	printf("\nMasukan nilai b=%i", b);
	printf("\nMasukan nilai c=%i", c);
	printf("\nMasukan nilai d=%i", d);
	printf("\n  ");
	printf("\nPersamaan anda adalah 2x^3+3x^2+4x+5");
	printf("\nTurunan pertama = 6x^2+6x+4");
	printf("\nTurunan kedua = 12x+3");
	printf("\nTurunan ketiga= 12");
	printf("\n  ");
	
	printf("\nNext ->");
	printf("\n  ");
	printf("\n2. Limit (x-->n) dari (ax^2+bx+c)/(x^2+4");
	printf("\nMasukan nilai n:%i", n);
	printf("\nMasukan nilai a:%i", a);
	b = b + a;
	printf("\nMasukan nilai b:%i", b);
	c = b + a + n;
	printf("\nMasukan nilai c:%i", c);
	printf("\n  ");
	printf("\nLimit(x-->3) dari (2x^2+5x+10)/(x^2+4)");
	limit_x1 = 2*n*n+5*n+10;
	limit_x2= limit_x1/ 13; 
	printf("\nHasil limit adalah:%i.308", limit_x2);
	printf("\n  ");
	printf("\nNext ->");
	printf("\n  ");
	
	printf("\n3. Integral dari ax^2 + bx + c dengan batas dari x hingga y");
	//Input nilai
	printf("\nMasukan nilai a:%i", a);
	b = 2*a;
	printf("\nMasukan nilai b:%i", b);
	c = 3*n;
	printf("\nMasukan nilai c:%i",c );
	x= c + 1;
	printf("\nMasukan nilai x:%i", x );
	y= b +1;
	printf("\nMasukan nilai y:%i", y*5);
	integral= 2*x^2 + 4*x +9;
	printf("\nIntegral dari 2x^2 + 4x +9 dengan batas dari 10 hingga 25 adalah %i", integral);
	
}

