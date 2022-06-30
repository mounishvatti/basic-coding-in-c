#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int i,j,k,n,count=0;
	    scanf("%d",&n);
	    int s[n];
	    int d[n];
	    for(i=0;i<n;i++){
	        scanf("%d",&s[i]);
	    }
	    for(j=0;j<n;j++){
	        scanf("%d",&d[j]);
	    }
	    for(k=0;k<n;k++){
	        if(s[k]==d[k]){
	            count=count+1;
	        }
	        else{
	            count=count;
	        }
	    }
	    printf("%d\n",count);
	    count=0;
	}
	return 0;
}

