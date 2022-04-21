#include <stdio.h>

int main(void) {
	// your code goes here
	int t,x,y,z,w;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d %d",&x,&y,&z);
	    w=(y*3)+(x-y)*(-1);
	    if(w>=z)
	    printf("PASS \n");
	    else
	    printf("FAIL \n");
	    
	}
	return 0;
}

