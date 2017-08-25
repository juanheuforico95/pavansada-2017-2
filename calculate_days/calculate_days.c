#include <stdlib.h>
#include <stdio.h>
#include "calculate_days.h"
#include <assert.h>

/*
*calculateDays
*Given a month and day of the month return the number of days
*@param:
month: month
monthDay: day of the month
@return:
interger number of days
*/
int calculateDays(Month currentMonth, int monthDay, int year){
    int daysPerMonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
    
    int days = monthDay;
    Month i;
    if(isLeapYear(year)){
        daysPerMonth[Feb] +=1;
    }
    assert(monthDay >= 1 && monthDay <= daysPerMonth[currentMonth]);
    
    for(i=Jan; i < currentMonth; i++){
        days += daysPerMonth[i];
    }
    return days;
}
/*****************
 * is leap year
 * given year return 1 if it is leap year else return 0
 * param:
 * year: year
 * return integer 1||0
 * */
int isLeapYear(int year){
    assert(year > 0);
    if((year % 4 ==0 && (year % 100 !=0)) || (year % 400==0)){
        return 1;
    }else{
        return 0;
    }
    
}