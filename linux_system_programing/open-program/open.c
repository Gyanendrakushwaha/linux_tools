#include<stdio.h>
#include<fcntl.h>
 int main(){
	int fd1, fd2, fd3;

	fd2=open("linux111.txt",O_WRONLY,777);
	////fd3=open("linux_xyz.txt",O_WRONLY,777); //OPEN() API// SYSYTEM CALLS
	
	printf("fd returned by kernel for linux111.txt =%d\n",fd2);//3

	close(fd2);

 }
