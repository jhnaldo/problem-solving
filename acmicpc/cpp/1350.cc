#include <stdio.h>

int main(){
    int n;
    int cluster, i;
    int file[1000];
    long long int disk = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &file[i]);
    scanf("%d", &cluster);

    for (i = 0; i < n; i++){
        disk += (file[i]/cluster*cluster) + (file[i]%cluster?cluster:0);
    }
    printf ("%lld\n", disk);
}
