#define _CRT_SECURE_NO_WARNINGS 1
#include "MyString.h"
int main(){
	char str1[20] = "bbc";
	char *str2 = "bbc";
	/*MyStrcpy(str1,str2);
	printf("str1:%s", str1);*/

	/*MyStrcat(str1,str2);
	printf("str1:%s", str1);*/

	/*MyStrncat(str1, str2, 1);
	printf("str1:%s", str1);*/

	/*const char *goalb = MyStrstr(str1, str2);
	if (goalb == NULL){
		printf("%p", goalb);
	}
	else{
		printf("addres:%p,char:%s", goalb, goalb);
	}*/

	//char c = 0;
	//printf("Plese input a character:\n");
	//scanf("%c", &c);
	//const char *result = MyStrchr(str1, c);
	//if (result == NULL){
	//	printf("Not exist");
	//}
	//else{
	//	printf("%s", result);
	//}

	/* printf("%d", MyStrcmp(str1, str2));*/

	 printf("%d", MyStrncmp(str1, str2, 2));

	/*MyMemcpy(str1, str2, 2);
	printf("%s", str1);*/
	system("pause");
	return 0;
}