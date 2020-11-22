#pragma once
#include "StringMgr.h"
#include<vector>
#include<string>

// 今回このファイルは使わないので無視してください。


class StringMgrImpl : public StringMgr
{
private:
	std::vector<std::string> stringVector;

public:
	StringMgrImpl();
	~StringMgrImpl();

	int GetNum();
	const char* GetString(int index);
	void SetString(const char* string);
	void DisplayALL();
	void Display(int index);
};

