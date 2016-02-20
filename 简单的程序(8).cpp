#include<iostream>
using namespace std;
int main(){
	char a = ' ';
	cout << "猜猜我是哪个字母:)" << endl;
	int i = 0;
	for (i = 0; i < 5; i++) {
		cin >> a;
		if (a == 'H') {
			cout << "居然被你猜中了!!!" << endl;
			break;
		}
		else
			cout << "抱歉，没猜中呢。请继续加油！" << endl;
	}
	return 0;

}
