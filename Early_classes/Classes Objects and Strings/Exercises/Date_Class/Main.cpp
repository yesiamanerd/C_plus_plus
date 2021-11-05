// (Date Class) Create a class called Date that includes three pieces of information as data
// members—a month (type int), a day (type int) and a year (type int). Your class should have a con-
// structor with three parameters that uses the parameters to initialize the three data members. For the
// purpose of this exercise, assume that the values provided for the year and day are correct, but ensure
// that the month value is in the range 1–12; if it isn’t, set the month to 1. Provide a set and a get func-
// tion for each data member. Provide a member function displayDate that displays the month, day
// and year separated by forward slashes (/). Write a test program that demonstrates class Date’s capa-
// bilities.
#include "Date.h"

using namespace std;

int main(){
    Date date1(1, 2, 2020);
    date1.displayDate();

    Date date2(13, 13, 1300);
    date2.displayDate();
}



