/* 2454 - Flíper */

#include <stdio.h>
 
int main(void) {
 
    int P, R;
    
    scanf("%d%d", &P, &R);
    
    if (!P) {
        printf("C\n");
    }
    else {
        if (R == 1) {
            printf("A\n");
        }
        else {
            printf("B\n");
        }
    }
 
    return 0;
}