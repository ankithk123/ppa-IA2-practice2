#include<stdio.h>
int input_number()
{
  int num;
  printf("enter the numbe:\n");
  scanf("%d",&num);
  return num;
  
}
int is_composite(int n)
{
  
for(int i=2;i<=n/2;i++)
  {
    if(n%i==0)
      return i;
  }
return 0;
}
void output(int n,int isComposite)
{
  if(isComposite)
    printf("%d is a composite number",n);
  else
    printf("%d is not a composite number",n);
      
}
int main()
  {
    int num=input_number();
    int a=is_composite(num);
    output(num,a);
    return 0;
    
    
    
  }