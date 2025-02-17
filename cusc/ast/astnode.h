///
/// @file astnode.h
/// @brief Basic definitions about the AST node.
///
/// @copyright Copyright (C) 2025 Clench Project, all rights reserved.
///
#ifndef _CUSC_AST_ASTNODE_H_
#define _CUSC_AST_ASTNODE_H_

#include <memory>

namespace cusc {
	struct SourcePosition {
		size_t line, column;

		inline SourcePosition() : line(SIZE_MAX), column(SIZE_MAX) {}
		inline SourcePosition(size_t line, size_t column) : line(line), column(column) {}

		inline bool operator<(const SourcePosition &loc) const {
			if (line < loc.line)
				return true;
			if (line > loc.line)
				return false;
			return column < loc.column;
		}

		inline bool operator>(const SourcePosition &loc) const {
			if (line > loc.line)
				return true;
			if (line < loc.line)
				return false;
			return column > loc.column;
		}

		inline bool operator==(const SourcePosition &loc) const {
			return (line == loc.line) && (column == loc.column);
		}

		inline bool operator>=(const SourcePosition &loc) const {
			return ((*this) == loc) || ((*this) > loc);
		}

		inline bool operator<=(const SourcePosition &loc) const {
			return ((*this) == loc) || ((*this) < loc);
		}
	};

	struct SourceLocation {
		SourcePosition beginPosition, endPosition;
	};

	struct TokenRange {
		size_t beginIndex = SIZE_MAX, endIndex = SIZE_MAX;

		inline TokenRange() = default;
		inline TokenRange(size_t index) : beginIndex(index), endIndex(index) {}
		inline TokenRange(size_t beginIndex, size_t endIndex) : beginIndex(beginIndex), endIndex(endIndex) {}

		operator bool() {
			return beginIndex != SIZE_MAX;
		}
	};

	class Compiler;

	class AstNode : std::enable_shared_from_this<AstNode> {
	public:
		TokenRange tokenRange;
		Compiler *compiler;
	};
}

#endif
