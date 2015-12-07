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

	/* 
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
	
	return 0; */
/* 	LSEEK(2)                   Linux Programmer’s Manual                  LSEEK(2)

NAME
       lseek - reposition read/write file offset

SYNOPSIS
       #include <sys/types.h>
       #include <unistd.h>

       off_t lseek(int fildes, off_t offset, int whence); */
	   /* 
	  char buf;
	  int fd = open("zimu.txt",O_RDWR);
	  if(fd == -1)
	  {
		  perror("open error");
		  exit(-1);
	  } */
	   // struct stat {
              // dev_t     st_dev;     ID of device containing file
              // ino_t     st_ino;     inode number 偏移量
              // mode_t    st_mode;    protection
              // nlink_t   st_nlink;   number of hard links  硬链接数
              // uid_t     st_uid;     user ID of owner 
              // gid_t     st_gid;     group ID of owner
              // dev_t     st_rdev;    device ID (if special file)
              // off_t     st_size;    total size, in bytes 文件的大小
              // blksize_t st_blksize; blocksize for filesystem I/O 文件锁定的大小
              // blkcnt_t  st_blocks;  number of blocks allocated 文件锁定的数量
              // time_t    st_atime;   time of last access
              // time_t    st_mtime;   time of last modification
              // time_t    st_ctime;   time of last status change
          // };

		struct stat *st;
		
		printf("%p",st -> st_uid);
		
		return 0;
	
}
 
