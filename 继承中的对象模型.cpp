#include<iostream>
using namespace std;
//�̳��еĶ���ģ��
//̽���Ӹ���̳й����ĳ�Ա�Ƿ���������
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
	//���ۣ������ڸ����еķ���Ȩ����Σ��̳к���������࣬������˽��Ȩ��Ҳ�����˼̳У�ֻ�������޷����� 
	return 0;
}
