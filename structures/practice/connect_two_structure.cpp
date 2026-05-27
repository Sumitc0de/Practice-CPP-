 // Include input/output library for cout
#include <iostream>
// Include string library for string data type
 #include <string>
 using namespace std;

 // Structure to hold address information
 struct Address {
	 string city;  // City name
	 int zip;      // Zip code
 };
 
 // Structure to hold person information
 struct Person {
	 string name;  // Person's name
	 int age;      // Person's age
	 Address* addr; // Pointer to Address structure - connects Person to Address
 };
 
 int main() {
	 // Create an Address object with city "Springfield" and zip 12345
	 Address a{ "Springfield", 12345 };
	 // Create a Person object and link it to the Address via pointer
	 Person p{ "John Doe", 30, &a };
 
	 // Output person's name
	 cout << "Name: " << p.name << '\n';
	 // Output person's age
	 cout << "Age: " << p.age << '\n';
	 // Check if address pointer is valid before accessing
	 if (p.addr) {
		 // Output city from linked Address structure
		 cout << "City: " << p.addr->city << '\n';
		 // Output zip code from linked Address structure
		 cout << "ZIP: " << p.addr->zip << '\n';
	 }
 
	 // Modify the city through the person's address pointer
	 p.addr->city = "Shelbyville";
	 // Display updated city - shows that both p.addr and a point to same data
	 cout << "Updated city via person: " << a.city << '\n';
 
	 return 0;
 }
