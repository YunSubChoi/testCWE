//c 467_1

double *foo;
...
foo = (double *)malloc(sizeof(foo));

/* 이렇게 수정할 것
 double *foo;
...
foo = (double *)malloc(sizeof(*foo));
*/