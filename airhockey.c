#include <stdio.h>
//codechef | C
int main(void) {
	int t,x,y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d",&x,&y);
	    if(x>y){
	        printf("%d\n",7-x);
	    }
	    else if(x==y){
	        printf("%d\n",7-x);
	    }
	    else{
	        printf("%d\n",7-y);
	    }
	}
	return 0;
}

