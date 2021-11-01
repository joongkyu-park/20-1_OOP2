#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

void Func4(const char* []);


int main()
{
    srand((unsigned int)time(NULL));

    
    // 4번

    const char* arr4[5];
    char input[100];

    cout << "Please input 5 words : ";
    cin.getline(input,100);

    char* tokenPtr;
    tokenPtr = strtok(input, " ");
    for (int i = 0; i < 5; i++) {
        arr4[i] = tokenPtr;
        tokenPtr = strtok(NULL, " ");
    }

    Func4(arr4);


    return 0;
}

void Func4(const char* arr[]) {
    cout << '\n' << "After modification, new words are: " << endl;

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << "_test" << '\t';
    }
    cout << '\n';

}
