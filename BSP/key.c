#include "key.h"
#include "main.h"


int Key_Scan(int mode)
{
    static int flag = 1;
    if(mode == 1 && flag==1 && (KEY_B1==0 || KEY_B2==0 || KEY_B3==0 || KEY_B4==0))
    {
        flag = 0;
        HAL_Delay(10);
        if(KEY_B1==0)   return B1_Press;
        else if (KEY_B2==0) return B2_Press;
        else if (KEY_B3==0) return B3_Press;
        else if (KEY_B4==0) return B4_Press;
    }else if(KEY_B1 == KEY_B2 == KEY_B3 == KEY_B4 == 1)	flag = 1;
    return 0;
}