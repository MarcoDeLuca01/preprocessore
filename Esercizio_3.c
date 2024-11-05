## Esercizio 3.
Definire una macro CUBE(num) che calcola il cubo di un numero.
Per verificarne il funzionamento, la si testi con un programma che effettua le chiamate
```
CUBE(6)
CUBE(3 + 4)
CUBE(7)
CUBE(9 - 3)
```

#include<stdio.h>
#define QUADRATO(i) (i)*(i)

int main(void){
    int a = 2;
    int b = QUADRATO(1+2);
    PRINTF("%d * %d = %d",a,a,b);
    return 0;
}