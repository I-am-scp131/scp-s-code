#include<iostream>
using namespace std;
//继承中构造和析构的顺序
class father{
	public:
		father(){
			cout<<"father的构造函数"<<endl;
		}
		~father(){
			cout<<"father的析构函数"<<endl;
		}
}; 
class son:private father{
	public:
		son(){
			cout<<"son的构造函数"<<endl;
		}	
		~son(){
			cout<<"son的析构函数"<<endl; 
		}
};

int main(){
	father f;
	son s;
	return 0;
} 
