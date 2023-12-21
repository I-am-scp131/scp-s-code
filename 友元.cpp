#include<iostream>
#include<string>
using namespace std;
/*友元
让类外的好朋友可访问类的私有成员（让一个函数或另一个类访问类的私有成员） 
关键字：friend*/
class house;
//类做友元
class goodGay2{
	public:
		house *h;
		goodGay2();
		void visit();
}; 
//成员函数做友元
class Friend{
	public:
		house *h;
		Friend();
		void True();//让这个函数可以访问house的私有成员，即做友元
		void False();//这个不给访问house的私有成员 
		//另外这里展示成员函数的类外定义 
};
class house{
	friend void goodGay1(house &h);//声明全局函数做友元 
	friend class goodGay2;//声明友元类 
	friend void Friend::True();
	public:
		string livingRoom;
		house(){
			livingRoom="客厅";
			bedRoom="卧室"; 
		}
	private:
		string bedRoom;
};

//全局函数做友元
void goodGay1(house &h)
{
	cout<<"你的好基友1正在访问->你的"<<h.livingRoom<<endl;
	cout<<"你的好基友1正在访问->你的"<<h.bedRoom<<endl;
} 
//类内函数的类外定义 
goodGay2::goodGay2(){
	h=new house;
}
void goodGay2::visit(){
	cout<<"你的好基友2正在参观->你的"<<h->livingRoom<<endl;
	cout<<"你的好基友2正在参观->你的"<<h->bedRoom<<endl;
}
Friend::Friend(){
	h=new house;
}
void Friend::True(){
	cout<<"你的普通朋友正通过正当手段访问->你的"<<h->livingRoom<<endl;
	cout<<"你的普通朋友正通过正当手段访问->你的"<<h->bedRoom<<endl;
} 
void Friend::False(){
	cout<<"你的普通朋友正通过正当手段访问->你的"<<h->livingRoom<<endl;
//	cout<<"你的普通朋友正通过正当手段访问->你的"<<h->bedRoom<<endl;访问不了 
} 
int main(){
	house h;
	goodGay2 g;
	Friend f; 
	goodGay1(h);
	g.visit();
	f.True();
	f.False();
	return 0;
}
