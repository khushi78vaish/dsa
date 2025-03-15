#include <stdio.h>
#include <math.h>
void jump(int a[],int n, int key){
    int step=sqrt(n);
    int prev =0,comparisons=0;
    
    while(prev<n && a[(prev+step<n)?prev+step:n-1]<key){
        comparisons++;
        prev+=step;
        if(prev>=n){
            printf("Not present %d",comparisons-1);
            return;
        }
    }
    
    for(int i=prev;i<n&&i<=prev+step;i++){
        comparisons++;
        if(a[i]==key){
            printf("present %d",comparisons-1);
            return;
        }
    }
    printf("Not present %d",comparisons-1);
}

int main() {
	int T;
	scanf("%d",&T);
	while(T--){
	    int n,key;
	    scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	        
	    }
	    scanf("%d",&key);
	    jump(a,n,key);
	}
	return 0;

}

