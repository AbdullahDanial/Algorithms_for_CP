void findRepeat(int arr[],int n){
   int count=0; //count of repeated element
   int value=0; //to store repeated element
   for(int i=0;i<n;i++){
      if(arr[i]==arr[i+1]){
         count++;
         value=arr[i];
      }
   }
   count++; //for last element
   cout<<endl<<"Number of occurrences: "<<count;
}