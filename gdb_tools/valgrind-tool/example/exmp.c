#include<stdio.h>
#include<stdlib.h>

void buggy(){
int *intptr;
//int i;
intptr=(int *)malloc(sizeof(int));   //int data type = 4 bytes
*intptr =100;
printf("value at ptr intptr= %d\n",(*intptr));
free(intptr); //we free here dynamic allocated ptr
*intptr=99; //trying to derefer here.

	//printf("vlaue at ptr intptr =%d\n",(*intptr));
}
int main(){
buggy();
return 0;
}
