#include<iostream>
using namespace std;
class Myint{
	friend ostream& operator<<(ostream &cout,Myint &p);
	int a;
	public:
		Myint(){
			a=0;
		}
		Myint& operator--(){
			a--;
			return *this;
		}
		Myint operator--(int){
			Myint temp=*this;
			a--;
			return temp;
		}
};
ostream& operator<<(ostream &cout,Myint &p){
	cout<<p.a;
	return cout;
}

int main(){
	Myint m_i;
	cout<<--m_i<<endl;//m_i.opertor--()
	cout<<m_i--<<endl<<m_i<<endl;
	return 0;
}
