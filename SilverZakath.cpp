#include <iostream>
using namespace std;

class silverZakath{
    float userSilverGram; //user entry in grams
    float misqal;   // it is a single unit 
    float percent;  // percent to give
    float todaysSilver; // todays gold in your area
public:
        void sum(){
            percent = 2.5/100;
            todaysSilver = 44.84;
            cout<<"Enter the amount of Silver available (In Grams):"<<endl; //user should input, how much he have now
            cin>>userSilverGram;
            if(userSilverGram>=595){
                cout<<"You have "<<userSilverGram<<" grams of Silver."<<endl; // Output 1
                cout<<"You have to donate "<<userSilverGram*percent<<" Grams of Silver"<<endl;
                cout<<"According to todays Silver price, the amount is "<<userSilverGram*percent*todaysSilver<<" Rupees"<<endl;
            }
            else{
                                cout<<"You have only "<<userSilverGram<<" grams of Silver."<<endl;
                                cout<<"No need of donating. As your amount don't meet the size.";

            }
        }
    
};

//call the main() function
int main(){
    silverZakath zq; //object created for the class zakath
    zq.sum();  //called the sum() method through object
}
