#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(int argc, char** argv) {

    double array[SIZE];
    double finalArray[SIZE];

    int x = atoi(argv[1]);
    int k = atoi(argv[2]);

    for (int i = 0; i < SIZE; i++) {
        scanf("%lf", &array[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        if (i < k) {
            finalArray[i] = array[i];
        }
        else if (i == k) {
            finalArray[i] = x;
        }
        else {
            finalArray[i] = array[i - 1];
        }
    }

    for (int i = 0; i < SIZE; i++) {
        if (i == SIZE - 1) {
            printf("%lf", finalArray[i]);
        }
        else {
            printf("%lf ", finalArray[i]);
        }
    }

    return 0;
}