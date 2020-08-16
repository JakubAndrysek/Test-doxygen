#pragma once

#include <Arduino.h>

/**
 * @brief Arduino metronome library
 * 
 * Library 
 */
class ArduinoMetronome
{
private:

    int tInterval = 1000;
    int lastTime = 0;
    int nowTime = 0;
    
public:

    /**
     * @brief Arduino Metronome constructor - setup interval
     * 
     * @param interval in ms
     */
    ArduinoMetronome(int interval);


    /**
     * @brief Arduino Metronome constructor
     * 
     */
    ArduinoMetronome();


    /**
     * @brief Set metronome inteval
     * 
     * @param interval in ms
     */
    void setInterval(int interval);


    /**
     * @brief Get metronome interval
     * 
     * @return int 
     */    
    int getInterval();


    /**
     * @brief Metronome loop
     *  
     * @return bool
     */
    bool loopMs();
  

    /**
     * @brief Metronome loop (custom interval)
     * 
     * @param interval in ms 
     * @return bool 
     */
    bool loopMs(int interval);
};


