#include <stdio.h>
#include <stdlib.h>

// typedef int* PTR_t;
void f(int *A, int i)
{
    printf("%d\n", *(A + i));
}
int print(char *c)
{
    int i = 0;
    while (*c != '\0')
    {
        printf("%c", *c);
        c++;
        i++;
    }
    printf("?\n");
    return i;
}
void changePTR(void *p)
{
    // p = NULL;
    printf("%p\n", p);
    printf("%d\n", *(int *)p);
    *(int *)p = 9;
    (void *)p;
}
void fo(int **A, int r, int c)
{
    printf("%d", *(*A + 1));
}
int main()
{
/*
    int d[4]={2,3,5,9};
    void *vpr;
    int x = 30;
    vpr = &x;
    printf("%ld\t%ld\n", sizeof(void*), sizeof(char*));
    PTR_t a = &x;
    printf("%p\t%p\n", a, a+1);
    a = a + 1;
    printf("%p\t%p\n", a, a+1);
    printf("%d\t%d\t%d", d[2], *(d+2), 2[d]);
    void *vidp = 00000000;
    printf("%p\t%ld\n", NULL, sizeof(NULL));
    printf("%p\t%ld\n", vidp, sizeof(vidp));
    //while(1)
    //printf("%p\t%ld\n", unite8_t*, sizeof(unite8_t));
    int* P;
    printf("%p\n", P);
    int g[5] = {1, 2, 3, 4, 5};
    printf("%d" , *(g+1));
    int a = -5;
    int* p = &a;
    printf("the value = %d at the place: %p\n", *p, p);
    void* vp = p;
    printf("the value = %d at the place: %p\n", *((int*)p), ((int*)p));

    int a[5] = {2,3,5,9,0};
    f(a, 5);
    char str[] = "Hello World!";
    int l = print(str);
    printf("%d\n", l);
    print(str);

    int x = 5;
    int* pr = &x;
    printf("%p\n", pr);
    changePTR(pr);
    printf("%p\n", pr);
    printf("%d", *pr);

    char* str = "HELLO";
    str[0] = 'A';
    print(str);

    char sr[] = "HELLO";
    sr[0] = 'A';
    print(sr);
    */

    /*
    int arr[2][3] = {{1, 2, 3},{4, 5, 6}};
    int (*prr)[3] = arr;
    printf("the size of prr is %ld\n", sizeof(prr+1));
    printf("%p\t%d\n", prr+0, *(*(prr  )+0));
    printf("%p\t%d\n", prr+1, *(*(prr  )+1));
    printf("%p\t%d\n", prr+2, *(*(prr  )+2));
    printf("%p\t%d\n", prr+3, *(*(prr+1)+0));
    printf("%p\t%d\n", prr+4, *(*(prr+1)+1));
    printf("%p\t%d\n", prr+5, *(*(prr+1)+2));
    // char *p = (char *)malloc(999);
    // *p = 'p';
    // printf("%ld %c", sizeof(p), *p);
    */

    /*
    int (*prr)[3] = arr;
    printf("the size of prr is %ld\n", sizeof(prr+1));
    printf("%p\t%d\n", prr+0, *(*(prr  )+0));
    printf("%p\t%d\n", prr+1, *(*(prr  )+1));
    printf("%p\t%d\n", prr+2, *(*(prr  )+2));
    printf("%p\t%d\n", prr+3, *(*(prr+1)+0));
    printf("%p\t%d\n", prr+4, *(*(prr+1)+1));
    printf("%p\t%d\n", prr+5, *(*(prr+1)+2));
    int a[1][1][1] = {{{7}}};
    printf("%p\t%p\t%ld\n", a, *a, sizeof(**a));
    printf("%p\t%ld\t%ld\n", a, sizeof(*a), sizeof(**a));
    printf("%ld\t%ld\t%ld\n", sizeof(a), sizeof(*a), sizeof(**a));
    printf("%p\t%p\t%d", a, *a, **a);
    printf("%d\t%d\t%d\n", &a, &(*a), &(**a));
    printf("%p\t%p\t%d\n", a, *a, 0[**a]);
    printf("%p\t%p\t%p\t%d", a, *a, **a, ***a);
    int num = 5;
    int *p = &num;
    int **pp = &p;
    int ***ppp = &pp;
    printf("%p\t%p\t%p\t%p\n", &num, *pp, **ppp, ppp);
    printf("%d", *(*arr + 1));
    int k = 5;
    int ***p = &k;
    printf("%d\t%p\t%d\n", *k, p, *p);

    printf("%p %p %p", arr[0], arr, *arr);

    fo(arr, 0,0);
    */

    /*
    int x = 5;
    int *a = (int*) malloc(sizeof(int));
    *a = 10;
    printf("%d\n", *a);
    free(a);
    printf("%d\n", *a);
    */

    /*
    int *a = (int*) malloc(3 * sizeof(int));
    a[0] = 1;a[1] = 2;
    printf("%d\t%d\t%d\n", a[0], a[1], a[2]);
    */

    /*
    int *a = (int*) calloc(3, sizeof(int));
    a[0] = 1;a[1] = 2;
    printf("%d\t%d\t%d\n", a[0], a[1], a[2]);
    */

    /*
    // dynamic array
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int *A = (int*)calloc(n, sizeof(int));

    for(int i = 0; i < n; i++){
        int tmp;
        printf("\nA[%d]= ", i);
        scanf("%d", &tmp);
        A[i] = tmp;
    }
    for(int i = 0; i < n; i++){
        printf("%d\t", A[i]);
    }
    */
    return 0;
}