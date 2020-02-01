/*
Project              : Personal Study
*
* Program name      : Pass_Structures_Functions.c
*
* Author            : Ajin
*
* Date created      : 20200131
*
* Purpose           : Learn
*
* Revision History  : 20200131
*
* Date        Author      Ref    Revision (Date in YYYYMMDD format) 
* 20200131    Ajin          1      First commit on 20200131

*/

#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void printDate(struct date);
void readDate(struct date *);

struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

// Write your readDate(), printDate(), and advanceDate() functions here

void readDate(struct date *Date){
    
    scanf("%4d %2d %2d", &(*Date).year, &(*Date).month, &(*Date).day);

}

void printDate(struct date Date){
    printf("%02d/%02d/%4d\n", Date.month, Date.day, Date.year);
}

struct date advanceDay(struct date Date){
    if(Date.month!=12)
    {
    
    if ((Date.month == 9 || Date.month == 04 || Date.month == 06 || Date.month == 11))
    {
        if(Date.day ==30){
            Date.day=1;
            Date.month+=1;
        }
        else{
            Date.day+=1;
        }
    
    }

    else if((Date.day <= 31)){
        if(Date.day == 31){
            Date.day=1;
            Date.month+=1;
        }
        else{
            Date.day+=1;
        }   
    }
    }

    else{
        if(Date.day<31){
        Date.day+=1;
        }
    else{
        Date.day=1;
        Date.month=1;
        Date.year+=1;
        }
    }
    return Date;

}

