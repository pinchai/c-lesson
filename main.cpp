#include <iostream>
#include "string"
using namespace std;

int main() {
    string a = "chai";
    string student_score[] = {'a','b','c','d'};
    cout<<student_score[2];
    return 0;
    int count = sizeof (student_score)/sizeof (student_score[0]);
    for(int i = 0; i < count; i++){
        cout<<student_score[i];
    }
    return 0;
}
