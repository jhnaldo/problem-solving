#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define SIZE 100000
#define MIN(a, b) ((a) < (b) ? (a) : (b))

class Point {
  public:
    int x;
    int y;
    Point(int _x, int _y): x(_x), y(_y) {}
    int get_dist(const Point *that) {
      return (this->x - that->x) * (this->x - that->x) +
        (this->y - that->y) * (this->y - that->y);
    }
};

int n;
Point **arr;
int *idx;

int compare(const void* a, const void* b) {
  return (*(Point**)a)->x - (*(Point**)b)->x;
}

void swap(int &x, int &y) {
  int temp = x;
  x = y;
  y = temp;
}

int min_dist(int from, int to) {
  if (from >= to) return INT_MAX;
  int mid = (from + to) / 2;
  int ldist = min_dist(from, mid);
  int rdist = min_dist(mid + 1, to);
  int dist = MIN(ldist, rdist);
  int size = to - from + 1;
  int *temp = new int[size];
  int m = 0;
  for (int i = from, j = mid + 1, k = 0; k < size; k++) {
    if (j == to + 1 || (i <= mid && arr[idx[i]]->y <= arr[idx[j]]->y)) {
      temp[k] = idx[i++];
    } else {
      temp[k] = idx[j++];
    }
  }
  for (int i = 0; i < size; i++)
    idx[from + i] = temp[i];
  for (int i = 0; i < size; i++) {
    int d = arr[idx[from + i]]->x - arr[mid]->x;
    d *= d;
    if (-dist < d && d < dist)
      temp[m++] = idx[from + i];
  }
  for (int i = 0; i < m; i++) {
    for (int j = i + 1; j < m; j++) {
      int d = arr[temp[j]]->y - arr[temp[i]]->y;
      if (d * d >= dist) break;
      d = arr[temp[i]]->get_dist(arr[temp[j]]);
      dist = MIN(dist, d);
    }
  }
  delete[] temp;
  return dist;
}

int main() {
  scanf("%d", &n);
  arr = new Point*[n];
  idx = new int[n];
  for (int i = 0; i < n; i++) {
    int x, y;
    scanf("%d %d", &x, &y);
    arr[i] = new Point(x, y);
    idx[i] = i;
  }
  qsort(arr, n, sizeof(Point), compare);
  printf("%d\n", min_dist(0, n - 1));
  for (int i = 0; i < n; i++)
    delete arr[i];
  delete[] arr;
  delete[] idx;
  return 0;
}
