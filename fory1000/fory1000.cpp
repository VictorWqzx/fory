﻿#include<iostream>
#include<math.h>

void f1(int n, int k) {
	for (int i = 0; i < n; i++)
	{
		std::cout << k << std::endl;
	}
}
void f2(int a, int b) {
	int times = 0;
	for (int i = 0; a <= b; a++, times++) {
		std::cout << a << std::endl;
	}
	std::cout << "chislel vvedeno v" << times << std::endl;
}
void f3(int a, int b) {
	int times = 0;
	b--;
	for (; a < b; times++, b--)
	{
		std::cout << b << std::endl;
	}
	std::cout << "chisel vivelo=" << times << std::endl;
}
void f4(double price) {
	for (int i = 1; i <= 11; i++)
	{
		std::cout << price * i << std::endl;
	}
}
void f5(double pr) {
	double kg = 0;
	for (; kg <= 1; kg += 0.1)
	{
		std::cout << pr * kg << std::endl;
	}
}
void f6(double pr) {
	double kg = 1.2;
	for (; kg <= 2; kg += 0.2)
	{
		std::cout << pr * kg << std::endl;
	}
}
void f7(int a, int b) {
	int sum = 0;
	for (int i = a; i <= b; ++i)
	{
		sum = sum + i;
	}
	std::cout << sum << std::endl;
}
void f8(int a, int b) {
	int sum = 1;
	for (int i = a; i <= b; ++i)
	{
		sum = sum * i;
	}
	std::cout << sum << std::endl;
}
void f9(int a, int b) {
	int res = 0;
	for (int i = a; i <= b; ++i)
	{
		res += pow(i, 2);
	}
	std::cout << res << std::endl;
}
double f10(int n) {
	double res = 0;
	for (double i = 1; i <= n; ++i)
	{
		res += 1 / i;
	}
	return res;
}
double f11(double n) {
	double res = 0;
	for (int i = 0; i <= n; ++i)
	{
		res += pow(n + i, 2);
	}return res;
}
double f12(double n) {
	double res = 1;
	for (double i = 1; i <= n; ++i)
	{
		res = res * (1 + 0.1 * i);
	}
	return res;
}
double f13(double n) {
	double res = 0;
	for (double i = 1; i <= n; ++i)
	{
		res += pow(-1, i + 1) * (1 + i / 10);
	}
	return res;
}
double f14(int n) {
	int res = 0;
	for (int i = 1; i <= n; i++)
	{
		res += 2 * i - 1;
	}
	return res;
}
void f15(double a, int n) {
	int res = 1;
	for (int i = 1; i <= n; ++i)
	{
		res *= a;
	}
	std::cout << res << std::endl;
}
int  f16(double a, int n) {
	int res = 0;
	for (int i = 0; i <= n; ++i)
	{
		std::cout << pow(a, i) << std::endl;
	}
	return 0;
}
int f17(double a, int n) {
	int res = 0;
	for (int i = 0; i <= n; i++)
	{
		res += pow(a, i);
	}
	return res;
}
double f18(int a, int n) {
	int res = 1;
	for (int i = 0; i <= n; i++)
	{
		i % 2 == 0 ? res -= std::pow(a, i) : res += std::pow(a, i);
	}
	return 1 - res;
}
double fact(int value) {
	if (value == 0 || value == 1) {
		return 1;
	}
	{
		return value * fact(value - 1);
	}
}
int f20(int n) {
	int res = 0;
	for (int i = 1; i <= n; i++)
	{
		res += fact(i);
	}
	return res;
}
double f21(int n) {
	double res = 1;
	for (int i = 1; i <= n; i++)
	{
		res += 1 / fact(i);
	}
	return res;
}
double f22(int x, int n) {
	double res = 0;
	for (int i = 0; i <= n; i++)
	{
		res += pow(x, i) / fact(i);
	}
	return res;
}
double f23(double x, int n) {
	int res = 0;
	for (int i = 0; i <= n; i += 2)
	{
		i % 2 == 0 ? res -= std::pow(x, i) / fact(i) : res += std::pow(x, i) / fact(i);
	}
	return res;
}
double f24(int x, int n) {
	double res = 0;
	for (int i = 0; i <= n; ++i)
	{
		res += pow(-1, i) * pow(x, 2 * i) / fact(2 * i);
	}
	return  res;
}
double f25(double x, int n) {
	double res = 0;
	for (int i = 1; i <= n; i++)
	{
		res += pow(-1, i - 1) * pow(x, i) / i;
	}
	return res;
}
double f26(double x, int n) {
	double res = 0;
	for (int i = 0; i <= n; i++)
	{
		res += pow(-1, i) * pow(x, 2 * i + 1) / (2 * i + 1);
	}
	return res;
}
double f27(int n, int x) {
	int res = 0;
	for (int i = 1; i <= n; i++)
	{
		res += (2 * i - 1) * pow(x, 2 * i + 1) / (2 * i) * (2 * i + 1);
	}
	return res;
}
double f28(double x, int n) {
	int res = 0;
	for (int i = 0; i <= n; i++)
	{
		res += pow(-1, n - 1) * (2 * n - 3) * pow(x, n) / 2 * n;
	}return res;
}
double f29(int a, int b, int line) {
	int h = (b - a);
	int res = 0;
	std::cout << h << std::endl;
	for (int i = 0; i < line; i++)
	{
		res = a + i * line;
	}
	return res;
}
void f30(int a, int b, int line) {
	int h = (b - a) / line;
	double res = 0;
	std::cout << h << std::endl;
	for (int i = 0; i < line; i++)
	{
		res = 1 - sin(a + i * h);
	}
	std::cout << res << std::endl;
}
void f31(int n) {
	int res = 0;
	int a = 2;
	for (int i = 1; i <= n; i++)
	{
		res = 2 * a + 1 / i;
	}
	std::cout << res << std::endl;//?
}

void for33(int n) {
	int F1 = 1, F2 = 1, num = 0;
	for (int i = 0; i <= n; i++)
	{
		num = F1 + F2;
			F1 = F2;
			F2 = num;
			std::cout << num;
	}
}

double f36(int n, int k) {
	int res = 0;
	for (int i = 0; i <= n; i++)
	{
		res += pow(i, k);
	}
	return res;
}
double f37(int n) {
	int res = 0;
	for (int i = 0; i <= n; i++)
	{
		res += pow(i, i);
	}
	return res;
}


void f39(int a, int b) {
	for (int i = 0; i <= b ; a++)
	{
		for (int i; i = 0; i++) {
			std::cout << a << std::endl;
		}
	}
}

void f39(int a, int b) {
	for (int i = 0; i <= b; i++, a++)
	{
		for (int f; f = 0; f++) {
			std::cout << a << std::endl;
		}
	}
}



int main()
{

	std::cout << f37(2) << std::endl;


}
