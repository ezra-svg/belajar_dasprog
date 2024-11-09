#include<stdio.h>
#include<stdlib.h>

int main(){
	char input[11];
	int nilaia, nilaib, nilaic, nilaid, nilaie;
	char pil;
	
	
	printf("Menu  :");
	printf("\na. Konversi abjad");
	printf("\nb. Hitung Nilai Siswa");
	printf("\n");
	
	scanf("%c", &pil);
	fflush(stdin);
	system("cls");
	switch(pil){
		case'a':
			system("cls");
			printf("Masukan 8 Huruf");
			scanf(" %c", input);
			printf("\nOuput ");
			printf("%c", input[7]-32);
			printf("%c", input[6]+32);
			printf("%c", input[5]-32);
			printf("%c", input[4]-32);
			printf("%c", input[3]-32);
			printf("%c", input[2]-32);
			printf("%c", input[1]+32);
			printf("%c", input[0]-32);
		break;
		case 'b':
		system ("cls");
		printf("Data nilai ujian matematikan(0-100, kkm :75)");
		printf("\nMasukan nilai murid A :");
		scanf("%i", &nilaia);
		printf("\nMasukan nilai murid B :");
		scanf("%i", &nilaib);
		printf("\nMasukan nilai murid C :");
		scanf("%i", &nilaic);
		printf("\nMasukan nilai murid D :");
		scanf("%i", &nilaid);
		printf("\nMasukan nilai murid E :");
		scanf("%i", &nilaie);
		if(nilaia>=0 && nilaia <=100)
	{
		if(nilaia<=80)
		{
			if(nilaia<=60)
			{
				if(nilaia<=40)
				{
					printf("\nA anda tidak lulus");
				}
				else
				{
					printf("\nA anda remidi");
				}
			}
			else
			{
				printf("\nA anda pintar");
			}
		}
		else
		{
			printf("\nA anda sangat pintar");
		}
	}
	else 
	{
		printf("\nA nilai yang anda masukan ngawur");
	
	}
	if(nilaib>=0 && nilaib <=100)
	{
		if(nilaib<=80)
		{
			if(nilaib<=60)
			{
				if(nilaib<=40)
				{
					printf("\nB anda tidak lulus");
				}
				else
				{
					printf("\nB anda remidi");
				}
			}
			else
			{
				printf("\nB anda pintar");
			}
		}
		else
		{
			printf("\nB anda sangat pintar");
		}
	}
	else 
	{
		printf("\nB nilai yang anda masukan ngawur");
	}
	
	if(nilaic>=0 && nilaic <=100)
	{
		if(nilaic<=80)
		{
			if(nilaic<=60)
			{
				if(nilaic<=40)
				{
					printf("\nC anda tidak lulus");
				}
				else
				{
					printf("\nC anda remidi");
				}
			}
			else
			{
				printf("\nC anda pintar");
			}
		}
		else
		{
			printf("\nC anda sangat pintar");
		}
	}
	else 
	{
		printf("\nC nilai yang anda masukan ngawur");
	}
	if(nilaid>=0 && nilaid <=100)
	{
		if(nilaid<=80)
		{
			if(nilaid<=60)
			{
				if(nilaid<=40)
				{
					printf("\nD anda tidak lulus");
				}
				else
				{
					printf("\nD anda remidi");
				}
			}
			else
			{
				printf("\nD anda pintar");
			}
		}
		else
		{
			printf("\nD anda sangat pintar");
		}
	}
	else 
	{
		printf("\nD nilai yang anda masukan ngawur");
	}
	if(nilaie>=0 && nilaie <=100)
	{
		if(nilaie<=80)
		{
			if(nilaie<=60)
			{
				if(nilaie<=40)
				{
					printf("\nE anda tidak lulus");
				}
				else
				{
					printf("\nE anda remidi");
				}
			}
			else
			{
				printf("\nE anda pintar");
			}
		}
		else
		{
			printf("\nE anda sangat pintar");
		}
	}
	else 
	{
		printf("\nE nilai yang anda masukan ngawur");
	}
	
	}
	
}
