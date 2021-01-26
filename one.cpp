    void findTwoElement(int *arr, int size) 
    {
        int repeating,missing;
       for (int i = 0; i < size; i++) 
       {
        if (arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        else
            repeating=abs(arr[i]);
        }

 
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] > 0)
        {
            missing=i+1;
            break;
        }
    }
    cout<<repeating<<" "<<missing;

}