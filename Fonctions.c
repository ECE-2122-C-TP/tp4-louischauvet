//
// Created by Louis on 27/09/2021.
//
#include<stdio.h>
int getMax (int x, int y)   {       /*retourne le plus grand entre 2 entiers*/
    return(x>y) ? x : y ;
}

int saisir_un_entier()  {
    int n;
    printf("saisir un entier\n");
    scanf("%d",&n);
    return(n);
}

int calculAire(int longueur, int largeur)   {
    int Aire= longueur*largeur;
    return(Aire);
}

int calculPerimetre(int longueur, int largeur) {
    int P= 2*longueur+2*largeur;
    return(P);
}

int multiple(int a, int b)  {       /*test multiple*/
    if(a%b==0){
        return(1);
    }
    else    {
        return(0);
    }
}

int nombreClasses(int classe) {     /*fonction qui compte le nombre de classe*/
    int i, total=0, nombreEleve=0;
    for (i = 0; i < classe; i++) {
        printf("Nombre d'eleves pour la classe %d ?\n", i + 1);
        scanf("%d", &nombreEleve);
        total = nombreEleve + total;
    }
    return(total);
}

int multiple_2_et_7(int a)  {       /*test si multiple de 2 et 7*/
    if(a%7==0 && a%2==0)    {
        return(1);
    }
    else    {
        return(0);
    }
}

int etage(int pierres)  {       /*fonction qui compte les étages*/
    int etages=0, i=1, comptagePierres=0;
    do{
        comptagePierres=comptagePierres + i*i;      /*suite numérique modélisant le nombre de pierre nécessaire pour un étage*/
        i=i+1;
        if(comptagePierres<=pierres)
            etages = etages + 1;
        else if (comptagePierres > pierres)
            break;
    }
    while (comptagePierres < pierres);
    return(etages);
}

float moyenne(int a, int b, int c)      {       /*moyenne de 3 notes*/
    if ((0<=a && a<=20) && (0<=b  && b<=20) && (0<=c && c<=20)) {
        return ((float) (a+b+c)/3);
    }
    else    {
        return(-1);
    }
}

float moyenne_bis(int x) {      /*moyenne de toutes les notes saisies, jusqu'a saisi d'une note négative*/
    int i=0, resultat=0;
    do {
        x=saisir_un_entier();
        if(x>=0)    {
            resultat = resultat + x;
            i = i + 1;  }
        else    {
            break;
        }
    }
    while(x>=0);
    return(resultat/i);
}