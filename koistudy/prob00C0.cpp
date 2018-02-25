#include <stdio.h>
#include <stdlib.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

class Lecture{
public:
    Lecture(int _start, int _end) {
        start = _start;
        end = _end;
    }

    int start;
    int end;
};

int find_idx(Lecture **lectures, int from, int to, int k){
    int mid = (from + to + 1)/2;
    if (from == to){
        if (lectures[to]->end < k) return from;
        else return -1;
    }
    if (lectures[mid]->end < k) return find_idx(lectures, mid, to, k);
    else return find_idx(lectures, from, mid-1, k);
}

int comp(const void *left, const void *right){
    Lecture *llecture = *(Lecture**)left;
    Lecture *rlecture = *(Lecture**)right;
    return llecture->end - rlecture->end;
}

int main(){
    int n;
    Lecture **lectures;
    int *max;
    int i;

    scanf("%d", &n);
    lectures = new Lecture*[n];
    for (i = 0; i < n; i++){
        int start, end;
        scanf("%d %d", &start, &end);
        lectures[i] = new Lecture(start, end);
    }

    qsort(lectures, n, sizeof(Lecture*), comp);

    max = new int[n];
    max[0] = 1;
    for (i = 1; i < n; i++){
        int idx = find_idx(lectures, 0, i-1, lectures[i]->start);
        max[i] = 1;
        if (idx != -1) max[i] += max[idx];
        max[i] = MAX(max[i], max[i-1]);
    }

    printf("%d\n", max[n-1]);

    for (i = 0; i < n; i++) delete lectures[i];
    delete[] lectures;
    delete[] max;
    return 0;
}
