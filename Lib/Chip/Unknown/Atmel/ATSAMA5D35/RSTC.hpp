#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Reset Controller
    namespace RstcCr{    ///<Control Register
        using Addr = Register::Address<0xfffffe00,0x00fffff2,0,unsigned>;
        ///Processor Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> procrst{}; 
        ///Peripheral Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> perrst{}; 
        ///External Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> extrst{}; 
        ///Password
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace RstcSr{    ///<Status Register
        using Addr = Register::Address<0xfffffe04,0xfffcf8fe,0,unsigned>;
        ///User Reset Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ursts{}; 
        ///Reset Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> rsttyp{}; 
        ///NRST Pin Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nrstl{}; 
        ///Software Reset Command in Progress
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> srcmp{}; 
    }
    namespace RstcMr{    ///<Mode Register
        using Addr = Register::Address<0xfffffe08,0x00fff0ff,0,unsigned>;
        ///External Reset Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> erstl{}; 
        ///Password
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> key{}; 
    }
}
