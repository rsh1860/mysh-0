#include "utils.h"

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
int i;
//the number of arguments
for(i=0;;i++)
	if(command[i]==null) break;
argc=i;
printf("argc == %d\n", argc);

//the argument list
char str[100] = char* command;
**argv = strtok("str", " ");

printf("argv == {");
while(result != null)
{
printf(" \"%s\"", result);
}
printf(" }");

  
}
