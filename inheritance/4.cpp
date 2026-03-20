#include <iostream>
using namespace std;
class Bank
{
protected:
    float p;

public:
    void setPrincipal(float x)
    {
        p = x;
    }
};
class SBI : public Bank
{
public:
    void amount()
    {
        cout << "SBI Amount: " << p + (p * 0.07) << endl;
    }
};
class HDFC : public Bank
{
public:
    void amount()
    {
        cout << "HDFC Amount: " << p + (p * 0.065) << endl;
    }
};
int main()
{
    SBI s;
    HDFC h;
    s.setPrincipal(10000);
    h.setPrincipal(10000);
    s.amount();
    h.amount();
    return 0;
}