#include "duration_class.hpp"
#include <stdio.h> //printf


// File for sandboxing and trying out code
int main(int argc, char **argv)
{
    printf("\nIf result = 1, the test is passed");
    
    //(1)(d)
    int result = 0;
    Duration p_zero; 
    if(p_zero.getDuration()==0)
        result = 1;


    printf("\n(1)(d): \tDuration: %d, result: %d", p_zero.getDuration(),result);

    //(1)(d)
    Duration p;
    p.set_Duration(6);
    result = 0;
    if(p.getDuration()==6)
        result = 1;

    printf("\n(1)(d): \tDuration: %d, result: %d", p.getDuration(), result);

    //(1)(e)
    result = 0;
    p.tick();
    if(p.getDuration()==7)
        result = 1;

    printf("\n(1)(e): \tDuration after tick: %d, result: %d", p.getDuration(), result);
    
    //(1)(f)
    result = 0;
    p_zero.tick(0);
    if(p_zero.getDuration()==0)
        result = 1;

    printf("\n(1)(f): \tDuration after tick: %d, result: %d", p_zero.getDuration(), result);

    //(1)(f)
    result = 0;
    p.tick(5);
    if(p.getDuration()==12)
        result = 1;

    printf("\n(1)(f): \tDuration after tick: %d, result: %d", p.getDuration(), result);
    
    //(1)(g and i) Time interval equal to alarm
    result = 0;
    Duration p_alarm;
    int alarmValue = 5;
    p_alarm.setAlarm(alarmValue);
    result = p_alarm.tick(5);
    
    if(result){
        printf("\n(1)(g and i): \tAlarm has ringed!\nTime: %d \tAlarm: %d", p_alarm.getDuration(),alarmValue);   
    }
    else
        printf("\n(1)(g and i): \tAlarm has not ringed!\nTime: %d \tAlarm: %d", p_alarm.getDuration(),alarmValue);   
    

    //(1)(g and i) Time interval higher then the alarm
    result = 0;
    alarmValue = 10;
    p_alarm.setAlarm(alarmValue);
    result = p_alarm.tick(15);
    
    if(result){
        printf("\n(1)(g and i): \tAlarm has ringed!\nTime: %d \tAlarm: %d", p_alarm.getDuration(),alarmValue);   
    }
    else
        printf("\n(1)(g and i): \tAlarm has not ringed!\nTime: %d \tAlarm: %d", p_alarm.getDuration(),alarmValue);  

    //(1)(g and i) tick tick tick..
    result = 0;
    alarmValue=25;
    p_alarm.setAlarm(alarmValue);
    printf("\nAlarm: %d", alarmValue);
    while(!result){
        printf("\nTime: %d",p_alarm.getDuration());
        result = p_alarm.tick();
        if(result){
            printf("\nTime: %d\tAlarm has ringed!\n",p_alarm.getDuration());   
        }
        else
            printf("\tAlarm has not ringed!");   
    }

    

        
    
    
    
    
    return 0;
}