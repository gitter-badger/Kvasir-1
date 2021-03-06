#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Multipurpose Clock Generator Lite
    namespace McgC1{    ///<MCG Control Register 1
        using Addr = Register::Address<0x40064000,0xffffff3c,0,unsigned char>;
        ///Internal Reference Stop Enable
        enum class IrefstenVal {
            v0=0x00000000,     ///<LIRC is disabled in Stop mode.
            v1=0x00000001,     ///<LIRC is enabled in Stop mode, if IRCLKEN is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IrefstenVal> irefsten{}; 
        namespace IrefstenValC{
            constexpr Register::FieldValue<decltype(irefsten)::Type,IrefstenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irefsten)::Type,IrefstenVal::v1> v1{};
        }
        ///Internal Reference Clock Enable
        enum class IrclkenVal {
            v0=0x00000000,     ///<LIRC is disabled.
            v1=0x00000001,     ///<LIRC is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IrclkenVal> irclken{}; 
        namespace IrclkenValC{
            constexpr Register::FieldValue<decltype(irclken)::Type,IrclkenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irclken)::Type,IrclkenVal::v1> v1{};
        }
        ///Clock Source Select
        enum class ClksVal {
            v00=0x00000000,     ///<Selects HIRC clock as the main clock source. This is HIRC mode.
            v01=0x00000001,     ///<Selects LIRC clock as the main clock source. This is LIRC2M or LIRC8M mode.
            v10=0x00000002,     ///<Selects external clock as the main clock source. This is EXT mode.
            v11=0x00000003,     ///<Reserved. Writing 11 takes no effect.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ClksVal> clks{}; 
        namespace ClksValC{
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v00> v00{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v01> v01{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v10> v10{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v11> v11{};
        }
    }
    namespace McgC2{    ///<MCG Control Register 2
        using Addr = Register::Address<0x40064001,0xffffffc2,0,unsigned char>;
        ///Low-frequency Internal Reference Clock Select
        enum class IrcsVal {
            v0=0x00000000,     ///<LIRC is in 2 MHz mode.
            v1=0x00000001,     ///<LIRC is in 8 MHz mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IrcsVal> ircs{}; 
        namespace IrcsValC{
            constexpr Register::FieldValue<decltype(ircs)::Type,IrcsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ircs)::Type,IrcsVal::v1> v1{};
        }
        ///External Clock Source Select
        enum class Erefs0Val {
            v0=0x00000000,     ///<External clock requested.
            v1=0x00000001,     ///<Oscillator requested.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Erefs0Val> erefs0{}; 
        namespace Erefs0ValC{
            constexpr Register::FieldValue<decltype(erefs0)::Type,Erefs0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erefs0)::Type,Erefs0Val::v1> v1{};
        }
        ///Crystal Oscillator Operation Mode Select
        enum class Hgo0Val {
            v0=0x00000000,     ///<Configure crystal oscillator for low-power operation.
            v1=0x00000001,     ///<Configure crystal oscillator for high-gain operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Hgo0Val> hgo0{}; 
        namespace Hgo0ValC{
            constexpr Register::FieldValue<decltype(hgo0)::Type,Hgo0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hgo0)::Type,Hgo0Val::v1> v1{};
        }
        ///External Clock Source Frequency Range Select
        enum class Range0Val {
            v00=0x00000000,     ///<Low frequency range selected for the crystal oscillator or the external clock source.
            v01=0x00000001,     ///<High frequency range selected for the crystal oscillator or the external clock source.
            v10=0x00000002,     ///<Very high frequency range selected for the crystal oscillator or the external clock source.
            v11=0x00000003,     ///<Very high frequency range selected for the crystal oscillator or the external clock source. Same effect as 10.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Range0Val> range0{}; 
        namespace Range0ValC{
            constexpr Register::FieldValue<decltype(range0)::Type,Range0Val::v00> v00{};
            constexpr Register::FieldValue<decltype(range0)::Type,Range0Val::v01> v01{};
            constexpr Register::FieldValue<decltype(range0)::Type,Range0Val::v10> v10{};
            constexpr Register::FieldValue<decltype(range0)::Type,Range0Val::v11> v11{};
        }
    }
    namespace McgS{    ///<MCG Status Register
        using Addr = Register::Address<0x40064006,0xfffffff1,0,unsigned char>;
        ///OSC Initialization Status
        enum class Oscinit0Val {
            v0=0x00000000,     ///<OSC is not ready.
            v1=0x00000001,     ///<OSC clock is ready.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Oscinit0Val> oscinit0{}; 
        namespace Oscinit0ValC{
            constexpr Register::FieldValue<decltype(oscinit0)::Type,Oscinit0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(oscinit0)::Type,Oscinit0Val::v1> v1{};
        }
        ///Clock Mode Status
        enum class ClkstVal {
            v00=0x00000000,     ///<HIRC clock is selected as the main clock source, and MCG_Lite works at HIRC mode.
            v01=0x00000001,     ///<LIRC clock is selected as the main clock source, and MCG_Lite works at LIRC2M or LIRC8M mode.
            v10=0x00000002,     ///<External clock is selected as the main clock source, and MCG_Lite works at EXT mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,ClkstVal> clkst{}; 
        namespace ClkstValC{
            constexpr Register::FieldValue<decltype(clkst)::Type,ClkstVal::v00> v00{};
            constexpr Register::FieldValue<decltype(clkst)::Type,ClkstVal::v01> v01{};
            constexpr Register::FieldValue<decltype(clkst)::Type,ClkstVal::v10> v10{};
        }
    }
    namespace McgSc{    ///<MCG Status and Control Register
        using Addr = Register::Address<0x40064008,0xfffffff1,0,unsigned char>;
        ///Low-frequency Internal Reference Clock Divider
        enum class FcrdivVal {
            v000=0x00000000,     ///<Division factor is 1.
            v001=0x00000001,     ///<Division factor is 2.
            v010=0x00000002,     ///<Division factor is 4.
            v011=0x00000003,     ///<Division factor is 8.
            v100=0x00000004,     ///<Division factor is 16.
            v101=0x00000005,     ///<Division factor is 32.
            v110=0x00000006,     ///<Division factor is 64.
            v111=0x00000007,     ///<Division factor is 128.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,FcrdivVal> fcrdiv{}; 
        namespace FcrdivValC{
            constexpr Register::FieldValue<decltype(fcrdiv)::Type,FcrdivVal::v000> v000{};
            constexpr Register::FieldValue<decltype(fcrdiv)::Type,FcrdivVal::v001> v001{};
            constexpr Register::FieldValue<decltype(fcrdiv)::Type,FcrdivVal::v010> v010{};
            constexpr Register::FieldValue<decltype(fcrdiv)::Type,FcrdivVal::v011> v011{};
            constexpr Register::FieldValue<decltype(fcrdiv)::Type,FcrdivVal::v100> v100{};
            constexpr Register::FieldValue<decltype(fcrdiv)::Type,FcrdivVal::v101> v101{};
            constexpr Register::FieldValue<decltype(fcrdiv)::Type,FcrdivVal::v110> v110{};
            constexpr Register::FieldValue<decltype(fcrdiv)::Type,FcrdivVal::v111> v111{};
        }
    }
    namespace McgHctrim{    ///<MCG High-frequency IRC Coarse Trim Register
        using Addr = Register::Address<0x40064014,0xffffffc0,0,unsigned char>;
        ///High-frequency IRC Coarse Trim
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> coarseTrim{}; 
    }
    namespace McgHttrim{    ///<MCG High-frequency IRC Tempco (Temperature Coefficient) Trim Register
        using Addr = Register::Address<0x40064015,0xffffffe0,0,unsigned char>;
        ///High-frequency IRC Tempco Trim
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> tempcoTrim{}; 
    }
    namespace McgHftrim{    ///<MCG High-frequency IRC Fine Trim Register
        using Addr = Register::Address<0x40064016,0xffffff80,0,unsigned char>;
        ///High-frequency IRC Fine Trim
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> fineTrim{}; 
    }
    namespace McgMc{    ///<MCG Miscellaneous Control Register
        using Addr = Register::Address<0x40064018,0xffffff78,0,unsigned char>;
        ///Second Low-frequency Internal Reference Clock Divider
        enum class Lircdiv2Val {
            v000=0x00000000,     ///<Division factor is 1.
            v001=0x00000001,     ///<Division factor is 2.
            v010=0x00000002,     ///<Division factor is 4.
            v011=0x00000003,     ///<Division factor is 8.
            v100=0x00000004,     ///<Division factor is 16.
            v101=0x00000005,     ///<Division factor is 32.
            v110=0x00000006,     ///<Division factor is 64.
            v111=0x00000007,     ///<Division factor is 128.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,Lircdiv2Val> lircDiv2{}; 
        namespace Lircdiv2ValC{
            constexpr Register::FieldValue<decltype(lircDiv2)::Type,Lircdiv2Val::v000> v000{};
            constexpr Register::FieldValue<decltype(lircDiv2)::Type,Lircdiv2Val::v001> v001{};
            constexpr Register::FieldValue<decltype(lircDiv2)::Type,Lircdiv2Val::v010> v010{};
            constexpr Register::FieldValue<decltype(lircDiv2)::Type,Lircdiv2Val::v011> v011{};
            constexpr Register::FieldValue<decltype(lircDiv2)::Type,Lircdiv2Val::v100> v100{};
            constexpr Register::FieldValue<decltype(lircDiv2)::Type,Lircdiv2Val::v101> v101{};
            constexpr Register::FieldValue<decltype(lircDiv2)::Type,Lircdiv2Val::v110> v110{};
            constexpr Register::FieldValue<decltype(lircDiv2)::Type,Lircdiv2Val::v111> v111{};
        }
        ///High-frequency IRC Enable
        enum class HircenVal {
            v0=0x00000000,     ///<HIRC source is not enabled.
            v1=0x00000001,     ///<HIRC source is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,HircenVal> hircen{}; 
        namespace HircenValC{
            constexpr Register::FieldValue<decltype(hircen)::Type,HircenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hircen)::Type,HircenVal::v1> v1{};
        }
    }
    namespace McgLtrimrng{    ///<MCG Low-frequency IRC Trim Range Register
        using Addr = Register::Address<0x40064019,0xfffffff0,0,unsigned char>;
        ///LIRC Slow TRIM (2 MHz) Range
        enum class StrimrngVal {
            v00=0x00000000,     ///<Frequency shift by 10%.
            v01=0x00000001,     ///<No frequency shift.
            v10=0x00000002,     ///<No frequency shift.
            v11=0x00000003,     ///<Frequency shift by -10%.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,StrimrngVal> strimrng{}; 
        namespace StrimrngValC{
            constexpr Register::FieldValue<decltype(strimrng)::Type,StrimrngVal::v00> v00{};
            constexpr Register::FieldValue<decltype(strimrng)::Type,StrimrngVal::v01> v01{};
            constexpr Register::FieldValue<decltype(strimrng)::Type,StrimrngVal::v10> v10{};
            constexpr Register::FieldValue<decltype(strimrng)::Type,StrimrngVal::v11> v11{};
        }
        ///LIRC Fast TRIM (8 MHz) Range
        enum class FtrimrngVal {
            v00=0x00000000,     ///<Frequency shift by 10%.
            v01=0x00000001,     ///<No frequency shift.
            v10=0x00000002,     ///<No frequency shift.
            v11=0x00000003,     ///<Frequency shift by -10%.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,FtrimrngVal> ftrimrng{}; 
        namespace FtrimrngValC{
            constexpr Register::FieldValue<decltype(ftrimrng)::Type,FtrimrngVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ftrimrng)::Type,FtrimrngVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ftrimrng)::Type,FtrimrngVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ftrimrng)::Type,FtrimrngVal::v11> v11{};
        }
    }
    namespace McgLftrim{    ///<MCG Low-frequency IRC8M Trim Register
        using Addr = Register::Address<0x4006401a,0xffffff80,0,unsigned char>;
        ///LIRC8M TRIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> lircFtrim{}; 
    }
    namespace McgLstrim{    ///<MCG Low-frequency IRC2M Trim Register
        using Addr = Register::Address<0x4006401b,0xffffff80,0,unsigned char>;
        ///LIRC2M TRIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> lircStrim{}; 
    }
}
