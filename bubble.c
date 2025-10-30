#include <stdio.h>

/* bubble:
   Sorts array a of length n in ascending order using bubble sort.
   Parameters:
     - a[]: integer array to sort
     - n  : number of elements in a
*/
void bubble(int a[], int n) {
    int i, j, temp;

    /* Outer loop: perform n passes (worst-case). After each pass the largest
       remaining element bubbles to its correct position at the end. */
    for (i = 0; i < n; i++) {

        /* Inner loop: compare adjacent elements and swap if out of order.
           We go up to n-i-1 because the last i elements are already sorted. */
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {      /* if current element is greater than next */
                temp = a[j + 1];        /* save the smaller element */
                a[j + 1] = a[j];       /* move the larger element right */
                a[j] = temp;           /* place the smaller element in current spot */
            }
        }
    }
}

int main() {
    int n, i, a[100];

    /* Read number of elements from input.
       Note: no validation here — if n > 100 this will overflow the array. */
    scanf("%d", &n);

    /* Read n integers into the array a. */
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    /* Call bubble sort to sort the array in-place. */
    bubble(a, n);

    /* Print the sorted array elements separated by spaces. */
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}