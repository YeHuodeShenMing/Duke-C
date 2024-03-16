#include <stdio.h>
typedef struct rect_tag
{
} rect_t;
int main()
{
    struct rect_t myRect;
    myRect.bottom = 1;
    printf("%d", myRect.bottom);
}