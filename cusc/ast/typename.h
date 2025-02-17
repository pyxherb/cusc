///
/// @file typename.h
/// @brief Declarations about type names.
///
/// @copyright Copyright (C) 2025 Clench Project, all rights reserved.
///
#ifndef _CUSC_TYPENAME_H_
#define _CUSC_TYPENAME_H_

namespace cusc {
	enum class MajorType {
		Void = 0,  // Void
		Float,	   // 32-bit FP
		Double,	   // 64-bit FP
		Int,	   // 32-bit integer
		UInt,	   // 32-bit unsigned integer
		Bool,	   // Boolean

		Half,  // 16-bit FP

		Array,	// Array
		Vec,	// Vector
		Mat,	// Matrix
	};

	class TypeName {
	};
}

#endif
