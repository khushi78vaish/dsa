#include <stdio.h>
int binary(int a[],int n,int key)
{
    int low=0,high=n-1,comparisons=0;
    while(low<=high){
        comparisons++;int mid=low+(high-low)/2;
        
        if(a[mid]==key){
            printf("present %d",comparisons);
            return;
        }
        else if(a[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    printf("Not present %d",comparisons);
}

int main() {
	int T;
	scanf("%d",&T);
	while(T--){
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    int key;
	    scanf("%d",&key);
	    binary(a,n,key);
	}
	return 0;

}

