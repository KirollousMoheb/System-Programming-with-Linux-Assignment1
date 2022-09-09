#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void){

char line  [200];
while(1){
printf("\nAna Gahez Ya Basha >");
scanf("%s",line);

if(!strcmp(line,"exit")){
printf("\nGood Bye :) \n");
exit(0);
}
printf("You said: %s",line);
}


return 0;
}
