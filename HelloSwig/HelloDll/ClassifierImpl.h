#pragma once
#include "Classifier.h"
class ClassifierImpl : public Classifier
{
public:
	ClassifierImpl();
	~ClassifierImpl();
	bool Train(int val);
	bool Fit();
};

