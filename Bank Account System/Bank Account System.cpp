#include <iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<conio.h>
using namespace std;
void firstPage()
{
	cout << "\t";
	for (int i = 1; i <= 64; i++)
		cout << '=';
	cout << "\n\t||                                                            ||" << endl;
	cout << "\t||             *****      *     *     *  *     *              ||" << endl;
	cout << "\t||             *    *   *   *   **    *  *    *               ||" << endl;
	cout << "\t||             *    *  *     *  * *   *  *   *                ||" << endl;
	cout << "\t||             *****   *     *  *  *  *  *  *                 ||" << endl;
	cout << "\t||             *    *  *******  *   * *  * *                  ||" << endl;
	cout << "\t||             *    *  *     *  *    **  *  *                 ||" << endl;
	cout << "\t||             *****   *     *  *     *  *    *               ||" << endl;
	cout << "\t||                                                            ||" << endl;
	cout << "\t||                                                            ||" << endl;
	cout << "\t||      *                                           *         ||" << endl;
	cout << "\t||     * *                                          *         ||" << endl;
	cout << "\t||    *   *                                         *         ||" << endl;
	cout << "\t||    *   * *****  *****  ******  *   *   *  *    *****       ||" << endl;
	cout << "\t||    ***** *      *      *    *  *   *    *   *    *         ||" << endl;
	cout << "\t||    *   * *      *      *    *  *   *    *   *    *         ||" << endl;
	cout << "\t||    *   * *****  *****  ******   *** **  *   *    ******    ||" << endl;
	cout << "\t||                                                            ||" << endl;
	cout << "\t||                                                            ||" << endl;
	cout << "\t||                                                            ||" << endl;
	cout << "\t||                                                            ||" << endl;
	cout << "\t||       ******                   *                           ||" << endl;
	cout << "\t||       *     *                  *                           ||" << endl;
	cout << "\t||       *                *****   *         * *               ||" << endl;
	cout << "\t||       *****   *    *   *     *****     *    *  *     *     ||" << endl;
	cout << "\t||            *  *    *   *****   *       *****   **   **     ||" << endl;
	cout << "\t||      *     *  *    *       *   *       *       * * * *     ||" << endl;
	cout << "\t||       *****    ****    *****   ******  ******  *  *  *     ||" << endl;
	cout << "\t||                    *                                       ||" << endl;
	cout << "\t||                 *  *                                       ||" << endl;
	cout << "\t||               *    *                                       ||" << endl;
	cout << "\t||               ******                                       ||" << endl;
	cout << "\t||                                                            ||" << endl;
	cout << "\t||                PROGRAMMING FUNDAMENTAL                     ||" << endl;
	cout << "\t||                                                            ||" << endl;
	cout << "\t||       Submitted to:                                        ||" << endl;
	cout << "\t||                         Tazeem Haider                      ||" << endl;
	cout << "\t||       Submitted by:                                        ||" << endl;
	cout << "\t||                         Abid Shafique                      ||" << endl;
	cout << "\t||       Roll no:                                             ||" << endl;
	cout << "\t||                         BCSF17A521                         ||" << endl;
	cout << "\t||                                                            ||" << endl;
	cout << "\t";
	for (int i = 1; i <= 64; i++)
		cout << '=';
	char key;
	cout << endl << endl;
	cout << endl << "            Well come Dear      " << endl << "Press any non-white-space key and then Enter key to see menu/list:";
	cin >> key;
	cout << endl << endl;
	if (0 <= key && key <= 255)
	{
		return;
	}
}


void passwardsystem(string &passward)
{
	char ch;
	while (1 == 1)
	{
		ch = _getch();
		if (ch == 13)
			break;
		else if (ch == '\b')
		{
			passward.pop_back();
			cout << "\b";
		}
		else
		{
			passward.push_back(ch);
			cout << "*";
		}
	}
	cout << endl;
}


int TotalAccount()
{
	ifstream x;
	x.open("Bank Account System.txt");
	string account, name, passward,id,phone;
	double balan;
	int i = 0,count= 0;
	while (1 == 1)
	{
		getline(x, account, '\n');
		getline(x, passward, '\n');
		getline(x, name, '\n');
		getline(x, id, '\n');
		getline(x, phone, '\n');
		x >> balan;
		x.ignore(1);
		count = count + 1;
		if (account == "End Accout")
		{
			count = count - 2;
			return count;
		}
	}
	x.close();
}




void CreatAccount()
{
		ofstream out;
		ifstream x;
		x.open("Bank Account System.txt");
		out.open("temp.txt");
		string account, name, passward,id,phone;
		double balan;
		int i = 0, k=0;
		string a="", p, n,cr,ph;
		double b;
		while (1 == 1)
		{
			getline(x,account,'\n');
			getline(x,passward,'\n');
			getline(x,name,'\n');
			getline(x, id, '\n');
			getline(x, phone, '\n');
			x >>balan;
			x.ignore(1);
			if (account=="End Accout")
			{
				a=account;
				p=passward;
				n=name;
				b = balan;
				cr = id;
				ph = phone;
				string e = "123456789";
				k = balan;
				account=e;
				cout<<endl<<endl<<"Account number of new user is : ";
				cout << e << k + 1 << endl;
				cout << "Please Enter name of new user:";
				getline(cin,name,'\n');
				cout << "Please Enter Passward of new user:";
				getline(cin,passward,'\n');
				cout << "Please Enter User ID card number:";
				getline(cin, id, '\n');
				cout << "Please Enter User Mobile number:";
				getline(cin, phone, '\n');
				cout << "Please Enter the amount you want to deposit:";
				cin >> balan;
				cin.ignore(1);
				cout << "Your bank account is created successfully." << endl;
				cout << "Thanks for joining us." << endl;
			}
			if (a == "End Accout")
			{
				out << account << k + 1 << endl;
				out << passward << endl;
				out << name << endl;
				out << id << endl;
				out << phone << endl;
				out << balan << endl;
				out << a<< endl;
				out << p << endl;
				out << n << endl;
				out << cr << endl;
				out << ph << endl;
				out << b+1 << endl;
				break;
			}
			out << account << endl;
			out << passward << endl;
			out <<name << endl;
			out << id << endl;
			out << phone << endl;
			out << balan << endl;
			i = i + 1;
		}
		out.close();
		x.close();
		remove("Bank Account System.txt");
		rename("temp.txt", "Bank Account System.txt");
}





void DeleteAccount()
{
	int count = 0;
	ifstream x;
	string account, name, passward, id, phone;
	double balan;
	string acco;
	cout << "Please Enter Complete Account number you want to delete:";
	getline(cin, acco, '\n');
	x.open("Bank Account System.txt");
	while (1 == 1)
	{
		getline(x, account, '\n');
		getline(x, passward, '\n');
		getline(x, name, '\n');
		getline(x, id, '\n');
		getline(x, phone, '\n');
		x >> balan;
		x.ignore(1);
		if (acco == account)
		{
			count = 1;
			break;
		}
		if (account == "End Accout")
		{
			break;
		}

	}
	if (count == 0)
	{
		cout << "Your entered Account number does match with other account." << endl;
		return;
	}
	x.close();
	ofstream out;
	ifstream y;
	y.open("Bank Account System.txt");
	out.open("temp.txt");
	while (1 == 1)
	{
		getline(y, account, '\n');
		getline(y, passward, '\n');
		getline(y, name, '\n');
		getline(y, id, '\n');
		getline(y, phone, '\n');
		y >> balan;
		y.ignore(1);
		if (acco == account)
		{
			cout << "Your bank account is Deletd successfully." << endl;
			cout << "Thanks for joining us." << endl;
			continue;
		}
		out << account << endl;
		out << passward << endl;
		out << name << endl;
		out << id << endl;
		out << phone << endl;
		out << balan << endl;
		if (account == "End Accout")
		{
			break;
		}
	}
	out.close();
	y.close();
	remove("Bank Account System.txt");
	rename("temp.txt", "Bank Account System.txt");
}




void AdminData()
{
	ofstream out;
	ifstream x;
	x.open("Bank Account System.txt");
	out.open("temp.txt");
	string account, name, passward, id, phone;
	double balan;
	int c;
	while (1 == 1)
	{
		getline(x, account, '\n');
		getline(x, passward, '\n');
		getline(x, name, '\n');
		getline(x, id, '\n');
		getline(x, phone, '\n');
		x >> balan;
		x.ignore(1);
		if (account=="Admin")
		{
			
			cout <<endl<< "What do you want to change :"<<endl<<endl;
			cout << "1.Admin Name" << endl;
			cout << "2.Admin Passward" << endl;
			cout << "3.ID Card Number" << endl;
			cout << "4.Phone number" << endl;
			cout << "5.Exist" << endl << endl;
			cout << "Press 1/2/3/4/5 and Enter key:";
			cin >> c;
			while (c != 1 && c != 2 && c != 3 && c != 4 && c != 5)
			{
				cout << "Invalid number" << endl;
				cout << "Again Enter 1/2/3/4/5 AND enter key shown up:";
				cin >> c;
			}
			cin.ignore(1);
			if (c == 1)
			{
				cout << "Please Enter your name Admin:";
				getline(cin, name, '\n');
			}
			else if (c == 2)
			{
				cout << "Please Enter your new Passward Admin:";
				getline(cin, passward, '\n');
			}
			else if (c == 3)
			{
				cout << "Please Enter ID Number Admin:";
				getline(cin, id, '\n');
			}
			else if (c == 4)
			{
				cout << "Please Enter your Phone Number Admin:";
				getline(cin, phone, '\n');
			}
			else if (c == 5)
			{
				cout << endl;
				return;
			}
		}
		out << account << endl;
		out << passward << endl;
		out << name << endl;
		out << id << endl;
		out << phone << endl;
		out << balan << endl;
		if (account == "End Accout")
		{
			break;
		}
	}
	out.close();
	x.close();
	remove("Bank Account System.txt");
	rename("temp.txt", "Bank Account System.txt");
	cout << "Your Work is done successfully." << endl;
	cout << "Thanks for joining us." << endl;
}


void userData()
{
	int count = 0;
	ifstream y;
	y.open("Bank Account System.txt");
	string account, name, passward, id, phone;
	double balan;
	string account1;
	cout << "Please Enter Account number of user:";
	getline(cin, account1, '\n');
	while (1 == 1)
	{
		getline(y, account, '\n');
		getline(y, passward, '\n');
		getline(y, name, '\n');
		getline(y, id, '\n');
		getline(y, phone, '\n');
		y >> balan;
		y.ignore(1);
		if (account1 == account)
		{
			count = 1;
			break;
		}
		if (account == "End Accout")
		{
			break;
		}

	}
	if (count == 0)
	{
		cout << "Your entered Account number does match with other account." << endl;
		return;
	}
	y.close();
	ofstream out;
	ifstream x;
	x.open("Bank Account System.txt");
	out.open("temp.txt");
	int c;
	while (1 == 1)
	{
		getline(x, account, '\n');
		getline(x, passward, '\n');
		getline(x, name, '\n');
		getline(x, id, '\n');
		getline(x, phone, '\n');
		x >> balan;
		x.ignore(1);
		if (account == account1)
		{

			cout << endl << "What do you want to change :" << endl << endl;
			cout << "1.User Name" << endl;
			cout << "2.User Passward " << endl;
			cout << "3.User ID card Number " << endl;
			cout << "4.User Phone Number " << endl;
			cout << "5.Exist" << endl << endl;
			cout << "Press 1/2/3/4/5 and Enter key:";
			cin >> c;
			while (c != 1 && c != 2 && c != 3 && c != 4 && c != 5)
			{
				cout << "Invalid number" << endl;
				cout << "Again Enter 1/2/3/4/5 AND enter key shown up:";
				cin >> c;
			}
			cin.ignore(1);
			if (c == 1)
			{
				cout << "Please Enter name of user:";
				getline(cin, name, '\n');
			}
			else if (c == 2)
			{
				cout << "Please Enter Passward of user:";
				getline(cin, passward, '\n');
			}
			else if (c == 3)
			{
				cout << "Please Enter ID Card Number of user:";
				getline(cin, id, '\n');
			}
			else if (c == 4)
			{
				cout << "Please Enter Phone Number of user:";
				getline(cin, phone, '\n');
			}
			else if (c == 5)
			{
				cout << endl;
				return;
			}
		}
		out << account << endl;
		out << passward << endl;
		out << name << endl;
		out << id << endl;
		out << phone << endl;
		out << balan << endl;
		if (account == "End Accout")
		{
			break;
		}
	}
	out.close();
	x.close();
	remove("Bank Account System.txt");
	rename("temp.txt", "Bank Account System.txt");
	cout << "Your Work is done successfully." << endl;
	cout << "Thanks for joining us." << endl;

}




void AccountHolder()
{
	ifstream x;
	cout << endl << "List of all Account holders are:" << endl << endl;
	x.open("Bank Account System.txt");
	string account, name, passward,id,phone;
	double balan;
	while (1 == 1)
	{
		getline(x, account, '\n');
		getline(x, passward, '\n');
		getline(x, name, '\n');
		getline(x, id, '\n');
		getline(x, phone, '\n');
		x >> balan;
		x.ignore(1);
		if (account=="Admin")
		{
			continue;
		}
		if (account == "End Accout")
		{
			break;
		}
		cout << "Account number is:";
		cout << account << endl;
		cout << "Account Holder is:";
		cout << name << endl<<endl;
	}
	cout << "All Bank Account Holder are shown up." << endl;
	cout << "Thanks for joining us." << endl;
	x.close();
}





int choseWork()
{
	cout << "1.For Admin " << endl;
	cout << "2.For Customer " << endl;
	cout << "3.Exist " << endl;
	cout << endl << "Enter 1/2/3 AND enter key shown up:";
	int num;
	cin >> num;
	while (num != 1 && num != 2 && num != 3)
	{
		cout << "Invalid number" << endl;
		cout << "Again Enter 1/2/3 AND enter key shown up:";
		cin >> num;
	}
	return num;
}





int AdminList()
{
	cin.ignore(1);
	cout << "Please Enter your name Admin:";
	string name;
	getline(cin,name,'\n');
	cout << "Please Enter your Pasward :";
	string pas;
	passwardsystem(pas);
	ifstream x;
	string accon, nam, passwa,id,phone;
	double balnc;
	x.open("Bank Account System.txt");
	while (1 == 1)
	{
		getline(x,accon, '\n');
		getline(x, passwa, '\n');
		getline(x,nam,'\n');
		getline(x, id, '\n');
		getline(x, phone, '\n');
		x >> balnc;
		x.ignore(1);
		if (accon=="Admin")
		{
			break;
		}
	}
	if (accon=="Admin")
	{
		while (nam != name || passwa != pas)
		{
			cout << "Your name/Pasward is wrong so Please" << endl;
			char d;
			cout << "If you know the passward then press (Y) otherwise press N/other key and Enter key:";
			cin >> d;
			if (d!='Y')
			{
				return 2;
			}
			cin.ignore(1);
			cout << "Again Please Enter your name Admin:";
			getline(cin,name,'\n');
			cout << "Again Please Enter your Pasward Admin:";
			getline(cin,pas,'\n');
			
		}
	}
	x.close();
	return 1;
}




void UpdateUser()
{
	int count = 0;
	ifstream y;
	y.open("Bank Account System.txt");
	string account, name, passward,id,phone;
	double balan;
	string pass,nam;
	cout << "Please Enter user Name:";
	getline(cin, nam, '\n');
	cout << "Please Enter your Passward:";
	passwardsystem(pass);
	while (1 == 1)
	{
		getline(y, account, '\n');
		getline(y, passward, '\n');
		getline(y, name, '\n');
		getline(y, id, '\n');
		getline(y, phone, '\n');
		y >> balan;
		y.ignore(1);
		if (pass == passward && name == nam)
		{
			count = 1;
			break;
		}
		if (account == "End Accout")
		{
			break;
		}

	}
	if (count == 0)
	{
		cout <<endl<< "Your entered user name/passward is wronge." << endl;
		return;
	}
	y.close();
	ofstream out;
	ifstream x;
	x.open("Bank Account System.txt");
	out.open("temp.txt");
	int c;
	while (1 == 1)
	{
		getline(x, account, '\n');
		getline(x, passward, '\n');
		getline(x, name, '\n');
		getline(x, id, '\n');
		getline(x, phone, '\n');
		x >> balan;
		x.ignore(1);
		if (pass == passward && name == nam)
		{
			cout << endl << "What do you want to change :" << endl << endl;
			cout << "1.User Name" << endl;
			cout << "2.User Passward " << endl;
			cout << "3.User Phone Number " << endl;
			cout << "4.Exist" << endl << endl;
			cout << "Press 1/2/3/4 and Enter key:";
			cin >> c;
			while (c != 1 && c != 2 && c != 3 && c != 4)
			{
				cout << "Invalid number" << endl;
				cout << "Again Enter 1/2/3/4 AND enter key shown up:";
				cin >> c;
			}
			cin.ignore(1);
			if (c == 1)
			{
				cout << "Please Enter New Name of user:";
				getline(cin, name, '\n');
			}
			else if (c == 2)
			{
				cout << "Please Enter New Passward of user:";
				getline(cin, passward, '\n');
			}
			else if (c == 3)
			{
				cout << "Please Enter New Phone Number of user:";
				getline(cin, phone, '\n');
			}
			else if (c == 4)
			{
				cout << endl;
				return;
			}
		}
		out << account << endl;
		out << passward << endl;
		out << name << endl;
		out << id << endl;
		out << phone << endl;
		out << balan << endl;
		if (account == "End Accout")
		{
			break;
		}
	}
	out.close();
	x.close();
	remove("Bank Account System.txt");
	rename("temp.txt", "Bank Account System.txt");
	cout << "Your Work is Done successfully." << endl;
	cout << "Thanks for joining us." << endl;
}





void DepositeMoney()
{
	int count = 0;
	ifstream y;
	y.open("Bank Account System.txt");
	string account, name, passward,id,phone;
	double balan;
	string pass, nam;
	cout << "Please Enter user Name:";
	getline(cin, nam, '\n');
	cout << "Please Enter your Passward:";
	passwardsystem(pass);
	while (1 == 1)
	{
		getline(y, account, '\n');
		getline(y, passward, '\n');
		getline(y, name, '\n');
		getline(y, id, '\n');
		getline(y, phone, '\n');
		y >> balan;
		y.ignore(1);
		if (pass == passward && name == nam)
		{
			count = 1;
			break;
		}
		if (account == "End Accout")
		{
			break;
		}

	}
	if (count == 0)
	{
		cout << endl << "Your entered user name/passward is wronge." << endl;
		return;
	}
	y.close();
	double mon;
	ofstream out;
	ifstream x;
	x.open("Bank Account System.txt");
	out.open("temp.txt");
	int c;
	while (1 == 1)
	{
		getline(x, account, '\n');
		getline(x, passward, '\n');
		getline(x, name, '\n');
		getline(x, id, '\n');
		getline(x, phone, '\n');
		x >> balan;
		x.ignore(1);
		if (pass == passward && name == nam)
		{

			cout << endl << "Your Account number is :" << account<<endl;
			cout << "User Name is :" << name << endl;
			cout << endl << "How much money you want to deposite :";
			cin >> mon;
			cout<< endl;
			balan = balan + mon;
			cout << "You are successful to Deposite Money" << endl;
			cout << "Your recent balance is:" << balan << endl<<endl;
		}
		out << account << endl;
		out << passward << endl;
		out << name << endl;
		out << id << endl;
		out << phone << endl;
		out << balan << endl;
		if (account == "End Accout")
		{
			break;
		}
	}
	out.close();
	x.close();
	remove("Bank Account System.txt");
	rename("temp.txt", "Bank Account System.txt");
	cout << "Always Be Happy." << endl;
	cout << "Thanks for joining us." << endl;
}




void WithDrawMoney()
{
	int count = 0;
	ifstream y;
	y.open("Bank Account System.txt");
	string account, name, passward, id, phone;
	double balan;
	string pass, nam;
	cout << "Please Enter user Name:";
	getline(cin, nam, '\n');
	cout << "Please Enter your Passward:";
	passwardsystem(pass);
	while (1 == 1)
	{
		getline(y, account, '\n');
		getline(y, passward, '\n');
		getline(y, name, '\n');
		getline(y, id, '\n');
		getline(y, phone, '\n');
		y >> balan;
		y.ignore(1);
		if (pass == passward && name == nam)
		{
			count = 1;
			break;
		}
		if (account == "End Accout")
		{
			break;
		}

	}
	if (count == 0)
	{
		cout << endl << "Your entered user name/passward is wronge." << endl;
		return;
	}
	y.close();
	double mon;
	ofstream out;
	ifstream x;
	x.open("Bank Account System.txt");
	out.open("temp.txt");
	int c;
	while (1 == 1)
	{
		getline(x, account, '\n');
		getline(x, passward, '\n');
		getline(x, name, '\n');
		getline(x, id, '\n');
		getline(x, phone, '\n');
		x >> balan;
		x.ignore(1);
		if (pass == passward && name == nam)
		{

			cout << endl << "Your Account number is :" << account << endl;
			cout << "User Name is :" << name << endl;
			cout << endl << "How much money you want to Draw :";
			cin >> mon;
			cout << endl;
			if (mon <= balan)
			{
				balan = balan - mon;
				cout << "You are successful to draw Money" << endl;
				cout << "Your recent balance is:" << balan << endl<<endl;
			}
			else
			{
				cout << "Your Entered Amount is Greater then your Account Balnce."<<endl;
				cout << "Your Amount Balance is :" << balan << endl;
				cout << "So, You are unable to draw Money" << endl;
			}
		}
		out << account << endl;
		out << passward << endl;
		out << name << endl;
		out << id << endl;
		out << phone << endl;
		out << balan << endl;
		if (account == "End Accout")
		{
			break;
		}
	}
	out.close();
	x.close();
	remove("Bank Account System.txt");
	rename("temp.txt", "Bank Account System.txt");
	cout << "Always Be Happy." << endl;
	cout << "Thanks for joining us." << endl;
}




void CheckBalance()
{
	int count = 0;
	ifstream y;
	y.open("Bank Account System.txt");
	string account, name, passward,id,phone;
	double balan;
	string pass, nam;
	cout << "Please Enter user Name:";
	getline(cin, nam, '\n');
	cout << "Please Enter your Passward:";
	passwardsystem(pass);
	while (1 == 1)
	{
		getline(y, account, '\n');
		getline(y, passward, '\n');
		getline(y, name, '\n');
		getline(y, id, '\n');
		getline(y, phone, '\n');
		y >> balan;
		y.ignore(1);
		if (pass == passward && name == nam)
		{
			count = 1;
			break;
		}
		if (account == "End Accout")
		{
			break;
		}

	}
	if (count == 0)
	{
		cout << endl << "Your entered user name/passward is wronge." << endl;
		return;
	}
	y.close();
	ofstream out;
	ifstream x;
	x.open("Bank Account System.txt");
	out.open("temp.txt");
	int c;
	while (1 == 1)
	{
		getline(x, account, '\n');
		getline(x, passward, '\n');
		getline(x, name, '\n');
		getline(x, id, '\n');
		getline(x, phone, '\n');
		x >> balan;
		x.ignore(1);
		if (pass == passward && name == nam)
		{

			cout << endl << "Dear  " << name <<","<< endl;
			cout << "Your Account number is:" << account << endl;
			cout << "Your Account Balance is :" << balan << endl;
			cout << endl;
		}
		out << account << endl;
		out << passward << endl;
		out << name << endl;
		out << id << endl;
		out << phone << endl;
		out << balan << endl;
		if (account == "End Accout")
		{
			break;
		}
	}
	out.close();
	x.close();
	remove("Bank Account System.txt");
	rename("temp.txt", "Bank Account System.txt");
	cout << "Always Be Happy." << endl;
	cout << "Thanks for joining us." << endl;
}


void ViewAccountData()
{
	int count = 0;
	ifstream y;
	y.open("Bank Account System.txt");
	string account, name, passward,id,phone;
	double balan;
	string pass, nam;
	cout << "Please Enter user Name:";
	getline(cin, nam, '\n');
	cout << "Please Enter your Passward:";
	passwardsystem(pass);
	while (1 == 1)
	{
		getline(y, account, '\n');
		getline(y, passward, '\n');
		getline(y, name, '\n');
		getline(y, id, '\n');
		getline(y, phone, '\n');
		y >> balan;
		y.ignore(1);
		if (pass == passward && name == nam)
		{
			count = 1;
			break;
		}
		if (account == "End Accout")
		{
			break;
		}

	}
	if (count == 0)
	{
		cout << endl << "Your entered user name/passward is wronge." << endl;
		return;
	}
	y.close();
	ifstream x;
	x.open("Bank Account System.txt");
	int c;
	while (1 == 1)
	{
		getline(x, account, '\n');
		getline(x, passward, '\n');
		getline(x, name, '\n');
		getline(x, id, '\n');
		getline(x, phone, '\n');
		x >> balan;
		x.ignore(1);
		if (pass == passward && name == nam)
		{

			cout << endl << "Dear  " << name << "," << endl << endl;
			cout << "Your Account Number is:      " << account << endl;
			cout << "Your User Name is:           " << name << endl;
			cout << "Your Passward is:            " << passward << endl;
			cout << "Your ID Card number is:      " << id << endl;
			cout << "Your Phone number is:        " << phone << endl;
			cout << "Your Account Balance is:     " << balan << endl;
			cout << endl;
		}
		if (account == "End Accout")
		{
			break;
		}
	}
	x.close();
	cout << "Always Be Happy." << endl;
	cout << "Thanks for joining us." << endl;
}



int main()
{
	firstPage();
	int a;
	a = choseWork();
	if (a == 1)
	{
		int l=AdminList();
		if (l != 2)
		{
			char s;
			while (1 == 1)
			{
				cout << endl << "you have authority to these:" << endl;
				cout << endl << "1.Delete an Account " << endl;
				cout << "2.Creat a new Account " << endl;
				cout << "3.To view list of all Account Holders" << endl;
				cout << "4.To change Admin data" << endl;
				cout << "5.To change Account holder name/Passward when user forget" << endl;
				cout << "6.To see total number of Accounts" << endl;
				cout << "7.Exist " << endl;
				cout << endl << "Enter 1/2/3/4/5/6/7 AND enter key shown up:";
				int num;
				cin >> num;
				while (num != 1 && num != 2 && num != 3 && num != 4 && num != 5 && num != 6 && num != 7)
				{
					cout << "Invalid number" << endl;
					cout << "Again Enter 1/2/3/4/5/6/7 AND enter key shown up:";
					cin >> num;
				}
				cin.ignore(1);
				if (num == 1)
				{
					DeleteAccount();
				}
				else if (num == 2)
				{
					CreatAccount();
				}
				else if (num == 3)
				{
					AccountHolder();
				}
				else if (num == 4)
				{
					AdminData();
				}
				else if (num == 5)
				{
					userData();
				}
				else if (num == 6)
				{
					int num = TotalAccount();
					cout << endl << "Total numbers of Account are:" << num << endl << endl;
					cout << "Total numbers of Account is shown above. " << endl;
					cout << "Thanks for joining us." << endl;
				}
				else if (num == 7)
				{
					return 0;
				}
				cout << "Press any key and Enter to see Menu again/  Press (R/r) and Enter to return/Exist:";
				cin >> s;
				if (s == 'R' || s =='r')
				{
					return 0;
				}
			}
		}
	}
	else if (a == 2)
	{
		char s;
		while (1 == 1)
		{
			cout << endl << "facilities are Defined below:" << endl;
			cout << endl << "1.Update your Account" << endl;
			cout << "2.With-Draw Money" << endl;
			cout << "3.Deposit Money" << endl;
			cout << "4.To Check Balance" << endl;
			cout << "5.To view your complete Account data" << endl;
			cout << "6.Exist " << endl;
			int num;
			cout << endl << "Press a number from 1 to 6 and then Enter key:";
			cin >> num;
			while (num != 1 && num != 2 && num != 3 && num != 4 && num != 5 && num != 6)
			{
				cout << "Invalid number" << endl;
				cout << "Again press a number from 1 to 7 and then Enter key:";
				cin >> num;
			}
			cin.ignore(1);
			if (num == 1)
			{
				UpdateUser();
			}
			else if (num == 2)
			{
				WithDrawMoney();
			}
			else if (num == 3)
			{
				DepositeMoney();
			}
			else if (num == 4)
			{
				CheckBalance();
			}
			else if (num == 5)
			{
				ViewAccountData();
			}
			else if (num == 6)
			{
				return 0;
			}
			cout << "Press any key and Enter to see Menu again/  Press (R/r) and Enter to return/Exist:";
			cin >> s;
			if (s == 'R' || s == 'r')
			{
				return 0;
			}

		}
	}
	else
	{
		return 0;
	}
	system("pause");
	return 0;
}