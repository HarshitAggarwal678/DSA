#include<stdio.h>
int main(){
    int a[10],b[10],c[20];
    int m,n,c2=0;
    printf("Enter the size of first array: ");
    scanf("%d",&m);
    printf("Enter elements of the array: ");
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d",&n);
    printf("Enter elements of the array: ");
    for(int j=0;j<n;j++){
        scanf("%d",&b[j]);
    }
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else if(a[i]>b[j]){
            c[k]=b[j];
            j++;
            k++;
        }  
        else{
            c[k]=a[i];
            i++;
            k++;
            j++;
            c2++;
        }
    }
    while(i<m){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<n){
        c[k]=b[j];
        j++;
        k++;
    }
    printf("union of arrays is: ");
    printf("\n");
    for(i=0;i<m+n-c2;i++){
        printf("%d ",c[i]);
    } 
    printf("\nHarshit Aggarwal\n");
    printf("2100320100079\n");
    printf("CSE-B\n");

    return 0;
}
