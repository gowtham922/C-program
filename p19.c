#include<stdio.h>
int main(){int n,i;scanf("%d",&n);int f1=0,f2=1,f;for(i=1;i<=n;i++){printf("%d ",f1);f=f1+f2;f1=f2;f2=f;}}