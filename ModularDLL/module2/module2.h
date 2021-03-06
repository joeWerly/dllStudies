#pragma once
#ifdef codingModule
#include "Activator.h"
#include "AbstractDLL.h"	
#define jMod __declspec(dllexport)
#else
#define jMod __declspec(dllimport)
#endif // !codingModule
namespace core {
	class jMod module2 :
		public iModule {
	public:
		module2();
		virtual ~module2();

		double execute();
		string name();
	};
	namespace allocators {
		extern "C" jMod core::iModule* newModule2();
	};
};