#include<stdio.h>
#include<stdlib.h>
int main () {
    int n,m,s=0,p=1,i;
    float m;
    scanf("%d", &n);
    i=1;
    while(i<=n) {
        s+=m;
        p*=m;
        i++;
    }
    m=(float)s/n;
    printf("s : %d\n", s);
    printf("p : %d\n", p);
    printf("m : %f\n", m);
    return 0;
}