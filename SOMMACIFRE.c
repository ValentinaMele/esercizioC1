#include <stdio.h>

int main()
{

int num, res, n=0, d;

printf("inserisci un numero da 3 cifre=== ");
scanf("%d", &num);



if(num > 999)
{
   printf("ERRORE ");
}
else
{  
   while(num > 0){
        d = num%10;
        n=n+d;
        num=num/10;
        
   }
 printf("%d\n", n);
}

return 0;
}
                 
          