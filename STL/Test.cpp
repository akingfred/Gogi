// STL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> //greater를 사용하기위한 헤더파일
int main()
{
	std::cout << "Hello World" << std::endl;
	std::vector<int> vec;
	
	vec.push_back(10); //값을 전의 값 뒤에 추가시키는 함수
	vec.push_back(20);
	vec.push_back(30);

	std::cout << "-----일반 반복문-----" << std::endl;

	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec[i] << std:: endl;
	}

	std::cout << "-----iterator를 사용한 반복문--------" << std::endl;

	std::vector<int>::iterator iter; // std네임스페이스의 int형의 백터변수를 순회할 반복자를 선언
	for (iter = vec.begin(); iter != vec.end(); iter++) { //벡터 변수의 시작과 끝을 지정해 반복문을 돌리고
		std::cout << *iter << std::endl; // 이것을 보면 iterator는 포인터 변수라는 것을 알 수 있다.
										// 즉 begin에서는 첫번째 데이터의 주소값을 불러오고 주소값을 하나씩 증가시켜
										//해당 포인터가 가르키는 값을 참조해서 가져오는 방식인 것이다.
	}

	std::cout << "-----pop을 실행한 뒤의 결과값--------" << std::endl;

	vec.pop_back(); //값을 빼낼 시에는 백터 변수안의 값이 사라짐
	vec.pop_back(); //이 함수는 리턴값이 없다.

	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec[i] << std::endl;
	}

	std::cout << "------Algorithm 정렬을 사용하기 전 결과값--------" << std::endl;

	vec.push_back(70);
	vec.push_back(50);
	vec.push_back(90);
	vec.push_back(20);
	vec.push_back(40);
	vec.push_back(70);

	for (iter = vec.begin(); iter < vec.end(); iter++) {
		std::cout << *iter << std::endl;
	}

	std::cout << "--------정렬 이후의 결과값----------" << std::endl;

	std::sort(vec.begin(), vec.end());

	for (iter = vec.begin(); iter < vec.end(); iter++) {
		std::cout << *iter << std::endl;
	}

	std::cout << "--------오름차순 정렬 결과값----------" << std::endl;

	std::sort(vec.begin(), vec.end(), std::less<int>());

	for (iter = vec.begin(); iter < vec.end(); iter++) {
		std::cout << *iter << std::endl;
	}

	std::cout << "--------내림차순 정렬 결과값----------" << std::endl;

	std::sort(vec.begin(), vec.end(), std::greater<int>());

	for (iter = vec.begin(); iter < vec.end(); iter++) {
		std::cout << *iter << std::endl;
	}
    return 0;
}

