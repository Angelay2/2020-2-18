#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable:4996)

// 写一个函数, 判断一个字符串是否为另一个字符串旋转之后的字符串
// 例如: 给定S1 = AABCD 和 S2 = BCDAA, 返回1
//		 给定S1 = abcd 和 S2 = ACBD, 返回0
// AABCD 左旋一个字符得到 ABCDA
// AABCD 左旋两个字符得到 BCDAA
// AABCD 右旋一个字符得到 DAABC

// 只需要把原字符串来两遍, 包括了左旋和右旋的所有可能性 7次会到原字符串
// 再看一下待查字符串是不是它的字符串(来两遍后的字符串里面的)
// 如果是 strstr返回值 绝不是空NULL

int strRoundStr(char* src, char* find){
	char tmp[256] = { 0 };

	// 使src在tmp 里来两遍
	strcpy(tmp, src);
	strcat(tmp, src);

	// 如果返回值不是空 返回1 代表找到了
	// 如果返回值为0, 则没找到
	return strstr(tmp, find) != NULL;
}
int main(){

	char src[] = "ABCDEFG";

	char find[] = "GA";// 算左旋一个之后的结果
	printf("%d\n", strRoundStr(src, find));

	char find1[] = "GAa";
	printf("%d\n", strRoundStr(src, find1));

	system("pause");
	return 0;
}