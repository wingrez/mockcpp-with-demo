/***
    mockcpp is a generic C/C++ mock framework.
    Copyright (C) <2009>  <Darwin Yuan: darwin.yuan@gmail.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
***/

#include <mockcpp/StubsMatcher.h>
#include <mockcpp/Invocation.h>

MOCKCPP_NS_START

///////////////////////////////////////////////////////////
bool StubsMatcher::matches(const Invocation& inv) const 
{
    return true;
}

///////////////////////////////////////////////////////////
void StubsMatcher::increaseInvoked(const Invocation& inv)
{
}

///////////////////////////////////////////////////////////
void StubsMatcher::verify()
{
}

///////////////////////////////////////////////////////////
std::string StubsMatcher::toString() const
{
    return ".stubs()";
}

MOCKCPP_NS_END

