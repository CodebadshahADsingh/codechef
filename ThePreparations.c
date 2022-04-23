#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	int m,n,k,a;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d %d",&m,&n,&k);
	    a=n*k;
	    if(a>=m)
	   {
	       printf("No\n");
	   }
	   else
	   {
	       printf("Yes\n");
	       
	   }
	    
	}
	return 0;
}

