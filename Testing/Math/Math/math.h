#pragma once

#include <Windows.h>

namespace PMath
{
	template<typename T>
	inline T Min(T val0, T val1)
	{
		return val0 < val1 ? val0 : val1;
	};

	template<typename T>
	inline T Max(T val0, T val1)
	{
		return val0 < val1 ? val1 : val0;
	};

	template<typename T>
	inline T Clamp(T val, T min, T max)
	{
		return val < min ? min : (val > max ? max : val);
	};
}

namespace Geometry
{
	template<typename T>
	struct Quaternion
	{
		T w, x, y, z;
	};

	template<typename T, int S>
	struct Vector
	{
	protected:
		T *values;
		int count, memsize;

	public:
		Vector(const T *initvalues)
		{
			values = new T[S];
			count = S;
			memsize = sizeof(values);
			int initmemsize = sizeof(initvalues);
			memcpy_s(values, memsize, initvalues, initmemsize);
			memset(values + initmemsize, T(), memsize - initmemsize);
		}
	};

	template<typename T, int W, int H>
	struct Matrix{ T values[] = new T[W * H]; };
}