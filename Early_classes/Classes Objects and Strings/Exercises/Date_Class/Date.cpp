#include <iostream>
#include "Date.h"

using namespace std;



Date::Date(int m, int d, int y): day(d), year(y){
    setMonth(m);
}

void Date::setMonth(int m){
    if(m < 1 || m > 12){
        month = 1;
    } else {
        month = m;
    }
}

int Date::getMonth(){
    return month;
}

void Date::setDay(int d){
    day = d;
}

int Date::getDay(){
    return day;
}

void Date::setYear(int y){
    year = y;
}

int Date::getYear(){
    return year;
}

void Date::displayDate(){
    cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
}