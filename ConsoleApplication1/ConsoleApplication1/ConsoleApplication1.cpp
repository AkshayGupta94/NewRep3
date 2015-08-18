// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n; int a;
	cin >> n;
	int flag,count=0;
	vector<int> res2;
	vector<int> res;
	for (; n > 0; n--)
	{
		cin >> a;
		res.push_back(a);
	}
	while (true)
	{
		flag = 0;
		count++;
		for (int i = 1; i < res.size(); i++)
		{
			
			if (res[i] > res[i - 1])
			{
				res2.push_back(i);
				flag = 1;
			}
		}
		if(flag==0)
		{
			break;
		}
		for (int i = 0; i < res2.size(); i++)
		{
			res.erase(res.begin() + res2[i]);
			if(i < res2.size()-1)
			res2[i + 1]-=i+1;
		}
		res2.clear();
	}
	cout << count-1;
    return 0;
}

