#include <iostream>

using namespace std;

int map[50][50];
int N, M, K;

void del(int x, int y){
    map[x][y] = 0;
    if(x>0   && map[x-1][y]) del(x-1,y);
    if(x<N-1 && map[x+1][y]) del(x+1,y);
    if(y>0   && map[x][y-1]) del(x,y-1);
    if(y<M-1 && map[x][y+1]) del(x,y+1);
}

int main()
{
    int T, t;

    cin >> T;
    for (t=0;t<T;t++){
        int count = 0;
        int i, j;
        cin >> N >> M >> K;

        for(i=0;i<N;i++){
            for(j=0;j<M;j++){
                map[i][j]=0;
            }
        }

        for(i=0;i<K;i++){
            int x, y;
            cin >> x >> y;
            map[x][y]=1;
        }

        for(i=0;i<N;i++){
            for(j=0;j<M;j++){
                if(map[i][j]==1){
                    count++;
                    del(i,j);
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}
