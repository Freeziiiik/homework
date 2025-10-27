#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(int agrc, char** argv) {

 double array[SIZE];
 double finalArray[SIZE];

 for (int i = 0; i < SIZE; i++) {
  scanf("%lf", &array[i]);
 }

 int k = atoi(argv[1]);
 int j = k % 10;

 if (k > -1) {
  for (int i = 0; i < SIZE; i++) {
   if (j < SIZE) {
    finalArray[j] = array[i];
   }
   else {
    finalArray[j % 10] = array[i];
   }

   j++;

  }
 }
 else {

  int q = SIZE + j;
  for (int i = 0; i < SIZE; i++) {
   if (q < SIZE) {
    finalArray[q] = array[i];
   }
   else {
    finalArray[q % 10] = array[i];
   }

   q++;
  }
 }

 for (int i = 0; i < SIZE; i++) {
  if (i == 9) {
   printf("%lf", finalArray[i]);
  }
  else {
   printf("%lf ", finalArray[i]);
  }
 }

}