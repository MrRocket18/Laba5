#include "���������� �����.h"
using namespace std;


void complch::setZ1()
{
	cout << "������� x ��� ������� ������������� �����" << endl;
	cin >> x1;
	cout << "������� y ��� ������� ������������� �����" << endl;
	cin >> y1;
	if (y1[0] == '-')
	{
		z1 = x1 + y1+"i";
	}
	else
	{
		z1 = x1 + "+" + y1+"i";
	}
	cout << "������ ������������ �����= " << z1 << endl;
}
void complch::setZ2()
{
	cout << "������� x ��� ������� ������������� �����" << endl;
	cin >> x2;
	cout << "������� y ��� ������� ������������� �����" << endl;
	cin >> y2;
	if (y2[0] == '-')
	{
		z2 = x2 + y2+ "i";
	}
	else
	{
		z2 = x2 + "+" + y2+ "i";
	}
	cout << "������ ������������ �����= " << z2 << endl;
	
}
void complch::slozh()
{
	int x1_, y1_, x2_, y2_;
	string xk;
	string yk;
	x1_ = stoi(x1);
	y1_ = stoi(y1);
	x2_ = stoi(x2);
	y2_ = stoi(y2);
	xk= to_string(int(x1_ + x2_));
	yk = to_string(int(y1_ + y2_));
	if (yk[0] == '-')
	{
		sum = xk + yk + "i";
	}
	else if  (yk == "0")
	{
		sum = xk;
	}
	else if (xk == "0")
	{
		sum = yk;
	}
	else if (xk == "0" and yk == "0")
	{
		sum = "0";
	}
	else
	{
		sum = xk + "+" + yk + "i";
	}
	cout << "����� ����������� ����� =  " << sum << endl;
}
void complch::vichet()
{
	int x1_, y1_, x2_, y2_;
	string xk;
	string yk;
	x1_ = stoi(x1);
	y1_ = stoi(y1);
	x2_ = stoi(x2);
	y2_ = stoi(y2);
	xk = to_string(int(x1_ - x2_));
	yk = to_string(int(y1_ - y2_));
	if (yk[0] == '-')
	{
		raz = xk + yk + "i";
	}
	else if (yk == "0")
	{
		raz = xk;
	}
	else if (xk == "0")
	{
		raz = yk;
	}
	else if (xk == "0" and yk == "0")
	{
		raz = "0";
	}
	else
	{
		raz = xk + "+" + yk + "i";
	}
	cout << "�������� ����������� ����� =  " << raz << endl;
}
void complch::umno()
{
	int x1_, y1_, x2_, y2_;
	string xk;
	string yk;
	x1_ = stoi(x1);
	y1_ = stoi(y1);
	x2_ = stoi(x2);
	y2_ = stoi(y2);
	xk = to_string(int((x1_*x2_)-(y1_*y2_)));
	yk = to_string(int((x1_ * x2_) + (y1_ * y2_)));
	if (yk[0] == '-')
	{
		umn = xk + yk + "i";
	}
	else if (yk == "0")
	{
		umn = xk;
	}
	else if (xk == "0")
	{
		umn = yk;
	}
	else if (xk == "0" and yk == "0")
	{
		umn = "0";
	}
	else
	{
		umn = xk + "+" + yk + "i";
	}
	cout << "������������ ����������� ����� =  " << umn << endl;
}

