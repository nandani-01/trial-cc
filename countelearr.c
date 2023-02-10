#include<stdio.h>

int main(){
int arr[5]={4,2,2,4,1};
int arr2[5];
int arr3[5];
int m =1,i,j;
int ctr =0;

for(i=0;i<5;i++){
    arr2[i]=arr[i];
    arr3[i]=0;
}
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        if(arr[i]==arr2[j]){
            arr3[j]= m;
            m++;
        }
    }
    m=1;
}
for(int j=0;j<5;j++){
    if(arr3[j]==2){
        ctr++;
    }
    
}
printf("no. of same elements:%d\n",ctr);


return 0;
}