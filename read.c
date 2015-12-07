// #include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <string.h>

/*
NAME
       write - write to a file descriptor

SYNOPSIS
       #include <unistd.h>

       ssize_t write(int fd, const void *buf, size_t count);
	   ssize_t unsigned long 
*//* 
int main()
{
	char buf[1024];
	gets(buf);
	
	write(1,buf,strlen(buf));
	cout << endl;
	
	cout << "fangzhenhua" << endl;
	while(1);
	return 0;
}
 */
 
 /*****
 NAME
       read - read from a file descriptor

SYNOPSIS
       #include <unistd.h>

       ssize_t read(int fd, void *buf, size_t count);

 ***************************************************/
/*  int main()
 {
	 char buf;
	 while(1)
	 {
		 read(0,&buf,1);
		 
	//	 buf = buf - 'a';
		 
		 printf("%c\n",buf - 32);
	//	 cout << buf - 32 << endl;
//	cout << buf - 32 << endl;		 
	 }

	 
 } */
/*  NAME
       open, creat - open and possibly create a file or device

/* /* SYNOPSIS
       #include <sys/types.h>
       #include <sys/stat.h>
       #include <fcntl.h>

       int open(const char *pathname, int flags);
       int open(const char *pathname, int flags, mode_t mode);

  */
 
int main()
{
/* 	int fd;
	fd = open("/mnt/hgfs/GitHub/fangzhenhua",O_RDWR);
	if(fd == -1)
	{
		printf("fd is faild\n");
		perror("hhh");
		exit(-1);
	}
	
	char buf[1024];
	gets(buf);
	
	write(fd,&buf,strlen(buf)); */

	
	int fd;
	fd = open("/mnt/hgfs/GitHub/apue_1/stu.txt",O_RDWR | O_CREAT |O_APPEND);
	if(fd <= 0)
	{
		perror("file :");
	}
	char buf[1024];
	gets(buf);
	printf("aaaaaaaaaaa");
	write(fd,&buf,strlen(buf)+1);
	char a = '\n';
	write(fd,&a,1);
	
	return 0;
	
}
 
