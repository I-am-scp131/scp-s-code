#include<iostream>
using namespace std;
//���������   �ؼ���operator+ 
class Person{
	public:
		int a;
		int b;
		Person(int a=0,int b=0){
			this->a=a;
			this->b=b;
		}
		//�ó�Ա����������������� 
		Person operator+(Person &p){
			Person temp;
			temp.a=this->a+p.a;
			temp.b=this->b+p.b;
			return temp;
		}
};
class dog{
	public:
		int a;
		int b;
		dog(int a=0,int b=0){
			this->a=a;
			this->b=b;
		}
};
//��ȫ�ֺ����������������
dog operator+(dog &d1,dog &d2){
	dog temp;
	temp.a=d1.a+d2.a;
	temp.b=d1.b+d2.b;
	return temp;
} 
//���������Ҳ��ʵ�ֺ�������
dog operator+(dog &d1,int x){
	dog temp;
	temp.a=d1.a+x;
	temp.b=d1.b+x;
	return temp;	
}
int main(){
	Person p1(5,6);
	Person p2(9,10);
	Person p3=p1+p2;//����Person p3=p1.operator+(p2) 
	cout<<"p3��a="<<p3.a<<endl<<"p3��b="<<p3.b<<endl; 
	
	dog d1(4,6);
	dog d2(11,5);
	dog d3=d1+d2;//����Person p3=operator+(d1,d2)
	//���������Ҳ�ɺ������أ����������������������
	dog d4=d3+10;
	cout<<"d4��a="<<d4.a<<endl<<"d4��b="<<d4.b<<endl;
	cout<<"d3��a="<<d3.a<<endl<<"d3��b="<<d3.b<<endl; 
	return 0;
}
