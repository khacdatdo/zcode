#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool check(char chuoi[], char delim[], int &pos) {
	int i = pos;
	for (i; delim[i - pos]; i++) {
		if (chuoi[i] != delim[i - pos]) {
			return false;
		}
	}
	pos = i;
	return true;
}

void func(char chuoi[], char delim[]) {
	char new_chuoi[1000] = {'\0'};
	int count = 0;
    for (int i = 0; chuoi[i]; i++) {
    	if (chuoi[i] == delim[0]) {
    		check(chuoi, delim, i);
		}
		new_chuoi[count++] = chuoi[i];
	}
	while (new_chuoi[0] == ' ') {
		for (int i = 0; new_chuoi[i]; i++) {
			new_chuoi[i] = new_chuoi[i+1];
		}
	}
	for (int i = 0; new_chuoi[i]; i++) {
		if (!(new_chuoi[i] == ' ' && new_chuoi[i+1] == ' ') ) {
			cout << new_chuoi[i];
		}
	}
}

main() {
    char chuoi[1000] = {'\0'}, delim[1000] = {'\0'};
    cin.getline(chuoi, 1000, '\n');
    cin.getline(delim, 1000);
    func(chuoi, delim);
}
