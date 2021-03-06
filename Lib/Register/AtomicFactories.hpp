/**************************************************************************
 * This file contains the Kvasir Register Abstraction DSL (Domain Specific Language)
 * which provide an extra layer between Hardware SFRs
 * (Special Function Registers) and code accessing them.
 * Copyright 2015 Odin Holmes
 * Aditional contribution from Stephan Bökelmann

 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
****************************************************************************/
#pragma once
#include "Utility.hpp"

namespace Kvasir{
namespace Register{
	//##### Thread synchronization factories #######
	// warning these are still a work in progress!

	template<typename T>
	constexpr MPL::EnableIfT<Detail::IsWriteLiteral<T>::value> atomic(T){

	}
	template<typename T>
	constexpr MPL::EnableIfT<Detail::IsWriteRuntime<T>::value> atomic(T in){

	}
	template<typename T, typename U, typename...Ts>
	constexpr MPL::EnableIfT<Detail::IsWriteLiteral<T>::value> atomic(T in){

	}
	template<typename T, typename U, typename...Ts>
	constexpr MPL::EnableIfT<Detail::IsWriteRuntime<T>::value> atomic(T in){

	}

}
}
