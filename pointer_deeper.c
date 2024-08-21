// #include <stdio.h>
//
// void double_swap(double *p0, double *p1) {
//     double temp = *p0;
//     *p0 = *p1;
//     *p1 = temp;
// }
//
// int main() {
//     double a = 69.69;
//     double b = 420.420;
//
//     double_swap(&a, &b);
//     printf("%lf\n", a);
//     printf("%lf\n", b);
//
//     return 0;
// }



// #include <stdio.h>
// // pointer increment and decrement
// //pointers are incremented and decremented by the size of the data type they point to
// int main()
// {
//     int a = 22;
//     int *p = &a;
//     printf("p = %u\n", p); // p = 6422288
//     p++;
//     printf("p++ = %u\n", p); //p++ = 6422292    +4   // 4 bytes
//     p--;
//     printf("p-- = %u\n", p); //p-- = 6422288     -4   // restored to original value
//
//     float b = 22.22;
//     float *q = &b;
//     printf("q = %u\n", q);  //q = 6422284
//     q++;
//     printf("q++ = %u\n", q); //q++ = 6422288      +4   // 4 bytes
//     q--;
//     printf("q-- = %u\n", q); //q-- = 6422284       -4  // restored to original value
//
//     char c = 'a';
//     char *r = &c;
//     printf("r = %u\n", r);   //r = 6422283
//     r++;
//     printf("r++ = %u\n", r);   //r++ = 6422284     +1   // 1 byte
//     r--;
//     printf("r-- = %u\n", r);   //r-- = 6422283     -1  // restored to original value
//
//     return 0;
// }

// C program to illustrate pointer Addition
#include <stdio.h>

// Driver Code
int main()
{
    // Integer variable
    int N = 4;

    // Pointer to an integer
    int *ptr1, *ptr2;

    // Pointer stores the address of N
    ptr1 = &N;
    ptr2 = &N;

    printf("Pointer ptr2 before Addition: ");
    printf("%p \n", ptr2);

    // Addition of 3 to ptr2
    ptr2 = ptr2 + 3;
    printf("Pointer ptr2 after Addition: ");
    printf("%p \n", ptr2);

    return 0;
}