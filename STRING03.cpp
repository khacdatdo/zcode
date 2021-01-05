#include<iostream>
#include<cstring>

using namespace std;

void inthuong(char ten[]) {
	for (int i = 0; ten[i]; i++) {
		if (ten[i] >= 'A' && ten[i] <= 'Z') {
			ten[i] += 32;
		}
	}
}

void inhoa(char ten[]) {
	for (int i = 0; ten[i]; i++) {
		if (ten[i] >= 'a' && ten[i] <= 'z') {
			ten[i] -= 32;
		}
	}
}

main() {
	char ten[1000] = {'\0'}, new_ten[1000][1000], *token;
	int count = 0;
	cin.getline(ten, 1000, '\n');
	inthuong(ten);
	token = strtok(ten, " ");
	while (token != NULL) {
		strcpy(new_ten[count++], token);
		token = strtok(NULL, " ");
	}
	for (int i = 0; i < count; i++) {
		if (i == count - 1) {
			inhoa(new_ten[i]);
			cout << new_ten[i];
		} else if (i == count - 2) {
			new_ten[i][0] -= 32;
			cout << new_ten[i] << ", ";
		} else {
			new_ten[i][0] -= 32;
			cout << new_ten[i] << " ";
		}
	}
}
