#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

void BubbleSort(int*);

int main()
{
    srand((unsigned int)time(NULL));

    // 2번

    int arr2[20];
    for (int i = 0; i < 20; i++) {
        arr2[i] = rand()%100 +1 ;
    }
    cout << "원래 배열 : ";
    for (int i = 0; i < 20; i++) {
        cout << arr2[i] << "  ";
    }
    cout << endl;

    clock_t t0 = clock();
    BubbleSort(arr2);
    clock_t t1 = clock();

    clock_t takingTime = (t1 - t0);

    cout << '\n' << "걸린 시간 : " << takingTime << endl;

    return 0;
}

void BubbleSort(int* arr) {
    for (int i = 0; i < 20;i++) {
        for (int j = 19; j >= i; j--) {
            int tmp;
            if (arr[j - 1] > arr[j]) {
                tmp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = tmp;
            }
        }
    }
    cout << "버블소트 이후 : ";
    for (int i = 0; i < 20; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}