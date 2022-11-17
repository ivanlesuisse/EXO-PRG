//
// Created by ivbab on 17.11.2022.
//

#include "affiche.h"


void permutationPremierDernier(std::vector<int> &v) {
    int temp = v[0];
    v[0] = v[v.size() - 1];
    v[v.size() - 1] = temp;
}
void affiche(std::vector<int> v) {
    std::cout << " le veceur : [";

    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << "]" << std::endl;
    std::cout << std::endl;
}