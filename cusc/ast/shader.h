///
/// @file shader.h
/// @brief Declarations about shaders.
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
#ifndef _CUSC_AST_SHADER_H_
#define _CUSC_AST_SHADER_H_

#include <memory_resource>
#include <map>
#include <unordered_map>
#include <string>
#include <memory>

namespace cusc {
	enum class ShaderType {
		Vertex = 0,
		Fragment,
		Geometry,
		Compute
	};

	class Shader {
	public:
		ShaderType shaderType;
	};

	enum class VertexShaderInputSemanticType {
		None = 0,
		Binormal,
		BlendIndices,
		BlendWeight,
		Color,
		Normal,
		Position,
		PositionT,
		PSize,
		Tangent,
		TexCoord
	};

	enum class VertexShaderOutputSemanticType {
		None = 0,
		Color,
		Fog,
		Position,
		PSize,
		TessFactor
	};

	struct VertexShaderInputSemantic {
		union {
			size_t index;
		} exData;
		VertexShaderInputSemanticType semanticType = VertexShaderInputSemanticType::None;
	};

	struct VertexShaderOutputSemantic {
		union {
			size_t index;
		} exData;
		VertexShaderOutputSemanticType semanticType = VertexShaderOutputSemanticType::None;
	};

	class VertexInputVar {
		std::string name;
		int idxVertexAttrib = -1;
		VertexShaderInputSemantic semantic;
	};

	class VertexOutputVar {
		std::string name;
		VertexShaderOutputSemantic semantic;
	}

	enum class FragmentShaderInputSemanticType {
		None = 0,
		Color,
		TexCoord,
		VFace,
		VPos
	};

	enum class FragmentShaderOutputSemanticType {
		None = 0,
		Color,
		Depth
	};

	struct FragmentShaderInputSemantic {
		union {
			size_t index;
		} exData;
		FragmentShaderInputSemanticType semanticType = FragmentShaderInputSemanticType::None;
	};

	struct FragmentShaderOutputSemantic {
		union {
			size_t index;
		} exData;
		FragmentShaderOutputSemanticType semanticType = FragmentShaderOutputSemanticType::None;
	};

	class FragmentInputVar {
		std::string name;
		FragmentShaderInputSemantic semantic;
	};

	class FragmentOutputVar {
		std::string name;
		FragmentShaderOutputSemantic semantic;
	}

	class VertexShader : public Shader {
	public:
		std::unordered_map<std::string, std::unique_ptr<VertexInputVar>> inputVars;
		std::map<int, std::string> vertexAttribToVarNameMap;
	};
}

#endif
