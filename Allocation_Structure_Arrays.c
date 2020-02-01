
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
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
    
    int num;
    struct point *polygon;
    scanf("%d", &num);
    polygon = (struct point *) malloc(num * sizeof(struct point));
    initializePoly(polygon, num);
    printPoly(polygon, num);
    free(polygon);
	return 0;
    

}

void readPoint(struct point * ptr) {
    printf("\nEnter a new point: \n");
    printf("x-coordinate: ");
    scanf("%d", &ptr->x);
    printf("y-coordinate: ");
    scanf("%d", &ptr->y);
}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

// Write your initializePoly() function here
void initializePoly(struct point *ptr, int num){
    int i;
    for (i=0; i<num; i++){
        //readPoint(&ptr[i]);
        ptr[i].x = -1*i;
        ptr[i].y = i*i;
    }
    
}
