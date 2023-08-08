float mean(float data0[], int n)
{ // data n = (1 + 2 + 3 + 4 + 5 / n or 5)
    int i;
    float sum;
    for ( i = 0 ; i < n ; i++)
    {
        sum = sum + data0[i];        
    }
    float mean = sum / n;
    return mean;
}