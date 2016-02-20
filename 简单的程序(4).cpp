#include<iostream>
using namespace std;
int main(){
	char a = 'A';
	cout << "猜猜我是哪个字母：" << endl;
	cin >> a;
	if (a != 'G')
		cout << "你猜错啦！" << endl;
	else
		cout << "被你猜中了，哼！" << endl;
	return 0;

}
