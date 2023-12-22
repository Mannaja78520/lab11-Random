#include<iostream>
#include<cmath>
#include<cstdlib>
#include<string>

using namespace std;

void randomGrade(){
    int random = rand() % 9;
    string grade[9] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    cout << "You will get " << grade[random] << " in this 261102.";
}

int main (){
    srand(time(0));
    int x;
    cout << "Press Enter 3 times to reveal your future." << endl;
    for(int i=0; i < 3; i++){
        cin.get();
    }
    randomGrade();
}
