#include <stdio.h>
#include <signal.h>
#include <errno.h>
#include <stdlib.h>
void sig_int( int ); 
void pr_mask( const char *);	//call to funtion pr_mask
void oops(void *msg);