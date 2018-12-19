// TestAdjacentFind.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdio.h"
#include <vector>
#include <algorithm>
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(20);
    vec.push_back(10);
    vec.push_back(30);
    vec.push_back(30);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(40);

    int i;
    std::vector<int>::iterator itr = std::adjacent_find(vec.begin(), vec.end());
    while (itr != vec.end())
    {
        i = *itr;
        std::cout << *itr << std::endl;

        while (++itr != vec.end())
        {
            if (i == *itr)
            {
                std::cout << *itr << std::endl;
            }
            else
            {
                break;
            }
        }
        if (itr != vec.end())
        {
            itr = std::adjacent_find(itr, vec.end());
        }
    }

    getchar();
	return 0;
}

