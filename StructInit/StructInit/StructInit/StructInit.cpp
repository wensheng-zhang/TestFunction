// StructInit.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <time.h>

typedef struct __CATALOG_RESP_STAT_INFO
{
    int nSN;                // �豸Ŀ¼����SN
    int nSum;               // �豸Ŀ¼����
    int nCount;             // �յ����豸Ŀ¼����
    time_t tLastTime;       // �����յ�������response��ʱ��
    int nManual;            // �ֶ���ѯ��� 0����ʱ��1���ֶ�
}CATALOG_RESP_STAT_INFO;

int _tmain(int argc, _TCHAR* argv[])
{
    CATALOG_RESP_STAT_INFO crsi = { 0, 0, 0, 0, 1 };

    int i = 1;
    crsi.nManual = i;
	return 0;
}

