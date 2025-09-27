/**
 * Euclidian Algorithm
 *
 * The Euclidean algorithm (also called Euclid's algorithm) is an
 * algorithm to determine the greatest common divisor of two integers.
 */
#include <stdlib.h>                  // Inclus la bibliothèque stdlib pour pouvoir utiliser la fonction `atoi`
#include <string.h>                  // Inclus la bibliothèque string
#include <stdio.h>                   // Inclus la bibliothèque stdio pour pouvoir utiliser la fonction `printf`

int gcd(int a, int b) {              // Déclare la fonction gcd qui prend en paramètre 2 entiers a et b et retourne un entier
  while (b != 0) {                   // Début de la boucle tant que la valeur de b n'est pas égale à 0
    int r = a % b;                   // Début du calcul avec les variables a & b et r est le modulo de la division
    a = b;                           // La valeur de a est égale à la valeur de b
    b = r;                           // La valeur de b est égale à r
  }
  return a;                          // Retourne au début de la boucle
}

int main(int argc, char* argv[]) {   // Indication du nombre de caractère qui doit être présent pour la commande
    if (argc <= 2) {                 // Indication du nombre de chiffre à rentrer dans la commande
        return -1;                   // Indication de retour
    }

    int a = atoi(argv[1]);          // Transforme l'entrée b en un entier
    int b = atoi(argv[2]);          // Transforme l'entrée b en un entier

    int result = gcd(a, b);         // Calcul le résultat

    printf("%d\n", result);         // Affiche le résultat

    return 0;                       // Retourne à la igne 0
}
