#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
struct PersonInfo{
	string name;
	vector<string> phones;	
};
int main()
{

 	string line,word;
 	vector<PersonInfo> people;
 	//while(getline(cin,line)){
 	getline(cin,line);
	{
		 PersonInfo info;
 		istringstream record(line);
 		record>>info.name;
 		while(record>>word)
 			info.phones.push_back(word);
		people.push_back(info);
	 }
	 for(auto &entry:people){	
	 	ostringstream formatted;
	 	for(auto &nums:entry.phones){
	 			formatted<<" "<<nums;
	 	}
	 	cout<<"name"<<entry.name<<"nums"<<formatted.str();
 	}
	 
} 
