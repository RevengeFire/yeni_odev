#include <stdio.h>

int Carp(int a,int b) {
    int eb,ek,toplam=0;
    if(a>b){eb=a;ek=b;}else{eb=b;ek=a;}
    for(int i=0;i<ek;i++)toplam+=eb;
    return toplam;
}
int main(){
    int sayi1,sayi2;
    printf("sayi 1 gir : ");scanf("%d",&sayi1);
    printf("sayi 2 gir : ");scanf("%d",&sayi2);
    printf("%d * %d = %d",sayi1,sayi2,Carp(sayi1,sayi2));
}
