#include<iostream>
using namespace std;
class Student {

    private:
    char name[30];
    int rollNo;
    float marks;

    public:
    // Member function to input student details
    
    void inputDetails(){

        cout<< " Enter student name:";

        cin>> name;

        cout<< " Enter roll number:";
        cin>> rollNo;

        cout<< " Enter marks:";
        cin>> marks;

    }

    // member function to display student details

    void displayDetails(){
        cout << " Student Name:"<< name << endl;

        cout<< " Roll Number:" << rollNo << endl;

        cout<< " Marks:" << marks << endl;

    }
};
 
int main(){
    Student StudentObj;

    //input student details
    StudentObj.inputDetails();

    // Display Student details
    cout << " Student details:" << endl;

    StudentObj.displayDetails();

    return 0;
}