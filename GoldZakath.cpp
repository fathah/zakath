#include <iostream>
using namespace std;

class zakath{
    float userGram; //user entry in grams
    float misqal;   // it is a single unit 
    float percent;  // percent to give
    float todaysGold; // todays gold in your area
public:
        void sum(){
            percent = 2.5/100;
            todaysGold = 3220;
            cout<<"Enter the amount of gold available (In Grams):"<<endl; //user should input, hpw much he have now
            cin>>userGram;
            if(userGram>=85){
                cout<<"You have "<<userGram<<" grams of gold."<<endl; // Output 1
                cout<<"You have to donate "<<userGram*percent<<" Grams of Gold"<<endl;
                cout<<"According to todays gold price, the amount is "<<userGram*percent*todaysGold<<" Rupees"<<endl;
            }
            else{
                                cout<<"You have only "<<userGram<<" grams of gold."<<endl;
                                cout<<"No need of donating. As your amount don't meet the size.";

            }
        }
    
};

//call the main() function
int main(){
    zakath zq; //object created for the class zakath
    zq.sum();  //called the sum() method through object
}
