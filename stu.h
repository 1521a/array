#ifndef STU_H
#define STU_H
#define N 1000
#define M 30
typedef struct student{
    char id[50];
    char name[50];
    int age;
    char major[50];
    double score[M];
    double sum;
}stu;
extern stu stu_arr[N];
extern int n;
#endif
