/*
 *   Copyright (c) 2020 Victor Vazquez
 *   All rights reserved.
 */

#include <stdio.h>

#include <azure/core/az_result.h>
#include <azure/core/az_span.h>

int main()
{
  az_span my_first_span = AZ_SPAN_FROM_STR("Hello Azure");
  printf("%s\n", az_span_ptr(my_first_span));
  return 0;
}
