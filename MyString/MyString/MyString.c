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
	//while (left <= right && right<(str1+len1)){//循环终止条件当left大于right或者right所指地址大于str1的长度
	//	char *result = left;//标记第一个字母做返回地址
	//	while (*(left) == *(str2) && *(right) == *(str2+len2-1)){//判断str1中left和str2第一个字母right和str2最后一个字母是否相同
	//		while (left <= right){//继续判断里面的内容
	//			left++;
	//			right--;
	//			if (left == right){//当left和right所指地址相同时即完全相同
	//				return result;//返回标记地址
	//			}
	//		}
	//		left = result;//当中间元素不同时退回第一次所指元素地址
	//		right = result + len2 - 1;
	//	}
	//	left++;//进行下一个元素得判断
	//	right++;
	//}
	//return NULL;//未找到相同字符段时返回空地址。
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
//按字节数拷贝,存在内存重叠
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
//按字节数拷贝,不存在内存重叠,
void *MyMemove(void *str1, const void *str2, int n){
	void *p = str1;
	if (str2 > str1){//当拷贝到的目的地址小于源地址时从头开始拷贝，指针依次右移，向后移动。
		while (n){
			*((char *)str1) = *((char *)str2);
			((char *)str1)++;
			((char *)str2)++;
			n--;
		}
	}
	else{//当拷贝到的目的地址大于源地址时从需要拷贝的字节数的最后一位向前开始拷贝，指针依次左移，向前移动
		while (n--){
			*((char *)str1+n) = *((char *)str2+n);
			n--;
		}
	}
	return p;
}