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