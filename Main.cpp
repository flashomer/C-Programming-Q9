#include<stdio.h>
#include<stdlib.h>

int search(int n, double num[]) {
	int i = 0;
	
	for(int j=n; j>0; j--) {
			
		if( (num[j] - (int)num[j]) != 0 && (num[j-1] - (int)num[j-1]) != 0) i = j;
	}
	
	return i;
}

int main()
{
   double numbers[100];
   int n,x;
   
   printf("Enter number of elements:\n");
   
   scanf("%d",&n);
    
   printf("Enter %d integers:\n", n);
   
   for (int i = 0; i < n; i++)
      scanf("%lf",&numbers[i]); 

	x = search( (n),numbers);
	printf("\nDouble number is %.2lf and index num is %d",numbers[x],x);

   return 0;  
}
