#include<iostream>
using namespace std;
/*继承
用于类之间继承公共的成员，继承后子类可以使用父类的成员
语法：class 类名:继承方式 子类
其中 子类也叫派生类
	 父类也叫基类*/
//模拟洛谷网站页面数据整理输出
class web{
	public:
		//公共头部 
		void head(){
			cout<<"网页公共头部（一幅风景画，题目列表）"<<endl;
		}
		//公共底部 
		void foot(){
			cout<<"网页公共尾部（风景画，相关人员工作室信息）"<<endl; 
		}
		//公共标签目录 
		void content(){
			cout<<"标签目录（洛谷、主题库、入门与面试）"<<endl; 
		}
}; 
//洛谷题库页面 
class luogu:public web{
	public:
		//自己的成员 
		void self(){
			cout<<"洛谷题库的题目...."<<endl; 
		}
}; 
///主题库页面 
class Main:public web{
	public:
		void self(){
			cout<<"主题库的题目...."<<endl; 
		}
}; 
//入门与面试页面 
class interview:public web{
	public:
		void self(){
			cout<<"入门与面试题库的题目...."<<endl; 
		}
}; 
void func(){
	luogu l;
	cout<<"-----------------------------------------------------"<<endl;
	cout<<"洛谷的网页格局"<<endl;
	l.head();
	l.content();
	l.self();
	l.foot();
	cout<<"-----------------------------------------------------"<<endl; 
	cout<<"主题库的网页格局"<<endl; 
	Main M;
	M.head();
	M.content();
	M.self();
	M.foot();
	cout<<"-----------------------------------------------------"<<endl;
	cout<<"入门与面试的网页风格"<<endl; 
	interview i;
	i.head();
	i.content();
	i.self();
	i.foot();
} 
int main(){
	func(); 
	return 0;
} 
