#include<stdio.h>
#include<fcntl.h>
 int main(){
	int fd1, fd2, fd3;
	
	fd2=creat("linux100.txt",O_WRONLY,777);

	fd2=creat("linux200.txt",O_WRONLY,777);

	
	fd2=creat("linux300.txt",O_WRONLY,777);
	////fd3=open("linux_xyz.txt",O_WRONLY,777); //OPEN() API// SYSYTEM CALLS
	
	printf("fd returned by kernel for linux111.txt =%d\n",fd1);//3
	
	printf("fd returned by kernel for linux111.txt =%d\n",fd2);//3

	
	printf("fd returned by kernel for linux111.txt =%d\n",fd3);//3

	close(fd1);

	close(fd2);
	close(fd3);
 }
