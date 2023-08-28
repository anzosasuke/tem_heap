/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE401_Memory_Leak__new_array_struct_twoIntsStruct_54b.cpp
Label Definition File: CWE401_Memory_Leak__new_array.label.xml
Template File: sources-sinks-54b.tmpl.cpp
*/
/*
 * @description
 * CWE: 401 Memory Leak
 * BadSource:  Allocate data using new[]
 * GoodSource: Point data to a stack buffer
 * Sinks:
 *    GoodSink: call delete[] on data
 *    BadSink : no deallocation of data
 * Flow Variant: 54 Data flow: data passed as an argument from one function through three others to a fifth; all five functions are in different source files
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

namespace CWE401_Memory_Leak__new_array_struct_twoIntsStruct_54
{

#ifndef OMITBAD

/* bad function declaration */
void badSink_c(struct _twoIntsStruct * data);

void badSink_b(struct _twoIntsStruct * data)
{
    badSink_c(data);
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
void goodG2BSink_c(struct _twoIntsStruct * data);

void goodG2BSink_b(struct _twoIntsStruct * data)
{
    goodG2BSink_c(data);
}

/* goodB2G uses the BadSource with the GoodSink */
void goodB2GSink_c(struct _twoIntsStruct * data);

void goodB2GSink_b(struct _twoIntsStruct * data)
{
    goodB2GSink_c(data);
}

#endif /* OMITGOOD */

} /* close namespace */
