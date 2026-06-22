#include <stdio.h>
#include "iop.h"
extern int n;
void input(stu *s,int cnt){
    int new_num, course_num;
    printf("请输入要添加的学生数量：");
    scanf("%d", &new_num);
    for (int i = cnt; i < cnt + new_num; i++){
        printf("请输入学号：");
        scanf("%s", s[i].id);
        printf("请输入姓名：");
        scanf("%s", s[i].name);
        printf("请输入年龄：");
        scanf("%d", &s[i].age);
        printf("请输入专业：");
        scanf("%s", s[i].major);
        printf("请输入课程数量：");
        scanf("%d", &course_num);
        s[i].sum = 0;
        for (int j = 0; j < course_num; j++){
            printf("请输入第%d门成绩：", j + 1);
            scanf("%lf", &s[i].score[j]);
            s[i].sum += s[i].score[j];
        }
    }
    n += new_num;
}
