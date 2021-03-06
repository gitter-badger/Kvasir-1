/**************************************************************************
Copyright 2015 Odin Holmes
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
****************************************************************************/
#pragma once

#include "Register/Register.hpp"
#include "Common/Interrupt.hpp"
#include "Common/UsbConfig.hpp"

namespace Kvasir{
	namespace Usb{
	struct DefaultConfig : Detail::DefaultConfig {
		//TODO calculate real amount of usb ram needed
		static unsigned char usbmem[2048] __attribute__((aligned(2048)));
//		static constexpr unsigned char& usbRamStart = usbmem[0];
		static constexpr int usbRamSize = sizeof(usbmem);
		static constexpr unsigned baseAddress = 0x40080000;
		struct DeviceCommandStatus{
			using Address = Register::Address<baseAddress>;
			struct Pod{
				int raw_;
				explicit operator int(){
					return raw_;
				}
			};
//			using Reg = Register::Functional<address,0xFFFF,Register::Policy::ReadWritableP,Register::Policy::PodConversionP<Pod>>;
			template<int I>
			constexpr Register::WriteActionT<Address,0x7F,I> makeDeviceAddress(){ return Register::WriteActionT<address,0x7F,I>{}; }

			static constexpr	Register::RWBitLocT<Address, 7>		deviceEnabled{};
			static constexpr	Register::RWBitLocT<Address, 8>		clearSetupTokenRecieved{};
			static constexpr	Register::RWBitLocT<Address, 9>		stopPllClockOnSuspendDisabled{};
			static constexpr	Register::RWBitLocT<Address, 11>		lpmSupported{};
			static constexpr	Register::RWBitLocT<Address, 12>		bulkOutInterruptOnNAckEnabled{};
			static constexpr	Register::RWBitLocT<Address, 13>		bulkInInterruptOnNAckEnabled{};
			static constexpr	Register::RWBitLocT<Address, 14>		controlOutInterruptOnNAckEnabled{};
			static constexpr	Register::RWBitLocT<Address, 15>		controlInInterruptNAckEnabled{};
			static constexpr 	Register::RWBitLocT<Address, 16>		deviceConnected{};

			//TODO still dont know what to do with that bit
//			static constexpr Register::WriteBitActionT<address,17,false> remoteWakeup;

			static constexpr	Register::RWBitLocT<Address, 19>		deviceSuspendEnabled{};
			static constexpr	Register::RWBitLocT<Address, 24>		deviceConnectChangeReset{};
			static constexpr 	Register::RWBitLocT<Address, 25>		deviceSuspendChangeReset{};
			static constexpr 	Register::RWBitLocT<Address, 26>		deviceResetChangeReset{};
		};
		struct Info{
			static constexpr int address = baseAddress+4;
			enum class Error {none,pidEncoding,pidUnknown,packetUnexpected};
//			using FrameNumber = Register::Functional<address,0x03FF,Register::Policy::ReadableP>;
//			using ErrorCode = Register::Functional<address,0x0C00,Register::Policy::ReadWritableP,Register::Policy::EnumConversionP<Error>>;
		};
//		using EpCommandStatusListAddress = Register::Functional<baseAddress+8,0xFFFFFFFF,Register::Policy::ReadWritableP>;
		//TODO add rest
	};

	}
}
