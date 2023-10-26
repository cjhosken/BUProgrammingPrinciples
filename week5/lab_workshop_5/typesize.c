#include<stdio.h>

int main(void)
{
  printf("\ntypesize\n\nthis program determines the byte sizes of data types\n");
  printf("on a computer using the sizeof() operator\n\n");
  printf("SizeOf           char - %3d bytes, %4d bits\n",(int) sizeof(char), (int) sizeof(char)*8);
  printf("SizeOf      short int - %3d bytes, %4d bits\n",(int) sizeof(short int),(int) sizeof(short int)*8);
  printf("SizeOf            int - %3d bytes, %4d bits\n",(int) sizeof(int), (int) sizeof(int)*8);
  printf("SizeOf       long int - %3d bytes, %4d bits\n",(int) sizeof(long int), (int) sizeof(long int)*8);
  printf("SizeOf          float - %3d bytes, %4d bits\n",(int) sizeof(float), (int) sizeof(float)*8);
  printf("SizeOf         double - %3d bytes, %4d bits\n",(int) sizeof(double), (int) sizeof(double)*8);
  printf("SizeOf    long double - %3d bytes, %4d bits\n\n",(int) sizeof(long double), (int) sizeof(long double)*8);
  printf("SizeOf \"Hello World!\" - %3d bytes, %4d bits\n\n",(int) sizeof("Hello World!"), (int) sizeof("Hello World!")*8);
  return 0;
}