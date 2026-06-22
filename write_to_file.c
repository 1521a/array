#include "file.h"
#include <stdio.h>
void write_to_file(stu *s, int n){
    FILE *fp = fopen("student.dat","wb");
    fwrite(s, sizeof(stu), n, fp);
    fclose(fp);
}