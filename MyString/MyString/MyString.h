#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <assert.h>

char *MyStrcpy(char *str1, const char *str2);
char *MyStrcat(char *str1, const char *str2);
char *MyStrncat(char *str1, const char *str2, int n);
const char *MyStrstr(const char *str1, const char *str2);
const char *MyStrchr(const char *str1, char c);
int MyStrcmp(const char *str1, const char *str2);
int MyStrncmp(const char *str1, const char *str2, int n);

void *MyMemcpy(void *str1, const void *str2, int n);
void *MyMemove(void *str1, const void *str2, int n);

#endif