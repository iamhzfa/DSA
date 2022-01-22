#include<iostream>
using namespace std;

int main(){
    int n = 1330;
    int notes_hun, notes_fif, notes_twen, notes_one;

    if (n>100)
    {
        notes_hun = n/100;
        cout<<notes_hun<<endl;
        n = n%100;
    }
    if(100>n>50)
    {
        notes_fif = n/50;
        cout<<notes_fif<<endl;
        n = n%50;
    }
    if (50>n>20)
    {
        notes_twen = n/20;
        cout<<notes_twen<<endl;
        n = n%20;
    }
    if (20>n>1)
    {
        notes_one = n/1;
        cout<<notes_one<<endl;
        n = n%1;
    }
    // cout<<(notes_hun+notes_fif+notes_twen+notes_one)<<endl;   
}


// int main()
// {
//   int amount;
//   cout<<"Enter the amount"<<endl;
//   cin>>amount;
//   int Rs100 , Rs50 , Rs20 , Rs1;

//   switch(1)
//   {
//       case 1: Rs100=amount/100;
//               amount=amount%100;
//               cout<<"No of 100 Rupee notes required are="<<Rs100<<endl;
              
         
//       case 2: Rs50=amount/50;
//               amount=amount%50;
//               cout<<"No of 50 Rupee notes required are="<<Rs50<<endl;
              

//       case 3: Rs20=amount/20;
//               amount=amount%20;
//               cout<<"No of 20 Rupee notes required are="<<Rs20<<endl;
               

//       case 4: Rs1=amount/1;
//               amount=amount%1;
//               cout<<"No of 1 Rupee notes required are="<<Rs1<<endl; 
                  
//            }
// }