#include<stdio.h>
//i v x l c
int a[6];
void R(int x){
    a[5]+=(x/100);
    if(x%10==4){
        a[1]++;
        a[2]++;
    }
    else if(x%10==9){
        a[1]++;
        a[3]++;
    }
    else{
        a[2]+=((x%10)/5);
        a[1]+=((x%10)-(5*((x%10)/5)));
    }
    if(((x%100)/10)==4){
        a[3]++;
        a[4]++;
    }
    else if(((x%100)/10)==9){
        a[3]++;
        a[5]++;
    }
    else{
        a[4]+=(((x%100)/10)/5);
        a[3]+=(((x%100)/10)-((((x%100)/10)/5)*5));
    }
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
        R(i);
    printf("%d %d %d %d %d",a[1],a[2],a[3],a[4],a[5]);
}

