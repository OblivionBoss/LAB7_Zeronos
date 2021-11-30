#include<iostream>
#include<string>

using namespace std;

int main(){
	
	string name[10] = {"Luffy","Zoro","Sanji","Nami","Naruto","Sakura","All Might","Saitama","Eren","Mikasa"};
	int id[10] = {123,196,225,329,420,451,515,666,690,787};
	double gpa[10] = {1.50,2.12,4.00,3.69,2.50,2.76,3.54,2.14,3.50,1.88};

    //Write your code here.
	int i;
	double gref;
	cout << "Please input GPA: ";
	cin >> gref;
	while(i < 10){
	if(gpa[i] > gref or gpa[i] == gref){
		cout << id[i] << " " << name[i] << " " << gpa[i] << "\n";
	}
	i++;
	}
	return 0;
}
