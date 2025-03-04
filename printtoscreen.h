#pragma once
#include"hotelH.h"

class printtoscreen {
public:
	static void print_to_screen(Room *rooms,int size ) {
		int choice;
		char again;
		do {
			cout << "\n Enter your choice\n press Number" << endl;
			cout << "1. details for all room\n2. details for specific room number\n3. Update Name and chackout date\n";
			cin >> choice;
			switch (choice) {
			case 1:
				for (int i = 0; i < size; i++) {
					rooms[i].displayDetails();
				}
				break;
			case 2:
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
				break;
			case 3:
				cout << "\nupdate gaust name and chackout date\n Enter roomnumber";
				int urno;
				cin >> urno;

				rooms[urno - 1].updatedetails();
				rooms[urno - 1].displayDetails();
				break;
			default:
				cout << "\n Invailid choice\n";
			}
			cout << "\ndo you want to use again\n press Y OR y";
			cin >> again;
		} while (again=='y'||again=='Y');


	}
};