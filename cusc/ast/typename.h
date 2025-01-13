///
/// @file typename.h
/// @brief Declarations about type names.
///
/// @copyright Copyright (C) 2025 Clench Project
///
/// This program is free software : you can redistribute it and / or modify it
/// under the terms of the GNU Affero General Public License as published by
/// the Free Software Foundation, version 3.
///
///	This program is distributed in the hope that it will be useful,
///	but WITHOUT ANY WARRANTY; without even the implied warranty of
/// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Affero
/// General Public License for more details.
///
/// You should have received a copy of the GNU Affero General Public License
/// along with this program. If not, see <https://www.gnu.org/licenses/>.
///
/// SPDX-License-Identifier: AGPL-3.0-only
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

		Array,	// Array
		Vec,	// Vector
		Mat,	// Matrix

		Half,  // 16-bit FP
		Fixed  // 11-bit FP
	};

	class TypeName {
	};
}

#endif
