#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if((a+b)>c)
  {
    if((a+c)>b)
    {
      if((b+c)>a)
      {
        printf("Valid");
      }
      else
        printf("Not Valid");
    }
    else
      printf("Not Valid");
  }
  else
    printf("Not Valid");
return 0;
}
