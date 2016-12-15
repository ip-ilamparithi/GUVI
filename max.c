#include<stdio.h>
#include<limits.h>
int main(){
int a[3],i,max=INT_MIN;
for(i=0;i<3;i++){
scanf("%d"&a[i]);
if(a[i]>max)
max=a[i];
}
printf("%d",max);
return 0;
}
