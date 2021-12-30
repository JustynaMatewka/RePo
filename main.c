#include<stdio.h>
void binary_search(float tab[],int i,int n,float x){
    int q=0;
    if(i>n){
        return 0;
    }else{
        q=(i+n)/2;
        if(tab[q]==x){
            return 1;
        }else if(tab[q]>x){
            binary_search(tab,i,q-1,x);
        }else if(tab[q]<x){
            binary_search(tab,q+1,n,x);
        }
    }
}
void main(){
    int n,i;
    float tab[99],x;
    scanf("%i",&n);
    for(i=0;i<n;i++){
        scanf("%f",&tab[i]);
    }
    scanf("%f",&x);
    i=0;
    return binary_search(tab,i,n-1,x);
}
