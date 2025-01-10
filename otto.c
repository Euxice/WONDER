//猜数字游戏byd，喜欢玩简单的是吧
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <locale.h> 
void menu()
{
    printf("##################糙你吗开大###################\n");
    printf("##### 1.开始                 0.退出游戏 ######\n");
    printf("#############################################\n");
}
void game()
{
    //生成一个随机数
    //运行游戏
    //rand();//专用生产随机数函数
    int ret = 0;
    ret = rand()%100+1;
    int guess = 0;
    int count = 0;
    while (guess!= ret)
    {
        printf("踩踩背；>");
        scanf("%d",&guess);
        if(guess == ret)
        {
            printf("说的道理！\n");
            break;
        }
        else if(guess > ret)
        {
            printf("铸币吧怎么这么菜阿！\n");
        }
        else
        {
            printf("你阳寿就这点是吧！\n");
        }
        
    }

}

int main()

{
    setlocale(LC_ALL,"zh_CN.UTF-8");
    
    int input = 0;
    srand((unsigned)time(NULL));
    do
    {
     menu ();
     printf("请选择>:");
     scanf("%d",&input);
     switch(input)
     {
         case 1:
             game();
             break;
         case 0:
             printf("退出游戏\n");
             break;
         default:
             printf("输入错误，请重新输入！\n");
             break;
     }
    } while (input);
    
    return 0;
}
