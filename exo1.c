#include <stdio.h>

int main() {
    int a,b,c ,m;
    printf("Entrez trois nombre : ");
    scanf("%d %d %d", &a, &b, &c);
    m=(a>b)?a:b;
    m=(m>c)?m:c;
    printf("Le plus grand nombre est : %d\n", m);
    
    return 0;
}   

