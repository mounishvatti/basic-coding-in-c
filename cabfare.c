#include <stdio.h>
int main() {
	int n,x,y;
    scanf("%d",&n);
    while(n--){	    
        scanf("%d %d",&x,&y);
	    if(x<y){
	        printf("FIRST");
	    }
	    else if(x==y){
	        printf("ANY");
	    }
	    else{
	        printf("SECOND");
	    }
    }
	return 0;
}

