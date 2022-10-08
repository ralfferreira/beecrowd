/* 2234 - Cachorros-Quentes */

#include <stdio.h>
 
int main(void) {
 
    int H, P;
    double media;
    
    scanf("%d%d", &H, &P);
    media = H * 1.0 / P;
    printf("%.2lf\n", media);
 
    return 0;
}