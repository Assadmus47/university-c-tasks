#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b ;
    printf("Entrez deux nombre : ");
    scanf("%d %d", &a, &b);
    if ((a > 0 && b>0)||(a<0 && b<0)) {
        printf("Le produit est positif\n");
    } else if (a<0 && b>0 || a>0 && b<0) {
        printf("Le produit est negatif\n");
    } else {
        printf("Le produit est nul\n");
    }
    return 0;
}