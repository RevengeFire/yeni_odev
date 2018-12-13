#include <stdio.h>

int main()
{
    int i, j, k = 0, sayac=0, dizi[10];
    for (i = 100; i < 999; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i%j == 0)
                k++;
        }
        if (k == 2)
        {
            k = i;
            if(sayac<10) dizi[sayac]=k;sayac++;
        }
        k = 0;
    }
    for(i=0;i<10;i++)printf("%d. indisi --> %d\n",i+1,dizi[i]);
}
