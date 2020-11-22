/* File : Swig.i */

/* windows.i‚ğinclude‚µ‚È‚¢‚ÆA‚È‚º‚©ƒGƒ‰[ */
%include <windows.i> 

%module HelloDll
 
%{
#include "Classifier.h"
%}
 
/* Let's just grab the original header file here */
%include "Classifier.h"

