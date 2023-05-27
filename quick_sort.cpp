#include<bits/stdc++.h>  
using namespace std;  
int partition (int a[], int lb, int ub)  
{  
    int pivot = a[lb];
    int start=lb;
    int end=ub;
    while(start<end){
        while(a[start]<=pivot){
        start++;
        }
        while(a[end]>pivot){
        end--;
        }
        if(start<end){
            swap(a[start],a[end]);
        }
    }
    swap(a[lb],a[end]);
    return end;
}  
 
void quick(int a[], int lb, int ub)   
{  
    if (lb < ub)  
    {  
        int p = partition(a, lb, ub);//p=swapped pivot which is in now (end) index   
        quick(a, lb, p - 1);  
        quick(a, p + 1, ub);  
    }  
}  
  
void printArr(int a[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout<<a[i]<< " ";  
}  
int main()  
{  
     int n;
     cin>>n;
     int a[n];
    for(int i=0;i<n;i++){
    cin>>a[i];
    } 
    quick(a, 0, n - 1);  
    printArr(a, n);  
      
    return 0;  
}  