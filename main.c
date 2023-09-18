#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t[]={"Quel sinistre mot !"};
    int i=0;
    while(t[i]!='m')
       {
        i++;
       }
printf("[%d]=%c\n",i,t[i]);
int j=0;
while(t[j]!='s')
       {
        j++;
       }
       printf("[%d]=%c\n",j,t[j]);
       char cmd;
       cmd=t[i];
    t[i]=t[j];
    t[j]=cmd;
   // for(int i=0;t[i]!=\0;i++){
        printf("%s",t);
        char lettre,


        printf("entrer une lettre");
        scanf("%s",&lettre);
        for(int k=0;t!=0;k++){
        if (t==lettre)
            {printf("sa postion %d",k);
            break;}
            else
         {printf("elle est absente");}}

    return 0;
}
