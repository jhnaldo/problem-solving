#include <stdio.h>
#include <cstring>

#define SIZE 10000

int divide(int quotient[], int& n, int k) {
  int mod;
  for (int i = n - 1; i > 0; i--) {
    quotient[i-1] += 10 * (quotient[i] % k);
    quotient[i] /= k;
  }
  mod = quotient[0] % k;
  quotient[0] /= k;
  if (quotient[n-1] == 0) n--;
  return mod;
}

void convert(int arr[], int n, int result[], int &m, int k) {
  int quotient[SIZE];
  int size = n;
  for (int i = 0; i < n; i++) quotient[i] = arr[i];

  m = 0;
  while(size) result[m++] = divide(quotient, size, k);
}

bool is_palindrome(int result[], int m) {
  for (int i = 0; i < m/2; i++) {
    if (result[i] != result[m-i-1]) return false;
  }
  return true;
}

bool output(int input[], int n, int k) {
  if (is_palindrome(input, n)) {
    printf("%d ", k);
    for (int i = n-1; i >= 0; i--) printf("%d", input[i]);
    printf("\n");
    return true;
  }
  return false;
}

int main() {
  char input[SIZE+1];
  int arr[SIZE];
  int result[SIZE];
  int n, m;
  bool exist = false;

  scanf("%s", input);
  n = strlen(input);

  for (int i = 0; i < n; i++) {
    arr[n-i-1] = input[i] - '0';
  }

  for (int k = 2; k <= 9; k++) {
    convert(arr, n, result, m, k);
    exist = output(result, m, k) || exist;
  }
  exist = output(arr, n, 10) || exist;

  if (!exist) printf("NIE\n");

  return 0;
}
