#include <stdio.h>

main()
{
    float p,r,t,si;
    printf("\n\nEnter principal,rate of interest and time\n\n\n");
    scanf("%f%f%f" , &p , &r, &t);
    printf("\nPrincipal = %f\tRate of interest = %f\tTime = %f\n",p,r,t);
    si=(p*r*t)/100;
    printf("\n\nSimple Interest = %f\n",si);
}





