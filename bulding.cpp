#include <bits/stdc++.h> // بسم  الله الرحمن الرحيم
using namespace std;
#define ll long long
class room
{
string color ;
int hight ;
int width ;

public:
   void  set_color(string color ){
    this->color = color;
    }
  void   set_hight(int higth)
    {
        hight=higth;
    }
  void    set_width(int wid)
    {
        width=wid;
    }
string     get_color ( ){return color ; }
 int    get_hight ( ){return hight ; }
  int   get_width ( ){return width  ; }
};
class apartment{
vector<room> rom;
int floor;
int apartment_number;
public :

void SetApartmentNumber(int apartmentNumber) {
		apartment_number = apartmentNumber;
	}
	void SetFloorNumber(int floorNumber) {
		floor = floorNumber;
	}

	int GetFloorNumber() {
		return floor;
	}
	void SetRooms( vector<room>& rooms) {
		rom = rooms;
	}
	vector<room>& GetRooms() {
		return rom;
	}


 };
 class Elevator {

 int width;
 int max_people ;
 int hight;
 public :
 void setwidth(int wid ){
 width=wid;
 }
 void  sethigth(int hig ){
 hight=hig;
 }
void   setmax_people(int ma ){
 max_people=ma;
 }
int get_hight( ){ return hight;  }
int get_width( ) {return width ; }
int get_max_people ( ) {return max_people;}

 };

 class bulding {

 vector<apartment>ap;
 vector<Elevator>el;


 };
int main() {

}
