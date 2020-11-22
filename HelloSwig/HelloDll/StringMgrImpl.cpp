#define DLL_EXPORT
#include "StringMgrImpl.h"

StringMgrImpl::StringMgrImpl()
{

}

StringMgrImpl::~StringMgrImpl()
{

}

int StringMgrImpl::GetNum()
{
	printf("GetNum()\n");
	return stringVector.size();
}

const char* StringMgrImpl::GetString(int index)
{
	if (stringVector.size() <= index)
	{
		return NULL;
	}

	return stringVector[index].c_str();
}

void StringMgrImpl::SetString(const char* string)
{
	std::string buf = string;
	stringVector.push_back(buf);
}

void StringMgrImpl::DisplayALL()
{
	int size = stringVector.size();
	for (int i = 0; i < size; i++)
	{
		printf("[%03d] %s\n", i, stringVector[i].c_str());
	}
}

void StringMgrImpl::Display(int index)
{
	if (stringVector.size() <= index)
	{
		printf("index error\n");
		return;
	}

	printf("[%03d] %s\n", index, stringVector[index].c_str());
}


// ƒNƒ‰ƒX‚ÌŽÀ‘Ô‚ðŽæ“¾‚·‚éAPI
DLL StringMgr* CreateInstance(void)
{
	printf("CreateInstance()\n");
	return new StringMgrImpl;
}
