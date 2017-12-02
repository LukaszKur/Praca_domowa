//
// Created by lukasz on 02.12.17.
//
#include <stdio.h>
void decbin(int liczba)
{
    int i=0;
    int tab[31];

    while(liczba) /*dopóki liczba będzie różna od zera*/
    {
        tab[i++]=liczba%2;
        liczba/=2;
    }

    for(int j=i-1;j>=0;j--)
        printf("%i",tab[j]);
}

int main()
{
    int liczba;
    printf("Podaj liczbę: ");
    scanf("%i",&liczba);
    printf("po zamianie na postać binarną:\n ");
    decbin(liczba);
    return 0;
}

