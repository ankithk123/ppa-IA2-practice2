#include<stdio.h>

int input_side()
{
  int n;
  printf("enter the sides\n");
  scanf("%d",&n);
}
int check_scalene(int a, int b, int c)
{
  int isscalene;
  if(a!=b&&b!=c&&c!=a)
  {
    return isscalene;
  }
 

}
void output(int a,int b,int c,int isscalene)
{
  if(a!=b&&b!=c&&c!=a)
  {
    printf("the triangle is scalene\n");

  }
  else
  {

  
  printf("the triangle is not scalene\n");
}
 
    }
 
int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}