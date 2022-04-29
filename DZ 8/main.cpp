#include "student.h"

int main()
{
    Student First;
    cin >> First;
    cout << First;
    cout << endl;
    Student Second;
    cin >> Second;
    First = Second;
    cout << First << endl;
}