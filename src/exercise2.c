#include <stdio.h>

int main() {

 double array[10];

 for (int i = 0; i < 10; i++) {
  scanf("%lf", &array[i]);
 }

 for (int i = 9; i >= 0; i--) {
  if (i == 0) {
   printf("%lf", array[i]);
  }
  else {
   printf("%lf ", array[i]);
  }
 }
}