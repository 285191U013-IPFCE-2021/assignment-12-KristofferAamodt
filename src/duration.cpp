#include "duration_class.hpp"
#include <assert.h>

int Duration::getDuration()
{
    return time; 
}


Duration::Duration()
{
    time = 0;
    alarm = -1; //Alarm = -1 is the value while alarm has not been set. Time can never be negative. 
    alarmHasBeenSet = false;
}


void Duration::set_Duration(int t)
{
    assert(t>=0);
    time = t;
}

Duration::~Duration(){

}

bool Duration::tick()
{
    bool alarmCheck = false;
    time = time +1; 

    //Check if the alarm has been set
    if(alarmHasBeenSet){
        //Check if the time has reached alarm
        alarmCheck = checkAndUpdateAlarm();
    }

    return alarmCheck; 
}


bool Duration::tick(int dt)
{
    assert(dt>=0);
    bool alarmCheck = false; 
    time = time + dt;

    //Check if the alarm has been set
    if(alarmHasBeenSet){
        //Check if the time has reached alarm
        alarmCheck = checkAndUpdateAlarm();
    }

    return alarmCheck; 
}


void Duration::setAlarm(int t)
{
    assert(t>=0);
    assert(t>=time);

    alarm = t;
    alarmHasBeenSet = true; 
}


bool Duration::checkAndUpdateAlarm()
{
    bool result = 0;
    if(alarm<=time){
            result = true; 
            
            //Reset alarm
            alarm = -1; 
            alarmHasBeenSet = false; 
        }
    
    return result; 

}