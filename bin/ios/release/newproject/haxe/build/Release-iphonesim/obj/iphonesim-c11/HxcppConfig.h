#ifndef HXCPP_CONFIG_INCLUDED
#define HXCPP_CONFIG_INCLUDED

#if !defined(IPHONE) && !defined(NO_IPHONE)
#define IPHONE IPHONE
#endif

#if !defined(IPHONESIM) && !defined(NO_IPHONESIM)
#define IPHONESIM IPHONESIM
#endif

#if !defined(OBJC_ARC) && !defined(NO_OBJC_ARC)
#define OBJC_ARC 
#endif

#if !defined(HXCPP_VISIT_ALLOCS) && !defined(NO_HXCPP_VISIT_ALLOCS)
#define HXCPP_VISIT_ALLOCS 
#endif

#if !defined(HXCPP_API_LEVEL) && !defined(NO_HXCPP_API_LEVEL)
#define HXCPP_API_LEVEL 321
#endif

#include <hxcpp.h>

#endif
