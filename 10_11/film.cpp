#include <iostream>
#include <string>
#include <cmath>
#include "film.h"

using namespace std;

void Film::GetInfo() {
	cout << "DO NOT USE SPACE, USE THIS SYMBOL:  _  " << endl;
	cout << "Name of a film > ";
	//getline(cin, name);
	cin >> name;
	cout << "Publishing date > ";
	cin >> year;
	cout << "Rating from different sites: " << endl;
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << ")";
		cin >> arr[i];
	}
}

void Film::Average() {
	for (int i = 0; i < 3; i++) {
		score += arr[i];
	}
	score = round((score / 3) * 10) / 10;
}

void Film::ShowInfo() {
	cout << "Name of the film: " << name << "\t" << "Release date: " << year << "\t" << "Average viewers score: " << score;
}