#include <stdio.h>
#include <math.h>
#include <stdbool.h>

double sqrt(double arg);

int boucleAvant(int x) {
  for (int i = 0; i < x; ++i) {
    printf("%d\n", i);
  }

  return 0;
}

int boucleApres(int x) {
  for (int j = 0; j < x; ++j) {
    printf("%d\n", j);
  }

  return 0;
}

double racineCarreeEntiere(int entier) {
  entier = sqrt(entier);
  printf("%d", entier);

  return 0;
}

char lignecommande(char argv) {
  return argv;
}

int somme(char *tabSomme) {
  int somme = 0;
  for(int i = 0; i < tabSomme; ++i) {
    somme += tabSomme[i];
  }
}





int main(int argc, char *argv[]) {
    if(argc == 2) {
      printf("Hello, %s\n", argv[1]);
    } else {
      printf("Erreur: Un seul argument permis.\n");
    }

    return 0;
}
