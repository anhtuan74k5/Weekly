#include <bits/stdc++.h>
using namespace std;

struct Point {
  int x,y;
};

struct Rect {
  int x,y,w,h;
  bool contains (const Point& point) const {
    return (point.x >= x && point.x <= x+w && point.y <= y && point.y >= y-h);
  }
  };

struct Ship {
  Rect rec1;
  string id;
  int dx;
  int dy;
  void move () {
    rec1.x += dx;
    rec1.y += dy;
  }         };

void display (const Ship& ship) {
  cout <<"So hieu: "<< ship.id << endl;
  cout << "Toa do:" << " " << ship.rec1.x <<" " << ship.rec1.y << endl;
  cout << endl;
}

void FillIn (Ship& ship) {
  cout << "Toa do thuyen: " << endl;
  cin >> ship.rec1.x;
  cin >> ship.rec1.y;
  cout << "Nhap so hieu: " << endl;
  cin >> ship.id;
  cout << "Nhap van toc theo truc x" << endl;
  cin >> ship.dx;
  cout << "Nhap van toc theo truc y" << endl;
  cin >> ship.dy;
}

int main () {
  Ship ship1, ship2;
  FillIn(ship1);
  FillIn(ship2);
  int loop = 0;
  while (loop < 10){
    ship1.move(); ship2.move();
    display(ship1); display(ship2);
    loop ++;
  }
}
