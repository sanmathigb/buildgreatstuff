#include <stdio.h>
int main ()
{
  int arr []={1,5,4,3,2,1,67,778};
  int n = sizeof(arr)/sizeof(arr[0]);
  for (int i=0;i<n;i++)
  {
      printf("%d\t",arr[i]);	 
  }
  for (int i=0;i<n;i++)
  {
      for (int j=0;j<(n-1);j++)
      {
          if (arr[j]>arr[j+1])
	  {
              int temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
           } 
      }
  }
printf("\n");
printf("\n");
for (int i=0;i<n;i++)
{	
    printf("%d\t", arr[i]);	
}
printf("\n");
return 0;  		 		    	
}

