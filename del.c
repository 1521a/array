#include <stdio.h>
#include <string.h>
int del(stu *s, int n, char id[]){
    for (int i = 0; i < n; i++){
        if (strcmp(s[i].id, id) == 0){
            for (int j = i; j < n - 1; j++){
                s[j] = s[j + 1];
            }
            n--;
            printf("删除成功\n");
            return n;
        }
    }
    printf("未找到该学号的学生\n");
    return n;
}
