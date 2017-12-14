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
        printf("\n");
}
void bindec(int i)
{   int w=0;
    int tab[i];
    for (int j = 0; j <i; ++j)
    {
        int a;
        printf("Podaj element tablicy: \n");
        scanf("%i",&a);
        tab[j]=a;
    }
    for (int j= 0; j<i ; ++j)
    {
        int a;
        a=tab[j];
        w=(w+w)+a;
    }
    printf("Podana liczba binarna dziesietnie to: %i",w);
}

int main()
{
    int liczba,i;
    printf("Podaj liczbę: \n");
    scanf("%i",&liczba);
    printf("po zamianie na postać binarną:\n ");
    decbin(liczba);
    printf("Podaj ilość elementów binarnych: \n");
    scanf("%i",&i);
    bindec(i);


    return 0;
}

