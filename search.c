#include <stdio.h>
#include "search.h"
#include <string.h>
void search(stu *s, int n){
    int choice;
    char id[50];
    printf("请选择查询方式：\n1.全部查询\n2.按学号查询\n");
    scanf("%d", &choice);
    if (choice == 1){
        for (int i = 0; i < n; i++){
            printf("学号：%s，姓名：%s，年龄：%d，专业：%s，总分：%.1lf\n", s[i].id,s[i].name,s[i].age,s[i].major,s[i].sum);
        }
    }
    else if (choice == 2){
        printf("请输入要查询的学生的学号：");
        scanf("%s", id);
        for (int i = 0; i < n; i++){
                if (strcmp(s[i].id, id) == 0){
                    printf("学号：%s，姓名：%s，年龄：%d，专业：%s，总分：%.1lf\n", s[i].id,s[i].name,s[i].age,s[i].major,s[i].sum);
                }
        }
    }

}
