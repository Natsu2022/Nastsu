#include <stdio.h>
#include <string.h> // strcmp;

/*
void sorting(int data[], int nData)
{
    // n = nD, nD - 1, nD - 2, ..., 2
    int n, i;
    for (n = nData ; n > 1 ; n--)
    {
        // i = 0, 1, 2, ..., n - 2
        for ( i = 0 ; i < n - 1 ; i++)
        {
            // comapre and swap d[i] and d[i + 1]
            if (data[i] > data[i + 1])
            {
                int t = data[i];
                data[i] = data[i + 1];
                data[i + 1] = t;
            }
        }
    }
}*/
//This nomal sort, here
void sortStringAsc(char *data[], int nData)
{
    // n = nD, nD - 1, nD - 2, ..., 2
    int n, i;
    for (n = nData ; n > 1 ; n--)
    {
        // i = 0, 1, 2, ..., n - 2
        for ( i = 0 ; i < n - 1 ; i++)
        {
            // comapre and swap d[i] and d[i + 1]
            // from #include <string.h>
            if (strcmp(data[i], data[i + 1]) > 0)
            {
                char *t = data[i];
                data[i] = data[i + 1];
                data[i + 1] = t;
            }
        }
    }
}

// This is sort (descending), here
void sortStringDes(char *data[], int nData)
{
    // n = nD, nD - 1, nD - 2, ..., 2
    int n, i;
    for (n = nData ; n > 1 ; n--)
    {
        // i = 0, 1, 2, ..., n - 2
        for ( i = 0 ; i < n - 1 ; i++) 
        {
            // comapre and swap d[i] and d[i + 1]
            // from #include <string.h>
            if (strcmp(data[i], data[i + 1]) < 0)
            {
                char *t = data[i];
                data[i] = data[i + 1];
                data[i + 1] = t;
            }
        }
    }
}

/**
 * @brief 
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main (int argc, char *argv[])
{
    int i;
    // argv[0]     [1]      [2]      [3]
    // "ArgSort" "banana" "apple" "cherry"
    // argc = 4

    //check
    if (argc <= 1)
    {
        printf("Usage: ArgSort sr1 st2 ... stn");
        return -1;
    }

    //display before
    printf("\nunSorted: ");
    for(i = 1 ; i < argc ; i++)
        {
        printf("%s ", argv[i]);
        }
    printf("\n\n");

    // sort
    sortStringAsc(&argv[1], argc - 1); // Retrieve value from sortStringAsc

    // display after
    printf("sorted: ");
    for(i = 1 ; i < argc ; i++)
        {
        printf("%s ", argv[i]);
        }
    printf("\n\n");
    
    sortStringDes(&argv[1], argc - 1); // Retrieve value from sortStringDes

    // display sort (descending)
    printf ("sort (descending): ");
    
    for(i = 1 ; i < argc ; i++)
        {
        printf("%s ", argv[i]);
        }
    printf("\n\n");
    /*
    // sort
    int data[] = {3, 1, 4, 5, 2,};
    int nData = sizeof(data) / sizeof(int);

    // display before
    printf("unsorted: ");
    for ( i = 0 ; i < nData ; i ++)
        printf("%d%s", data[i], i < nData - 1 ? ", " : "}\n");

    // sorting
    sorting(data, nData);

    // display (sorted) after
     printf("sorted: ");
    for ( i = 0 ; i < nData ; i ++)
        printf("%d%s", data[i], i < nData - 1 ? ", " : "}\n");*/

    return 0;
}