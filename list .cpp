#include <bits/stdc++.h>
using namespace std;
class a
{
      public :
    a( ){ cout<<"a constructor \n" ; }
    ~a( ){ cout<<"a destructor \n" ; }
};
class b
{
      public :
    b( ){ cout<<"b constructor \n" ; }
    ~b( ){ cout<<"b destructor \n" ; }
};
class d
{
   a A;
   b B ;
   public :

   d( ):
       B(),A(){
   cout<<"d constructor \n" ;
   }
       ~d( ){ cout<<"d destructor \n" ; }

};
int main() {
d D ;

}
