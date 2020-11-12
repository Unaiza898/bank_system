#pragma once
#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <fstream>
#include<cctype>
#include<iomanip>
#include <string>

using namespace std;

class account
{
	int acno;	// account number
	char name[50];	// account name
	int deposit;
	char type;

public:
	//withdraw money (int n), subtract from blance
	void withdraw(int);
	//deposit money (int n)
	void dep(int);
	//create account
	void create_account();
	//show account details CONST
	void show_account() const;
	//modify account
	void modify();
	//report - show data in tabular format CONST
	void report() const;
	//getAccountNumber CONST
	int getAcNo() const;
	//get balanceAmount CONST
	int getBal() const;
	//getAccountType CONST
	char getAcType() const;
};

int writeFile();
int addToFile();
int readFile();


#endif