#include<iostream>
using namespace std;
//�̳��й����������˳��
class father{
	public:
		father(){
			cout<<"father�Ĺ��캯��"<<endl;
		}
		~father(){
			cout<<"father����������"<<endl;
		}
}; 
class son:private father{
	public:
		son(){
			cout<<"son�Ĺ��캯��"<<endl;
		}	
		~son(){
			cout<<"son����������"<<endl; 
		}
};

int main(){
	father f;
	son s;
	return 0;
} 
