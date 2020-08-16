
#include "ArduinoMetronome.hpp"

ArduinoMetronome::ArduinoMetronome(int interval)
{
    tInterval = interval;
    lastTime = millis();
}

ArduinoMetronome::ArduinoMetronome()
{
    lastTime = millis();
}


void ArduinoMetronome::setInterval(int interval)
{
    tInterval = interval;
}


int ArduinoMetronome::getInterval()
{
    return tInterval;
}

bool ArduinoMetronome::loopMs()
{
    nowTime = millis();

    if(nowTime >= (lastTime + tInterval))
    {
        lastTime = nowTime;
        return true;
    }
    else
    {
        return false;
    }
        
}

bool ArduinoMetronome::loopMs(int interval)
{
    nowTime = millis();

    if(nowTime >= (lastTime + interval))
    {
        lastTime = nowTime;
        return true;
    }
    else
    {
        return false;
    }
        
}


