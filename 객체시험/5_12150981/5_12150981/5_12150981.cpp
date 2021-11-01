#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

void strCopy(char* source, char* destination);
int strCompare(const char* str1, const char* str2);
void strConcatenate(char* str1, const char* str2, char* result);

int main()
{
    srand((unsigned int)time(NULL));

    // 5번

    // strCopy
    char str1ForCpy[100];
    char str2ForCpy[99];
    cout << "Input 2 string for Copy : ";
    cin >> str1ForCpy >> str2ForCpy;
    strCopy(str1ForCpy, str2ForCpy);
    cout << str1ForCpy << endl;


    // strCompare
    char str1ForCmp[100];
    char str2ForCmp[99];
    cout << "Input 2 string for Compare : ";
    cin >> str1ForCmp >> str2ForCmp;
    cout << strCompare(str1ForCmp, str2ForCmp) << endl;


    // strConcatenate
    char str1ForCat[100];
    char str2ForCat[99];
    char result[100];
    cout << "Input 2 string for Concatenate : ";
    cin >> str1ForCat >> str2ForCat;
    strConcatenate(str1ForCat, str2ForCat,result);


    return 0;
}

void strCopy(char* str1, char* str2) {
    strcpy(str1, str2);
}

int strCompare(const char* str1, const char* str2) {
    return strcmp(str1, str2);
}

void strConcatenate(char* str1, const char* str2, char* result) {
    result = strcat(str1, str2);
    cout << result;
}