#ifndef __TWEEN_EASING_LINEAR_H
#define __TWEEN_EASING_LINEAR_H

#include "cpgf/tween/gtweeneaseparam.h"

namespace cpgf {

struct LinearEase
{
public:
	static GTweenEaseType ease() {
		return &_ease;
	}
	
private:
	static GTweenNumber _ease(const GTweenEaseParam * param) {
		return param->current / param->total;
	}
};


} // namespace cpgf


#endif