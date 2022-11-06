#include <bits/stdc++.h> // بسم  الله الرحمن الرحيم
using namespace std;
#define ll long long
class invoice
{
 int item; int price ; int quaintity;
 string name;

 public:
     invoice(){item=0; price=0; quaintity= 0; }// constructor
 void set_price(){cin>>price;}
 void set_num_item( ){ cin>>item;   }
 void set_name( ){ cin>>name;  }
 void set_qunt( ){cin>>quaintity; }
ll get_total_price(){return quaintity*price; }
};
int main() {
invoice inv1;
inv1.set_name();
inv1.set_price( );
inv1.set_qunt ( );
inv1.set_num_item( );
cout<<inv1.get_total_price();
}
