/**
 * tsh - A tiny shell program with job control
 * 
 * <put your name and login ID here>
 * */
/**
 * main - The shell's main routine
 * */

#include "tsh.h"
int main(int argc, char **argv){
    char c;
    char cmdline[MAXLINE];
    int emit_prompt = 1;
    dup2(1,2);

}