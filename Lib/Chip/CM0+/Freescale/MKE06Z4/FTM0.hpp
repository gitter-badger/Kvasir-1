#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//FlexTimer Module
    namespace Ftm0Sc{    ///<Status And Control
        using Addr = Register::Address<0x40038000,0xffffff00,0,unsigned>;
        ///Prescale Factor Selection
        enum class PsVal {
            v000=0x00000000,     ///<Divide by 1
            v001=0x00000001,     ///<Divide by 2
            v010=0x00000002,     ///<Divide by 4
            v011=0x00000003,     ///<Divide by 8
            v100=0x00000004,     ///<Divide by 16
            v101=0x00000005,     ///<Divide by 32
            v110=0x00000006,     ///<Divide by 64
            v111=0x00000007,     ///<Divide by 128
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v000> v000{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v001> v001{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v010> v010{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v011> v011{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v100> v100{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v101> v101{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v110> v110{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v111> v111{};
        }
        ///Clock Source Selection
        enum class ClksVal {
            v00=0x00000000,     ///<No clock selected. This in effect disables the FTM counter.
            v01=0x00000001,     ///<System clock
            v10=0x00000002,     ///<Fixed frequency clock
            v11=0x00000003,     ///<External clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksVal> clks{}; 
        namespace ClksValC{
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v00> v00{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v01> v01{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v10> v10{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v11> v11{};
        }
        ///Center-Aligned PWM Select
        enum class CpwmsVal {
            v0=0x00000000,     ///<FTM counter operates in Up Counting mode.
            v1=0x00000001,     ///<FTM counter operates in Up-Down Counting mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,CpwmsVal> cpwms{}; 
        namespace CpwmsValC{
            constexpr Register::FieldValue<decltype(cpwms)::Type,CpwmsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cpwms)::Type,CpwmsVal::v1> v1{};
        }
        ///Timer Overflow Interrupt Enable
        enum class ToieVal {
            v0=0x00000000,     ///<Disable TOF interrupts. Use software polling.
            v1=0x00000001,     ///<Enable TOF interrupts. An interrupt is generated when TOF equals one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ToieVal> toie{}; 
        namespace ToieValC{
            constexpr Register::FieldValue<decltype(toie)::Type,ToieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(toie)::Type,ToieVal::v1> v1{};
        }
        ///Timer Overflow Flag
        enum class TofVal {
            v0=0x00000000,     ///<FTM counter has not overflowed.
            v1=0x00000001,     ///<FTM counter has overflowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TofVal> tof{}; 
        namespace TofValC{
            constexpr Register::FieldValue<decltype(tof)::Type,TofVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tof)::Type,TofVal::v1> v1{};
        }
    }
    namespace Ftm0Cnt{    ///<Counter
        using Addr = Register::Address<0x40038004,0xffff0000,0,unsigned>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Ftm0Mod{    ///<Modulo
        using Addr = Register::Address<0x40038008,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mod{}; 
    }
    namespace Ftm0C0sc{    ///<Channel (n) Status And Control
        using Addr = Register::Address<0x4003800c,0xffffff03,0,unsigned>;
        ///Edge or Level Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> elsa{}; 
        ///Edge or Level Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> elsb{}; 
        ///Channel Mode Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msa{}; 
        ///Channel Mode Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msb{}; 
        ///Channel Interrupt Enable
        enum class ChieVal {
            v0=0x00000000,     ///<Disable channel interrupts. Use software polling.
            v1=0x00000001,     ///<Enable channel interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ChieVal> chie{}; 
        namespace ChieValC{
            constexpr Register::FieldValue<decltype(chie)::Type,ChieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(chie)::Type,ChieVal::v1> v1{};
        }
        ///Channel Flag
        enum class ChfVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ChfVal> chf{}; 
        namespace ChfValC{
            constexpr Register::FieldValue<decltype(chf)::Type,ChfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(chf)::Type,ChfVal::v1> v1{};
        }
    }
    namespace Ftm0C1sc{    ///<Channel (n) Status And Control
        using Addr = Register::Address<0x40038014,0xffffff03,0,unsigned>;
        ///Edge or Level Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> elsa{}; 
        ///Edge or Level Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> elsb{}; 
        ///Channel Mode Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msa{}; 
        ///Channel Mode Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msb{}; 
        ///Channel Interrupt Enable
        enum class ChieVal {
            v0=0x00000000,     ///<Disable channel interrupts. Use software polling.
            v1=0x00000001,     ///<Enable channel interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ChieVal> chie{}; 
        namespace ChieValC{
            constexpr Register::FieldValue<decltype(chie)::Type,ChieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(chie)::Type,ChieVal::v1> v1{};
        }
        ///Channel Flag
        enum class ChfVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ChfVal> chf{}; 
        namespace ChfValC{
            constexpr Register::FieldValue<decltype(chf)::Type,ChfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(chf)::Type,ChfVal::v1> v1{};
        }
    }
    namespace Ftm0C0v{    ///<Channel (n) Value
        using Addr = Register::Address<0x40038010,0xffff0000,0,unsigned>;
        ///Channel Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
    namespace Ftm0C1v{    ///<Channel (n) Value
        using Addr = Register::Address<0x40038018,0xffff0000,0,unsigned>;
        ///Channel Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
    namespace Ftm0Exttrig{    ///<FTM External Trigger
        using Addr = Register::Address<0x4003806c,0xffffff00,0,unsigned>;
        ///Channel 2 Trigger Enable
        enum class Ch2trigVal {
            v0=0x00000000,     ///<The generation of the channel trigger is disabled.
            v1=0x00000001,     ///<The generation of the channel trigger is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch2trigVal> ch2trig{}; 
        namespace Ch2trigValC{
            constexpr Register::FieldValue<decltype(ch2trig)::Type,Ch2trigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch2trig)::Type,Ch2trigVal::v1> v1{};
        }
        ///Channel 3 Trigger Enable
        enum class Ch3trigVal {
            v0=0x00000000,     ///<The generation of the channel trigger is disabled.
            v1=0x00000001,     ///<The generation of the channel trigger is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch3trigVal> ch3trig{}; 
        namespace Ch3trigValC{
            constexpr Register::FieldValue<decltype(ch3trig)::Type,Ch3trigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch3trig)::Type,Ch3trigVal::v1> v1{};
        }
        ///Channel 4 Trigger Enable
        enum class Ch4trigVal {
            v0=0x00000000,     ///<The generation of the channel trigger is disabled.
            v1=0x00000001,     ///<The generation of the channel trigger is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch4trigVal> ch4trig{}; 
        namespace Ch4trigValC{
            constexpr Register::FieldValue<decltype(ch4trig)::Type,Ch4trigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch4trig)::Type,Ch4trigVal::v1> v1{};
        }
        ///Channel 5 Trigger Enable
        enum class Ch5trigVal {
            v0=0x00000000,     ///<The generation of the channel trigger is disabled.
            v1=0x00000001,     ///<The generation of the channel trigger is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch5trigVal> ch5trig{}; 
        namespace Ch5trigValC{
            constexpr Register::FieldValue<decltype(ch5trig)::Type,Ch5trigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch5trig)::Type,Ch5trigVal::v1> v1{};
        }
        ///Channel 0 Trigger Enable
        enum class Ch0trigVal {
            v0=0x00000000,     ///<The generation of the channel trigger is disabled.
            v1=0x00000001,     ///<The generation of the channel trigger is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch0trigVal> ch0trig{}; 
        namespace Ch0trigValC{
            constexpr Register::FieldValue<decltype(ch0trig)::Type,Ch0trigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch0trig)::Type,Ch0trigVal::v1> v1{};
        }
        ///Channel 1 Trigger Enable
        enum class Ch1trigVal {
            v0=0x00000000,     ///<The generation of the channel trigger is disabled.
            v1=0x00000001,     ///<The generation of the channel trigger is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch1trigVal> ch1trig{}; 
        namespace Ch1trigValC{
            constexpr Register::FieldValue<decltype(ch1trig)::Type,Ch1trigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ch1trig)::Type,Ch1trigVal::v1> v1{};
        }
        ///Initialization Trigger Enable
        enum class InittrigenVal {
            v0=0x00000000,     ///<The generation of initialization trigger is disabled.
            v1=0x00000001,     ///<The generation of initialization trigger is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InittrigenVal> inittrigen{}; 
        namespace InittrigenValC{
            constexpr Register::FieldValue<decltype(inittrigen)::Type,InittrigenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(inittrigen)::Type,InittrigenVal::v1> v1{};
        }
        ///Channel Trigger Flag
        enum class TrigfVal {
            v0=0x00000000,     ///<No channel trigger was generated.
            v1=0x00000001,     ///<A channel trigger was generated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TrigfVal> trigf{}; 
        namespace TrigfValC{
            constexpr Register::FieldValue<decltype(trigf)::Type,TrigfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trigf)::Type,TrigfVal::v1> v1{};
        }
    }
}
