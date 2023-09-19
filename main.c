#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char t[]={"Quel sinistre mot !"};
    int i=0;
    while(t[i]!='m')
       {
        i++;
       }
printf("[%d]=%c\n",i+1,t[i]);
int j=0;
while(t[j]!='s')
       {
        j++;
       }
       printf("[%d]=%c\n",j+1,t[j]);
       char cmd;
       cmd=t[i];
    t[i]=t[j];
    t[j]=cmd;
   // for(int i=0;t[i]!=\0;i++){
        printf("%s\n",t);
        char lettre;


    printf("entrer une lettre:\n");
        scanf("%c",&lettre);//gets(c);
          printf("%c",lettre);
       /* while(t[i]==)
       {
        i++;
       }
       printf("[%d]=%c\n",i+1,t[i]);*/
       int a=-1,k =0;
        for(k=0;k<20;k++){

        if (t[k]==lettre)
            a=k;
            }
if(a!=-1)
            printf("%d",a);

    return 0;
}
