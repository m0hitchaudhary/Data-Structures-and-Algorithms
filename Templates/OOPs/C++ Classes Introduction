#include<bits/stdc++.h>
using namespace std;

class CollegeCourse
{
    string courseID;
    char grade;
    int credits;
    int gradePoints;
    int honorPoints;
    public:
    void set_CourseId(string CID){
        courseID = CID;
    }
    void set_Grade(char g){
        grade = g;
    }
    void set_Credit(int cr){
        credits = cr;
    }
    int calculateGradePoints(char g){
        switch(g){
            case 'A':
            case 'a':
            gradePoints = 10;
            return 10;
            case 'B':
            case 'b':
            gradePoints = 9;
            case 'C':
            case 'c':
            gradePoints = 8;
            case 'D':
            case 'd':
            gradePoints = 7;
            case 'E':
            case 'e':
            gradePoints = 6;
            case 'F':
            case 'f':
            gradePoints = 5;
    }
    float calculateHonorPoints(int gp, int cr){
        honorPoints = gp*cr;
        return honorPoints;
    }
    void display(){
        cout<<gradePoints<<" "<<honorPoints<<"\n";
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    CollegeCourse cc;
    string courseId;
    int gp;
    char grade;
    int credits;
    cin>>courseId>>grade>>credits;
    cc.set_CourseId(courseId);
    cc.set_Grade(grade);
    cc.set_Credit(credits);
    gp=cc.calculateGradePoints(grade);
    cc.calculateHonorPoints(gp,credits);
    cc.display();
    }
    return 0;
}
