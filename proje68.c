#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int sayi,ters;
	
	printf("Sayi Girin: ");
	scanf("%d",&sayi);
	
	
	while(sayi!=0)
	{
		ters=ters*10;
		ters=ters+sayi%10;
		sayi=sayi/10;
	}
	
	printf("Girdiginiz Sayinin Tersi: %d",ters);
	
	
	
	
	
	//int sayi,toplam=0,kalan;
	
	//printf("Sayi Girin: ");
	//scanf("%d",&sayi);
	
	//while(sayi!=0)
	//{
		//kalan=sayi%10;
		//toplam=toplam+kalan;
		//sayi=sayi/10;
	//}
	
	
	//printf("Basamaklar Toplami: %d",toplam);
	
	return 0;
}
