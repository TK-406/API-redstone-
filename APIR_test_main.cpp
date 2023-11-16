#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
#include "/storage/emulated/0/C++Projects/API_redstone/classes.h"
#include "/storage/emulated/0/C++Projects/API_redstone/functions.h"





int main() {
    //开始初始化
    ChuShiHua();
    //结束初始化
    CreateDustPoint();
    CreateDustPoint();
    printf("一切正常");
    RunRedStone();
    printf("结束");
    MainEnd();
}