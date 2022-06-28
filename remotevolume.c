#include <stdio.h>

int main(void) {
	int t,i,f;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d",&i,&f);
	    if(f>i){
	        printf("%d\n",f-i);
	    }
	    else {
	        printf("%d\n",i-f);
	    }
	}
	return 0;
}

