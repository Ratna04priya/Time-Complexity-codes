#include<stdio.h>
int main()
{
	int x=0;
	 int flag=0;
	int n;
	scanf("%d",&n);
	while(x<n+1)
	{
		x=x+1;
		if(x==n)
		{
			flag=1;
			break;
		}
		x=x+2;
			if(x==n)
		{
			flag=1;
			break;
		}
		x=x+3;
		if(x==n)
		{
			flag=1;
			break;
		}
	}
	
	if(flag==1)
	printf("YES");
	if(flag==0)
	printf("NO");
	return 0;
}
