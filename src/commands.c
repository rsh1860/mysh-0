#include <string.h>
#include <stdio.h>
#include "commands.h"

int do_cd(int argc, char** argv) {
  if (!validate_cd_argv(argc, argv))
    return -1;

  
  return 0;
}

int do_pwd(int argc, char** argv) {
  if (!validate_pwd_argv(argc, argv))
    return -1;

  

  return 0;
}

int validate_cd_argv(int argc, char** argv) {
  if(strcmp(argv[0],"cd")&&argc==2)
  return 1;
  else return 0;
}

int validate_pwd_argv(int argc, char** argv) {
  if(strcmp(argv[0],"pwd")&&argc==1)
  return 1;
  else return 0;
}
