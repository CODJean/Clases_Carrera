#include <stdio.h>
#include <string.h>

int  main()
{
    FILE *f;
    int b=0;
    float a=0;
    int u, c;
    f=fopen("piezas.txt", "a");
    fscanf(f, "%d %d", u, c);
    b=u*c;
    a=b+(b*0.2);
    fclose(f);
    return(0);
}
