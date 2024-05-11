#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	series:
	int num,difference;
	cout<<"Enter the expected number "
	<<"and it will give you a sequence:";
	cin>>num;
	//result=0;
	do{
		cout<<num<<"";
		num=num+3;
		cout<<endl;
	}
	while(num<=50);
	cout<<endl;
	//	cout<<"what is the common difference of the sequence:"<<difference<<endl;
		//cin>>difference;
		//result++;
	cout<<"what is the common difference of the sequence:";
	cin>>difference;
	if(difference==3){
		cout<<"you are right";
	}
	else{
		cout<<"you are wrong";
	}
	cout<<endl;
	int first_term,common_ratio;
	cout<<"Enter a number to express a geometric sequence:";
	cin>>first_term;
	do{
		cout<<first_term<<"";
		first_term=first_term*2;
		cout<<endl;
	}
	while(first_term<=100);
	cout<<"What is the common ratio of the sequence:";
	cin>>common_ratio;
	if(common_ratio==2){
		cout<<"you are correct";
	}
	else{
		cout<<"you are wrong";
	}
	cout<<endl;
	//goto series;
	 char continueOption;
    cout << "Do you want to continue with another number? (y/n): ";
    cin >> continueOption;
    if (continueOption == 'y' || continueOption == 'Y'){
        goto series;
		}
    else{
        return 0;
		}
	system("pause");
	return 0;
}
