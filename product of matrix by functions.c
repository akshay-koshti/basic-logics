#include<stdio.h>
int a[2][2],b[2][2],m[2][2],i,j,k;
void main()
{
	input('a',&a[2][2]);
	input('b',&b[2][2]);
	system("cls");
	initializer(&m[2][2]);
	printf("multiplication of\n");
	print(&a[2][2]);
	printf("and\n");
	print(&b[2][2]);
	printf("is\n");
pro(&m[2][2],&a[2][2],&b[2][2]);
print(&m[2][2]);
}
void print(int a[2][2])
{
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",a[i][j]);}
			printf("\n");}
			}
			void input(char ch,int x[2][2])
			{
				for(i=0;i<2;i++){
					for(j=0;j<2;j++){
						printf("enter value of %c %d %d",ch,i,j);
						scanf("%d",&x[i][j]);
					}}}
									void initializer(int x[2][2])
									{
										for(i=0;i<2;i++){
											for(j=0;j<2;j++){
												x[i][j]=0;
}}}
					void pro(int m[2][2],int a[2][2],int b[2][2])
					{
						for(i=0;i<2;i++){
							for(j=0;j<2;j++){
								for(k=0;k<2;k++){
									m[i][j]+=a[i][k]*b[k][j];
									}}}}

