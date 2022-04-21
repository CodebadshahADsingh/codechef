#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	int a,x,y,z;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d %d",&x,&y,&z);
	    a=x+z*2;
	    if(a>=y)
	    printf("YES \n");
	    else
	    printf("NO \n");
	    
	}
	return 0;
}

