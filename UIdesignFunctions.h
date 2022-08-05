/*
 * @Author: ChenJia 
 * @Date: 2022-08-02 12:20:14 
 * @Last Modified by: Mr.Home
 * @Last Modified time: 2022-08-02 13:36:18
 * @mainContent:该头文件主要内容为UI界面需要的函数。：利用矩阵打印“后宫选妃”4个字
 */


#include <stdio.h>
#include <windows.h>
#include <unistd.h>


//进度条
void progressBar(int wait)//等待时间，微秒单位
{
    int i = 0;
    char bar[102] = {0};
    char *lab = "-\\|/*";
    while (i <= 100)
    {
        printf("[%-101s][%d%%][%c]\r", bar, i, lab[i%5]);
        fflush(stdout);
        usleep(wait);
        bar[i++]  = '#';
        bar[i] = 0;
    }
    putchar('\n');
}
//打印“后宫选妃”
void printMyUI()
{
    //正式打印之前：清屏
    // system("cls");
     for (short i = 1; i <= 11; i++)
    {
        for (short j = 1; j <= 70; j++) //后 =======================================================
        {
            if ((i == 1 && j == 9) || (i == 2 && j == 6) || (i  == 3 && j == 3) || ((i == 4 || i == 5) && (i != 1) && j != 10) && j < 10)
            {
                putchar('*');
            }else if ((i >= 6 && i <= 8) && (j == 2 || j == 9 || j == 1) && j < 10)
            {
                putchar('*');
            }else if ((i == 9)  && j < 10)
            {
                putchar('*');
            }else if (i == 10 && j == 1 && j < 10)
            {
                putchar('*');
            }else if (i ==1 && j ==  26)//分界线 宫=======================================================
            {
                putchar('*');
            }else if (i == 2 && (j > 20 && j <=30))
            {
                putchar('*');
            }else if ((i  == 3 || i == 5) && (j != 22 && j!= 29) && (j > 20 && j <=30))
            {
                putchar('*');
            }else if (i == 4 && (j == 3 || j == 28 || j == 21 || j == 30 || j == 23) && (j > 20 && j <=30))
            {
                putchar('*');
            }else if ((i  == 8 || i == 10) && (j != 22 && j!= 29 && j != 21 && j != 30) && (j > 20 && j <=30))
            {
                putchar('*');
            }else if (i == 9 && (j == 23 || j == 28) && (j > 20 && j <=30))
            {
                putchar('*');
            }else if (i  == 1 && j == 41 && j < 50)//分界线 选=======================================================
           {
            putchar('*');
           }
           else if (i == 2 && (i == 41 || j == 47) && j < 50)
           {
            putchar('*');
           }
           else if (i == 3 && (j == 42 ||  j == 46 || j == 47) && j < 50)
           {
            putchar('*');
           }
           else if (i == 4 && (j == 41 || j >= 45 && j <= 49) && j < 50)
           {
            putchar('*');
           }
           else if (i == 5 && ( j == 41 ||j == 2 || (j >= 44 && j <= 47)) && j < 50)
           {
            putchar('*');
           }
           else if (i == 6 && (j == 41 ||j == 2 || (j >=  44 && j <= 50)))
           {
            putchar('*');
           }
           else if (i == 7 && (j == 41 || j == 46 || j == 48 || j ==50))
           {
            putchar('*');
           }
           else if (i == 8 && (j == 41 || j == 44 || j == 45 || j >= 48 && j <= 50))
           {
            putchar('*');
           }
           else if (i == 9 && j == 42)
           {
            putchar('*');
           }
           else if (i == 10 && j >= 43 && j <= 50)
           {
            putchar('*');
           }
           else if (i == 1 && j == 64)//分界线 妃=======================================================
           {
            putchar('*');
           }
           else if (i == 2 && j == 63)
           {
            putchar('*');
           }
           else if (i == 3 && (j == 64 || j == 62))
           {
            putchar('*');
           }
            else if (i == 4 && (j != 64  &&  j != 62 &&  j >= 61))
            {
                putchar('*');
            }
            else if (i == 5 && (j == 63 || j == 61 || j == 70))
            {
                putchar('*');
            }
            else if (i == 6 && (j == 62 || j == 63 || j >= 65))
            {
                putchar('*');
            }
            else if (i == 7 && (j == 62 || j == 65))
            {
                putchar('*');
            }
            else if (i == 8 && (j == 61 || j == 63 || j == 65))
            {
                putchar('*');
            }
            else if (i == 9 && ( j == 61 || j == 64 || j == 65 || j == 70))
            {
                putchar('*');
            }
            else if (i == 10 && (j == 61 || j >= 64))
            {
                putchar('*');
            }else{
                putchar(' ');
            }
        }
        usleep(100000);
        putchar('\n');
        
    }
}

//打印函数模块
void printFunMode()
{
    
    // system("cls");//清屏
    printf("%-5c+++++++++", ' ');
    usleep(50000);
    printf("%-10c+++++++++", ' ');
    usleep(50000);
    printf("%-13c+++++++++", ' ');
    usleep(50000);
    printf("%-13c++++++++\n", ' ');
    // printf("|后宫选妃|\n");
    int i = 0;
    while (i < 6)
    {
         printf("%-5c|", ' ');
         usleep(50000);
         ++i;
         printf("下");
         usleep(50000);
         ++i;
         printf("旨");
         usleep(50000);
         ++i;
         printf("选");
         usleep(50000);
         ++i;
         printf("妃");
         usleep(50000);
         ++i;
         printf("|");
         usleep(50000);
         ++i;
         i = 0;
         printf("%-9c|", ' ');
         usleep(50000);
         ++i;
         printf("翻");
         usleep(50000);
         ++i;
         printf("牌");
         usleep(50000);
         ++i;
         printf("宠");
         usleep(50000);
         ++i;
         printf("幸");
         usleep(50000);
         ++i;
         printf("|");
         usleep(50000);
         ++i;

         i = 0;
         printf("%-11c|", ' ');
         usleep(50000);
         ++i;
         printf("打");
         usleep(50000);
         ++i;
         printf("入");
         usleep(50000);
         ++i;
         printf("冷");
         usleep(50000);
         ++i;
         printf("宫");
         usleep(50000);
         ++i;
         printf("|");
         usleep(50000);
         ++i;

         i = 0;
         printf("%-12c|", ' ');
         usleep(50000);
         ++i;
         printf("朕");
         usleep(50000);
         ++i;
         printf("的");
         usleep(50000);
         ++i;
         printf("爱");
         usleep(50000);
         ++i;
         printf("妃");
         usleep(50000);
         ++i;
         printf("|\n");
         usleep(50000);
         ++i;
    }
    printf("%-5c+++++++++", ' ');
     usleep(50000);
    printf("%-10c+++++++++", ' ');
     usleep(50000);
    printf("%-13c++++++++", ' ');
    usleep(50000);
    printf("%-14c++++++++\n", ' ');
}