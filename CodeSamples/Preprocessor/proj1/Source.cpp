#include <iostream>
#include "ComponentsEnums.h"
#include "ComponentClasses.h"
using std::cout;
using std::endl;
int main()
{
  for (int i = 0; i < EnumComponent_Max; ++i)
    cout << i << "= " << EnumCmpToStr[i] << endl;

  RigidBody rb;
  rb.Density = 69.f;

  cout << rb.typeName << endl;
  cout << rb.type << endl;

  return 0;
}
