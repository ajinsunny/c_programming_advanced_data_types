/*
Project              : Personal Study
*
* Program name      : Print_Quadrilaterals.c
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



struct point{
    int x;
    int y;
};
void printPoint(struct point pt);
void readPoint(struct point * ptr);
void printQuadrilateral(struct point *ptr);
int main(void) {
    struct point quadrilateral[4];
    int i;
    for (i=0; i<4; i++){
        readPoint(&quadrilateral[i]);
    }
    printQuadrilateral(quadrilateral);
    printf(quadrilateral[4]->y);
	return 0;
}

void readPoint(struct point * ptr) {
    printf("\nEnter a new point: \n");
    printf("x-coordinate: ");
    scanf("%d", &ptr->x);
    printf("y-coordinate: ");
    scanf("%d", &ptr->y);
}

void printQuadrilateral(struct point *ptr) {
    int i;
    for (i=0; i<4; i++) {
        printPoint(ptr[i]);
    }
}

void printPoint(struct point pt){
    printf("(%d, %d)\n", pt.x, pt.y);
}