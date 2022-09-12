#include <stdio.h>
#include <stdlib.h>

int main() {
    float first, second;
    char symbol;
    char calc[10];

    printf("Kérlek add meg az első számot: ");
    // scanf("%f", &first);
    // printf("Kérlek add meg a második számot: ");
    // scanf("%f", &second);

    // printf("Milyen műveletet szeretnél végezni a két számmal? (+ - / *): ");
    // scanf(" %c", &symbol);
    fgets(calc, 10, stdin);
    printf("%s", calc);
    first = atoi(calc[0]);


    switch(symbol) {
        case '+':
            printf("%.6f", first + second);
            break;
        case '-':
            printf("%.6f", first - second);
            break;
         case '/':
            if (second != 0) {
                printf("%.6f", first / second);
            } else {
                printf("Nullával nem lehet osztani!");
            }
            break;
        case '*':
            printf("%.6f", first * second);
            break;
    }

    return 0;
}