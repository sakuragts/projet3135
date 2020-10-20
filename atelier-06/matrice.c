#include <stdio.h>

void afficherMatrice(int matrice[3][3]) {
  
  for(int i = 0; i < 3; ++i) {
    for(int j = 0; j < 3; ++j) {
      printf("%d", matrice[i][j]);
    }
    printf("\n");
  }
}

void additionnerMatrices(int matrice1[3][3],
                         int matrice2[3][3],
                         int resultat[3][3]) {
  for(int i = 0; i < 3; ++i) {
    for(int j = 0; j < 3; ++j) {
      
    }
  }
}

int main() {

  int matrice[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  afficherMatrice(matrice);
}

