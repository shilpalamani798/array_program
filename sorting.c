#include<stdio.h>
void bubble_sort(int a[],int l)
{
	int i,j,temp;
	for(i=0;i<l-1;i++)
	{
           for(j=0;j<l-1-i;j++)
	   {
		   if(a[j]>a[j+1])
		   {
			   temp= a[j];
			   a[j]=a[j+1];
			   a[j+1]=temp;
		   }
           }
        }
}

int main()
{
	int arr[]={5,8,3,2,1,7,2};
	int l=sizeof(arr)/sizeof(arr[0]);
	 bubble_sort(arr,l);
	for(int i=0;i<l;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
  return 0;
 }
