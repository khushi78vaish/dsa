#include <stdio.h>
int insert(int a[],int n,int key)
{
    int comparisons =0;
    for(int i=0;i<n;i++)
    {
        comparisons++;
        if(a[i]==key){
            printf("present %d\n",comparisons);
            return;
            
        }
        
    }
    printf("Not Present %d\n",comparisons);
}

int main() 
{
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
        insert(a,n,key);
    }
    return 0;

}

