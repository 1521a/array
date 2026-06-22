#include <stdio.h>
#include "modify.h"
#include <string.h>
#include <stdbool.h>
void modify(stu *s, int n, char id[]){
    bool found = false;
    int course_num;
    for (int i = 0; i < n; i++){
        if (strcmp(s[i].id, id) == 0){
            printf("请输入新学号：");
            scanf("%s", s[i].id);
            printf("请输入新姓名：");
            scanf("%s", s[i].name);
            printf("请输入新年龄：");
            scanf("%d", &s[i].age);
            printf("请输入新专业：");
            scanf("%s", s[i].major);
            printf("请输入课程数量：");
            scanf("%d", &course_num);
            s[i].sum = 0;
            for (int j = 0; j < course_num; j++){
                printf("请输入第%d门新成绩：", j + 1);
                scanf("%lf", &s[i].score[j]);
                s[i].sum += s[i].score[j];
            }
            found = true;
            printf("修改成功\n");
        }
    }
    if (!found){
        printf("未找到该学号的学生\n");
    }
}
