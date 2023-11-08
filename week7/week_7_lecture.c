#include <stdio.h>

// DMA

// Dynamic memory allocation can be done using the stdlib.h
#include <stdlib.h>
// The functions perform a request for memory from the heap, however success is not guaranteed

int main(void) {
    malloc(1); // simplest DMA function, the 1 parameter is size (in bytes). Returns a void pointer to the memory address of the start of the allocation block of memory (or NULL if failed)

    int *intPointer; // when setting up pointers, remember to set a pointee!
    intPointer = (int*)malloc(sizeof(int));


    calloc(10, 8); // for allocation arrays of the same data type, takes quantity and element size (in butes)
    // eg: 10 integers, each is 8 bytes
    // returns void to allocated memory or NULL if failed
    // sets all elements to 0 (or null if pointers)

    realloc(1, 8); // for changing the size of dynamically allocation memoery blocks
    // takes pointer to allocated memory and new required size
    // returns void pointer to allocated memory or NULL if failed
    // if the 1st param is NULL, realloc acts like malloc


    // C++ way of doing it
    // using new and delete
    // to allocate to new space, use new. pointer to the mem will be returned if success, null if fail
    int *p = new int;

    // delete will free memory
    delete p;

    int *p = new int[4] // allocate an array of 4 ints
    delete [] p; // delete the array

    // MALLOC AND FREE AND NEW AND DELETE ARE NOT COMPATIBLE WITH EACH OTHER AND MUST NOT BE MIXED

    // OPENING FILES

    //fopen(const char *filename, const char *mode);
    // returns a poiter to a file stream (NULL if fails)
    //fclose(filepointer) closes the file, returns 1 if closed and 0 if failed

    // NON-TEXT BASED DATA
    // fread(void *buffer, size_T bytes, size_t quantity, FILE *file) reads up to quantity elements of size bytes from file into the memory buffer
    // fwrite(const void *buffer, size_t bytes, size_t quantity, FILE *file) writes quantity elements of size butes starting from memory address buffer into file

    return 0;
}