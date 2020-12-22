#include "stdio.h"
#include "stdlib.h"
#include "errno.h"
#include "string.h"
#include "math.h"
#include "time.h"
int main()
{
    int number = fprintf(stderr, "%s", "hello world!\n");
    fprintf(stderr, "%s : %d\n", "the number of bytes :", number);
    time_t ti; time(&ti);
    if (number < 14)
    {
        FILE *fp = NULL;
        fp = fopen("testfprintf.log", "w+");
        fprintf(fp,"time:%ld , %s %d\n",ti,"The number of bytes which fprintf sent to stdout file is: ",number);
        if (fp == NULL)
        {
            fprintf(stderr, "%s", "there is something wrong while get the file");
            perror("ERROR: ");
        }
        fclose(fp);
    }
    return 0;
}