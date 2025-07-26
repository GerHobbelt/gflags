#include <iostream>

#include "args.hpp"

#include "monolithic_examples.h"

#if defined(BUILD_MONOLITHIC)
#define main(cnt, arr)      gflags_example_main(cnt, arr)
#endif

extern "C"
int main(int argc, const char **argv)
{
  if (argc <= 1)
  {
    std::cout << "Try ./example -help" << std::endl;
    return 0;
  }
  GFLAGS_NAMESPACE::SetUsageMessage("Example compilation for demo.");
  GFLAGS_NAMESPACE::ParseCommandLineFlags(&argc, &argv, true);
  print_message();
  return 0;
}
