// 신소재공학과 4학년
// B519096 이세은


#include <iostream>
using namespace std;

class CPoint {
private : 
 int x, y;
 static int count;

public : 
 CPoint(int a = 0, int b = 0) : x(a), y(b) { count++; }
 ~CPoint() { count--; }
 void Print() { cout << "(" << x << ", " << y << ")" << endl; }
 static int GetCount() { return count; }
};

int CPoint::count = 0;

int main(void)
{
 CPoint P1(1,2);
 CPoint *P2 = new CPoint(3,4);

 cout << "count : " << CPoint::GetCount() << endl;
 delete P2;
 cout << "count : " << P1.GetCount() << endl;

 return 0;
}

//객체의 값에 의한 전달
//객체의 값에 의한 반환
