#include <stdio.h>

int main() {
    char c;
    int letters = 0, spaces = 0, digits = 0, others = 0;

    printf("请输入一行字符：\n");
    while((c = getchar()) != '\n') 
    {
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 
            letters++;
        else if(c == ' ') 
            spaces++;
        else if(c >= '0' && c <= '9') 
            digits++;
        else 
            others++;
        
    }

    printf("英文字母的个数：%d\n", letters);
    printf("空格的个数：%d\n", spaces);
    printf("数字的个数：%d\n", digits);
    printf("其他字符的个数：%d\n", others);

    return 0;
}