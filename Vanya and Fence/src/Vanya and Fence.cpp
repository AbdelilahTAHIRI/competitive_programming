//============================================================================
// Name        : Vanya.cpp
// Author      : Abdelilah TAHIRI
// Version     :
// Copyright   : This file is an exclusive property of Abdelilah TAHIRI
// Description : Vanya and Fence in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

void solve(int n, int h, vector<int> heights)
{
	int ret = 0;
	for(int i = 0; i< n ; i++)
	{
		if(heights[i] > h)
		{
			ret+=2;
		}
		else {
			ret++;
		}
	}
	cout << ret << endl;
}
int main() {
	int n;
	int h;
	int a_i;
	cin >> n;
	cin >> h ;
	cout << n << h <<endl;
	vector<int> heights;
	for(int i =0; i < n; i++)
	{
		cin >> a_i;
		cout << a_i << endl;
		heights.push_back(a_i);
	}
	solve(n, h, heights);
	exit(0);
	return 0;
}
