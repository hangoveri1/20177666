#include<stdio.h>
#include<conio.h>
int str[9][9];
void output();
void main()
{
    //����
    int i, j, k, num, flag = 0, count = 0;
    int control = 0, con = 0;
    int cishu = 0;
    //����
    printf("������81��������λ�á�0�����棺\n");
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            scanf_s("%1d", &str[i][j]);
        }
    }
    //����
    while (con == 0)
    {
        con = 1;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 9; j++)
            {
                if (str[i][j] == 0)
                {
                    //////////////////////////////////////////////////////////////////////////
                    //��ֵ��ʼ
                    for (num = 1; num <= 9; num++)
                    {
                        flag = 0;
                        //��ͬ�ھŸ�
                        if (i % 3 == 0 && j % 3 == 0)
                        {
                            if (num != str[i][j + 1] && num != str[i][j + 2] && num != str[i + 1][j] && num != str[i + 1][j + 1] && num != str[i + 1][j + 2] && num != str[i + 2][j] && num != str[i + 2][j + 1] && num != str[i + 2][j + 2])
                            {
                                flag = 1;
                            }
                        }
                        else if (i % 3 == 0 && j % 3 == 1)
                        {
                            if (num != str[i][j + 1] && num != str[i][j - 1] && num != str[i + 1][j] && num != str[i + 1][j + 1] && num != str[i + 1][j - 1] && num != str[i + 2][j] && num != str[i + 2][j + 1] && num != str[i + 2][j - 1])
                            {
                                flag = 1;
                            }
                        }
                        else if (i % 3 == 0 && j % 3 == 2)
                        {
                            if (num != str[i][j - 2] && num != str[i][j - 1] && num != str[i + 1][j] && num != str[i + 1][j - 2] && num != str[i + 1][j - 1] && num != str[i + 2][j] && num != str[i + 2][j - 2] && num != str[i + 2][j - 1])
                            {
                                flag = 1;
                            }
                        }
                        else if (i % 3 == 1 && j % 3 == 0)
                        {
                            if (num != str[i][j + 1] && num != str[i][j + 2] && num != str[i + 1][j] && num != str[i + 1][j + 1] && num != str[i + 1][j + 2] && num != str[i - 1][j] && num != str[i - 1][j + 1] && num != str[i - 1][j + 2])
                            {
                                flag = 1;
                            }
                        }
                        else if (i % 3 == 1 && j % 3 == 1)
                        {
                            if (num != str[i][j + 1] && num != str[i][j - 1] && num != str[i + 1][j] && num != str[i + 1][j + 1] && num != str[i + 1][j - 1] && num != str[i - 1][j] && num != str[i - 1][j + 1] && num != str[i - 1][j - 1])
                            {
                                flag = 1;
                            }
                        }
                        else if (i % 3 == 1 && j % 3 == 2)
                        {
                            if (num != str[i][j - 2] && num != str[i][j - 1] && num != str[i + 1][j] && num != str[i + 1][j - 2] && num != str[i + 1][j - 1] && num != str[i - 1][j] && num != str[i - 1][j - 2] && num != str[i - 1][j - 1])
                            {
                                flag = 1;
                            }
                        }
                        else if (i % 3 == 2 && j % 3 == 0)
                        {
                            if (num != str[i][j + 1] && num != str[i][j + 2] && num != str[i - 2][j] && num != str[i - 2][j + 1] && num != str[i - 2][j + 2] && num != str[i - 1][j] && num != str[i - 1][j + 1] && num != str[i - 1][j + 2])
                            {
                                flag = 1;
                            }
                        }
                        else if (i % 3 == 2 && j % 3 == 1)
                        {
                            if (num != str[i][j + 1] && num != str[i][j - 1] && num != str[i - 2][j] && num != str[i - 2][j + 1] && num != str[i - 2][j - 1] && num != str[i - 1][j] && num != str[i - 1][j + 1] && num != str[i - 1][j - 1])
                            {
                                flag = 1;
                            }
                        }
                        else if (i % 3 == 2 && j % 3 == 2)
                        {
                            if (num != str[i][j - 2] && num != str[i][j - 1] && num != str[i - 2][j] && num != str[i - 2][j - 2] && num != str[i - 2][j - 1] && num != str[i - 1][j] && num != str[i - 1][j - 2] && num != str[i - 1][j - 1])
                            {
                                flag = 1;
                            }
                        }
                        //��ͬ��Ÿ����
                        //��ͬ�����м��
                        if (flag == 1)
                        {
                            //��ͬ����
                            for (k = 0; k < 9; k++)
                            {
                                if (k != i)
                                    if (num == str[k][j])
                                    {
                                        control = 1;
                                    }
                            }
                            //��ͬ����
                            if (control == 0)
                                for (k = 0; k < 9; k++)
                                {
                                    if (k != j)
                                        if (num == str[i][k])
                                        {
                                            control = 1;
                                        }
                                }
                            //��ͬ�����н���
                        }//��ͬ�����м�����
                        if ((control == 0) && (flag == 1))
                        {
                            str[i][j] = num;
                            count++;
                        }
                        control = 0;
                    }//��ֵ����
                    if (count > 1)
                    {
                        str[i][j] = 0;
                    }
                    count = 0;
                }//if(str[i][j]==0)���ƽ���
            }//ÿ����ÿ�д������
        }//ÿ�д������
        //����Ƿ�ȫ����ֵ
        for (i = 0; i < 9; i++)
            for (j = 0; j < 9; j++)
            {
                if (str[i][j] == 0)
                {
                    con = 0;
                }
            }
        //�ִ����
        printf("��%d�δ���", ++cishu);
        output();
    }//while(con)����
    //���
    output();
    //����
    _getch();
}//main����
void output()
{
    int i, j;
    printf("��Ϊ��\n");
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            printf(" %d ", str[i][j]);
        }
        printf("\n");
    }
}
