#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable:4996)

// дһ������, �ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����ת֮����ַ���
// ����: ����S1 = AABCD �� S2 = BCDAA, ����1
//		 ����S1 = abcd �� S2 = ACBD, ����0
// AABCD ����һ���ַ��õ� ABCDA
// AABCD ���������ַ��õ� BCDAA
// AABCD ����һ���ַ��õ� DAABC

// ֻ��Ҫ��ԭ�ַ���������, ���������������������п����� 7�λᵽԭ�ַ���
// �ٿ�һ�´����ַ����ǲ��������ַ���(���������ַ��������)
// ����� strstr����ֵ �����ǿ�NULL

int strRoundStr(char* src, char* find){
	char tmp[256] = { 0 };

	// ʹsrc��tmp ��������
	strcpy(tmp, src);
	strcat(tmp, src);

	// �������ֵ���ǿ� ����1 �����ҵ���
	// �������ֵΪ0, ��û�ҵ�
	return strstr(tmp, find) != NULL;
}
int main(){

	char src[] = "ABCDEFG";

	char find[] = "GA";// ������һ��֮��Ľ��
	printf("%d\n", strRoundStr(src, find));

	char find1[] = "GAa";
	printf("%d\n", strRoundStr(src, find1));

	system("pause");
	return 0;
}