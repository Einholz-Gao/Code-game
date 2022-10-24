/*
 * Flasche.cpp
 *
 *  Created on: 24 Oct 2022
 *      Author: einholz
 */

#include<iostream>
using namespace std;

int main() {
	int rec; // Wie viel mal die Flasche leihen
	int *num = new int[10];
	cout<<"Anzahl der Flaschen: "<<endl;
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
		if (num[i] == 0) {
			rec = i;
			break;
		}
	}

	int ges=0; //Die Anzahl aller Flasche
	for (int j = 0; j < rec; j++) {
		ges+=num[j];
	}

	cout<<ges/3<<endl;
}

