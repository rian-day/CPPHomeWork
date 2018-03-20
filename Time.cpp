//
// Created by 10513 on 2018/3/14.
//

#include "Time.h"

int Time::getHour() const {
    return hour;
}

void Time::setHour(int hour) {
    Time::hour = hour;
}

int Time::getMinute() const {
    return minute;
}

void Time::setMinute(int minute) {
    Time::minute = minute;
}

int Time::getSecond() const {
    return second;
}

void Time::setSecond(int second) {
    Time::second = second;
}

char Time::getTime() {
    return "h:",Time::hour,"m:",Time::minute,"s:",Time::second ;
}
