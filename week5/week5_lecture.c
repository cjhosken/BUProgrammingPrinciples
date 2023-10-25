// Arrays and Strings (Week 5) | Grouping Data

#include <stdio.h>

int main(void) {

    // Volatile Data (Variable)
    // volatile means they are not guaranteed to contain the same data they held at the last time they were access. (even if there hasnt been any access/assignment)

    volatile int sensor;
    // useful to interface with hardware (eg: temperature sensor)
    // THE VARIABLE IS CHANGED BY SOMETHING OUTSIDE OF THE PROGRAM

    
    // Constant data (Variable)
    // constant variables must be signed at the point of the declaration, and the data they hold cannot be changed (read-only)
    // Still exists in RAM (because its a variable)
    // type-safe
    const int constant = 7;
    // Good for function parameters 


    // Scope - what part of the program can a variable be used / accessable?
    //      local variables - declared within a function or block (extends to bottom of the block)
    //      global variables - declared outside functions (extends to bottom of the source file)
    // logevity: the period during which a varaible retains a given value during the execution of the program (how long its alive)


    // Data Type storage classes
    // different ways in which a program can store data (explicit, implicit on the program stack)
    // using a variable modifier, variable data can be stored as
    // 1. automatic (Default)
    // 2. external (declaring a var in a different source file)
    // 3. register
    // 4. static 


    // AUTOMATIC VARIABLES
    // you dont need to state it (this is mainly used for c)
    // created when the function is called, automatically destroyed when the function / block is exited.
    // local to the function / block in which they are declared.
    auto int variable;


    // REGISTER
    // store variables in the machine register (not normal ram)
    // much faster than regular memory access
    register int count;
    // only a few variables can be placed inside of register. carefully select variables
    // C will automatically store register variables as non-register once the limit is reached
    // GLOBAL VARIABLES SHOULD NEVER BE DECLARED AS REGISTER (since they last forever, it would waste register space)
    // never declare a register variable as static
    // automatically destroyed when function / code block ends

    // STATIC
    // variables exist until the end of the program. (even after function has been left)
    // initialized only once, much be initialized to a constant value (default is 0)
    // you cant assign a variable to a static variable (on initialization)
    static int x;


    // AGGREGATE DATA TYPES
    // data types that can be used to store more than one data element at a time
    // also known as complex or abstract


    // ARRAY (vectors)
    // collection (field) of elements (Variables) of the same data type, stored in a contigous area of memory.
    // also known as vectors.

    // to declared an array, we need to know the array size and the array type.
    int integer_array[20];
    double double_array[5];
    int arrayX[6] = {1, 3, 2, 6, 3, 9};

    // int aY[3] = {0} is the same as int aY[3] = {0, 0, 0}
    // 0s are default, extra elements of cut off

    // auto sizing arrays
    int aX[] = {1, 3, 2, 6}; // array size is set to 4

    // indexing starts at 0

    // MULTI DIMENSIONAL ARRAY
    int a[3][4];
    int b[4][2][3];
    int c[2][4] = {{1,2,3,4}, {5,6,7,8}};

    // SIZOF

    int x;
    printf("size of x = %d\n", sizeof(x));
    printf("sizeof int = %d\n", sizeof(int));

    // to get the size of an array, you can divide the size of the variable by the size of the base type.
    int x[5];
    printf("size of x = %d\n", sizeof(x) / sizeof(int));


    // OTHER OPERATORS

    // type cast
    float varF;
    int varI = 5;
    varF = (float)varI;


    // Conditional operator
    int y = 5;
    y==5 ? printf("five") : printf("not five");

    int x = 3;
    switch((x>=0&&x<3)?1:(x>=4&&x<7)?2:0) {
        case 1:
            break;
        case 2:
            break;
        default:
            return 0;
    }

    // CHARACTER STRINGS
    // A char array is basically a string
    // zero terminated: the final element holds the value 0 to mark the end of the string.
    char s[]="A String!"; // although there are only 9 characters, the string has 10 elements (because the \0 is the terminating char at the end);

    char s[10] = {'A', ' ', 'S', 't', 'r', 'i', 'n', 'g', '!', '\0'};
    // make sure that there is a terminator at the end, otherwise you can have memory overflow errors. 

    // SCANF CHARACTER STRINGS
    char input[256];
    scanf("%s", input);
    // arrays implictly contain addresses, so theres no need for &

    char string[10]="Hello";
    scanf("%c", &(string[2])); // replace the 3rd character in the string "Hello";

    // MANIPULATING CHARACTER STRINGS
    // character strings are sometimes written with char* instead of char[]

    return 0;
}