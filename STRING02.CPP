#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

void inthuong(char ten[]) {
	for (int i = 0; ten[i]; i++) {
		if (ten[i] >= 'A' && ten[i] <= 'Z') {
			ten[i] += 32;
		}
	}
}

main() {
	char ten[100] = {'\0'}, *token, b[100][100];
	cin.getline(ten, 100, '\n');
	inthuong(ten);
	token = strtok(ten, " ");
	long count = 0;
	while (token != NULL) {
		strcpy(b[count++], token);
		token = strtok(NULL, " ");
	}
	cout << b[count - 1];
	for (int i = 0; i < count - 1; i++) {
		cout << b[i][0];
	}
	cout << "@ptit.edu.vn";
}
