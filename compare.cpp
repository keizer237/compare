#include <stdio.h>

int compare(const char *chaine1, const char *chaine2) {
    int i = 0; // Initialiser un index pour comparer les chaînes

    // Comparer les caractères un par un jusqu'à la fin de l'une des chaînes
    while (chaine1[i] != '\0' && chaine2[i] != '\0') {
        if (chaine1[i] != chaine2[i]) {
            // Retourner la différence si les caractères sont différents
            return chaine1[i] - chaine2[i];
        }
        i++; // Passer au caractère suivant
    }

    // Si les chaînes sont identiques jusqu'ici, vérifier les longueurs
    return chaine1[i] - chaine2[i];
}

int main() {
    const char *str1 = "Bonjour"; // Première chaîne
    const char *str2 = "Bonjour"; // Deuxième chaîne
    printf("Comparaison : %d\n", compare(str1, str2)); // Appeler la fonction et afficher le résultat
    return 0;
}