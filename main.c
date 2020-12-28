/*************************************************************************
    > File Name: main.c
    > Author: 郭耀龙
    > Mail: 1373766226@qq.com 
    > Created Time: Mon 28 Dec 2020 06:13:55 PM CST
    > Function: 
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>

#define USER_LOGWARN(format,...)  \
        do {\
        printf("\n[Log Warning] [File:%s, Line:%d]: \n \
        ************* "format" *************\n",__FILE__, __LINE__,##__VA_ARGS__);\
        }while(0)

int main(int argc, const char* argv[])
{
    int a = 100;
    if(a == 50)
    {
        USER_LOGWARN("aaaaaaaaa = %d",a);
    }
    else
    {
        USER_LOGWARN("nononononooooooo");
    }
    
    

	return 0;
}
