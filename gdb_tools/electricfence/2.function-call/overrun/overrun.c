#include<stdio.h>
#include<stdlib.h>

//sudo apt-get install -y electric-fence

void buggy(){
int *intptr;
int i;
intptr=(int *)malloc(sizeof(int)*4);   //int data type = 4 bytes.

for(i=0;i<10;i++){
*intptr =100;
printf("value at ptr intptr= %d\n",(*intptr));
intptr++;
//printf("value at ptr intptr = %d\n",(*intptr));
}
}

int main(){
buggy();
return 0;
}
