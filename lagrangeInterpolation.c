#include<stdio.h>
#include<math.h>

int main()
{
	int i,j,n;
	float mx[100],my[100],x=0,y=0,nr,dr;
	printf("Enter number of pairs: ");
	scanf("%d",&n);
	printf("Enter the element of x: ");
	for(i=0;i<n;i++)
	   scanf("%f",&mx[i]);
	   printf("Enter the element of y: ");
	for(i=0;i<n;i++)
	 scanf("%f",&my[i]);
	 printf("Enter the value of x for finding y: ");
	 scanf("%f",&x);

	for(i=0;i<n;i++)
	{
		nr=1,dr=1;
		for(j=0;j<n;j++)
		{
			if(j!=i)
			{
				nr=nr*(x-mx[j]);
				dr=dr*(mx[i]-mx[j]);
			}
		}
		y+=(nr/dr)*my[i];
	}  
	printf("\nWhen x= %f then y= %f",x,y)  ;
}