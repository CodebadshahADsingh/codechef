#include <stdio.h>

int main(void) 
{
	// your code goes here


	int count;
	
	    int arr[4];
	    for(int i =0;i<4;i++)
	    {
	        scanf("%d",&arr[i]);
	        
	    }
	    
	    
	    for(int i=0;i<4;i++)
	    {
	        if(arr[i]>=10)
	        {
	            count++;
	        }
	    }
	    printf("%d",count);
	    
	    
	    
	
	return 0;
}

