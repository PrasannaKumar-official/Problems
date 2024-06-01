//input
//13:30
//output
//1:30 PM
#include <stdio.h>

int main ()
{

int fhour;
int mins;
int whour;
       scanf("%d:%d", &fhour, &mins);

       if(((fhour==24 || fhour==0)) && (mins==0))
             printf("%d:%.2d PM",12,mins);

       else if((fhour==0) && (mins>0))
             printf("%d:%.2d AM",12,mins);

       else if (fhour < 12 && fhour > 0)
             printf("%d:%.2d AM",fhour,mins);

       else if (fhour == 12 && (mins==0))
            printf("%d:%.2d AM",fhour,mins);

       else if (fhour == 12 && (mins>0))
            printf("%d:%.2d PM",fhour,mins);

        else if (fhour >= 12 && fhour <= 24)
            {
             whour = (fhour - 12);
             printf("%d:%d PM",whour,mins);
            }
        else
            printf("Invalid time");
        return 0;

}
