#include<stdio.h>
#include<conio.h>
int str[9][9];
void output();
void main()
{
    //定义
    int i, j, k, num, flag = 0, count = 0;
    int control = 0, con = 0;
    int cishu = 0;
    //输入
    printf("请输入81个数，空位用“0”代替：\n");
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            scanf_s("%1d", &str[i][j]);
        }
    }
    //处理
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
                    //试值开始
                    for (num = 1; num <= 9; num++)
                    {
                        flag = 0;
                        //不同于九格
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
                        //不同与九格结束
                        //不同于行列检测
                        if (flag == 1)
                        {
                            //不同于行
                            for (k = 0; k < 9; k++)
                            {
                                if (k != i)
                                    if (num == str[k][j])
                                    {
                                        control = 1;
                                    }
                            }
                            //不同于列
                            if (control == 0)
                                for (k = 0; k < 9; k++)
                                {
                                    if (k != j)
                                        if (num == str[i][k])
                                        {
                                            control = 1;
                                        }
                                }
                            //不同于行列结束
                        }//不同于行列检测结束
                        if ((control == 0) && (flag == 1))
                        {
                            str[i][j] = num;
                            count++;
                        }
                        control = 0;
                    }//试值结束
                    if (count > 1)
                    {
                        str[i][j] = 0;
                    }
                    count = 0;
                }//if(str[i][j]==0)控制结束
            }//每行中每列处理结束
        }//每行处理结束
        //检测是否全部赋值
        for (i = 0; i < 9; i++)
            for (j = 0; j < 9; j++)
            {
                if (str[i][j] == 0)
                {
                    con = 0;
                }
            }
        //分次输出
        printf("第%d次处理", ++cishu);
        output();
    }//while(con)结束
    //输出
    output();
    //结束
    _getch();
}//main结束
void output()
{
    int i, j;
    printf("答案为：\n");
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            printf(" %d ", str[i][j]);
        }
        printf("\n");
    }
}
