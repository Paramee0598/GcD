#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int a, b;
    int G, H;
    int p;
    printf("Please input first number : ");
    scanf("%d", &a);
    printf("Please input second number : ");
    scanf("%d", &b);


    if (a >= 0 && b >= 0) {
        while (b != 0)
        {
            p = b;
            b = a % b;
            a = p;
        }
    }
    G = a;
    
   
   
    printf("\nThe greatest common divisor is %d\n", G);

    
    return 0;
}