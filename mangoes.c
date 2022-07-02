#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int m=0,x,y,z;
	    scanf("%d %d %d",&x,&y,&z);
	    for(int i=0;i<z;i++){
	        if(x*i+y<=z){
	            m=i;
	        }
	        else m=m;
	    }
	    printf("%d\n",m);
	    m=0;
	}
	return 0;
}
