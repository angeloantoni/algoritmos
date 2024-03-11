#include <stdio.h>

int main(){


int a[10] = {2, 6, 8, 3, 10, 9, 1, 21, 33, 14};
int x = 2;
int y = 4;

printf("a[0] = %d \n", a[0]);
printf("a[x] = %d \n", a[x]);
printf("a[y] = %d \n", a[y]);
printf("a[x + 1] = %d \n", a[x + 1]);
printf("a[y + 3] = %d \n", a[y + 3]);
printf("a[x * 4] = %d \n", a[x * 4]);
printf("a[x + y] = %d \n", a[x + y]);
printf("a[a[5]] = %d \n", a[a[5]]);
printf("a[8 - a[2]] = %d \n", a[8 - a[2]]);



}
