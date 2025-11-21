#include<stdio.h>
int main(){int n,i;scanf("%d",&n);for(i=1;i*i<=n;i++)if(i*i==n){printf("perfect");return 0;}printf("not perfect");}