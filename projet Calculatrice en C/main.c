
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a, b, result, c, f, res;
    int mune,nb;
    float somme = 0;
    float resultat;
    int j;
    int i,n;

    printf("Entrez le nombre de l'opération :\n 1. Addition\n 2. Soustraction\n 3. Multiplication\n 4. Division\n 5. Moyenne\n 6. Valeur absolue\n 7. Exponentiation\n 8. Racine carrée\n");
    scanf("%d", &mune);

    switch (mune) {
        case 1:
            printf("Le nombre de chiffres: ");
            scanf("%d", &c);
            c -= 2;
            printf("Entrez le nombre: ");
            scanf("%f", &a);
            printf("Entrez le nombre: ");
            scanf("%f", &b);
            res = a + b;

            for (i = 1; i <= c; i++) {
                printf("Entrez le nombre: ");
                scanf("%f", &f);
                res += f;
                if (i==c) {
        printf("La Resultat est: %.2f",res);
        }

        break;
            }
            printf("Le résultat est: %.2f\n", res);
            break;

        case 2:
            printf("Entrez les deux nombres: ");
            scanf("%f %f", &a, &b);
            printf("%.2f - %.2f = %.2f\n", a, b, a - b);
            break;

        case 3:
            printf("Entrez les deux nombres: ");
            scanf("%f %f", &a, &b);
            printf("%.2f * %.2f = %.2f\n", a, b, a * b);
            break;

        case 4:
            printf("entrez les deux nombres: ");
            scanf("%f %f", &a, &b);
            if (b == 0) {
                printf("eruure");
            } else {
                printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            }
            break;

        case 5:

                printf("combien de nombres ");
                scanf("%d", &n);
                for (i = 0; i < n; i++) {
                    printf("entrez un nombre: ");
                    scanf("%f", &nb);
                    somme += nb;
                }
                resultat = somme / n;
                printf("%.2lf\n", resultat);
                break;

        case 6:
            printf("entrez un nombre: ");
            scanf("%f", &a);
            printf("la valeur absolue de %f est %f\n", a, fabs(a));
            break;

        case 7:
            printf("entrez les noumbres: ");
            scanf("%f %f", &a, &b);
            printf("%.2f ^ %.2f = %.2f\n", a, b, pow(a, b));
            break;

        case 8:
            printf("entrez un nombre: ");
            scanf("%f", &a);
            if (a >= 0) {
                printf(" racine carrée de %.2f est %.2f\n", a, sqrt(a));
            } else {
                printf("erreur\n");
            }
            break;

        default:
            printf("invalide\n");
            break;
    }

    return 0;
}
