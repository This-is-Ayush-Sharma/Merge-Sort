#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a[50],b[50],c[100],l1,l2,l3,i,j,k;
	// input in first array start
	printf("please enter the length of the first array:-");
	scanf("%d",&l1);
	printf("please enter values in first array\n");
	for(i=0;i<l1;i++)
	scanf("%d",&a[i]);
	//input in second array start
	printf("please enter the length of the second array:-");
	scanf("%d",&l2);
	printf("please enter values in second array\n");
	for(i=0;i<l2;i++)
	scanf("%d",&b[i]);
    i=0;j=0;k=0;
    while(i<l1 && j<l2)
    {
    	if(a[i]<b[j])
    	{
    		c[k]=a[i];
    		i++;k++;
		}
		else
		{
			c[k]=b[j];
			j++;k++;
		}
	}
	while(i<l1)
	{
		c[k]=a[i];
		i++;k++;
	}
	while(j<l2)
	{
		c[k]=b[j];
		j++;k++;
	}
	l3=k;
	printf("\n");
	for(i=0;i<l3;i++)
	{
		printf("%d ",c[i]);	
	}		
	return 0;
}