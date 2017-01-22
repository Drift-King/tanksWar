#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerStatistics
struct  PlayerStatistics_t1841391070  : public Il2CppObject
{
public:
	// System.Int32 PlayerStatistics::totalShots
	int32_t ___totalShots_0;
	// System.Int32 PlayerStatistics::shotsToEnemy
	int32_t ___shotsToEnemy_1;

public:
	inline static int32_t get_offset_of_totalShots_0() { return static_cast<int32_t>(offsetof(PlayerStatistics_t1841391070, ___totalShots_0)); }
	inline int32_t get_totalShots_0() const { return ___totalShots_0; }
	inline int32_t* get_address_of_totalShots_0() { return &___totalShots_0; }
	inline void set_totalShots_0(int32_t value)
	{
		___totalShots_0 = value;
	}

	inline static int32_t get_offset_of_shotsToEnemy_1() { return static_cast<int32_t>(offsetof(PlayerStatistics_t1841391070, ___shotsToEnemy_1)); }
	inline int32_t get_shotsToEnemy_1() const { return ___shotsToEnemy_1; }
	inline int32_t* get_address_of_shotsToEnemy_1() { return &___shotsToEnemy_1; }
	inline void set_shotsToEnemy_1(int32_t value)
	{
		___shotsToEnemy_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
