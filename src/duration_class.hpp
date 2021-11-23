#ifndef _DURATION_CLASS_H
#define _DURATION_CLASS_H

class Duration
{
private:
    int time;
    int alarm;
    bool alarmHasBeenSet;

    bool checkAndUpdateAlarm();

public:
    // (1)(b) Constructor & Destructor 
    Duration();
    ~Duration();

    // (1)(a) Returns the value of the time attribute
    int getDuration();

    // (1)(c) Input argument t is used to set the time attribute
    void set_Duration(int t);

    //(1)(e) Add one increment to time
    bool tick();

    //(1)(f) Adds the argument dt to the time attribute variable
    bool tick(int dt);

    //(1)(g) 
    void setAlarm(int t);

};

#endif