#include <stdio.h>
#include "stu.h"
#include "del.c"
#include "input.c"
#include "output.c"
#include "read_from_file.c"
#include "write_to_file.c"
#include "search.c"
#include "modify.c"
#include "sort.c"
#include "reset_data.c"
stu stu_arr[N];
int n = 0;
int main(){
    int choice;
    char id[50];
    n = read_from_file(stu_arr);
    while (1){
        printf("\n=============学生管理系统==============");
        printf("\n1.输入学生信息\n2.输出学生信息\n3.删除学生信息\n4.修改学生信息\n5.查询学生信息\n6.按总分降序排序\n7.按总分升序排序\n8.按学生学号降序排序\n9.按学生学号升序排序\n10.写入文件\n11.清空文件\n0.退出\n");
        if (scanf("%d", &choice) != 1) {
            printf("输入错误\n");
            while (getchar() != '\n');  // 清空输入缓冲区
            continue;
        }
        switch (choice) {
            case 1:
                input(stu_arr,n);
                printf("添加完毕\n");
                break;
            case 2:
                output(stu_arr,n);
                break;
            case 3:
                printf("请输入要删除的学生的学号：");
                scanf("%s", id);
                n = del(stu_arr,n,id);
                break;
            case 4:
                printf("请输入要修改的学生的学号：");
                scanf("%s", id);
                modify(stu_arr,n,id);
                break;
            case 5:
                search(stu_arr,n);
                break;
            case 6:
                sort_sd(stu_arr,n);
                printf("排序完毕\n");
                break;
            case 7:
                sort_sa(stu_arr,n);
                printf("排序完毕\n");
                break;
            case 8:
                sort_nd(stu_arr,n);
                printf("排序完毕\n");
                break;
            case 9:
                sort_na(stu_arr,n);
                printf("排序完毕\n");
                break;
            case 10:
                write_to_file(stu_arr,n);
                printf("写入完毕\n");
                break;
            case 11:
                reset_data();
                break;
            case 0:
                printf("已退出\n");
                return 0;
        }
    }
}
