# Hotel_management_system

simple code

#include"hotelH.h"
#include"printtoscreen.h"

int main() {
	int size;
	cout << "Enter rooms\n";
	cin >> size;
	Room* rooms = new Room[size];
	for (int i = 0; i < size; i++) {
		rooms[i].getDetails();
	}

	printtoscreen::print_to_screen(rooms,size);
	

	cout << "\n Enter Room number to get details\n";
	int rn;
	cin >> rn;
	for (int i = 0; i < size; i++) {
		int k = rooms[i].searchroom_By_number_details();
		if (k == rn) {
			rooms[i].displayDetails();
			break;
		}
	}
	


	return 0;
}
