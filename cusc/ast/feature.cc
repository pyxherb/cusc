///
/// @file feature.cc
/// @brief Implementations of the features module.
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
#include "feature.h"

using namespace cusc;

FeatureOptions cusc::g_openglFeatures = {};

void initBuiltinFeatureOptions() {
	// Initialize OpenGL feature options.
	g_openglFeatures = {};
}
