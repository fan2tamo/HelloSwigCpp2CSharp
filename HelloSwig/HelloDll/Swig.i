/* File : Swig.i */

/* windows.iをincludeしないと、なぜかエラー */
%include <windows.i> 

%module HelloDll
 
%{
#include "Classifier.h"
%}
 
/* Let's just grab the original header file here */
%include "Classifier.h"

