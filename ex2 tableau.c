#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10];
    for(int i=0 ;i<10;i++){
        printf("veuillez entrer la valeur de T[%d]:",i+1);
        scanf("%d",&T[i]);
    };
    for(int i=0 ;i<10;i++){
            T[i]=0;
        printf(" la valeur de T[%d] est =%d:\n",i+1,T[i]);


    }
    return 0;
}
