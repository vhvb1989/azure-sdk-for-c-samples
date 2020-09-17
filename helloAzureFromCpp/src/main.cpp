/*
 *   Copyright (c) 2020 Victor Vazquez
 *   All rights reserved.
 */

#include <iostream>
#include <string>

#include <azure/core/az_result.h>
#include <azure/core/az_span.h>

int main()
{
  az_span my_first_span = AZ_SPAN_FROM_STR("Hello Azure");
  auto span_ptr = az_span_ptr(my_first_span);
  std::string helloString(span_ptr, span_ptr + az_span_size(my_first_span));

  std::cout << helloString << std::endl;
  return 0;
}
