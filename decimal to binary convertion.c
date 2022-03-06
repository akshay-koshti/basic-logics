 #include<stdio.h>
  void main()
   {
    long long int a,b,sum,i;
    float c=0.1;
     printf("enter number: ");
      scanf("%d",&a);
       sum=0;
 for(;a!=0;)
  {
   b=a%2;a=a/2;
 c=c*10;i=(int)c;
   sum=sum+i*b;
   }
 printf("in binary %d",sum);
 }
