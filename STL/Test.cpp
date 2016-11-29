// STL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> //greater�� ����ϱ����� �������
int main()
{
	std::cout << "Hello World" << std::endl;
	std::vector<int> vec;
	
	vec.push_back(10); //���� ���� �� �ڿ� �߰���Ű�� �Լ�
	vec.push_back(20);
	vec.push_back(30);

	std::cout << "-----�Ϲ� �ݺ���-----" << std::endl;

	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec[i] << std:: endl;
	}

	std::cout << "-----iterator�� ����� �ݺ���--------" << std::endl;

	std::vector<int>::iterator iter; // std���ӽ����̽��� int���� ���ͺ����� ��ȸ�� �ݺ��ڸ� ����
	for (iter = vec.begin(); iter != vec.end(); iter++) { //���� ������ ���۰� ���� ������ �ݺ����� ������
		std::cout << *iter << std::endl; // �̰��� ���� iterator�� ������ ������� ���� �� �� �ִ�.
										// �� begin������ ù��° �������� �ּҰ��� �ҷ����� �ּҰ��� �ϳ��� ��������
										//�ش� �����Ͱ� ����Ű�� ���� �����ؼ� �������� ����� ���̴�.
	}

	std::cout << "-----pop�� ������ ���� �����--------" << std::endl;

	vec.pop_back(); //���� ���� �ÿ��� ���� �������� ���� �����
	vec.pop_back(); //�� �Լ��� ���ϰ��� ����.

	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec[i] << std::endl;
	}

	std::cout << "------Algorithm ������ ����ϱ� �� �����--------" << std::endl;

	vec.push_back(70);
	vec.push_back(50);
	vec.push_back(90);
	vec.push_back(20);
	vec.push_back(40);
	vec.push_back(70);

	for (iter = vec.begin(); iter < vec.end(); iter++) {
		std::cout << *iter << std::endl;
	}

	std::cout << "--------���� ������ �����----------" << std::endl;

	std::sort(vec.begin(), vec.end());

	for (iter = vec.begin(); iter < vec.end(); iter++) {
		std::cout << *iter << std::endl;
	}

	std::cout << "--------�������� ���� �����----------" << std::endl;

	std::sort(vec.begin(), vec.end(), std::less<int>());

	for (iter = vec.begin(); iter < vec.end(); iter++) {
		std::cout << *iter << std::endl;
	}

	std::cout << "--------�������� ���� �����----------" << std::endl;

	std::sort(vec.begin(), vec.end(), std::greater<int>());

	for (iter = vec.begin(); iter < vec.end(); iter++) {
		std::cout << *iter << std::endl;
	}
    return 0;
}

