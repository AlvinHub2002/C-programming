#include<stdio.h>
int main()
{
int c, first, last, middle, n, search, array[100],count=1;
printf("Enter number of elements\n");
scanf("%d", &n);
printf("Enter %d integers\n", n);
for (c = 0; c < n; c++){
count ++;
scanf("%d", &array[c]);
}
printf("Enter value to find\n");
scanf("%d", &search);
first = 0;
last = n - 1;

while (first <= last) {
    middle = (first+last)/2;
if (array[middle] < search)
first = middle + 1;
else if (array[middle] == search) {
printf("%d found at %d.\n", search, middle);
break;
}
else
last = middle - 1;
}
if (first > last)
printf("%d is not present\n", search);
printf("Time Complexity:%d",count);
return 0;
}