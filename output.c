#include <stdio.h>
#include "iop.h"
void output(stu *s, int n){
    for (int i = 0; i < n; i++){
        printf("学号：%s，姓名：%s，年龄：%d，专业：%s，总分：%.1f\n",
               s[i].id, s[i].name, s[i].age, s[i].major, s[i].sum);
    }
}
