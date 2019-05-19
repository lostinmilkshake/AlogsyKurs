#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include "listTemplate.h"

using namespace std;

class FlowNetwork
{
public:
	FlowNetwork();
	~FlowNetwork();

private:
	vector<vector<int>> matrix;
};

FlowNetwork::FlowNetwork()
{
	ifstream inputText("inputText.txt");
	char buff[100];
	MyList<MyList<int> > newList;
	MyList<int> newList1;
	newList1.push_back(1);
	newList1.push_back(2);
	newList1.push_back(3);
	newList1.push_back(4);
	newList.push_back(newList1);
	newList.push_back(newList1);
	newList.push_back(newList1);

	cout << endl;
}

FlowNetwork::~FlowNetwork()
{
}