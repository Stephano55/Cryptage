#include <stdio.h>
#include <stdlib.h>
int nombreDeChiffres(int nombre) {
    int compteur = 0;

    // Compter le nombre de chiffres
    while (nombre != 0) {
        nombre = nombre / 10; // Retrait du dernier chiffre
        compteur++; // Incrémenter le compteur de chiffres
    }
    printf("Le nombre de chiffres dans %d est : %d\n", nombre, compteur);
    return compteur;
}
void toString(int nombre){
    int taille = nombreDeChiffres(nombre); // Appel à nombreDeChiffres() pour obtenir la taille de la chaîne
    char chaine[taille + 1]; // Ajout de 1 pour le caractère de fin de chaîne '\0'
    sprintf(chaine, "%d", nombre);
    for(int i = 0; i < taille+1; i++){
        printf(" %c", chaine[i]);
    }
}
int main() {
    int nbrRepetition[3] = {1, 2, 3};
    int codeChar[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char lettres[26] = {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int nbr;


    return 0;
}
