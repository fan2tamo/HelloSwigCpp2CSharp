/* File : Swig.i */

/* windows.i��include���Ȃ��ƁA�Ȃ����G���[ */
%include <windows.i> 

%module HelloDll
 
%{
#include "Classifier.h"
%}
 
/* Let's just grab the original header file here */
%include "Classifier.h"

