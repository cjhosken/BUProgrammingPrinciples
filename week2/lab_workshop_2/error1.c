#include <stdio.h>

int main(void) {
    int vX = 2, vY = 4;
    {
        int vY = 6;
        vY--;
        vX+=vY;
    }
    vY = vX % vY;
    vX = vX + vY;
    printf("vX = %d\n", vX);
    return 0;
}