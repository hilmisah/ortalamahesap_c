#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int s1,s2,ort;
	printf("Lutfen ilk sinavinizi giriniz!:  ");
	scanf("%d",&s1);
	printf("\n");
	
	printf("Lutfen ikinci sinavi giriniz!: ");
	scanf("%d",&s2);
	printf("\n");
	
	ort=(s1*40/100)+(s2*60/100);
	printf("Not ortalamaniz %d 'dir. ", ort);
	printf("\n");
	
	if(ort<=50)
	{
		printf("SINIF TERKRAR!");
	}	
	else
	{
		printf("TEBRIKLER GECTIN!");
	}

	
	
	
	
	
	return 0;
}
