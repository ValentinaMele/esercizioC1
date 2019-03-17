#include <stdio.h>

int main(){

int i=0;
int num;

printf("Da che numero devo partire");
scanf("%d", &num);

for(i=num; i>=0; i-=1){
printf("%d\n", i);

} 
printf("pronti al decollo");

}
