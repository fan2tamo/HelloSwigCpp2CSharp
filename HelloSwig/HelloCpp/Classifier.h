#pragma once

#ifdef DLL_EXPORT
#define DLL __declspec(dllexport)
#else
#define DLL __declspec(dllimport)
#endif

class Classifier
{
public:
	virtual bool Train(int val) = 0;
	virtual bool Fit() = 0;
};

extern "C" DLL Classifier * GetInstance(void);

