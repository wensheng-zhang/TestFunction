// cpp__FUNCTION__.cpp : 定义控制台应用程序的入口点。
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

