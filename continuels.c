#include <stdio.h>
int main ()
{
  int a=10;
  do{
    if(a==15){
      a=a+1;
      continue;

    }
    printf("%d\t",a);
    a++;

  }while(a<20);
  return 0;
}