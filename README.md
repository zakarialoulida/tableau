#include <stdio.h>
#include <stdlib.h>
int saisie(){
printf("entrer le nbr d'etudiant ");
int a;
scanf("%d",&a);
return a;
}
int main()
{
    int nbr=saisie()-1;
   // printf("%d",nbr);
    float tab1[nbr];
    float s=0;
    for(int i=0;i<=nbr;i++) {
    printf("Entrer la note d' etudiant tab1[%d]",i+1);
    scanf("%f",&tab1[i]);
    s=s+tab1[i];
    }
    printf("%f",s);
    float moy=(s/(nbr+1));
    printf("la moyenne est:%.2f",moy);


    return 0;
}
