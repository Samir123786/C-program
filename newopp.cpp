// Write a program according to the specification given below:
// – Create a class Account with data members acc no, balance, and min_balance(static)
// -Include methods for reading and displaying values of objects
// – Define static member function to display min_balance
// -Create array of objects to store data of 5 accounts and read and display values of each object

#include <iostream>
using namespace std;
class Account 
{
  public:
  int acc_no;
  float balance;
  static int min_balance;

  void read();
  void display();
  void min_balancedisplay();

};

void Account::min_balancedisplay(){
 min_balance = 500;
 cout<<"min balance is "<<min_balance;

}
void Account::read(){
cout << "enter account no ";
cin>>acc_no;
cout << "enter balance no ";
cin>>balance;
}
void Account::display(){
cout << "account no is  "<<acc_no<<endl;

cout << "your balance is " << balance<<endl;

}

int main(){
Account act[2];

for(int i=0;i<=2;i++){
act[i].read();

}
for(int i=0;i<=2;i++){

act[i].display();
act[i].min_balancedisplay();
}


}