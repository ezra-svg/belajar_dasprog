#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	printf("\tProgram Balik Kata\n");
	char input[11]="aBcdefGhij";
	printf("\nInput 8 karakter:%s", input);
	printf("\nOutput          :");
//	printf("%c", input[10]);
	printf("%c", input[9]-32);
	printf("%c", input[8]-32);
	printf("%c", input[7]-32);
	printf("%c", input[6]+32);
	printf("%c", input[5]-32);
	printf("%c", input[4]-32);
	printf("%c", input[3]-32);
	printf("%c", input[2]-32);
	printf("%c", input[1]+32);
	printf("%c", input[0]-32);
}
