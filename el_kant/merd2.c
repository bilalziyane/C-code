#include <stdio.h>

// Déclaration de la fonction
void supprimer_doublons(int *tab, int *taille);

int main(void) {
    int tab[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int taille = 10;

    printf("Tableau initial : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    // Appel de la fonction
    supprimer_doublons(tab, &taille);

    printf("Tableau final : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}

// Définition de la fonction
void supprimer_doublons(int *tab, int *taille) {
    for (int i = 0; i < *taille; i++) {
        int valeur = tab[i]; // Valeur courante
        int j = i + 1; // On commence à chercher à partir de l'élément suivant
        while (j < *taille) {
            if (tab[j] == valeur) {
                // On a trouvé un doublon, on le supprime en décalant les éléments suivants
                for (int k = j; k < *taille - 1; k++) {
                    tab[k] = tab[k + 1];
                }
                (*taille)--; // On décrémente la taille du tableau
            } else {
                j++;
            }
        }
    }
}