#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	int a,b,c;
	while(t--){
	    scanf("%d %d %d",&a,&b,&c);
	    if(c<b&&c<a){
	        printf("Alice\n");
	    }
	    else if(b<a&&b<c)
	    {
	        printf("Bob\n");
	        
	    }
	    else
	    {
	        printf("Draw\n");
	    }
	    
	}
	return 0;
}

