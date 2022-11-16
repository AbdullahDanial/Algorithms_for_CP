
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
        // If duplicate element found then increment count by 1
        if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    

