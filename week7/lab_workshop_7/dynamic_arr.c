#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(void) {
    int *array;
    int array = (int*)malloc(8*sizeof(int));


    int *pInt=NULL,elements=5;
    int pInt=(int*)realloc(NULL, elements*sizeof(int));
    free(pInt);
    pInt=NULL;

}