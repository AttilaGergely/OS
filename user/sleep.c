#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/sysproc.c"
#include "user/usys.s"

int main(int argc,char *argv[])


{
  if(argc<2){
    frpintf(2,"Halo normalny\n");
    exit(-1);
  }
  sleep(atoi(argv[1]));
  exit(0);
}

