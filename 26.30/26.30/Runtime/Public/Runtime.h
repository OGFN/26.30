#pragma once

#include "../framework.h"

class Runtime
{
public:
	static void LoadConsole();
	static void LOG(const string& msg);
	static void Hook(uint64_t Address, PVOID Hook, void** Original = nullptr);
	static void VHook(void* Base, int Idx, void* Detour, void** Original = nullptr);
	static int ReturnTrue();
	static int ReturnFalse();
	static void NullFunc();
};