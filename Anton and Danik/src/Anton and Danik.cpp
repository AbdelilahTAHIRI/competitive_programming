//============================================================================
// Name        : Anton.cpp
// Author      : Abdelilah TAHIRI
// Version     :
// Copyright   : This file is an exclusive property of Abdelilah TAHIRI
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
#define DEBUG (1)
using namespace std;
void solve(int n, string s)
{
	int a = count(s.begin(), s.end(), 'A');
	int d = count(s.begin(), s.end(), 'D');
#if DEBUG
	cout << "Anton won "<< a << " times" << endl;
	cout << "Danik won "<< d << " times" << endl;
#endif
	if(a < d)
	{
		cout << "Danik" << endl;
	}
	else if (a > d)
	{
		cout << "Anton" << endl;
	}
	else
	{
		cout << "Friendship" << endl ;
	}
}
int main() {
	int n;
	string s;
	cin >> n;
	cin >> s;
#if DEBUG
	cout << "inputs :" << endl;
	cout << n << endl << s<< endl;
#endif
	solve(n, s);
	return 0;
}
