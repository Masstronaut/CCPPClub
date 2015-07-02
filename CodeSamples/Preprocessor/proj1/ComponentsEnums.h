#pragma once

#undef ADD_MEMBER_VAR
#define ADD_MEMBER_VAR(X,Y)
#undef DEFINE_COMPONENT
#define DEFINE_COMPONENT(X,Y) EnumComponent_##X ,
#undef COMPONENTS_INCLUDE_H

enum EnumeratedComponents
{
#include "ComponentsInclude.h"
  EnumComponent_Max
};


#undef DEFINE_COMPONENT
#define DEFINE_COMPONENT(X,Y) #X ,
#undef COMPONENTS_INCLUDE_H

const char *EnumCmpToStr[] = 
{
#include "ComponentsInclude.h"
  "EnumComponent_Max"
};

#undef COMPONENTS_INCLUDE_H

#undef DEFINE_COMPONENT
