#include <stdio.h>
#include "file.h"
void reset_data(){
    n = 0;
    FILE *fp = fopen("student.dat","wb");
    fclose(fp);
    printf("数据已清空\n");
}