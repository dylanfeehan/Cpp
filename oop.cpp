#include <iostream>
#include <string>
enum dept{
	cs = 1, math = 2
};

class Employee{
	// attributes
public:
	std::string name;
	std::string company;
	int age;
	std::string position;
	bool isTenure;
	dept department;
// constructor?

	Employee(std::string name = " ", std::string company = " ", int age = 0, std::string position = " ", bool isTenure = true, dept department = cs) : 
		name(name), company(company), age(age), position(position), isTenure(isTenure), department(department) {}


	

	void Info(){
		std::cout << "Name: " << name << "\n";
		std::cout << "Company: " << company << "\n";
		std::cout << "Age: " << age << "\n";
		std::cout << "Position: " << position << "\n";
		std::cout << "Tenure: " << boolAsString(isTenure) << "\n";
		std::cout << "Dept: " << department << "\n";
	}
	std::string boolAsString(bool isTenure){
		if(isTenure) return "true";
		else return "false";
	}
	//private // not accessible outside of class
	//public // can access from outside of class
	//protected // can access from in file but not out file
	
};
int main(){
	
	Employee employee1; 
	employee1.name = "Dylan";
	employee1.company = "Pitt";
	employee1.age = 19;
	employee1.position = "student";
	employee1.isTenure = false;
	employee1.department = math;

	//std::cout << "Name: " << employee1.name << "\n";
	employee1.Info();

	printf("\n");
	Employee stephen = Employee("Stephen", "Northwestern", 55, "CPWA", true, math);
	stephen.Info();

	return 0;
}