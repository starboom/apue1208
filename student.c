#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <strings.h>
#define MAXLEN 1024
int main(int argc, char const *argv[])
{
	if(argc != 2)
	{
		printf("Usage:  error");
	}
	int fd;
	fd = open(argv[1],O_RDWR|O_CREAT|O_APPEND);

	if(fd <= 0)
	{
		perror("file:  ");
	}
	write(1,"welcome !\n",strlen("welcome !\n")+1);
	char buf[MAXLEN];
	gets(buf);
	char *buf2;
	while(1)
	{
		write(fd,&buf,strlen(buf)+1);
		bzero(&buf,sizeof(buf));
		buf2 = gets(buf);
		if('q' == *buf2)
		{
			break;
		}	
		write(fd,"\n",1);	
	}
	

		write(fd,"\n",1);	
	




	return 0;
}