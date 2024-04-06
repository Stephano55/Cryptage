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
void toString(int nombre, int taille, char *chaine) {
    sprintf(chaine, "%d", nombre);
    }

void decripter(char *chaine, int taille){
    for (int i = 0; i < taille; i+=2){
        int j = i+1;
        if (chaine[i] == '0' && chaine[j] == '0'){
            printf(" ");
        }
        else if(chaine[i] == '1' && chaine[j] == '2'){
            printf("a");
        }
        else if(chaine[i] == '2' && chaine[j] == '2'){
            printf("b");
        }
        else if(chaine[i] == '3' && chaine[j] == '2'){
            printf("c");
        }
        else if(chaine[i] == '1' && chaine[j] == '3'){
            printf("d");
        }
        else if(chaine[i] == '2' && chaine[j] == '3'){
            printf("e");
        }
        else if(chaine[i] == '3' && chaine[j] == '3'){
            printf("f");
        }
        else if(chaine[i] == '1' && chaine[j] == '4'){
            printf("g");
        }
        else if(chaine[i] == '2' && chaine[j] == '4'){
            printf("h");
        }
        else if(chaine[i] == '3' && chaine[j] == '4'){
            printf("i");
        }
        else if(chaine[i] == '1' && chaine[j] == '5'){
            printf("j");
        }
        else if(chaine[i] == '2' && chaine[j] == '5'){
            printf("k");
        }
        else if(chaine[i] == '3' && chaine[j] == '5'){
            printf("l");
        }
        else if(chaine[i] == '1' && chaine[j] == '6'){
            printf("m");
        }
        else if(chaine[i] == '2' && chaine[j] == '6'){
            printf("n");
        }
         else if(chaine[i] == '3' && chaine[j] == '6'){
            printf("o");
        }
    }
}
int main() {
     int nbr;
    printf("Entrez un nombre : ");
    scanf("%d", &nbr);

    int taille = nombreDeChiffres(nbr);
    char chaine[taille + 1]; // Ajoutez 1 pour le terminateur nul
    toString(nbr, taille, chaine);

    decripter(chaine, taille);
    return 0;
}
