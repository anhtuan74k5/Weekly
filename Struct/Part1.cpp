#include <bits/stdc++.h>
using namespace std;

struct Point {
  int x;
  int y;

  void mid_point(const Point& p1, const Point& p2) {
    x = (p1.x + p2.x) / 2;
    y = (p1.y + p2.y) / 2;
  }
};

void print(Point& p) {
  cout << p.x << " " << p.y;
}

int main() {
  Point point;
  point.x = 10;
  point.y = 12;
  print(point);

  Point point1, point2;
  point1.x = 5;
  point1.y = 8;
  point2.x = 15;
  point2.y = 18;

  Point mid;
  mid.mid_point(point1, point2);

  cout << "\n" << mid.x << " " << mid.y;

  return 0;
}
