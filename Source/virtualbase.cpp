#include<iostream>
using namespace std;

// Student-> Exam; Student-> Sports; Exam, Sports-> Result

class student{
    protected:
        int roll;
    public:
        void set_roll(int a){
            roll=a;
        }
        void print_roll(void){
            cout<<"Your roll no:"<<roll<<endl;
        }

};

class exam : virtual public student{
    protected:
        float math, physics;
    public:
        void set_marks(float m, float p){
            math=m;
            physics=p;
        }
        void print_marks(void){
            cout<<"Your result is here:"<<endl
            <<"Math=>"<<math<<endl
            <<"Physics=>"<<physics<<endl;
        }
};

class sports : virtual public student{
    protected:
        float score;
    public:
        void set_score(float s){
            score=s;
        }
        void print_score(void){
            cout<<"Score in sports=>"<<score<<endl;
        }
};

class result: public exam, public sports{
    private:
        float total;
    public:
        void display(void){
            total=math+physics+score;
            print_roll();
            print_marks();
            print_score();
            cout<<"Your total score is=>"<<total<<endl;
        }
};

// Result would get two instance of roll if virtual base class was not used, so we used virtual base class and now it will get only one instance of roll directly from student

int main()
{
    result harry;
    harry.set_roll(118);
    harry.set_marks(56,73.5);
    harry.set_score(20.1);
    harry.display();
    return 0;
}