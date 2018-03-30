#include <iostream>
#include<math.h>
using namespace std;
int str,nc,k,n;


int main (){
	setlocale (LC_ALL,"Russian");
	cout <<"Введите количество строк на странице ";
	cin>>k;
	cout<<"Введите номер строки из текста ";
	cin>>n;
	if( k>200){
		cout<<"Введены не верные данные  "<<endl;
		if(n>20000){
			cout<<"Введены не верные данные  "<<endl;
			if(k<1){
				cout<<"Введены не верные данные  "<<endl;
				if(n<1){
					cout<<"Введены не верные данные  "<<endl;
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
		cout<<"Номер страницы "<<str<<endl;
		cout<<"Номер строки на странице "<<nc<<endl;
	}
	system("pause");
	return 0;
}
