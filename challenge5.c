/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cmp=0;
    char t[100];
    printf("saisie ton nom  :");
    scanf("%s",t);
    printf("votre nom est :  %s",t);

        while(t[cmp]!='\0')
        {
             cmp++;
        }


printf("le nbr de caractere est %d:",cmp);

    return 0;
}*/#include <stdio.h>
#include <stdlib.h>

int main() {
    int cmp = 0;
    char t[100];

    printf("Saisissez votre nom : ");
    scanf("%s", t);

    printf("Votre nom est : %s\n", t);

    for (int i= 0; t[i] != '\0'; i++) {
            cmp++;
        // La boucle for compte les caractères jusqu'à '\0'
    }

    printf("Le nombre de caractères est : %d\n", cmp);

    return 0;
}






