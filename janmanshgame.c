#include <stdio.h>

int main(void) {
	
	int t,x,y;
	scanf("%d",&t);
	if(t>=1 && t<=100){
	    while(t--){
	        scanf("%d %d",&x,&y);
	        if(x>=1 && x<=100){
	            if(y>=1 && y<=100){
	                if(x%2==0 && y%2==0){
	                    printf("Janmansh\n");
	                }
	                else if(x%2==0 && y%2!=0){
	                    printf("Jay\n");
	                }
	                else if(x%2!=0 && y%2!=0){
	                    printf("Janmansh\n");
	                }
	                else if(x%2!=0 && y%2==0){
	                    printf("Jay\n");
	                }
	            }
	        }
	    }
	}
	return 0;
}
