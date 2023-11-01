// #define macroname
// #define macroname macro
// #define macroname (parameters) macro

// #undef macroname

// __FILE__ - the name of the source file being processed as a string
// __LINE__ - the current line number in the source file as an integer


#define PI 3.1415926f


// DERIVED DATA TYPES: data types that are based on other existing data types (eg: arrays)


// pointer: data type for storing memory addresses (stored as 8byte value)
// when declared, they must be derived from the data type of the variables


int main(void) {
    printf("%f", PI);

    int* p; // both ways work
    int *p; /* an integer pointer (this is a more commonly written way)*/ 
    // the asterized says that p is a pointer to an integer;

    int o = 3;
    int *a = &o;


    // assign value 5 to variable o;
    *a = 5; // same as saying
    o = 5;

    // UNITIALIZED POINTERS WILL CRASH THE PROGRAM
    // null is not a pointer or an address, but a constant value that means NOTHING
    // null is usefull when initializing pointers

    int *p5 = NULL;

    int a[20];
    int *p;
    p = a;
    // storing the address of array a into p

    // POINTER TO VOID
    // pointer has no base type, so you will need to cast a type address into the pointer
    void *p;
    int x = 5;
    p = (int*) &x;


    // BE AWARE OF POINTER ARITHMETIC

    int *pint;
    (*pint)++; // changes the address content
    pint++; // change the address position 

    // look at proc for example
    int x,y;
    proc(&x, &y);




    // some derived types can be very complex and hard to read

    float *apf[] = NULL; // a reference to a float array 


    // to combat this, we can make typedefs

    typedef int integer;
    integer varI = 5;

    typedef integer* intPtr;

    integer x = 5;
    intPtr pint = &x;


    typedef float* fptr;

    fptr apf[] = NULL;


    // CUSTOM BOOLEAN TYPE
    #define false 0
    #define true 1
    typedef char boolean;
    boolean b = false;



    return 0;
}

void proc(int *a, int *b) {
    *a = 1;
    *b = 2;
}

// C/C++ TYPE SHORTCOMINGS

// no fixed point arithmetic
// no Boolean type (in C)
// no set data type (in C)
// no string type (in C)

