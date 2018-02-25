#include <stdio.h>
#include <string.h>

int main(){
    char me[1001], doctor[1001];

    scanf("%s\n%s", me, doctor);
    printf("%s\n", (strlen(me)<strlen(doctor)?"no":"go"));
    return 0;
}
