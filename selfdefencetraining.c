#include <stdio.h>

int main(){
	int i,t,n,age,count=0;
	scanf("%d",&t); //number of testcases
	while(t--){
	    scanf("%d",&n); //number of women
	    int age[n];
	    for(i=0;i<n;i++){
	        scanf("%d",&age[i]);
	        if(age[i]>=10 && age[i]<=60){
	            count=count+1;
	        }
	    }
	    printf("%d\n",count);
	    count=0;
	}
	return 0;
}

