# c-essentials

## Aufgabe 1:



Schreiben Sie ein Programm, welches zwei Eingaben erwartet und dann die Summe ausgibt.Erfragen Sie die Eingaben mit scanf.Beachten Sie die Formatierung der Ausgabe (die muss genau stimmen)



### Beispiel:

```
Eingabe: "7"

Eingabe: "8"

Erwartete Ausgabe: "15"
```



## Aufgabe 2:

Sie sollen eine Funktion schreiben, welche eine logische Verknüpfung zweier Werte berechnet und ausgibt.

Die Funktion erhält drei Parameter.

1. boolean Eingabe (0||1)
2. boolean Eingabe (0||1)
3. deren Verknüpfung (*=und, +=oder)

Berechnen Sie das richtige Ergebnis und geben Sie 1||0 zurück.Geben Sie "Unbekannte Anweisung." aus falls der Operator nicht * oder + ist und geben sie -1 zurück.

```c
int logik(short a, short b, char operator) {
    //Bitte vervollständigen.
```



## Aufgabe 3:

In den Code zur Skalierung einer Zahl mit einer anderen Zahl haben sich Fehler eingeschlichen.Korrigieren Sie die Fehler und erzeugen Sie die erwartete Funktionalität.

```c
int scale(int a, int b) {
    int erg = 1;
    erg *= b * b;
    return erg + a;
}
```



## Aufgabe 4:

Subtrahieren Sie zwei Arrays.

Die Daten für die beiden Arrays werden schon vom vorgegebenen Kode eingelesen (zwischen den entsprechenden Kommentaren den Kode nicht ändern).Die Formatierung der Ausgabe ist auch schon im vorgegebenen Kode.



```c
int main()
{
    //Lassen Sie den nachfolgenden Kode unverändert.
    int a[100], b[100], i=0, e;
    do {
        scanf("%d",&e);
        a[i] = e;
        i++;
    } while(e != -1111);
    
    i=0;
    
    do {
        scanf("%d",&e);
        b[i] = e;
        i++;
    } while(e != -1111);
    
    //Lassen Sie den Kode bis hierher unverändert.
    // [...]
    //Lassen Sie den nachfolgenden Kode unverändert.
    
    while(c[i] != -1111) {
        printf("%d ",c[i]); //Array ausgeben.
        i++;
    }
    //Lassen Sie den Kode bis hierher unverändert.
    return 0;
}
```



## Aufgabe 5:

Im Folgenden ist ein Programm gezeigt, dass zur Berechnung der Summe von zwei natürlichen Zahlen dienen soll. In diesem Programm haben sich allerdings Fehler eingeschlichen. Korrigieren Sie diese Fehler so, dass die richtige Ausgabe erzeugt wird.

```c
#include "stdlib.h"
#include <stdio.h>

int summe(int,int);

int main()
{
    int i;
    for(i=0;i<10;i++) {
        printf("%d %d %d\n",i,summe(2,i);summe(-3,i));
    }
    return 2;
}

int summe(int a, int b)
{
    int c = a * b;
    return c;
}
```



## Aufgabe 6:

Der Kode soll die Fakultät einer natürlichen Zahl bis 12 (inklusive) berechnen.Die Zahl soll über scanf eingelesen werden.

Die Ausgabe ist die Fakultät.

Die Ausgabe falls nicht im Wertebereich (0-12) soll sein: "Eingabe nicht im Wertebereich".



### Beispiel 1

```
Eingabe: 13

Ausgabe: Eingabe nicht im Wertebereich
```



### Beispiel 2

```
Eingabe: 6

Ausgabe: 720
```

```c
#include<stdio.h>
int main()
{

    return 0;
}
```



## Aufgabe 7:

Der folgende Kode soll die Quadrate der Zahlen 0-10 errechnen und grafisch darstellen.Leider haben sich im Kode Fehler eingeschlichen, die es zu reparieren gilt.



```c
#include <stdio.h>

int zumQuadrat();

void printNum(int x, int num, char zeichen)
{
    printf("%2d | ",x);
    for(int i=0, i<num; i++) {
        printf("%c";zeichen);
    }
    
    printf("\n");
}

int main();
{
    for(int i=0; i<11; i++) {
        int q=zumQuadrat(i);
        printNum(i,q,'#');
    }
    
    return 0;
}

int zumQuadrat(int num) {
    return num + num;
}
```



## Aufgabe 8:

Im Folgenden ist ein Programm gezeigt, dass zur Berechnung der Potenz von zwei natürlichen Zahlen dienen soll. In diesem Programm haben sich allerdings Fehler eingeschlichen. Korrigieren Sie diese Fehler so, dass die richtige Ausgabe erzeugt wird.



```c
#include "stdlib.h"
#include <stdio.h>

int potenz(int,int);

int main()
{
    int i;
    for(i=0;i <10;i++) {
        printf("%d %d %d\n",i,potenz(2,i),potenz(-3,i));
    }
    return 0;
}

int potenz(int Basis, int n)
{
    int i,p;
    p=1;
    
    for(i=1;i<=n;++i)p=p*Basis;
    
    return p;
}
```



## Aufgabe 9:

Der Kode soll den größten gemeinsamen Teiler zweier natürlicher Zahlen berechnen.Leider haben sich Fehler eingeschlichen.Bitte korrigieren Sie diese.



```c
#include<stdio.h>

int main()
{
    int x=9, *y=6;
    scanf("%d %d",&x,&y); //Diese Zeile ist korrekt!
    
    if(x = 0) {
        printf("ggT: %d.",y);
    }
    else {
        while(y > 0) {
            if(x < y) {
                x=x-y;
            }
            else {
                y=y+x;
            }
        }
        printf("ggT: %d.",x);
    }
    return 1;
}
```



## Aufgabe 10:

Schreiben Sie ein Program, welches eine Eingabe erwartet und dann für die eingegebene Zahl das kleine 1x1 ausgibt.

Die Zahl wird automatisch bereitgestellt und sie brauchen nicht nach einer Eingabe zu fragen.



Beispiel:

Eingabe 8

8, 16, 24, ..., 80



## Aufgabe 11:

In den Kode zur Umwandlung einer Binärzahl in eine Dezimalzahl haben sich Fehler eingeschlichen.

Korrigieren Sie die Fehler und erzeugen Sie die erwartete Funktionalität.



```c
int binToDez(int arrLen, bool* bin)
{
    int dec = 0;
    int p = 0; //Position in der Binärzahl
    for(int i=arrLen-1; i>=0; i--,p++) {
        int pow = 1;
        for(int h=0; h<p; h++) {
            pow += 2;dez *= bin[i] * pow;
        }
    }return dez;
}
```



## Aufgabe 12:

Der folgende Kode soll eine Dezimalzahl korrekt in eine Binärzahl umformatieren.

Beachten Sie, dass der Kode keine großen Dezimalzahlen umwandeln kann, da die Binärzahl als long gespeichert wird.

Dieser Umstand ist nicht zu korrigieren.

Leider haben sich im Kode aber Fehler eingeschlichen, die es zu reparieren gilt.



```c
#include<stdio.h>

long dez2Bin(int);
int main()
{
    long bin;
    char* dez;
    scanf("%d",&dez); //Garantiert korrekt. Nicht ändern.
    bin = dez2Bin(dez);
    printf("Formatiert als Binärzahl : %ld",bin);
    return 0;
}

long dez2Bin(int dez)
{
    long bin=1,tmp,f=1;
    while(dez != 0) {
        tmp = dez % 2;
        bin = bin + tmp * f;
        f = f * 10;dez = dez * 2;
    }
    return bin;;
}
```

