/*1 Banking Record System.
File handling has been effectively used for each feature of this project
Operations
? Add Record:
? Show/List Data:
? Search Record:
? Edit Record:
? Delete Record:

or

Bookshop Management System
File handling has been effectively used for each feature of this project
Operations
1. Add Book Records:
2. Show Book Records:
3. Check Availability:
4. Modify Book Records:
5. Delete Book Records:
*/


main()
{    
#include <iostream>
#include <fstream>
using namespace std;

int main(){
string name, account;
string s2;


cout<<"Enter Your Name ";
getline(cin ,name);
cout<<"Enter acccount ";
getline(cin, account);

ofstream out2("bank.txt");
out2<<name<<account;
out2.close();
    ifstream in("bank.txt");

    getline(in, s2);
    cout<<s2;

string line;
ofstream out;
out.open("bank.txt", ios::app);
cout << "Enter data (type 'quit' to exit): ";

    while (true) {
        getline(cin,line);

        if (line == "quit" || line=="QUIT") {
            break;
        }

        out << line << endl;
    }

    out.close();
    cout << "Data written to file successfully.";
   
    string line3;
ifstream in3("bank.txt");

if(in.is_open()){

    
        while (getline(in3, line3)){
            cout << line3<< endl;
        }
        in3.close(); 
     } else {
        cout << "Unable to open file" << endl;
    }
return 0;
}
	
	
	
	
}