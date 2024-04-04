#include <stdio.h>
#include <stdlib.h>

int main() {
    int nbrRepetition[3] = {1, 2, 3};
    int codeChar[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char lettres[26] = {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int nbr;
    int compteur = 0;
    int i =0;

    printf("Entrez le codage: \n");
    scanf("%d", &nbr);
    // Compter le nombre de chiffres dans le code
    int temp = nbr;
    while (temp != 0) {
        temp = temp / 10;
        compteur++;
    }

    printf("Le nombre de chiffres dans le code est : %d\n", compteur);
    int taille = compteur;
    int chfr[taille];
    while(nbr != 0 && i < taille){
        chfr[i] = nbr % 10;
        nbr = nbr / 10;
        i++;
    }
     printf("Les chiffres du nombre sont :\n");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d ", chfr[j]);
    }
    printf("\n");

    return 0;
}
