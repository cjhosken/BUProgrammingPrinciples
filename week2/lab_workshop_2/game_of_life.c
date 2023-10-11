#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


int WIDTH = 25;
int HEIGHT = 25;

int min(int n1, int n2) {
    return (n1 > n2) ? n2 : n1;
}

int max(int n1, int n2) {
    return (n1 < n2) ? n2 : n1;
}

int numNeighbors(int m[WIDTH + 2][HEIGHT + 2], int x, int y) {
    int sum = m[x-1][y] + m[x+1][y] + m[x][y-1] + m[x][y+1];
    sum += m[x-1][y-1] + m[x-1][y+1] + m[x+1][y-1] + m[x+1][y+1];

    return sum;
}

void mapcopy(int dest[WIDTH + 2][HEIGHT + 2],int source[WIDTH + 2][HEIGHT + 2])
{

    for (int x=0; x<WIDTH; x++) {
        for (int y=0; y<HEIGHT; y++) {
            dest[x][y] = source[x][y];
        }
    }

}

int main(void) {
    int map[WIDTH + 2][HEIGHT + 2];
    int tmpMap[WIDTH + 2][HEIGHT + 2];

    for (int x=0; x<WIDTH; x++) {
        for (int y=0; y<HEIGHT; y++) {
            map[x][y] = 0;
            tmpMap[x][y]=0;
        }
    }

    map[6][6] = 1;
    map[6][7] = 1;
    map[7][7] = 1;

    while (1) {
        system("clear");

        mapcopy(tmpMap, map);

        for (int x=1; x<WIDTH-1; x++) {
            for (int y=1; y<HEIGHT-1; y++) {

                if (map[x][y] && numNeighbors(map, x, y) == 3 || numNeighbors(map, x, y) == 2) {
                    tmpMap[x][y] = 1;
                }

                else if (!map[x][y] && numNeighbors(map, x, y == 3)) {
                    tmpMap[x][y] = 1;
                }

                else {
                    tmpMap[x][y] = 0;
                }
            }
        }

        mapcopy(map, tmpMap);

        /* DRAW */

        for (int x=1; x<WIDTH-1; x++) {
            for (int y=1; y<HEIGHT-1; y++) {
                    if (map[x][y] == 0) {
                        printf(" ");
                    } else {
                        printf("#");
                    }
            }
            printf("\n");
        }

        /* DRAW */
        fflush(stdout);
        sleep(1);
    }

    return 0;
};