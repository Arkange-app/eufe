#pragma once
#include "EffectInterpreter.h"

namespace eufe {
	
	class EffectAdaptiveArmorHardener : public EffectInterpreter
	{
	public:
		EffectAdaptiveArmorHardener(Engine* engine, bool isAssistance, bool isOffensive);
		virtual ~EffectAdaptiveArmorHardener();
		virtual bool addEffect(Environment* environment);
		virtual bool removeEffect(Environment* environment);
		virtual EffectInterpreter* clone() const;
	private:
		Engine* engine_;
		bool isAssistance_;
		bool isOffensive_;
	};
	
}