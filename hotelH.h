#include<iostream>
using namespace std;

#pragma once
class Room {
	int roomNumber;
	string roomType;
	string guestName;
	string checkInDate;
	string  checkOutDate;

public:
	Room();
	void getDetails();
	void displayDetails();
	int searchroom_By_number_details();
	void updatedetails();
};