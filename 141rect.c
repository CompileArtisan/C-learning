
#include <stdio.h>

typedef struct {
    int x;
    int y;
} point;

typedef struct {
    point top_left;
    point bottom_right;
} rectangle;

int main() {
    point pt1, pt2;
    rectangle rect1;
    printf("Enter the x and y coordinates of the top_left: ");
    scanf("%d%d",&pt1.x,&pt1.y);
    printf("Enter the x and y coordinates of the bottom_right : ");
    scanf("%d%d",&pt2.x,&pt2.y);
    rect1.top_left = pt1;
    rect1.bottom_right = pt2;
    int width = rect1.bottom_right.x - rect1.top_left.x;
    int height = rect1.top_left.y - rect1.bottom_right.y;
    printf("The area of the rectangle is %d ", width*height);
    printf("\nThe perimeter of the rectangle is %d ", 2*(width+height));
    
    return 0;
}