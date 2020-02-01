/*
Project              : Personal Study
*
* Program name      : Pass_Structures_Functions.c
*
* Author            : Ajin
*
* Date created      : 20200129
*
* Purpose           : Learn
*
* Revision History  : 20200129
*
* Date        Author      Ref    Revision (Date in YYYYMMDD format) 
* 20200129    Ajin          1      First commit on 20200129

*/

#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void readDate(struct date *);
void printDate(struct date);

int main(void) {
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}

// Write your readDate() and printDate() functions here

void readDate(struct date *Date){
    
    scanf("%d %d %d", &(*Date).year, &(*Date).month, &(*Date).day);

}

void printDate(struct date Date){
    if(Date.day<10){
        printf("%02d/%02d/%4d", Date.month, Date.day, Date.year);
    }
    else{
        printf("%d/%d/%d", Date.month, Date.day, Date.year);

    }
    
}


