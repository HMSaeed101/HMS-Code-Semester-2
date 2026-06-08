#include <iostream>
using namespace std;


//! Example 1: Simple friend function
class Number
{
  friend void doubleValue(Number &obj);

private:
  int value;
  void add(int n) { value += n; }

public:
  Number(int val) : value(val) {}
  void print() { cout << "Value: " << value << endl; }

};

void doubleValue(Number &obj)
{
    obj.add(obj.value);
}



//! Example 2: Friend function for two classes
class CostsA;
class RevenueA
{
  friend bool isProfit(RevenueA rev, CostsA cos);

private:
  int revenue;

public:
  RevenueA(int rev) : revenue(rev) {}
};

class CostsA
{
  friend bool isProfit(RevenueA rev, CostsA cos);

private:
  int costs;

public:
  CostsA(int cst) : costs(cst) {}
};

bool isProfit(RevenueA rev, CostsA cos)
{
  return rev.revenue > cos.costs;
}




//! Example 3: Member function as a friend of another class
class CostsB;

class RevenueB
{
private:
    int revenue;

public:
    RevenueB(int rev) : revenue(rev) {}
    bool hasProfit(CostsB cos);
};

class CostsB
{
    friend bool RevenueB::hasProfit(CostsB cos);

private:
    int costs;

public:
    CostsB(int cst) : costs(cst) {}
};

bool RevenueB::hasProfit(CostsB cos)
{
    return revenue > cos.costs;
}



int main()
{
    Number num(7);
    num.print();
    doubleValue(num);
    num.print();

    RevenueA revA(1000);
    CostsA costA(500);
    if (isProfit(revA, costA)) cout << "Profit!" << endl;
    else cout << "No Profit!" << endl;

    RevenueB revB(500);
    CostsB costB(1000);
    if (revB.hasProfit(costB)) cout << "Profit!" << endl;
    else cout << "No Profit!" << endl;

    return 0;
}
