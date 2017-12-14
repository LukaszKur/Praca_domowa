OPERACJE  WEJŚCIA / WYJŚCIA
===

Funkcja: **printf()** 
---
<p> 
wysyła sformatowane dane do standardowego strumienia wyjściowego (stdout)

__int   printf__( tekst_sterujący , argument_1 , argument_2 ,  . . .  ) ;

_*tekst sterujący*_ - jest to stała łańcuchowa (w cudzysłowach) zawierająca:  
  -zwykłe znaki (które są po prostu kopiowane na ekran)</p>
<p>  -kody formatujące kolejnych argumentów:</p>  

Tekst     |
sterujacy |Opis                                              
:--------:|------------------------------------------------------------
**%c**    | − pojedynczy znak                                
**%s**    | − łańcuch znaków                                 
**%d**    | − liczba dziesiętna ze znakiem                   
**%f**    | − liczba zmiennoprzecinkowa (notacja dziesiętna) 
**%e**    | − liczba zmiennoprzecinkowa (notacja wykładnicza)
**%g**    | − liczba zmiennoprzecinkowa (krótszy z formatów **%f %e**)
**%u**    | − liczba dziesiętna bez znaku 
**%x**    | − liczba w kodzie szesnastkowym (bez znaku) 
**%o**    | − liczba w kodzie ósemkowym (bez znaku) 
**1**     | − przedrostek (long) stosowany przed:  **d  u  x  o**

*przykład:*
 ```
#include <stdio.h>  
int main( ) 
{   
	**int** x = 10;   
	**long** y = 20;   
	**double** s;   
	s = x + y; 
	**printf** ( ”%s obliczen %d + %ld = %f”  ,  ”Wynik”  ,  x  ,  y  ,  s  );  
}
```
<p>
efekt na ekranie - **Wynik obliczen 10 + 20 = 30.000000** 
Aby określić ilość drukowanych cyfr do kodu formatującego można dodać kody długości:   %**X**d     %**X.X**f 
</p>
Przykład |Opis|
:-------:|------------------------------------------------------------
%4d      | − liczba dziesiętna na czterech pozycjach                  
%10f     | − liczba rzeczywista na 10 pozycjach                       
%10.2f   | − liczba rzeczywista na 10 pozycjach, 2 cyfry po przecinku 


Funkcja: **scanf()**
---
<p>
odczytuje dane ze standardowego strumienia wejściowego (stdin) w/g zadanego formatu i zapamiętuje je pod zadanymi adresami pamięci 
 
**int   scanf** ( tekst_sterujący , adres_1 , adres_2 ,  . . .  ) ; 

_*tekst sterujący*_ - jest to stała łańcuchowa (w podwójnych cudzysłowach) zawierająca polecenia jak traktować kolejne dane wczytywane ze strumienia (jakie typy zmiennych są pod adresami adres_1, adres_2, ... ) 
</p>
Kody formatujące (podobne jak dla **printf()** ): 
|Parametr|Opis|
|:----:|----------|
|**%c**| − pojedynczy znak |
|**%s**| − łańcuch znaków |
|**%d**| − liczba dziesiętna ze znakiem |
|**%f**  lub  **%e**| − liczba zmiennoprzecinkowa |
|**%u**| − liczba dziesiętna bez znaku |
|**%x**| − liczba w kodzie szesnastkowym (bez znaku) |
|**%o**| − liczba w kodzie ósemkowym (bez znaku) |
|**1**| − przedrostek stosowany przed:  **d  u  x  o**  (long int) |
|**1**| − przedrostek stosowany przed:  **f  e**  (double) 
|**L**| − przedrostek stosowany przed:  **f  e**  (long double) |

**&**  −   operator adresowania (zwraca adres zmiennej podanej po operatorze) 

_przykład:_
```
>#include <stdio.h>  
>int main( ) 
>{   
>	**int** x;   
>	**double** y;   
>	**char** znak;   
>	**printf**( ”Podaj jedna liczbe calkowita: ” );   
>	**scanf**( ”%d”  ,  &x  );   
>	**printf**( ”Podaj jedna liczbe rzeczywista i jeden znak: ”);   
>	**scanf**( ”%lf  %c”  ,  &y ,  &znak  );  
>} 
```
Wydruk:       **Podaj jedna liczbe calkowita:**
OdczyT	      **123 ↵**
Wydruk:       **Podaj jedna liczbe rzeczywista i jeden znak: **
Odczyt        **456.789  a ↵**
Wynik wczytywania:  x == **123**,  y == **456.789**,  znak == **’a’**
