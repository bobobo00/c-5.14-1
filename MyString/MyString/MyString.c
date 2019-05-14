#define _CRT_SECURE_NO_WARNINGS 1
#include "MyString.h"
char *MyStrcpy(char *str1, const char *str2){
	/*if (strlen(str2) > strlen(str1)){
		printf("Error");
		return;
	}
	char *p = str1;
	while (*(str2) != '\0'){
		*(str1) = *(str2);
		str1++;
		str2++;
	}
	*str1 = '\0';*/
	char *p = str1;
	while (*str1++ = *str2++){

	}
	return p;
}
char *MyStrcat(char *str1, const char *str2){
	/*int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (ROW < len1 + len2){
		printf("Error");
		return;
	}

	while (*(str2) != '\0'){
		*(str1 + len1) = *str2;
		str1++;
		str2++;
	}*/
	char *p = str1;
	while (*str1 != '\0'){
		str1++;
	}
	while (*str1++ = *str2++){

	}
	return p;
}
char *MyStrncat(char *str1, const char *str2, int n){
	char *p = str1;
	while (*str1 != '\0'){
		str1++;
	}
	while (n!=0){
		*str1++ = *str2++;
		n--;
	}
	return p;
}

const char *MyStrstr(const char *str1, const char *str2){
	//int len1 = strlen(str1);
	//int len2 = strlen(str2);
	//char *left = str1;
	//char *right = str1+len2-1;
	//while (left <= right && right<(str1+len1)){//ѭ����ֹ������left����right����right��ָ��ַ����str1�ĳ���
	//	char *result = left;//��ǵ�һ����ĸ�����ص�ַ
	//	while (*(left) == *(str2) && *(right) == *(str2+len2-1)){//�ж�str1��left��str2��һ����ĸright��str2���һ����ĸ�Ƿ���ͬ
	//		while (left <= right){//�����ж����������
	//			left++;
	//			right--;
	//			if (left == right){//��left��right��ָ��ַ��ͬʱ����ȫ��ͬ
	//				return result;//���ر�ǵ�ַ
	//			}
	//		}
	//		left = result;//���м�Ԫ�ز�ͬʱ�˻ص�һ����ָԪ�ص�ַ
	//		right = result + len2 - 1;
	//	}
	//	left++;//������һ��Ԫ�ص��ж�
	//	right++;
	//}
	//return NULL;//δ�ҵ���ͬ�ַ���ʱ���ؿյ�ַ��
	const char *s1 = str1;
	const char *s2 = str2;
	const char *start = str1;
	while (*start != '\0'){
		s1 = start;
		s2 = str2;
		while (*s1!='\0'&&*s2!='\0'&&*s1 == *s2){
			s1++;
			s2++;
		}
		if (*s1 == '\0'){
			return NULL;
		}
		if (*s2 == '\0'){
			return start;
		}
		start++;
	}
	return NULL;
}

const char *MyStrchr(const char *str1, char c){
	assert(str1 != NULL);
	while (*(str1) != '\0'){
		if (*(str1) == c){
			return str1;
		}
		str1++;
	}
	return NULL;
}

int MyStrcmp(const char *str1, const char *str2){
  while (*(str1) != '\0' && *(str2) != '\0'){
			if (*(str1)>*(str2)){
				return 1;
			}
			if (*(str1) < *(str2)){
				return -1;
			}
			if (*(str1) == *(str2)){
				str1++;
				str2++;
			}
		}
	return 0;
}
int MyStrncmp(const char *str1, const char *str2, int n){
	while (n){
		while (*(str1) != '\0' && *(str2) != '\0'){
			if (*(str1)>*(str2)){
				return 1;
			}
			if (*(str1) < *(str2)){
				return -1;
			}
			if (*(str1) == *(str2)){
				str1++;
				str2++;
			}
		}
		n--;
	}
	return 0;
}
//���ֽ�������,�����ڴ��ص�
void *MyMemcpy(void *str1, const void *str2, int n){
	void *p = str1;
	while (n){
		*((char *)str1) = *((char *)str2);
		((char *)str1)++;
		((char *)str2)++;
		n--;
	}
	return p;
}
//���ֽ�������,�������ڴ��ص�,
void *MyMemove(void *str1, const void *str2, int n){
	void *p = str1;
	if (str2 > str1){//����������Ŀ�ĵ�ַС��Դ��ַʱ��ͷ��ʼ������ָ���������ƣ�����ƶ���
		while (n){
			*((char *)str1) = *((char *)str2);
			((char *)str1)++;
			((char *)str2)++;
			n--;
		}
	}
	else{//����������Ŀ�ĵ�ַ����Դ��ַʱ����Ҫ�������ֽ��������һλ��ǰ��ʼ������ָ���������ƣ���ǰ�ƶ�
		while (n--){
			*((char *)str1+n) = *((char *)str2+n);
			n--;
		}
	}
	return p;
}