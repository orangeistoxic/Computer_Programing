#include<iostream>
#include<string>
using namespace std;
string func1();
int func2();
void func3();
string str;
int mat[11][11];
int main() {
	func2();
	func3();
	return 0;
}
string func1() {
	string str1;
	string temp = "";
	int en[] = { 10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33 };
	cout << "ID:";
	cin >> str;
	for (int i = 10; i >0; i--) {
		str[i] = str[i-1];
		mat[0][i] = str[i]-48;
	}
	if (isupper(str[0])) {
		str[1] = en[str[0] - 65] % 10 + 48;
		str[0] = en[str[0]-65] / 10+48;
		mat[0][0] = str[0]-48;
		mat[0][1] = str[1] - 48;
	}
	else {
		cout << "ID Error";
		exit(0);
	}
	cout << "Result1:"<<endl;
	for (int m = 0; m < 11; m++) {
		temp += str[m];
	}
	cout << temp<<endl;
	for (int j = 0; j < 10; j++) {
		char c = temp[0];
		for (int k = 0; k < 10; k++) {
			temp[k] = temp[k+1];
			mat[j + 1][k] = temp[k]-48;
		}
		temp[10] = c;
		mat[j + 1][10] = temp[10]-48;
		cout << temp << endl;
	}
	return temp;
}
int func2() {
	string str1;
	char temp;
	str1 = func1();
	for (int n = 0; n < 11; n++) {
		for (int o = n + 1; o < 11; o++) {
			if (str1[n] < str1[o]) {
				temp = str1[o];
				str1[o] = str1[n];
				str1[n] = temp;
			}
		}
	}
	cout << "Result2:"<<endl<<str1 << endl;
	return 0;
}
void func3() {
	int a[11][11];
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 11; j++) {
			a[i][j] = 0;
			for (int k = 0; k < 11; k++) {
				a[i][j] += mat[i][k]*mat[k][j];
			}
		}
	}
	cout << "Result3:"<<endl;
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 11; j++) {
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	return;
}