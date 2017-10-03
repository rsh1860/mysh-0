#include "utils.h"

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{

//the number of arguments
for(int i=0;;i++)
	if(command[i]==NULL) break;
argc=i;
printf("argc == %d\n", argc);

//the argument list
char str[100] = char* command;
**argv = strtok("str", " ");

printf("argv == {);
while(result != NULL)
{
printf(" \"%s\"", result);
}
printf(" }");

  
}
