#include<stdio.h>
int main(){int n,i,f1=1,f2=1,f;scanf("%d",&n);for(i=3;i<=n;i++){f=f1+f2;f1=f2;f2=f;}printf("%d",f2);}