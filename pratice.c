#include "stdio.h"
#define N 6
void main()
{
    int score[N], i, j, temp;   //����һά����������ۼӱ�������������
    printf("�����뿼���ɼ�:");
    for (i = 0; i < N; i++)
    {
        scanf_s("%d", &score[i]);   //��������
    }
    for (i = 0; i < N - 1; i++)     //������α���
    {
        for (j = 0; j < N - 1; j++) //�������飬ʹÿһ��Ԫ��ѭ��һ��
        {
            if (score[j] > score[j + 1])    //
            {
                temp = score[j];
                score[j] = score[j + 1];
                score[j + 1] = temp;
            }
        }
    }
    printf("���������:");
    for (i = 0; i < N; i++)
        printf("%d ", score[i]);
}