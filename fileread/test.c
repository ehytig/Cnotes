#include <stdio.h>
int main()
{
    char filename[] = "test.dat";
    FILE *fp = fopen(filename, "r");
    int num;
    while (!feof(fp))
    {
        int result = fscanf(fp, "%d", &num);
        // break if nothing is read
        if (result == -1)
        {
            break;
        }
    }
    fclose(fp);
    return 1;
}