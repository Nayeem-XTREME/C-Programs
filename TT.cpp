#include<stdio.h>
int search(int a[],int b)
{
    int i;
    for(i=0;i<100;i++){
        if(b==a[i]){
            return i;
            break;
        }
    }
}
int main()
{
    int a[100]={0},n,i,j,par,data,k,m=0,c[100]={0};
    a[1]=20;
    par=1;
   // for(i=0;i<100;i++)
       // a[i]=0;
    for(;;){
    printf("Enter the parent:");
    scanf("%d",&n);
    if(n==0)
        break;
    printf("Enter the data:");
    scanf("%d",&data);
    printf("Enter\n1\tleft child\n2\tRight Child\n");
    scanf("%d",&k);
    if(k==1){
        j=search(a,n);
        par=j*2;
        m=par;
        a[par]=data;
    }
    else{
        j=search(a,n);
        par=j*2+1;
        m=par;
        a[par]=data;
     }
    }
    for(i=1;;i++){
            if(a[i]==0)
            continue;
    printf("parent %d\nLeft child %d\nRight child %d\n",a[i],a[i*2],a[i*2+1]);
    c[i]=c[2*i]=c[2*i+1]=1;
    if(m==i)
        break;
    }
    for(i=0;i<100;i++)
        printf("%d\n",c[i]);
    return 0;
}
