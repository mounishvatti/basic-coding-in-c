#include <stdio.h>
//using only conditional statements
int main(void) {
	int t,a,b,c;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d %d",&a,&b,&c);
	    if(a>b && a>c){
	        if(b>c){
	            printf("%d\n",b);
	        }
	        else printf("%d\n",c);
	    }
	    else if(b>c & b>a){
	        if(c>a){
	            printf("%d\n",c);
	        }
	        else printf("%d\n",a);
	    }
	    else if(c>b && c>a){
	        if(a>b){
	            printf("%d\n",a);
	        }
	        else printf("%d\n",b);
	    }
	}
	return 0;
}
