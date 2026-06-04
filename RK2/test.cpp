#include <iostream>
#include <gtest/gtest.h>
#include "state.h"
int test()
{
  Context *context = new Context();

  context->setState( new ConcreteStateA() );
  context->request();

  context->setState( new ConcreteStateB() );
  context->request();

  delete context;
  return 0;
}
TEST(Test,Test1)
{
  ASSERT_EQ(test(),0);
}
