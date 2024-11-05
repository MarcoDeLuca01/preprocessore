## Esercizio 2.
Definire una macro ABSOLUTE(num) che calcola il valore assoluto di un numero. 
Per verificarne il funzionamento, la si testi con un programma che effettua le chiamate

```
ABSOLUTE(-1)
ABSOLUTE(3 - 4)
ABSOLUTE(7)
ABSOLUTE(-8 - 3)  
```

#include <stdio.h>

#define ABSOLUTE(num) ((num) < 0 ? -(num) : (num))

int main() {
    // Verifica del funzionamento della macro con vari casi
    printf("ABSOLUTE(-1) = %d\n", ABSOLUTE(-1));
    printf("ABSOLUTE(3 - 4) = %d\n", ABSOLUTE(3 - 4));
    printf("ABSOLUTE(7) = %d\n", ABSOLUTE(7));
    printf("ABSOLUTE(-8 - 3) = %d\n", ABSOLUTE(-8 - 3));
    
    return 0;
}
