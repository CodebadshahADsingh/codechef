#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	
	scanf("%d",&t);
	while(t--){
	       int sum=0; 
        int N,P,X,Y;
        scanf("%d %d %d %d",&N,&P,&X,&Y);
        int arr[N];
        for(int i=1;i<=N;i++){
            scanf("%d",&arr[i]);
        }
        for(int i=1;i<=P;i++){
            
            if(arr[i]==0){
                
                sum+=X;
                
            }else if(arr[i]==1){
                sum+=Y;
            }
            
        }
        printf("%d\n",sum);
        
	}
	return 0;
}

