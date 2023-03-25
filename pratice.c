#include "stdio.h"
#define N 6
void main()
{
    int score[N], i, j, temp;   //定义一维数组变量，累加变量，交换盒子
    printf("请输入考生成绩:");
    for (i = 0; i < N; i++)
    {
        scanf_s("%d", &score[i]);   //存入数组
    }
    for (i = 0; i < N - 1; i++)     //进行五次遍历
    {
        for (j = 0; j < N - 1; j++) //遍历数组，使每一个元素循环一遍
        {
            if (score[j] > score[j + 1])    //
            {
                temp = score[j];
                score[j] = score[j + 1];
                score[j + 1] = temp;
            }
        }
    }
    printf("数组排序后:");
    for (i = 0; i < N; i++)
        printf("%d ", score[i]);
}