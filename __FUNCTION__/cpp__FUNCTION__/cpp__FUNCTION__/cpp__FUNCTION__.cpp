// cpp__FUNCTION__.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

class CcppFunction{
public:
    void testMacroFuncion()
    {
        std::cout << __FUNCTION__ << std::endl;
    }
};

int _tmain(int argc, _TCHAR* argv[])
{
    CcppFunction inst;
    inst.testMacroFuncion();
    getchar();
	return 0;
}

