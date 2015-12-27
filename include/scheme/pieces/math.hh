/*
    Schemeutils
    Copyright (c) 2015 Sebastian Dufner

    This file is part of Schemeutils.

    Schemeutils is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Schemeutils is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with Schemeutils.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef   SCHEME_PIECES_MATH
#define   SCHEME_PIECES_MATH

#include <cmath>

namespace scheme {

  template <typename Numeric1, typename Numeric2>
  inline constexpr auto fmod(Numeric1 a, Numeric2 b) noexcept
      -> decltype(std::fmod(a, b)) {
    typedef decltype(std::fmod(a, b)) Intermediate;

    return [](Numeric2 b, Intermediate i) {
        return (std::signbit(i) != std::signbit(b)) ? i + b : b;
      }(b, std::fmod(a, b));
  }

}

#endif // SCHEME_PIECES_MATH
