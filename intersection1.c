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
            i++;
        }
        else if(a[i]>b[j]){
            j++; 
        }  
        else{
            c[k]=a[i];
            i++;
            k++;
            j++;
            c2++;
        }
    }
    printf("Intersection of arrays is: ");
    printf("\n");
    for(i=0;i<c2;i++){
        printf("%d ",c[i]);
    } 
printf("\nHarshit Aggarwal\n");
printf("2100320100079\n");
printf("CSE-B\n");
}
