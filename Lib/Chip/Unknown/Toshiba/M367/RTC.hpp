#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Real Time Clock (RTC)
    namespace Nonesecr{    ///<RTC Second Column Register
        using Addr = Register::Address<0x400cc000,0xffffff80,0,unsigned char>;
        ///SE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> se{}; 
    }
    namespace Noneminr{    ///<RTC Minute Column Register
        using Addr = Register::Address<0x400cc001,0xffffff80,0,unsigned char>;
        ///MI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Nonehourr{    ///<RTC Hour Column Register
        using Addr = Register::Address<0x400cc002,0xffffffc0,0,unsigned char>;
        ///HO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> ho{}; 
    }
    namespace Nonedayr{    ///<RTC Day of the Week Column Register
        using Addr = Register::Address<0x400cc004,0xfffffff8,0,unsigned char>;
        ///WE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> we{}; 
    }
    namespace Nonedater{    ///<RTC Day Column Register
        using Addr = Register::Address<0x400cc005,0xffffffc0,0,unsigned char>;
        ///DA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> da{}; 
    }
    namespace NonemonthrA{    ///<RTC Month Column Register
        using Addr = Register::Address<0x400cc006,0xffffffe0,0,unsigned char>;
        ///MO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> mo{}; 
    }
    namespace NonemonthrB{    ///<RTC Month Column Register
        using Addr = Register::Address<0x400cc006,0xfffffffe,0,unsigned char>;
        ///MO0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mo0{}; 
    }
    namespace NoneyearrA{    ///<RTC Year Column Register
        using Addr = Register::Address<0x400cc007,0xffffff00,0,unsigned char>;
        ///YE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ye{}; 
    }
    namespace NoneyearrB{    ///<RTC Year Column Register
        using Addr = Register::Address<0x400cc007,0xfffffffc,0,unsigned char>;
        ///LEAP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> leap{}; 
    }
    namespace Nonepager{    ///<RTC PAGE Register
        using Addr = Register::Address<0x400cc008,0xffffff62,0,unsigned char>;
        ///PAGE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> page{}; 
        ///ENAALM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> enaalm{}; 
        ///ENATMR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> enatmr{}; 
        ///ADJUST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adjust{}; 
        ///INTENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> intena{}; 
    }
    namespace Nonerestr{    ///<RTC Reset Register
        using Addr = Register::Address<0x400cc00c,0xffffff08,0,unsigned char>;
        ///DIS8HZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dis8hz{}; 
        ///DIS4HZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dis4hz{}; 
        ///DIS2HZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dis2hz{}; 
        ///RSTALM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rstalm{}; 
        ///RSTTMR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rsttmr{}; 
        ///DIS16HZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dis16hz{}; 
        ///DIS1HZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dis1hz{}; 
    }
}
