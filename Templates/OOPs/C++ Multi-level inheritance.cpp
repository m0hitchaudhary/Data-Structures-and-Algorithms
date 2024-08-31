#include <iostream>
using namespace std;
class student
{
    protected :
        int roll_number;
        
    public:
        void set_number(int a)
        {
            roll_number = a;
        }
        
        void display_number()
        {
            cout<<roll_number<<endl;
        }
};

class test: public student 
{
    
    public:
    float s1;
    float s2;
    float s3;
    float s4;
    float s5;
    
    void set_marks(float temp[]){
        s1 = temp[0];
        s2 = temp[1];
        s3 = temp[2];
        s4 = temp[3];
        s5 = temp[4];
    }
};
class result: public test
{

    public:
    void display(){
        int total = s1+s2+s3+s4+s5;
        int average = total/5;
        cout<<roll_number<<" "<<total<<" "<<average<<"\n";
    }
};

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        result student1;
        int n;
        cin>>n;
        student1.set_number(n);
        float temp[5];
        int i;
    
        for(i = 0; i < 5; i++)
            cin>>temp[i];
    
        student1.set_marks(temp);
        student1.display();
    }
    return 0;    
}
