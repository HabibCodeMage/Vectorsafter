#include "record.h"
#include<iostream>
using namespace std;
ostream& operator<<(ostream& strn, const record& that)
{
     strn << *that.name;
     return strn;
}