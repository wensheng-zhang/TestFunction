// StructInit.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <time.h>

typedef struct __CATALOG_RESP_STAT_INFO
{
    int nSN;                // 设备目录请求SN
    int nSum;               // 设备目录总数
    int nCount;             // 收到的设备目录个数
    time_t tLastTime;       // 最后接收到该网关response的时间
    int nManual;            // 手动查询标记 0：定时；1：手动
}CATALOG_RESP_STAT_INFO;

int _tmain(int argc, _TCHAR* argv[])
{
    CATALOG_RESP_STAT_INFO crsi = { 0, 0, 0, 0, 1 };

    int i = 1;
    crsi.nManual = i;
	return 0;
}

