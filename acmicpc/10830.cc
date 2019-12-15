#include <stdio.h>

#define SIZE 1000

class Matrix {
  public:
    int size;
    int **arr;

    Matrix(int _size) {
      size = _size;
      arr = new int*[size];
      for (int i = 0; i < size; i++)
        arr[i] = new int[size]();
    }

    Matrix* mul(const Matrix* that) {
      Matrix* res = new Matrix(size);
      for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
          for (int k = 0; k < size; k++) {
            res->arr[i][j] += this->arr[i][k] * that->arr[k][j];
          }
          res->arr[i][j] %= SIZE;
        }
      }
      return res;
    }

    ~Matrix() {
      for (int i = 0; i < size; i++)
        delete[] arr[i];
      delete[] arr;
    }
};

int main() {
  Matrix *cur, *temp, *res;
  int n;
  long long b;
  scanf("%d %lld", &n, &b);
  cur = new Matrix(n);
  res = new Matrix(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &cur->arr[i][j]);
    }
    res->arr[i][i] = 1;
  }
  while (b) {
    if (b % 2 == 1) {
      temp = res->mul(cur);
      delete res;
      res = temp;
    }
    temp = cur->mul(cur);
    delete cur;
    cur = temp;
    b /= 2;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", res->arr[i][j]);
    }
    printf("\n");
  }

  delete cur;
  return 0;
}
