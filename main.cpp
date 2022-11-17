/**
 * @description: Permutation du premier et du dernier élément
 *               Ecrire une fonction C++ qui permute le premier et le dernier élément d'un tableau classique 1D d'entiers (type int).
 *               Ecrire aussi un petit programme de test (main) permettant de vérifier le bon fonctionnement de la fonction ci-dessus.
 * @file main.cpp affiche.h affiche.cpp
 * @version 1.0
 * @date 17.11.2022
 */
#include "affiche.h"

using namespace std;

int main() {
    //déclaration des 2 vecteurs test
    vector<int> v1{1, 2, 3, 4, 5};
    vector<int> v2{ 5, 6, 34 ,2 ,12} ;

    // Test de la fonction permutationPremierDernier
    affiche(v1);
    permutationPremierDernier(v1);
    affiche(v1);

    affiche(v2);
    permutationPremierDernier(v2);
    affiche(v2);

    return 0;
}
