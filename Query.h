#pragma once
#include <bits/stdc++.h>

using namespace std;

class Query{
	private:
		string query;
	public:
		Query();
		Query(string query);
		~Query();

		// code

		void setQuery(string query);

		string getQuery();

};