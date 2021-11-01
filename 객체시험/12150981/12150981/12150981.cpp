#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

void BubbleSort(int*);
void Func3(char*);
void Func4(const char*[]);

void strCopy(char* source, char* destination);
int strCompare(const char* str1, const char* str2);
void strConcatenate(char* str1, const char* str2, char* result);


class StudentNode {

private:
    const char* name;
    int studentID;
    const char* major;

    StudentNode* next;

public:
    StudentNode(const char*, int, const char*);
    void setName(char*);
    void setId(int);
    void setMajor(char*);
    void setNext(StudentNode*);

    const char* getName();
    int getId();
    const char* getMajor();
    StudentNode* getNext();
};
StudentNode::StudentNode(const char* n, int id, const char* m ) {
    name = n;
    studentID = id;
    major = m;

    next = NULL;
};


int StudentNode::getId() {
    return studentID;
}
void StudentNode::setName(char* n) {
    name = n;
}
void StudentNode::setId(int id) {
    studentID = id;
}
void StudentNode::setMajor(char* m) {
    major = m;
}
void StudentNode::setNext(StudentNode* node) {
    next = node;
}

const char* StudentNode::getName() {
    return name;
}
int StudentNode::getId() {
    return studentID;
}
const char* StudentNode::getMajor() {
    return major;
}
StudentNode* StudentNode::getNext() {
    return next;
}


class SimpleList
{
private:
    StudentNode* head;

public:
    SimpleList();
    void addNext(StudentNode*);
    void printAllName(StudentNode*);
};

SimpleList::SimpleList() {
    head = NULL;
}
void SimpleList::addNext(StudentNode* node) {
    StudentNode* tmp = node;
    if (head->getNext() == NULL) {
        head = node;
    }
    else {
        while (true) {
            
            if (tmp->getNext() == NULL) {
                tmp->getNext = node;
                return;
            }
            else
                tmp = tmp->getNext();
        }

    }
}
void SimpleList::printAllName(StudentNode* node) {

}

int main()
{
    srand((unsigned int)time(NULL));
    
    // 1번

    StudentNode s1("Kim", 12190000, "컴퓨터공학");
    StudentNode s2("Min", 12190001, "컴퓨터공학");
    StudentNode s3("Lee", 12190002, "컴퓨터공학");
    StudentNode s4("Hwang", 12190003, "컴퓨터공학");
    StudentNode s5("Park", 12190004, "컴퓨터공학");
    StudentNode s6("Kim", 12190005, "기계공학");
    StudentNode s7("Min", 12190006, "기계공학");
    StudentNode s8("Lee", 12190007, "기계공학");
    StudentNode s9("Hwang", 12190008, "환경공학");
    StudentNode s10("Park", 12190009, "환경공학");
    









    // 2번

    /*int arr2[20];
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

    cout << '\n' << "걸린 시간 : " << takingTime << endl;*/

    // 3번

   /* char arr3[10];

    for (int i = 0; i < 10;i++) {
        arr3[i] = '0' + rand() % 10;
    }
    cout << "랜덤으로 생성한 수는 : ";
    for (int i = 0; i < 10;i++) {
        cout << arr3[i] << "  ";
    }
    cout << endl;
    Func3(arr3);*/


    // 4번
 
    /*const char* arr4[5];
    char input[100];
  
    cout << "Please input 5 words : ";
    cin.getline(input,100);
    
    char* tokenPtr;
    tokenPtr = strtok(input, " ");
    for (int i = 0; i < 5; i++) {
        arr4[i] = tokenPtr;
        tokenPtr = strtok(NULL, " ");
    }
   
    Func4(arr4);*/


    // 5번

    //// strCopy
    //char str1ForCpy[100];
    //char str2ForCpy[99];
    //cout << "Input 2 string for Copy : ";
    //cin >> str1ForCpy >> str2ForCpy;
    //strCopy(str1ForCpy, str2ForCpy);
    //cout << str1ForCpy << endl;


    //// strCompare
    //char str1ForCmp[100];
    //char str2ForCmp[99];
    //cout << "Input 2 string for Compare : ";
    //cin >> str1ForCmp >> str2ForCmp;
    //cout << strCompare(str1ForCmp, str2ForCmp) << endl;


    //// strConcatenate
    //char str1ForCat[100];
    //char str2ForCat[99];
    //char result[100];
    //cout << "Input 2 string for Concatenate : ";
    //cin >> str1ForCat >> str2ForCat;
    //strConcatenate(str1ForCat, str2ForCat,result);


  




    return 0;
}

void BubbleSort(int* arr) {
    for (int i = 0; i < 20;i++) {
        for (int j = 19; j>=i; j--) {
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

void Func3(char* arr) {
    cout << "거꾸로 출력하면 : ";
    for (int i = 9; i>=0;i--) {
        cout << arr[i] << "  ";
    }
}

void Func4(const char* arr[]) {
    cout << '\n' << "After modification, new words are: "<< endl;

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << "_test" << '\t';
    }

}

void strCopy(char* str1, char* str2) {
    strcpy(str1, str2);
}

int strCompare(const char* str1,const char* str2) {
    return strcmp(str1, str2);
}

void strConcatenate(char* str1, const char* str2, char* result) {
    result = strcat(str1, str2);
    cout << result;
}