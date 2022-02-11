#include <stdio.h>
int main(){
    int a[] = {8, 1000, -2, 10, 6, 2, 4};
    int n= sizeof(a)/sizeof(a[0]);
    int i,m,z;
    for(i=0;i<n-1;i++){
        for(z=0;z<n;z++){
            printf("%d,", a[z]);
        } 
        printf("\n");
        for(m=i+1;m<n;m++){
            if(a[i]>a[m]){
                a[i]=a[i]-a[m];
                a[m]=a[i]+a[m];
                a[i]=a[m]-a[i];
            }
        }
    }

    for(i=0;i<n;i++){
        printf("%d,", a[i]);
    } 
    
    return 0;
}