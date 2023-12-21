#include<iostream>
using namespace std;
/*继承方式
1.公共继承public：继承后的成员访问权限与父类相同，但父类中的私有权限不可访问
2.保护继承protected:继承后的成员访问权限变为protected(除私有权限外)，父类的私有权限仍访问不到
3.私有继承private：继承后的成员访问权限为private，父类的私有权限访问不到
总结：继承方式为子类中继承得到的成员的最高访问权限，若高于则降为该权限，且父类的私有权限子类无论如何也访问不到*/
class father{
	public:
		int a;
	protected:
		int b;
	private:
		int c;
}; 
//公共继承 
class son1:public father{
	public:
		son1(int a,int b,int c){
			this->a=a;
			this->b=b;
//			this->c=c;无法访问 
		} 
		void print(){
			cout<<"b="<<b<<endl;
		} 
};
//保护继承 
class son2:protected father{
	public:
		son2(int a,int b,int c){
			this->a=a;
			this->b=b;
//			this->c=c;无法访问 
		}
		void print(){
			cout<<"a="<<a<<" "<<"b="<<b<<endl;
		} 
}; 
//私有继承 
class son3:private father{
	public:
		son3(int a,int b,int c){
			this->a=a;
			this->b=b;
//			this->c=c;无法访问 
		}
}; 
class grandson:public son3{
	public:
		void set(){
//			a=100;
//			b=200;父类中私有权限，这里访问不到 
		}
		
};
int main(){
	son1 s1(1,2,3);
	cout<<"s1 a="<<s1.a<<" ";
//	cout<<"s1 b="<<s1.b;保护权限类外无法访问 
	s1.print();//保护权限类内可以访问 
	son2 s2(1,2,3);
//	cout<<s2.a<<endl; 保护权限类外无法访问
	cout<<"s2 ";
	s2.print();
	son3 s3(1,2,3);
//	cout<<s3.a<<endl;私有权限类外无法访问 
	return 0;
} 
