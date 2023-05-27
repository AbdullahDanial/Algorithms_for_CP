#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int q,int r){
    int i=l;
    int j=q+1;
    int k=l;
    int  b[100000];
    while(i<=q && j<=r){
        if(a[i]>=a[j]){
            b[k++]=a[i];
            i++;
        }
        else{
            b[k++]=a[j];
            j++;
        }
    }
    if(i>q){
        while(j<=r){
        b[k++]=a[j];
        j++;
        }
    }
    else{
        while(i<=q){
        b[k++]=a[i];
        i++;
    }
    }
    for(int i=0;i<k;i++){
        a[i]=b[i];
    }
}
void merge_sort(int a[],int l,int r){
if(l<r){
    int q=((l+r)/2);
    merge_sort(a,l,q);
    merge_sort(a,q+1,r);
    merge(a,l,q,r);
}
}
int main(){
int n;
cin>>n;
int a[n];
int l,r;
for(int i=0;i<n;i++){
    cin>>a[i];
}
merge_sort(a,0,n-1);
 for( int i=0;i<n;i++){
cout<<a[i]<<" ";
 }
return 0;
}