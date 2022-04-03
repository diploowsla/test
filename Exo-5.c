/*
Ecrire une fonction qui compte le nombre d’occurrences d’un caractère
dans un tableau, c’est à dire le nombre de fois où un élément apparaît
dans un tableau de caractères. Le caractère recherché et le tableau
seront les deux paramètres de la fonction.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char T[100], myChar;
    int findTaille(char T[]);
    int findInTableOccurence(char T[], char car);
    void saisis_chaine(char T[]);
    char saisis_char(void);
    saisis_chaine(T);
    myChar = saisis_char();
    printf("%d \n", findInTableOccurence(T, myChar));
    return 0;
}

int findInTableOccurence(char T[], char car)
{
    int findTaille(char T[]);
    int n = findTaille(T), count = 0;
    for (int i = 0; i < n; i++)
    {
        if (T[i] == car)
            count++;
    }
    return count;
}

int findTaille(char T[])
{
    int i = 0;
    while (T[i] != '\0')
        i++;
    return i;
}

void saisis_chaine(char T[])
{
    printf("Entrez votre mot !\n");
    printf("mot : ");
    scanf("%s", T);
}

char saisis_char(void)
{
    char S;
    printf("Entrez votre charactere A!\n");
    printf("A : ");
    scanf("%c", &S);
    return S;
}