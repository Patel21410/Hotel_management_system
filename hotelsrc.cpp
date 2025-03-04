#include"hotelH.h"

Room::Room() {
	roomNumber = 0;
	roomType = "AC";
	guestName = "carryminati";
	checkInDate = "24mar2025";
	checkOutDate = "26mar2025";
}
void Room::getDetails() {
	cout << "\nEnter details of room\n";
	cout << "Roomnumber" << " " << "roomType : AC And Non AC" << " " << "guestName" << " " << "checkInDate" << " " << "checkOutDate\n";
	cin >> roomNumber >> roomType >> guestName >> checkInDate >> checkOutDate;
	this->roomNumber = roomNumber;
	this->roomType = roomType;
	this->guestName = guestName;
	this->checkInDate = checkInDate;
	this->checkOutDate = checkOutDate;

}
void Room::displayDetails() {
	cout << "\nYour details\n";
	cout << "Roomnumber : " << roomNumber << "\nroomType: " << roomType << "\nguestName" << guestName << " " << "\ncheckInDate" << checkInDate << "\ncheckOutDate " << checkOutDate;

}
int Room::searchroom_By_number_details() {
	return roomNumber;

}
void Room::updatedetails() {
	cout << "new name" << "new checkout dates\n";
	cin >> guestName >> checkOutDate;

	this->guestName = guestName;
	this->checkOutDate = checkOutDate;

}