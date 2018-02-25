#include <stdio.h>

#define SIZE 100000
#define C(x) ((x) + '0')
#define N(x) ((x) - '0')

int main() {
  char A[SIZE+1], B[SIZE+1], R[SIZE+1];
  scanf("%s %s", A, B);
  R[SIZE] = '\0';
  for (int i = 0; i < SIZE; i++) R[i] = C(N(A[i]) && N(B[i]));
  printf("%s\n", R);
  for (int i = 0; i < SIZE; i++) R[i] = C(N(A[i]) || N(B[i]));
  printf("%s\n", R);
  for (int i = 0; i < SIZE; i++) R[i] = C(N(A[i]) ^ N(B[i]));
  printf("%s\n", R);
  for (int i = 0; i < SIZE; i++) R[i] = C(!N(A[i]));
  printf("%s\n", R);
  for (int i = 0; i < SIZE; i++) R[i] = C(!N(B[i]));
  printf("%s\n", R);
  return 0;
}
