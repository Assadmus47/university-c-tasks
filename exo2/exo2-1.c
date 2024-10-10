#include<stdio.h>
#include<math.h>
#include<string.h>
int is_perfect (int n) {
    int a,b,c,o,f;
    a=n/100;//1
    b=n%100;//53
    o=b/10;//5
    f=b%10;//3
    return (n==(pow(a,3)+pow(o,3)+pow(f,3))) ;
    
}
void for_loop (){
     for (int i = 140; i <= 500; i++) {
        if (is_perfect(i)) {
            printf("%d\n", i);
        }
        
    }
    
}
void while_loop (){
    int i=140;
    while(i<=500) {
        if (is_perfect(i)) {
            printf("%d\n", i);
        }
        i++;
    }
}
void dowhile_loop (){
    int i=140;
    do {
        if (is_perfect(i)) {
            printf("%d\n", i);
        }
        i++;
    } while(i<=500);
}


int main (){
   puts("For loop click 1");
   puts("while loop click 2");
   puts("do while loop click 3");
   int a;
   scanf("%d",&a);
   switch (a){
    case 1 : for_loop();
    break;
    case 2 : while_loop();
    break;
    case 3 : dowhile_loop();
    break;
    default : printf ("eror");
    break;
   }
    
    
    return 0;
}