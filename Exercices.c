//
// Created by Louis on 27/09/2021.
//
#include <stdio.h>
#include "Fonctions.h"

void exercice1 () {         /*appelle la fonction getMax et renvoie le nombre le plus grand*/
    int x, y, z;
    printf("saisir une valeur pour x\n");
    scanf("%d", &x);
    printf("saisir une valeur pour y\n");
    scanf("%d", &y);
    z=getMax(x, y);
    printf("%d est le plus grand", z);
}

void exercice2()    {       /*permet de saisir un entier*/
    int n;
    n=saisir_un_entier();
    printf("Votre entier = %d", n);
}

void exercice3()    {       /*calcul l'air d'un rectangle*/
    int longueur, largeur, A;
    printf("saisir une longueur et une largeur\n");
    scanf("%d \n %d", &longueur, &largeur);
    A= calculAire(longueur, largeur);
    printf("Aire = %d", A);
}

void exercice3_2()  {       /*calcul un périmètre*/
    int longueur, largeur, P;
    printf("saisir une longueur et une largeur\n");
    scanf("%d \n %d", &longueur, &largeur);
    P= calculPerimetre(longueur, largeur);
    printf("Perimetre= %d", P);
}

#define le_chiffre 10
void exercice4() {      /*vérifie si a multiple de b*/
    int a, b, c;
    a = saisir_un_entier();
    b = saisir_un_entier();
    c = multiple(a, b);
    if (c == 1) {
        printf("%d multiple de %d", a, b);
    } else {
        printf("%d n'est pas multiple de %d", a, b);
    }
}

void exercice4_2() {        /*test mutiple et si superieure ou egale à 10*/
    int a, c;
    a=saisir_un_entier();
    c = multiple(a, 3);
    if (c == 1 && a >= le_chiffre) {
        printf("%d est multiple de 3 et est superieur ou egale a 10", a);
    }
    else if(c == 1 && a<le_chiffre) {
        printf("%d est multiple de 3 et n'est pas superieur ou egale a 10",a);
    }
    else    {
        printf("%d n'est pas multiple de 3");
    }
}

void exercice5()        {       /*donne la moyenne de 3 notes*/
    int a,b,c,r=0;
    a=saisir_un_entier();
    b=saisir_un_entier();
    c=saisir_un_entier();
    r=moyenne(a,b,c);
    printf("moyenne des 3 notes = %d", r);
}

void exercice5_1()  {       /*Renvoi le nombre d'eleves dans une ecole*/
    int c=0, d=0;
    c=saisir_un_entier();
    d= nombreClasses(c);
    printf("Nombre d'eleves dans l'ecole = %d",d);
}

void exercice5_2()   {          /*verifie si un entier est multiple de 2 et 7*/
    int a,b;
    a= saisir_un_entier();
    b= multiple_2_et_7(a);
        do {
                printf("saisissez un nombre multiple de 2 et 7\n");
                a=saisir_un_entier();
                b= multiple_2_et_7(a);
            }
        while(b==0);
    printf("%d est multiple de 2 et 7", a);
    }

void exercice5_3()     {        /*donne le nombre d'etages en fonction du nombre de pierres disponibles*/
    int a, nbEtage=0;
    a = saisir_un_entier();
    nbEtage= etage(a);
    printf("vous pourrez contruire une tour de %d etages", nbEtage);
}

void exercice5_4()      {       /*donne une moyenne, l'entree des notes est stoppée lors d'une saisie d'une valeur negative*/
    int x;
    float moyenne=0.0f;
    printf("pour stopper la saisie des notes, entrez une valeur négative\n");
    moyenne= moyenne_bis(x);
    printf("moyenne des notes = %f", moyenne);

}