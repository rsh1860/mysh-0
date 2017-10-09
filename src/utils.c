#include "utils.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{

int n=0;

//memory allocation
char*ptr = malloc(sizeof(char)*100);
*argv = (char**)malloc(sizeof(char*)*100);
*argv[n] = (char*)malloc(sizeof(char)*100);


//arguments
char*cmd;
cmd = strtok(ptr, "' ', \n, \t");
if(cmd==NULL)
{
*argc=1; strcpy(*argv[0],"");
return;
}
while(cmd!=NULL)
{
strcpy((*argv)[n], cmd); ++n;
*argv[n] = (char*)malloc(sizeof(char)*100);
cmd = strtok(NULL, "' ', \n, \t");

*argc = n;

//free
free(ptr);

}
