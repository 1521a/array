#include "file.h"
#include <stdio.h>
int read_from_file(stu *s){
    FILE *fp = fopen("student.dat", "rb");
    if (fp == NULL) return 0;
    int n = fread(s, sizeof(stu), N, fp);
    fclose(fp);
    return n;
}