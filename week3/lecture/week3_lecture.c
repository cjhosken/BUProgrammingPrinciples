// Fundamental Programming Concepts
// Primitives data types in C/C++

// Ordinal Types
char c = 'a';
short s = 6;
long l = 24;
int i = -40192;
unsigned int u = 324124;

// Floating Point Types
float f = 493.04f;
double d = 847.025;


// CONST
// Const means value does not change
const int a = 23;

// Blocks, Groupings of code contained in braces

int main(void) {
    int x = 5;
    {
        /*
            Info in blocks, STAYS in blocks.
        */
        int x = 7;
        printf("in inner block x is %d\n", x); /* value is 7 */
    }

    printf("in outer block x is %d\n", x); /* value is 5 */
    return 0;
}


// Void
// typeless 'type' as a placeholder. Usually used as a null return in a function.
void x;

void void_function() {
    printf("This function doesnt return anything");
}

// If you dont say what the function returns, it will default to an int.


// LOGICAL OPERATORS
const int tr = 1; // True
const int fs = 0; // False


int b0 = !tr; // NOT True, False
int b1 = tr && tr; // True AND True, True
int b2 = tr || fs; // True OR False, True

//Comparison operators
const int c0 = 54;
const int c1 = 32;

int b3 = c0 == c1; // equality
int b4 = c0 != fs; //inequality
int b5 = c0 < c1; //smaller than
int b6 = c0 <= c1; //smaller than or equal to
int b7 = c0 > c1; //greater than
int b8 = c0 >= c1; //greater than or equal to

// Operator Precedence
/*
        ()               | left to right
        ++ -- !          | right to left
        * / %            | left to right
        + -              | left to right
        < <= > >=        | left to right
        == !=            | left to right
        && !!            | left to right
        = *= /= %= += -= | right to left
*/

#include <stdio.h>
int main(void) {
    printf("The sum of %d and %d is %d\n", 1, 2, 1+2);
    return 0;
}


// STRING
const char* st = "This is a string";



// Address Operator &
// obtian the memory address
int main(void) {
    int in = 10;
    printf("address of x = %p\n",&in); // Will not print 10, will print the location of in stored in memory


    // use scanf to write data into a variable (need to address of variable)
    int variable;
    scanf("%d", &variable);
    /*
        When you type a number, and then return. It will read BOTH the number and the return, causing a return to appear in the next scanf.
        You may need to clear the scanf buffer by using fflush.
    */
    fflush(stdin);


    return 0;
}


// 3 Structural elements of algorithms
/*
    1. Sequence (of steps to be exectured)
    2. Selection (of alternative steps)
    3. Iteration (loop)

    A popular method for visualizting program flow and solving simple problem is to use a flow chart
        - Always flow from top to bottom
        1. Box with rounded corners makes a control point
        2. Rectangular box marks operations
        3. parallelogram marks an I/O
        4. diamond makes a branching operation (if statements)
        5. different components are connected by arrows that show how different program components follow each other

    A sequence of two functions are two boxes connected together (vertically)

    A block is a frame around elements
*/


// Branching

int main(void) {
    int y = 0;
    if (y) {
        y = 1;
    } else {
        y = 0;
    }

    if (y)
        y = 0;



    return y;
}


// Calculating Leap years

int leap(int year) {
    if (year % 4 == 0) { 
        if(year % 100 == 0) {
          if (year % 400 == 0) {
            return 1;
          }  
            return 0;
        } 
        return 1;
    }
    return 0;
}

int main(void) {
    int year = 0;
    printf("Year: ");
    scanf("%d", &year);
    fflush(stdin);
    if (leap(year)) {
        printf("%4d is a leap year. \n", year);
    } else {
        printf("%4d is not a leap year. \n", year);
    }
    return 0;
}

// Looping

int main(void) {
    int i=0, j=0;
    while (i<4) {
        j += i;
        i++;
    }


    // Do - while

    do {
        j += i;
        i++;
    } while (i<4);


    // For loop

    for (i=0; i<4;i++) {
        j += i;
    }


    for (i=0, j=0; i<4; i++,j--) {
        printf("i is %d and j is %d\n", i,j);
    }
}