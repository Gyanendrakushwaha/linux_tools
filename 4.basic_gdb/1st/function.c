#include<stdio.h>
void myprint(char *msg){
if(msg!=NULL)
printf("msg: %s\n",msg);
}
int main(){
char buff[]="linux";
myprint(buff);
return 0;
}
