#include <iostream>
#include<math.h>
using namespace std;
int str,nc,k,n;


int main (){
	setlocale (LC_ALL,"Russian");
	cout <<"������� ���������� ����� �� �������� ";
	cin>>k;
	cout<<"������� ����� ������ �� ������ ";
	cin>>n;
	if( k>200){
		cout<<"������� �� ������ ������  "<<endl;
		if(n>20000){
			cout<<"������� �� ������ ������  "<<endl;
			if(k<1){
				cout<<"������� �� ������ ������  "<<endl;
				if(n<1){
					cout<<"������� �� ������ ������  "<<endl;
				}
			}
		}
	}
	else{
		str=n/k;
		nc=n%k;
		if (nc==0){
			nc=k;
		}
		else {
			str=str+1;
		}
		cout<<"����� �������� "<<str<<endl;
		cout<<"����� ������ �� �������� "<<nc<<endl;
	}
	system("pause");
	return 0;
}
