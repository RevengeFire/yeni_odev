#include <stdio.h>

float func(float x) {
    if(x<0)x=(-1)*x;
    return x;
}
int main(){
    float sayi;
    printf("float deger giriniz: ");scanf("%f",&sayi);
    printf("MUTLAK(%.2f)=%.2f",sayi,func(sayi));
}
