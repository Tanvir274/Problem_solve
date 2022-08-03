#include<iostream>
using namespace std;
class Shape{
protected:
    string name;
    string desc;
public:
    Shape(){
    name = "Shape";
    desc = "I am a Shape! \n";
    }
showInfo(){
cout<<name<<endl;
cout<<desc<<endl;
}
};
class circle : public Shape{
private:
    float radius;
public:
    circle(float r){
    name="circle";
    desc="I have radius!";
    radius=r;
    }
showInfo(){
Shape::showInfo();
cout<<"Radius : "<< radius<<endl<<endl;
}

};
class Triangle : public Shape{
private:
    float base;
    float height;

public:
    Triangle(float b,float h){
    name="Triangle";
    desc="I have the base and height!";
    base=b;
    height=h;
    }
showInfo(){
    Shape::showInfo();
    cout<<"Base"<<base<<endl;
     cout<<"Height"<<height<<endl<<endl;
}

};

int main(){

Shape s1;
s1.showInfo();

circle c1(3)
;
c1.showInfo()
;
Triangle t1(2,2.5)
;
t1.showInfo();




}
