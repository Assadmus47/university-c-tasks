#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int is_perfect(int a){
    int s=0;
    for (int i = 1; i < a; i++)
    {
     if (a%i==0)
     {
         s+=i;
     }
    }
return s==a;
}
void for_loop (){
     for (int i = 1; i < 1000; i++) {
        if (is_perfect(i)) {
            printf("%d\n", i);
        }
        
    }
    
}
void while_loop (){
    int i=1;
    while(i< 1000) {
        if (is_perfect(i)) {
            printf("%d\n", i);
        }
        i++;
    }
}
void dowhile_loop (){
    int i=1;
    do {
        if (is_perfect(i)) {
            printf("%d\n", i);
        }
        i++;
    } while(i< 1000);
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