#include <stdio.h>

int func(int a[10]) {
    int kontrol=0;
    for(int j=999;j<100;j--){
        for(int i=2;i<j;i++){
        if(j%i==0){break;}
        else {a[kontrol]=j;kontrol++;break;}
    }
    }return 0;
}
int main(){
    int arr[10];
    func(arr[10]);
    for(int i=0;i<10;i++)printf("dizinin %d. elemanı : %d\n",i+1,arr[i]);
}
