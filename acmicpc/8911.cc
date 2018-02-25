#include <stdio.h>

#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char command[501];
        int i;
        int x, y, min_x, min_y, max_x, max_y;
        int direction = 0;
        x = y = min_x = min_y = max_x = max_y;
        scanf("%s", command);
        for (i = 0; command[i]; i++){
            switch(command[i]){
                case 'F':
                    if(direction % 2){
                        y += (direction/2?-1:1);
                        min_y = MIN(min_y, y);
                        max_y = MAX(max_y, y);
                    }else{
                        x += (direction/2?-1:1);
                        min_x = MIN(min_x, x);
                        max_x = MAX(max_x, x);
                    }
                    break;
                case 'B':
                    if(direction % 2){
                        y -= (direction/2?-1:1);
                        min_y = MIN(min_y, y);
                        max_y = MAX(max_y, y);
                    }else{
                        x -= (direction/2?-1:1);
                        min_x = MIN(min_x, x);
                        max_x = MAX(max_x, x);
                    }
                    break;
                case 'L':
                    direction += 3;
                    direction %= 4;
                    break;
                case 'R':
                    direction++;
                    direction %= 4;
                    break;
            }
        }
        printf("%d\n", (max_x-min_x)*(max_y-min_y));
    }
    return 0;
}
