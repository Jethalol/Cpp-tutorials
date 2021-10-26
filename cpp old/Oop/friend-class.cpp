#include <iostream>

class Account {

private :
	int balance;

public :
	Account() { balance = 0; }
	friend class Player; // Friend class
};

class Player {

private :

	int xp;

public :
	void showAccount(Account& x)
	{
		// Since Player is friend of Account, it can  access
		// private members of Account
		std::cout << "Balance = " << x.balance;
	}
};

int main()
{
	Account a1;
	Player p1;
	
	p1.showAccount(a1);
	return 0;
}
