#include <iostream>
using namespace std;

class zakath{
    float userGram;
    float misqal;
    float percent;
    float todaysGold;
    float zakathpt;
public:
        void sum(){
            percent = 2.5/100;
            todaysGold = 3220;
            cout<<"Enter the amount of gold available (In Grams):"<<endl;
            cin>>userGram;
            if(userGram>=85){
                cout<<"You have "<<userGram<<" grams of gold."<<endl;
                cout<<"You have to donate "<<userGram*percent<<" Grams of Gold"<<endl;
                cout<<"According to todays gold price, the amount is "<<userGram*percent*todaysGold<<" Rupees"<<endl;
            }
            else{
                                cout<<"You have only "<<userGram<<" grams of gold."<<endl;
                                cout<<"No need of donating. As your amount don't meet the size.";

            }
        }
    
};

int main(){
    zakath zq;
    zq.sum();
}
