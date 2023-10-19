// Function, Procedures, Program Flow & Recursion

#include <stdio.h>

// Loops have breaks and continues

int main(void) {
    int i = 1;
    
    while(1) {
        i++;
        if (i==10) break; // Without the break statement, the loop would never end.
    }



    while (i < 100) {
        i += 1;
        if (i % 2) continue;
        i += 3;
    }


    // You should never really use this
    int i=0;
    start: i++;
    goto later;
    back: i--;
    goto end;
    later: i++;
    goto back;
    end: printf("i is now %d\n", i);

    switch (i) {
        case 2: printf("2");
        default: printf("none");
    }


    
}