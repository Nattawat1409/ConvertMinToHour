#include<stdio.h>
int main()
{
    int M ,M2=0 , MinuteInhours = 60 , hour;
    long long int minute = 0;
    printf("Input your number of minute : ");
    scanf("%d", &M);
    if(M==60 || M > 60)
    {
        minute = M;
        minute -= MinuteInhours ;
        M /=MinuteInhours;                              // for find a hour let say M = 120 that mean M/60 =  2  because 120/60 = 2 hours//
        minute %= 60;                                        // for find minute using modulo  // 
        hour = M;                                           // find hours // 
    }else{                                          //in case that hour less than 60 //
        hour = 0; 
        minute = M;
    }
    
    printf("the number of Hours and minute is : %dh %lldm\n",hour,minute);

    return 0;
}