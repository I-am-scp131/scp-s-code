#include<iostream>
#include<stdlib.h>
//�½�һ���������� 
class Cube{
	//˽�г�Ա 
	int l;
	int w;
	int h;
	//����ӿ� 
	public:
		//���ó���� 
		void setlwh(int m_l,int m_w,int m_h){
			l=m_l;
			w=m_w;
			h=m_h;
		}
		//��ȡ�����
		int* getlwh(){
			int *arr=(int*)malloc(3*sizeof(int));
			arr[0]=l;arr[1]=w;arr[2]=h;
			return arr;
		} 
		//��ȡ��� 
		int getS(){
			return 2*l*w+2*l*h+2*w*h;
		}
		//��ȡ��� 
		int getV(){
			return l*w*h;
		}
		bool isSame(Cube &c){
			if(l==c.getlwh()[0]&&w==c.getlwh()[1]&&h==c.getlwh()[2])
				return true;
			return false;
		}
};
bool isSame(Cube &c1,Cube &c2){
	if(c1.getlwh()[0]==c2.getlwh()[0]&&c1.getlwh()[1]==c2.getlwh()[1]&&c1.getlwh()[2]==c2.getlwh()[2])
		return true;
	return false;
} 
int main(){
	Cube c1,c2;
	c1.setlwh(10,10,10);
	c2.setlwh(10,10,11);
	std::cout<<"�����Ϊ"<<c1.getS()<<"\n"<<"�����Ϊ"<<c1.getV();
	//��ȫ�ֺ����ж��������Ƿ����
	if(isSame(c1,c2))
		std::cout<<"�����������"<<"\n";
	else std::cout<<"�������岻���"<<"\n";
	//�ó�Ա�����ж��������Ƿ����
	if(c1.isSame(c2))
		std::cout<<"��Ա�����жϣ������������"<<"\n";
	else std::cout<<"��Ա�����жϣ��������岻���"<<"\n";
	return 0;
} 
