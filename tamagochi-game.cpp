#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Pet {
private:
	int hunger;
	int happiness;
	int sleepy;
	string name;
public:
	Pet(string name, int hunger, int happiness, int sleepy) {
		this->hunger = hunger;
		this->happiness = happiness;
		this->sleepy = sleepy;
		this->name = name;
	}
	void feeding() {
		hunger = hunger + 100;
		cout << "You successfully fed your pet!" << endl;
	}
	void rest() {
		sleepy = sleepy + 100;
		cout << "Your pet took a rest!" << endl;
	}
	void play() {
		happiness = happiness + 100;
		cout << "You played with your pet, and now it's happy!" << endl;
	}
	void exitgame() {
		cout << "Exiting the game..." << endl;
		exit(0);
	}
	void incorrectnumber() {
		cout << "Error.This action doesn't exist." << endl;
	}
	void petinfo() {
		cout << endl << "---Pet information---" << endl;
		cout << "Name: " << name << endl;
		cout << "Hunger: " << hunger << endl;
		cout << "Happiness: " << happiness << endl;
		cout << "Sleepiness: " << sleepy << endl;
	}
	void functions() {
		cout << endl << "-- Choose an action --" << endl;
		cout << "1. Feed." << endl;
		cout << "2. Play." << endl;
		cout << "3. Put to sleep." << endl;
		cout << "4. Exit game." << endl;
		int choice;
		bool isRunning = true;
		while (isRunning) {
			cin >> choice;
			switch (choice) {
			case 1:
				{
					feeding();
					petinfo();
					break;
				}
			case 2:
				 {
					play();
					petinfo();
					break;
				}
			case 3:
				 {
					rest();
					petinfo();
					break;
				}
			case 4:
				 {
					exitgame();
					break;
				}
			default: {
				incorrectnumber();
				break;
			}
			}
		}
	}
};


	int main() {
		Pet tamagochi("Flower", 0, 0, 0);
		tamagochi.petinfo();
		tamagochi.functions();

		return 0;
	}
