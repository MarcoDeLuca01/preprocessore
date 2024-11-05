#include <stdio.h>

// Definizione della costante di conversione
#define TASSO_CONVERSIONE 1936.26

// Macro per convertire Euro in Lira
#define EURO_A_LIRA(euro) ((euro) * TASSO_CONVERSIONE)

// Macro per convertire Lira in Euro
#define LIRA_A_EURO(lira) ((lira) / TASSO_CONVERSIONE)

int main() {
    double euro, lira;

    // Esempio di conversione da Euro a Lira
    printf("Inserisci l'importo in Euro: ");
    scanf("%lf", &euro);
    lira = EURO_A_LIRA(euro);
    printf("%.2f Euro corrispondono a %.2f Lire.\n", euro, lira);

    // Esempio di conversione da Lira a Euro
    printf("Inserisci l'importo in Lire: ");
    scanf("%lf", &lira);
    euro = LIRA_A_EURO(lira);
    printf("%.2f Lire corrispondono a %.2f Euro.\n", lira, euro);

    return 0;
}
