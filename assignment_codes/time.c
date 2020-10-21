#include <stdio.h>
#include <time.h>

int main()
{
time_t t;
time(&t);

   printf("Today's time : %s",ctime(&t));
}

