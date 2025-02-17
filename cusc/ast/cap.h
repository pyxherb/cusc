///
/// @file cap.h
/// @brief Declarations for compilation features.
///
/// @copyright Copyright (C) 2025 Clench Project, all rights reserved.
///
#ifndef _CUSC_FEATURE_H_
#define _CUSC_FEATURE_H_

namespace cusc {
	struct CapabilityRegistry {
		/// @brief Indicates if the half floating-point type is supported.
		bool halfFp : 1;
	};
}

#endif
