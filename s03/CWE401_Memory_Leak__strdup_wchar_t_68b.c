/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE401_Memory_Leak__strdup_wchar_t_68b.c
Label Definition File: CWE401_Memory_Leak__strdup.label.xml
Template File: sources-sinks-68b.tmpl.c
*/
/*
 * @description
 * CWE: 401 Memory Leak
 * BadSource:  Allocate data using wcsdup()
 * GoodSource: Allocate data on the stack
 * Sinks:
 *    GoodSink: call free() on data
 *    BadSink : no deallocation of data
 * Flow Variant: 68 Data flow: data passed as a global variable from one function to another in different source files
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

extern wchar_t * CWE401_Memory_Leak__strdup_wchar_t_68_badData;
extern wchar_t * CWE401_Memory_Leak__strdup_wchar_t_68_goodG2BData;
extern wchar_t * CWE401_Memory_Leak__strdup_wchar_t_68_goodB2GData;

#ifndef OMITBAD

void CWE401_Memory_Leak__strdup_wchar_t_68b_badSink()
{
    wchar_t * data = CWE401_Memory_Leak__strdup_wchar_t_68_badData;
    /* POTENTIAL FLAW: No deallocation of memory */
    /* no deallocation */
    ; /* empty statement needed for some flow variants */
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
void CWE401_Memory_Leak__strdup_wchar_t_68b_goodG2BSink()
{
    wchar_t * data = CWE401_Memory_Leak__strdup_wchar_t_68_goodG2BData;
    /* POTENTIAL FLAW: No deallocation of memory */
    /* no deallocation */
    ; /* empty statement needed for some flow variants */
}

/* goodB2G uses the BadSource with the GoodSink */
void CWE401_Memory_Leak__strdup_wchar_t_68b_goodB2GSink()
{
    wchar_t * data = CWE401_Memory_Leak__strdup_wchar_t_68_goodB2GData;
    /* FIX: Deallocate memory initialized in the source */
    free(data);
}

#endif /* OMITGOOD */
