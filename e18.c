/* Algorithme Pgcd
Variable a,b,r;
debut
    ecrire("Entrer un nombre");
    lire(a);
    ecrire("Entre un autre nombre:");
    lire(b);
    tantque (b!=0) faire
         r<-a%b;
        a<-b;
        b<-r;
    fintantque
    afficher("pgcd(a,b)=",a);
fin    
*/

//programme C

#include<stdio.h>

int main ()
{
    int a,b,r;
    printf("Entrer un nombre:");
    scanf("%d",&a);
    printf("Entre un autre nombre:");
    scanf("%d",&b);
    while (b!=0) {
        r=a%b;
        a=b;
        b=r;       
    }
    printf("pgcd(a,b)=%d",a);
    return (0);
}
