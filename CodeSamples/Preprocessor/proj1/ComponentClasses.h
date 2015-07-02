#pragma once
#include "ComponentsEnums.h"

struct ComponentBase
{
  ComponentBase(EnumeratedComponents t, const char * tn) : type(t), typeName(tn) {}
  const EnumeratedComponents type;
  const char * typeName;
};

#undef ADD_MEMBER_VAR
#define ADD_MEMBER_VAR(TYPE, VARNAME) TYPE VARNAME;

#undef DEFINE_COMPONENT
#define DEFINE_COMPONENT(NAME, MEMBERS) \
  struct NAME : ComponentBase\
{ \
  MEMBERS \
  NAME() : ComponentBase{EnumComponent_##NAME, EnumCmpToStr[EnumComponent_##NAME]} {} \
};

#include "ComponentsInclude.h"

#undef COMPONENTS_INCLUDE_H
#undef ADD_MEMBER_VAR
#undef DEFINE_COMPONENT



