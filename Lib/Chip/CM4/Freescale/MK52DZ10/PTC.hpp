#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input/Output
    namespace GpiocPdor{    ///<Port Data Output Register
        using Addr = Register::Address<0x400ff080,0x00000000,0,unsigned>;
        ///Port Data Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdo{}; 
    }
    namespace GpiocPsor{    ///<Port Set Output Register
        using Addr = Register::Address<0x400ff084,0x00000000,0,unsigned>;
        ///Port Set Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptso{}; 
    }
    namespace GpiocPcor{    ///<Port Clear Output Register
        using Addr = Register::Address<0x400ff088,0x00000000,0,unsigned>;
        ///Port Clear Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptco{}; 
    }
    namespace GpiocPtor{    ///<Port Toggle Output Register
        using Addr = Register::Address<0x400ff08c,0x00000000,0,unsigned>;
        ///Port Toggle Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptto{}; 
    }
    namespace GpiocPdir{    ///<Port Data Input Register
        using Addr = Register::Address<0x400ff090,0x00000000,0,unsigned>;
        ///Port Data Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdi{}; 
    }
    namespace GpiocPddr{    ///<Port Data Direction Register
        using Addr = Register::Address<0x400ff094,0x00000000,0,unsigned>;
        ///Port data direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdd{}; 
    }
}
