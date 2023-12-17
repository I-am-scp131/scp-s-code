#include<iostream>
using namespace std;
/*常函数
	成员函数后加const，就称该函数为常函数
	常函数内不可修改成员属性
	成员属性声明时加上mutable,那么常函数也可修改
  常对象
  	声明对象前加上const，则该对象为常对象
	常对象只能调用常函数*/
class Person{
	public:
		void func() const{
			//A=100;相当于this->A,而this本身是Person *const this,指向不可修改。此处相当于，const Person *const this，即值也不可修改
			B=100;
		} 
		void func2(){
		}
		Person(int b=0){
			B=b;
		}
		int A;
		mutable int B; //之后常函数就可以修改了 
};
void func(){
	const Person p;
	cout<<"B="<<p.B<<endl; 
	p.func();
	cout<<"B="<<p.B<<endl;
	//p.func2();常对象只能调用常函数 

} 
int main(){
	func(); 
	return 0;
}
