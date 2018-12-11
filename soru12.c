#include <stdio.h>

int func(int a,int b) {
    int eb,ek;
    if(a>b){eb=a;ek=b;}else{eb=b;ek=a;}
    for(int j=ek;j<eb;j++){
        for(int i=2;i<j;i++){
        if(j%i==0){break;}
        else {printf("%d\n",j);break;}
    }
    }
}
int main(){
    int sayi1,sayi2;
    printf("ilk sayi : ");scanf("%d",&sayi1);
    printf("ikinci sayi : ");scanf("%d",&sayi2);
    func(sayi1,sayi2);
}
