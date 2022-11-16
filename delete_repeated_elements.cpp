/*#include<iostream>
using namespace std;
int main ()
{
    int A[10], B[10], n, i, j, k = 0;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter elements of array : ";
    for (i = 0; i < n; i++)
        cin >> A[i];    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (A[i] == B[j])
                break;
        }
        if (j == k)
        {
            B[k] = A[i];
            k++;
        }
    }
    cout << " after deletion : ";
    for (i = 0; i < k; i++)
        cout << B[i] << " ";
    return 0;
}*/








#include<iostream>
 
using namespace std;
 
int main()
{
int i,j,k,n,a[30];
cout<<"How many elements?";
cin>>n;
cout<<"\nEnter elements of array\n";
for(i=0;i<n;++i)
cin>>a[i];
for(i=0;i<n;++i)
for(j=i+1;j<n;)
{
if(a[i]==a[j])
{
for(k=j;k<n-1;++k)
a[k]=a[k+1];
--n;
}
else
++j;
}
cout<<"\n";
for(i=0;i<n;++i)
cout<<a[i]<<" ";
 
return 0;
}

















