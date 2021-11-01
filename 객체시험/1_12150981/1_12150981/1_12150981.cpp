#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;



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
StudentNode::StudentNode(const char* n, int id, const char* m) {
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



    return 0;
}

