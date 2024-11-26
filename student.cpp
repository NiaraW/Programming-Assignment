#include"student.h"

Student::Student(string studentName) {
    name = studentName;
}

void Student::addGrade(double grade) {
    grades.push_back(grade);
}

double Student::calculateAverage() {

// get 0.0 to stay 0.0
// should return the average grade, or 0.0 if no grades have been added.
// can use percision and fixed 



    if (grades.empty()) {
        return 0.0;
    } else {
        double sum = 0;
        for(int i = 0; i < grades.size(); i++) {
            sum = sum + grades[i];
        }
        double average = sum / grades.size();  
        return average;
    }
   
}

void Student::printDetails() {
    cout << "Student Name: " << name << endl;
    cout << "Average Grade: "<< fixed << setprecision(2) << calculateAverage() ;

}


