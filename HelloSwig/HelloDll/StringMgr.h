#pragma once

// 今回このファイルは使わないので無視してください。

#ifdef DLL_EXPORT
#define DLL __declspec(dllexport)
#else
#define DLL __declspec(dllimport)
#endif

class StringMgr
{
	public:
		virtual int GetNum() = 0;
		virtual const char* GetString(int index) = 0;
		virtual void SetString(const char *) = 0;
		virtual void DisplayALL() = 0;
		virtual void Display(int index) = 0;
			
};

extern "C" DLL StringMgr * CreateInstance(void);