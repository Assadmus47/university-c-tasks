#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,c ;
    printf("Entrez trois nombre : "); 
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c) {
        printf("Le plus grand nombre est : %d\n", a);
    } else if (b > c) {
        printf("Le plus grand nombre est : %d\n", b);
    } else {
        printf("Le plus grand nombre est : %d\n", c);
    }
    return 0;
}
