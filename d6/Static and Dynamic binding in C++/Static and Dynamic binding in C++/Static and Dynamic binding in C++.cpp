
#include <list>
#include <iostream>
using namespace std;

class User {
public:
	virtual void getPermissions() {
		cout << "users can see limit info " << endl;
	}

};

class Superuser :public User {
	void getPermissions() {
		cout << "Superusers can see all the info" << endl;
	}

};


int main()
{
	User u;
	Superuser s;
	list<User*>users;
	users.push_back(&u);
	users.push_back(&s);

	for (User* userPtr : users)
		userPtr->getPermissions();



}
