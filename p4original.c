#include<stdio.h>
int main()
{
  int p,n;
  printf("enter the two number");
  scanf("%d%d",&p,&n);
  int area=p*n/2;
  printf("the area of triangle having base %d and height %d is %d",p,n,area);

  return 0;
}