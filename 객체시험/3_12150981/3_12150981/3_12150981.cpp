#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

void Func3(char*);

int main()
{
    srand((unsigned int)time(NULL));

    // 3번

    char arr3[10];

    for (int i = 0; i < 10;i++) {
        arr3[i] = '0' + rand() % 10;
    }
    cout << "랜덤으로 생성한 수는 : ";
    for (int i = 0; i < 10;i++) {
        cout << arr3[i] << "  ";
    }
    cout << endl;
    Func3(arr3);


    return 0;
}

void Func3(char* arr) {
    cout << "거꾸로 출력하면 : ";
    for (int i = 9; i >= 0;i--) {
        cout << arr[i] << "  ";
    }
}