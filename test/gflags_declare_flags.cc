// The macro can already be defined when using Unity builds.
#ifndef GFLAGS_DLL_DECLARE_FLAG
#define GFLAGS_DLL_DECLARE_FLAG
#endif

#include <iostream>
#include <gflags/gflags_declare.h>

DECLARE_string(message); // in gflags_delcare_test.cc

void gflags_print_message()
{
  std::cout << FLAGS_message << std::endl;
}
