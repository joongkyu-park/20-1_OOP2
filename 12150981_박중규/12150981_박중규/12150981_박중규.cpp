// 학번     성명
// 12150981 박중규
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()

{
    char user;
    int size = 0;
    string arr_first[100];
    string arr_second[100];
    int arr_id[100];
    int arr_flag[100];
    
   while (true) {
        cout << "\n교직원 데이터베이스" << endl;
        cout << "-------------------" << endl;
        cout << "1. 교직원 고용(채용)" << endl;
        cout << "2. 교직원 해고(퇴사)" << endl;
        cout << "3. 모든 교직원 출력" << endl;
        cout << "0. 프로그램 종료" << endl;
        cout << "----> ";

        cin >> user;

        if (user == '1') {
            size++;
            
            string second;
            string first;
            cout << "이름? ";
            cin >> second;
            arr_second[size - 1] = second;
            
            cout << "성? ";
            cin >> first;
            arr_first[size - 1] = first;

            arr_id[size - 1] = 999 + size;
            arr_flag[size - 1] = 1;

            continue;
        }
        if (user == '2') {
            int tmp;
            cout << "교직원 직번을 입력하시오. ";
            cin >> tmp;

            if (tmp < 1000 || tmp>1000 + size - 1) {
                cout << "다음 직번을 가진 교직원이 없습니다. : " << tmp << endl;
                cout << "교직원을 퇴사처리 할 수 없습니다. " << endl;
                continue;
            }

            for (int i = 0; i <= size - 1; i++) {
                if (1000 + i == tmp) {
                    if (arr_flag[i] == 0) {
                        cout << "이미 퇴사처리된 교직원입니다." << endl;
                        break;
                    }
                    else {
                        arr_flag[i] = 0;
                        break;
                    }
                }
                
            }

        }
        if (user == '3') {
            if (size == 0)
                continue;
            for (int i = 0; i <= size - 1; i++) {
                if (arr_flag[i] == 1) {
                    cout << "\n----------------------" << endl;
                    cout << "재직 교직원" << endl;
                    cout << "교직원 직번 : " << arr_id[i] << endl;
                    cout << "급여 : 3,000,000원" << endl;
                    cout << "\n교직원 " << arr_first[i] << ", " << arr_second[i] << endl;
                }
                else {
                    cout << "\n----------------------" << endl;
                    cout << "퇴사 교직원" << endl;
                    cout << "교직원 직번 : " << arr_id[i] << endl;
                    cout << "급여 : 3,000,000원" << endl;
                    cout << "\n교직원 " << arr_first[i] << ", " << arr_second[i] << endl;
                }
            }
        }
        if (user == '0') {
            break;
        }
        else
            continue;
        
    }
}