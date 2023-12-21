#include<iostream>
using namespace std;
//继承中的对象模型
//探究从父类继承过来的成员是否属于子类
class father{
	public:
		int a;
	protected:
		int b;
	private:
		int c;
}; 
class son:public father{
	public:
		int d;
};
int main(){
	cout<<"size of son "<<sizeof(son);
	//结论：无论在父类中的访问权限如何，继承后均属于子类，哪怕是私有权限也发生了继承，只是子类无法访问 
	return 0;
}
