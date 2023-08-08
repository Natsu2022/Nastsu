#include <stdio.h>  // FILE
#include <stdlib.h> // exit

int main()
{
    FILE *pFile = NULL;

    int n; // ! number of all records & is the first value in the input.txt and not is 0 or lower
    float min, max, sum, average = 0.0f;

    char name[20]; // keep each record temporary
    float gpa;

    // open input, read data
    if ((pFile = fopen("input.txt", "rt")) == NULL)
    {
        fprintf(stderr, "Cannot open input file\n"); // ! The input.txt no DATA !
        exit(-1);                                    // ? You could check your file ?
    }

    // success
    fscanf(pFile, "%d", &n);

    // check nagative and zero
    if (n <= 0)
    {
        fprintf(stderr, "ERROR: NUMBER of elememt is "); // ! Your the first record OR n is 0 / lower !
        fclose(pFile);                                   // ? Could chane n to 1 OR higher ?
        exit(-3);
    }

    // loop
    int i;
    sum = 0;
    float result = 0;
    fprintf(stdout, "No. %-10s %5s", "Name", "GPA\n"); // * Display : No.      Name    GPA  *
    for (i = 0; i < n; i++)                            // *            1       Krar    3.25 *
    {   // read string                                 // *            2       Knark   3.89 * 
        fscanf(pFile, "%s", name);                     // *            3       Somsri  2.50 *
        // read float
        fscanf(pFile, "%f", &gpa);

        // * display on screen * 
        fprintf(stdout, "[%d] %-10s %5.2f\n", i + 1, name, gpa);

        // ??? calculate, find value min, max, average ???
        result = sum + gpa;
        fprintf(stdout, "[sum] : %0.2f + %0.2f [%-6s] = %0.2f\n", sum, gpa, name, result);
        sum = sum + gpa; // TODO: calalate summation = sum + all vale

        // check value
        if (i == 0)
        {
            max = gpa;
            min = gpa;
        }
        else // i != 0
        {
            // compare to max, min
            if ((max < gpa))
            {
                max = gpa;
            }
            if ((min > gpa))
            {
                // min
                min = gpa;
            }
        }
        
    }
    // * display *
    fprintf(stdout, "\n");
    fprintf(stdout, "NUMBER of RECORD: %d\n", n);

    fprintf(stdout, "%-5s %5d\n", "N:", n);
    fprintf(stdout, "%-5s %5.2f\n", "Min:", min);
    fprintf(stdout, "%-5s %5.2f\n", "Max:", max);
    fprintf(stdout, "%-5s %5.2f\n", "Sum:", sum); // TODO: Calculate sum in the *loop*, look on top up
    
    average = sum / (float)n; // TODO: Calculate of average
    fprintf(stdout, "%-5s %5.2f\n", "Avg:", average);
 
    // ! close the file !
    fclose(pFile);

// * close input---------------------------------------------------------------------------------------------------------
    // ! FILE *pFlie = NULL !
    pFile = NULL;

    // open output
    if ((pFile = fopen("output.txt", "wt")) == NULL)
    {
        // ! fail !
        fprintf(stderr, "CANNOT open output file\n");
        exit(-2);
    }

    // ! write data to output.txt (file) !
    fprintf(pFile, "n = %d\n", n);
    fprintf(pFile, "Min = %f\n", min);
    fprintf(pFile, "Max = %f\n", max);
    fprintf(pFile, "Sum = %f\n", sum);
    fprintf(pFile, "Average = %f\n", average);

    // close output
    fclose(pFile);

    // return with error
    exit(0);
}