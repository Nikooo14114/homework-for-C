#include  <stdio.h>
int   f (int  x , int  y)
{  x = x+2 ;     
   y = y*2 ;
   return( x+y ) ;
}
int  main () 
 {  int  a , b , c ;
    scanf("%d%d" , &a , &b) ;
    c = f(a , b) ; //º¯Êıµ÷ÓÃ
    printf("%d\n" , c) ;
    return 0;
}  

