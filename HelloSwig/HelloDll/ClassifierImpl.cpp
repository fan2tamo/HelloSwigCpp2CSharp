#define DLL_EXPORT
#include "ClassifierImpl.h"
#include <stdio.h>

ClassifierImpl::ClassifierImpl()
{
	printf("ClassifierImpl\n");
}

ClassifierImpl::~ClassifierImpl()
{
	printf("~ClassifierImpl\n");
}

bool ClassifierImpl::Train(int val)
{
	printf("Train : val = %d\n", val);
	return true;
}

bool ClassifierImpl::Fit()
{
	printf("Fit\n");
	return true;
}

// �N���X�̎��Ԃ��擾����API
DLL Classifier* GetInstance(void)
{
	printf("GetInstance()\n");
	return new ClassifierImpl;
}