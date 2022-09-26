#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)

{

  if (argc < 1){
    exit(1);
  }

  float x=atoi(argv[1]);
  float y=atoi(argv[2]);
  float z=x/y;
  printf("%f",z);
}
