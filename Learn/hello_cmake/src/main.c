#include <stdio.h>
#include "utils.h"  // 包含自定义头文件

int main() {
    print_welcome();
    
    int x = 15, y = 27;
    int sum = add_numbers(x, y);
    
    printf("\n计算结果: %d + %d = %d\n", x, y, sum);
    printf("\n程序执行完毕！\n");
    return 0;
}