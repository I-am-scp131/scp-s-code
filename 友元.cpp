#include<iostream>
#include<string>
using namespace std;
/*��Ԫ
������ĺ����ѿɷ������˽�г�Ա����һ����������һ����������˽�г�Ա�� 
�ؼ��֣�friend*/
class house;
//������Ԫ
class goodGay2{
	public:
		house *h;
		goodGay2();
		void visit();
}; 
//��Ա��������Ԫ
class Friend{
	public:
		house *h;
		Friend();
		void True();//������������Է���house��˽�г�Ա��������Ԫ
		void False();//�����������house��˽�г�Ա 
		//��������չʾ��Ա���������ⶨ�� 
};
class house{
	friend void goodGay1(house &h);//����ȫ�ֺ�������Ԫ 
	friend class goodGay2;//������Ԫ�� 
	friend void Friend::True();
	public:
		string livingRoom;
		house(){
			livingRoom="����";
			bedRoom="����"; 
		}
	private:
		string bedRoom;
};

//ȫ�ֺ�������Ԫ
void goodGay1(house &h)
{
	cout<<"��ĺû���1���ڷ���->���"<<h.livingRoom<<endl;
	cout<<"��ĺû���1���ڷ���->���"<<h.bedRoom<<endl;
} 
//���ں��������ⶨ�� 
goodGay2::goodGay2(){
	h=new house;
}
void goodGay2::visit(){
	cout<<"��ĺû���2���ڲι�->���"<<h->livingRoom<<endl;
	cout<<"��ĺû���2���ڲι�->���"<<h->bedRoom<<endl;
}
Friend::Friend(){
	h=new house;
}
void Friend::True(){
	cout<<"�����ͨ������ͨ�������ֶη���->���"<<h->livingRoom<<endl;
	cout<<"�����ͨ������ͨ�������ֶη���->���"<<h->bedRoom<<endl;
} 
void Friend::False(){
	cout<<"�����ͨ������ͨ�������ֶη���->���"<<h->livingRoom<<endl;
//	cout<<"�����ͨ������ͨ�������ֶη���->���"<<h->bedRoom<<endl;���ʲ��� 
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
