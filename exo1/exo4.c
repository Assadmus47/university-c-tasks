#include <stdlib.h>
#include <stdio.h>


int main () {
    int n,m,s,p,i;
    float m;
    printf("Entrez n: ");
    scanf("%d", &n);
    for(s=0, p=1, i=1; i<=n; i++) {
        p*=m;
        s+=m;
    }
    m =(float)s/n;
    printf("s : %d\n", s);
    printf("p : %d\n", p);
    printf("m : %f\n", m);

    return 0;
}