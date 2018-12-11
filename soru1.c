#include <stdio.h>

int ebob(int ilksayi, int ikincisayi) {
	int x, obeb;
	if (ilksayi > ikincisayi) x = ilksayi; else x = ikincisayi;
	for (int i = x; i >= 1; i--)
	{
		if ((ilksayi%i == 0) && (ikincisayi%i == 0)) { obeb = i; break; } else continue;
	}
	return obeb;
}

int main(){
    int sayi1,sayi2;
    printf("ilk sayi: ");scanf("%d",&sayi1);
    printf("ikinci sayi: ");scanf("%d",&sayi2);
    printf("EBOB(%d,%d) = %d",sayi1,sayi2,ebob(sayi1,sayi2));
}
