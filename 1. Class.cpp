#include <iostream> 
using namespace::std

class Circle {
public:                 
int radius;             // 멤버 변수 . 근데 이거 멤버변수 radius랑 donut이랑은 무슨차이임??? 아      
Circle();
~Circle();
double getArea();
};

Circle::Circle() { }              // class 밖에서 안에껄 쓰고시퍼-> class::instance
Circle::~Circle() { }             // :: (범위지정 연산자)
double Circle::getArea() { }      // 멤버함수는 return값이 나오고, 앞에 꼭 double인지 int인지..써

int main()
{
  Circle dounut; 
  
  /*Circle::donut 아니냐->범위지정해야지. but, main함수안에서는 이미 멤버변수가 아니라 객체변수이다.
  또한 donut은 class에 정의되어 있는놈이 아니잖아 없는데 Circle::로 범위를 지정할 수는 없다. 따라서 class 객체변수 인것이다.
  이것은 변수를 선언을 한것이기에 밑에처럼 donut.getArea() class의 함수를 쓸 수 있는것이다.*/
  
  donut.getArea();
  cout << "donut 면적은 " << donut.getArea() << endl;
  
  Circle pizza;
  pizza.radius = 10;
  cout << "pizza 면적은 " << donut.getArea() << endl;
  
 
}































/* 클래스 형성하고, 생성자와 소멸자가 어떤 순서로 사라지는지 출력으로 보여주는 예시 
예시 문제는 tablet class 에 mac과 window를 예시로.. 멤버 변수:memory , ram 멤버함수,..(성능): speed , power

class Tablet: {
public:
Tablet(); // 생성자
~Tablet(); // 소멸자

int ram;
int memory;
speed()
power()  
};

Tablet::speed() = (1.5 * ram) + memory
Tablet::power() = (memory + ram) 1.5




int main()
{
asus_vivobook_11 
cout << "power of asus_vivobook_11 :" << asus_vivobook_11.power() << endl;





}
