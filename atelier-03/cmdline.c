#include <stdio.h>

int strcmp (const char* str1, const char* str2);

int main(int argc, char *argv[]) {
  char optionC[] = "-c";
  char CODE[] = "egDEd";

  if(argc > 2) {
    printf("%d", strcmp(argv[1], optionC));
    if(strcmp(argv[1], optionC) != 0) {
      if(strcmp(argv[2], CODE) != 0) {
      printf("Pas bon argument\n");
      return 1;
      }
    }
  }  
}
