## SYSTEMY LICZBOWE

### System dziesiętny (decymalny)

Ludzie posługują się najczęściej pozycyjnym **systemem dziesiętnym**
(ang. decimal — decymalny), w którym podstawę stanowi liczba **10**, 
a do zapisu liczb używa się dziesięciu cyfr arabskich: **0, 1, 2, 3, 4, 5, 6, 7, 8, 9.** 
Jeśli spróbujemy rozpisać dowolną liczbę dziesiętną z wykorzystaniem podanego przed chwilą wzoru, 
uzyskamy zapis wielomianowy:

<img src="https://github.com/LukaszKur/Praca_domowa/blob/master/Rysunek1.png" alt="wielomian" title="Zapis wielomianowy"/>

_Każda cyfra w ciągu została ponumerowana, począwszy od prawej strony. Pozycji jedynek przyporządkowano 0, 
dziesiątek — 1, a setek — 2. Następnie każda cyfra z ciągu została pomnożona przez wagę, 
którą stanowi podstawa 10 podniesiona do potęgi równej pozycji._



### System dwójkowy (binarny)

Cyfrowe urządzenia elektroniczne wykorzystują **dwójkowy** 
(ang. binary — binarny) pozycyjny system liczbowy, w którym podstawą jest liczba <strong>2</strong>, 
a liczby zapisuje się za pomocą dwóch cyfr arabskich: **0, 1.** 
Zapis liczby dwójkowej jest dłuższy niż dziesiętnej, jednak stosowanie tylko dwóch cyfr 
ułatwia budowanie układów półprzewodnikowych, w których w uproszczeniu np. 1 oznacza przepływ prądu, 
a 0 — brak przepływu. Trudno jest natomiast zbudować układ elektroniczny, 
który wydajnie i stabilnie reprezentowałby dziesięć stanów odpowiadających cyfrom: 0, 1, 2, …, 9. 

**Przykładem praktycznego zastosowania systemu binarnego może być proces 
wyznaczania adresu sieci lub maski podsieci na podstawie adresu IP w notacji dwójkowej.
**

Liczba naturalna 1(B) w systemie dwójkowym ma postać **ai … a1 a0, gdzie ai … 10 przyjmuje wartość 1 lub 0**,
np. 1100B (jeden jeden zero zero, nie tysiąc sto!).

Aby dokonać konwersji liczby dwójkowej na postać dziesiętną, 
należy użyć zapisu wielomianowego:<br>
``` 
p = 2, ai ∈ {0, 1},
10101B = 14 03 12 01 10 = 1*24+0*23+1*22+0*21+1*20 =
= 1*16+0*8+1*4+0*2+1*1 = 16+4+1 = 21D
```
Kolejne cyfry w liczbie binarnej należy ponumerować, począwszy od pierwszej (0) z prawej strony. 
Następnie każdą cyfrę mnoży się przez wagę otrzymaną z podstawy podniesionej do potęgi równej pozycji. 
Po przemnożeniu cyfr przez wagi należy je zsumować. Otrzymana liczba dziesiętna jest odpowiednikiem liczby binarnej.
Liczba zapisana w systemie dwójkowym jako 10101B odpowiada 21D w systemie dziesiętnym.
Aby dokonać zamiany liczby dziesiętnej na postać binarną, należy wykonać cykliczne dzielenie z resztą. 
Dzielną jest liczba dziesiętna, a dzielnikiem — podstawa systemu binarnego, czyli 2. 
Wynik z pierwszego dzielenia ponownie jest dzielony przez 2, i tak aż do uzyskania 0. 
Liczba binarna powstaje na bazie reszt zapisanych w odwrotnej kolejności:


<img src="https://github.com/LukaszKur/Praca_domowa/blob/master/Rysunek2.jpg" alt="wielomian2" title="Zapis wielomianowy2"/>

Po przekształceniu dziesiętnej liczby 25D uzyskujemy odpowiednik binarny 11001B.
W celu szybkiego przekształcania liczb binarnych na postać dziesiętną dobrze jest 
zapamiętać krotności poszczególnych wag systemu binarnego zamieszczone poniżej:

```
1024
512
256
128
64
32
16
8
4
2
1
```

### System szesnastkowy (heksadecymalny)
System szesnastkowy (ang. hexadecimal — heksadecymalny) najczęściej jest wykorzystywany do uproszczonego zapisu długich liczb binarnych.

Ethernetowe karty sieciowe mają 48-bitowy, unikatowy adres sprzętowy zapisany
w postaci szesnastkowej, np. 00:50:56:C0:00:08. 

**Podstawę systemu heksadecymalnego stanowi 16 cyfr. Pierwsze 10 to arabskie cyfry:
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, pozostałe 6 to pierwsze litery alfabetu łacińskiego:
A, B, C, D, E, F oznaczające kolejno dziesiętne: 10, 11, 12, 13, 14, 15.**


_Oprogramowanie do wyszukiwania błędów w skompilowanych plikach binarnych przekształca 
pierwotny zapis danych dwójkowych na krótszy, szesnastkowy, ułatwiając w ten sposób analizę kodu. 
W systemie binarnym odpowiednik dziesiętnej liczby 15D ma aż cztery cyfry 1111B, 
natomiast w szesnastkowym — tylko jedną FH._

Liczba naturalna lH w systemie szesnastkowym ma postać: **ai ... a1 a0**, gdzie ai … 1 0 
przyjmuje wartość **0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F,** np. 1BFH.

Chcąc dokonać konwersji liczby szesnastkowej na postać dziesiętną, powinniśmy użyć zapisu wielomianowego:
p = 16, ai ∈ {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F},

```math
4C5H = 4^2 C^1 2^0 = 4*16^2 + C*16^1 + 2*16^0 = 4*256+12(C)*16+5*1 = 1221D
```

Kolejne cyfry w liczbie heksadecymalnej należy ponumerować, począwszy od pierwszej 
(0) z prawej strony. Następnie każdą cyfrę mnożymy przez wagę otrzymaną z podstawy (16) podniesionej do potęgi równej pozycji. 
Po przemnożeniu cyfr przez wagi (litery należy zamienić na odpowiedniki dziesiętne) wykonujemy sumowanie. 
Otrzymana liczba dziesiętna jest odpowiednikiem liczby szesnastkowej. Liczba zapisana w systemie szesnastkowym jako 4C5H 
odpowiada 1221D w systemie dziesiętnym.

**Aby dokonać zamiany liczby dziesiętnej na postać szesnastkową, należy wykonać cykliczne dzielenie z resztą. 
Dzielną jest liczba dziesiętna, natomiast dzielnikiem — podstawa systemu heksadecymalnego, czyli 16. Wynik uzyskany z pierwszego 
dzielenia ponownie jest dzielony przez 16, i tak aż do uzyskania 0. Liczba szesnastkowa powstaje na bazie reszt zapisanych 
w odwrotnej kolejności. Wartości powyżej 9 koduje się za pomocą odpowiednich cyfr-liter, np. A:**


W celu szybkiego obliczenia reszty z dzielenia, np. 1221:16 = 76,3125, należy pomnożyć
część całkowitą wyniku, czyli 76, przez dzielnik 16. Wynik 1216 należy odjąć od dzielnej: 
1221–1216 co da resztę 5.

Przy konwersji liczb szesnastkowych na postać binarną i odwrotnie najprościej posłużyć się poniższą tabelą.

|Cyfra szesnastkowa |Cyfra dwójkowa|
|:-----------------:|:------------:|
|0                  |0000          |
|1                  |0001          |
|2                  |0010          |
|8                  |1000          |
|3                  |0011          |
|9                  |1001          |
|4                  |0100          |
|A                  |1010          |
|5                  |0101          |
|B                  |1011          |
|6                  |0110          |
|C                  |1100          |
|7                  |0111          |
|D                  |1101          |
|E                  |1110          |
|F                  |1111          |

_Konwersję liczby binarnej na postać szesnastkową należy rozpocząć od pogrupowania ciągu po cztery cyfry. 
Grupowanie rozpoczynamy od prawej strony i kontynuujemy aż do uzyskania końca liczby. 
Jeżeli ostatnie cyfry w pogrupowanej liczbie mają mniej niż cztery znaki, należy uzupełnić puste pozycje zerami:_

<img src="https://github.com/LukaszKur/Praca_domowa/blob/master/Rysunek3.jpg" alt="wielomian3" title="Zapis wielomianowy3"/>

**Następnie, posługując się tabelą, należy wszystkie pogrupowane znaki zamienić na odpowiadające im cyfry heksadecymalne.**

Po dokonaniu zamiany powstaje liczba szesnastkowa **2F5D05H**.
Konwersja z liczby szesnastkowej na binarną.
Na podstawie tabeli zamieniamy cyfry heksadecymalne na czterocyfrowe ciągi binarne i łaczymy 
je w jedną liczbę:

Otrzymujemy liczbę binarną 101001001011100111110000B.


### System ósemkowy (oktalny)

System ósemkowy (ang. octal — oktalny) jest pozycyjnym systemem liczbowym, 
w którym podstawę stanowi osiem kolejnych cyfr arabskich: **0, 1, 2, 3, 4, 5, 6, 7**. 
System ten jest rzadko stosowany; zastosowanie można zobaczyć w uniksowym poleceniu **chmod** 
(służącym do zmiany uprawnień dostępu do plików i katalogów).

Liczba naturalna lO w systemie ósemkowym ma postać: **ai ... a1 a0**, gdzie ai … 1 0 przyjmuje wartość **0, 1, 2, 3, 4, 5, 6, 7**, np. 212O.

_Konwersję liczb ósemkowych na postać dziesiętną i odwrotnie wykonuje się analogicznie 
jak w przykładach poświęconych systemom: binarnemu i szesnastkowemu._
