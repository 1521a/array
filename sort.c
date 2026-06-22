#include "sort.h"
#include <stdio.h>
#include <string.h>

// 比较学号：先比位数（长度），位数相同再用 strcmp
int compare_id(const char *a, const char *b) {
    int len_a = strlen(a), len_b = strlen(b);
    if (len_a != len_b) return len_a - len_b;
    return strcmp(a, b);
}

void sort_sd(stu *s, int n){
    stu t;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (s[j].sum < s[j+1].sum){
                t = s[j]; s[j] = s[j+1]; s[j+1] = t;
            }
        }
    }
}
void sort_sa(stu *s, int n){
    stu t;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (s[j].sum > s[j+1].sum){
                t = s[j]; s[j] = s[j+1]; s[j+1] = t;
            }
        }
    }
}
void sort_nd(stu *s, int n){
    stu t;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (compare_id(s[j].id, s[j+1].id) < 0){
                t = s[j]; s[j] = s[j+1]; s[j+1] = t;
            }
        }
    }
}
void sort_na(stu *s, int n){
    stu t;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (compare_id(s[j].id, s[j+1].id) > 0){
                t = s[j]; s[j] = s[j+1]; s[j+1] = t;
            }
        }
    }
}
