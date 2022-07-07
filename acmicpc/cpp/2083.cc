#include <stdio.h>

int main() {
  while (true) {
    char name[11];
    int age, weight;
    scanf("%s %d %d", name, &age, &weight);
    if (name[0] == '#') break;
    printf("%s ", name);
    if (age > 17 || weight >= 80) printf("Senior\n");
    else printf("Junior\n");
  }
}
