#include<stdlib.h>
#include<stdio.h>

int main () {
    int n,s=0,p=1,i;
    float m;
    i=1;
    do{ 
        printf("Entrez %d: ", i);
        scanf("%d", &m);
        s+=m;
        p*=m;
        i++;
    } while(i<=n);
    m=(float)s/n;
    printf("s : %d\n", s);
    printf("p : %d\n", p);
    printf("m : %f\n", m);

    return 0;
}