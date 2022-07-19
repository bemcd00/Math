#include <stdio.h>

void quadrant(int x, int y) {


        if (x>=1 && y>=1) {
                printf ("Coordinates %d,%d are in Quadrant 1\n", x,y); 
        } else if ( x <= -1 && y>= 1) {
                printf("Coordinates %d,%d are in Quadrant 2\n", x,y);
        } else if (x <= -1 && y <= 1) {
                printf("Coordiantes %d,%d are in Quadrant 3\n", x,y);
        } else if (x >= 1 && y <= -1) {
                printf("Coordiantes %d,%d are in Quadrant 4\n", x,y);
        }



}

int main() {

        int x1;
        int x2;
        int y1;
        int y2;
        int m1;
        int m2;

        printf("Enter Coordinate for x1: ");
        scanf("%d", &x1);

        printf("Enter Coordinate for y1: ");
        scanf("%d", &y1);

        quadrant(x1, y1);


        printf("Enter Coordinate for x2: ");
        scanf("%d", &x2);

        printf("Enter Coordinate of y2: ");
        scanf("%d", &y2);


        quadrant(x2, y2);


        m1 = y2 - y1;
        m2 = x2 - x1;

        printf("Slope is: %d/%d\n", m1, m2);

        return 0;
}
