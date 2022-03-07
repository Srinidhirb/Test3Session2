#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("Enter the fraction number:");
  scanf("%d%d%d%d",num1,den1,num2,den2);
}
void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
  *num3=(num1*den2)+(num2*den1);
  *den3=(den1*den2);
  int i;
   for(i=2;i<=*den3;i++)
     {
       if(*num3%i==0 && *den3==0)
       {
         *num3=*num3/i;
         *den3=*den3/i;
       }
     }
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("the sum of %d/%d and %d/%d is %d/%d",num1,den1,num2,den2,num3,den3);
}
int main()
{
 int a,b,c,d,num,den;
  input(&a,&b,&c,&d);
  add(a,b,c,d,&num,&den);
  output(a,b,c,d,num,den);
  return 0;
}