
#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,n,array[20],find,low,high,mid,no_0f_com=0,temp;
printf("Enter number of elements: ");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=1;i<=n;i++)
{
scanf("%d",&array[i]);
}
for (i = 0; i < n; ++i) 
        {

            for (j = i + 1; j <= n; ++j)
            {

                if (array[i] > array[j]) 
                {

                    temp=  array[i];
                    array[i] = array[j];
                    array[j] = temp;

                }

            }

        }

// for(i=0;i<n;i++)
// {
//     printf("%d ",array[i]);
// }
printf("Enter the number to be searched: ");
scanf("%d",&find);
low=1;
high=n;
while(low<=high)
{
mid=(low+high)/2;
++no_0f_com;

if(find<array[mid])
  {
      high=mid-1;
  }
else if(find>array[mid])
  {
  low=mid+1;
 }
else
{
printf("Number is found\n");
printf("No of comparisons is %d",no_0f_com);
return 0;
}
}
printf("Number is not found");
return 0;
}


