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

#ifndef   SCHEME_PIECES_TRIGONOMETRY_HH
#define   SCHEME_PIECES_TRIGONOMETRY_HH

#include <scheme/pieces/math.hh>
#include <scheme/trigonometry>

namespace scheme {

  inline constexpr double angle::normalized_value() const noexcept {
    return fmod(value, 2 * pi);
  }

  inline constexpr angle::operator double() const noexcept { return value; }

  angle& angle::operator+=(const angle& arg) noexcept {
    value += arg;
    return *this;
  }

  angle& angle::operator-=(const angle& arg) noexcept {
    value -= arg;
    return *this;
  }

  angle& angle::operator*=(double arg) noexcept {
    value *= arg;
    return *this;
  }

  angle& angle::operator/=(double arg) noexcept {
    value /= arg;
    return *this;
  }

  inline constexpr double angle::deg() const noexcept {
    return rad() * 180.0 / pi;
  }

  inline constexpr double angle::rad() const noexcept {
    return normalized_value();
  }

  inline constexpr angle radians(double arg) noexcept {
    return angle(arg);
  }

  inline constexpr angle degrees(double arg) noexcept {
    return angle(arg * pi / 180.0);
  }

  inline constexpr angle operator"" _deg(long double arg) noexcept {
    return degrees(arg);
  }

  inline constexpr angle operator"" _rad(long double arg) noexcept {
    return radians(arg);
  }

  inline constexpr angle cos(const angle& arg) noexcept {
    return std::cos(arg.rad());
  }

  inline constexpr angle sin(const angle& arg) noexcept {
    return std::sin(arg.rad());
  }

  inline constexpr angle tan(const angle& arg) noexcept {
    return std::tan(arg.rad());
  }

  template <typename Numeric>
  inline constexpr angle acos(Numeric arg) noexcept {
    return std::acos(arg);
  }

  template <typename Numeric>
  inline constexpr angle asin(Numeric arg) noexcept {
    return std::asin(arg);
  }

  template <typename Numeric>
  inline constexpr angle atan(Numeric arg) noexcept {
    return std::atan(arg);
  }

  template <typename Numeric1, typename Numeric2>
  inline constexpr angle atan2(Numeric1 arg1, Numeric2 arg2) noexcept {
    return std::atan2(arg1, arg2);
  }


  inline constexpr angle operator+(const angle& arg1, const angle& arg2) noexcept {
    return arg1.rad() + arg2.rad();
  }

  inline constexpr angle operator-(const angle& arg1, const angle& arg2) noexcept {
    return arg1.rad() + arg2.rad();
  }


  template <typename Numeric>
  inline constexpr angle operator*(const angle& arg1, Numeric arg2) {
    return arg1.rad() * arg2;
  }

  template <typename Numeric>
  inline constexpr angle operator/(const angle& arg1, Numeric arg2) {
    return arg1.rad() / arg2;
  }


  inline constexpr bool operator==(const angle& arg1, const angle& arg2) noexcept {
    return arg1.rad() == arg2.rad();
  }

  inline constexpr bool operator!=(const angle& arg1, const angle& arg2) noexcept {
    return arg1.rad() != arg2.rad();
  }

  inline constexpr bool operator<(const angle& arg1, const angle& arg2) noexcept {
    return arg1.rad() < arg2.rad();
  }

  inline constexpr bool operator>(const angle& arg1, const angle& arg2) noexcept {
    return arg1.rad() > arg2.rad();
  }

  inline constexpr bool operator<=(const angle& arg1, const angle& arg2) noexcept {
    return arg1.rad() <= arg2.rad();
  }

  inline constexpr bool operator>=(const angle& arg1, const angle& arg2) noexcept {
    return arg1.rad() >= arg2.rad();
  }
}

#endif // SCHEME_PIECES_TRIGONOMETRY_HH
