void toUpper(char str[])
{
    // 2.1 check 'a' to 'z' 
    int i = 0;
    while(str[i] != '0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            // 'a' => 'z' *** use str[i] - 32
            // 'A' => 'Z'
            // change to 'A' to 'Z'
             str[i] = str[i] - 32;

        i++;     
    }
}