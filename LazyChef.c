#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	int a,b,x,m,d;
	while(t--){
	    scanf("%d %d %d",&x,&m,&d);
	    a=x*m;
	    b=x+d;
	    if(a<=b){
	    printf("%d\n",a);
	    }
	    else{
	        printf("%d\n",b);
	    }
	    
	}
	return 0;
}

