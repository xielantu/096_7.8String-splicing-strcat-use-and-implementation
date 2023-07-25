// 096_7.8字符串拼接strcat使用及实现.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

char* myStrcat(char* des, char* src)
{
    assert(des != NULL && src != NULL);
    char* bak = des;
    while (*des!='\0')
    {
        des++;
    }
    while ((*des++ = *src++) != '\0');
    *des = '\0';

    return bak;
}

char* myStrcat2(char* des, char* src)
{
    char* bak = des;
    strcpy(des + strlen(des), src);
    return bak;
}

char* myStrcat3(char* des, char* src)
{
    assert(des != NULL && src != NULL);
    char* bak = des;
    for (; *des != '\0'; des++);
    while ((*des++ = *src++) != '\0');
    *des = '\0';
    return bak;
}


int main()
{
   /* char str[128] = "chenlichen";
    const char* p = "handsome";
    const char* p2;
    p2 = myStrcat(str, p);
    puts(p2);*/
    //////////////////////////////////////////////////


    //char str[128] = "chenlichen";
    //const char* p = "handsome";
    //char* p2 =(char*)malloc(strlen(p) + strlen(str) + 1);
    //strcpy(p2, str);//先使用 strcpy 将 str 的内容复制到 p2，
    //strcat(p2, p);//然后使用 strcat 将 p 追加到 p2 的末尾。
    //puts(p2);
    //free(p2);

    /////////////////////////////////////////////////
    /*char str[128] = "chenlichen";
    char* p = (char*)"handsome";
    char* p2;
    p2 = myStrcat2(str, p);
    puts(p2);*/
    


    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
