#include <iostream>
#include <algorithm>
#include<string>
#include <stdlib.h>
using namespace std;
class stockexchange{
string shop,owner,upi_id;
int itemsno;
string items[1000];
float itemsrate[1000];
int no[1000];
public:
void stocksinfo(){
	cout<<"shop name: ";
	cin >> shop;
	cout<<"owner: ";
	cin>>owner;
	cout<<"upi_id: ";
	cin>>upi_id;
	cout<<"number of items available: ";
	cin>>itemsno;
	
	cout<<"Shri/Shrimati "<<owner<<" please enter your items and their respective details \n";
	for(int i=0; i<itemsno;i++){
		cout<<"name of item "<<i+1<<" :";
        cin>>items[i];
		cout<<"price of item" <<i+1<<" :";
		cin>>itemsrate[i];
		cout<<"no of item "<<i+1 <<" available:";
		cin>>no[i];
        cout<<endl;
}
}
void stocksmenu(){
	cout<<"the items available in "<<shop<<"'s shop are as below \n";
 cout<<"**";
	for(int i=0; i<74;i++){
cout<<"\21";
}	cout<<"**";
cout<<endl;
cout<<"**";

for(int i=0; i<74;i++){
cout<<"\21";
}
cout<<"**";
cout<<endl;
cout<<"    "<<"ITEM NAME       "<<"PRICE(in dollars)"<<"       NUMBER OF ITEMS AVAILABLE     \n";
for(int i=0; i<itemsno;i++){
	
	cout<<"    "<<items[i]<<"     \t  "<<itemsrate[i]*0.012<<"$  \t    "<<no[i]<<"     "<<endl;
}
cout<<"**";
	for(int i=0; i<74;i++){
cout<<"\21";
}	cout<<"**";
cout<<endl;
cout<<"**";

for(int i=0; i<74;i++){
cout<<"\21";
}
cout<<"**";
cout<<endl;
}
void newstock(){
	
	cout<<"name of item "<<itemsno+1<<" :";
        cin>>items[itemsno];
		cout<<"price of item " <<itemsno+1<<" :";
		cin>>itemsrate[itemsno];
		cout<<"no of item  "<<itemsno+1 <<" available:";
		cin>>no[itemsno];
        cout<<endl;
		itemsno+=1;
}
      void reviewstock(){
	string n;int nk=0,t;
	cout<<"enter the item name of the desired stock:\n";
	cin>>n;
	    for(int i=0; i<itemsno;i++){
	    if(n==items[i]){
	       cout<<" rthe desired item name is :"<<items[i]<<"\n the rate of "<<items[i]<<" is :"<<itemsrate[i]*0.012<<"$\n number of items available is :"<<no[i]<<endl;
	              nk+=1;
				  t=i;
                  break;}
                                   }
		if(nk==0){
			cout<<"Dear owner u have entered a wrong stock name please recheck the entered name \n";
		}						   
         else if(nk!=0){
           cout<<"Dear owner if u want change the item details enter 'yes' or if u dont want 'no'"<<endl;
           string km;
           cin>>km;
            if(km=="yes"){
	        string nam;
	        float dar;
	        int enni;
	         cout<<"if u wanna change the name of the item enter the new name of item or else'n/a':\n";
	        cin>>nam;
	        if(nam!="n/a"){
            items[t]=nam;
	                      }
	       else{ cout<<"";}
           cout<<"if u wanna change the rate of the item enter the new rate of item or else'-1':\n";
           cin>>dar;
           if(dar!=-1){
           itemsrate[t]=dar;
           }
           else{ cout<<"";}
          cout<<"if u wanna change the number of available items enter the new number of items or else'-1':\n";
          cin>>enni;
          if(enni!=-1){
	      no[t]=enni;
	      }
	      else{ cout<<"";}
          }
		  }}
	};
int main()
{   int t=1;
	string decision;
	stockexchange Krish;
	Krish.stocksinfo();
    while(t!=0){
       cout<<"1.Helloo there if u want to add new stock please enter 'update' \n2.if u want to review the existing stock please enter 'review' \n3.if you want to view the menu please enter 'menu' \n4.if you want to end the process please enter 'exit' \n";
        cin>>decision;
        if(decision=="menu"){Krish.stocksmenu();}
        else if(decision=="review"){Krish.reviewstock();}
        else if(decision=="update"){Krish.newstock();}
        else if(decision=="exit"){Krish.stocksmenu();
		t=0;}
        else{cout<<"Invalid command..... Please try again";}
    }
  return 0;
}
