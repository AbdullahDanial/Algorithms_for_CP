int countDistinct(int arr[], int n)
{
    int count = 1;
 
    for (int i = 1; i < n; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;
 
        // If not printed earlier, then print it
        if (i == j)
            count++;
    }
    return count;
}


