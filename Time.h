//
// Created by 10513 on 2018/3/14.
//

#ifndef CPPHOMEWORK_TIME_H
#define CPPHOMEWORK_TIME_H


class Time {
private:
    int hour;
    int minute;
    int second;
public:
    int getHour() const;

    void setHour(int hour);

    int getMinute() const;

    void setMinute(int minute);

    int getSecond() const;

    void setSecond(int second);

    char getTime();
};


#endif //CPPHOMEWORK_TIME_H
