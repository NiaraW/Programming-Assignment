using namespace std;
#include <iostream>
#include<vector>
#include <iomanip>

class Student {
    public:
        Student(string studentName);
        void addGrade(double grade);
        double calculateAverage();
        void printDetails();

    private:
        string name;
        vector<double> grades;

};