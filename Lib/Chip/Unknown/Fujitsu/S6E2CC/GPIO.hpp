#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//0
    namespace Nonepfr0{    ///<Port Function Setting Register 0
        using Addr = Register::Address<0x4006f000,0xfffff8e0,0,unsigned>;
        ///Bit10 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p0a{}; 
        ///Bit9 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p09{}; 
        ///Bit8 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p08{}; 
        ///Bit4 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p04{}; 
        ///Bit3 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p03{}; 
        ///Bit2 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p02{}; 
        ///Bit1 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p01{}; 
        ///Bit0 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p00{}; 
    }
    namespace Nonepfr1{    ///<Port Function Setting Register 1
        using Addr = Register::Address<0x4006f004,0xffff0000,0,unsigned>;
        ///Bit15 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p1f{}; 
        ///Bit14 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p1e{}; 
        ///Bit13 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p1d{}; 
        ///Bit12 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p1c{}; 
        ///Bit11 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p1b{}; 
        ///Bit10 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p1a{}; 
        ///Bit9 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p19{}; 
        ///Bit8 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p18{}; 
        ///Bit7 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p17{}; 
        ///Bit6 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p16{}; 
        ///Bit5 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p15{}; 
        ///Bit4 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p14{}; 
        ///Bit3 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p13{}; 
        ///Bit2 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p12{}; 
        ///Bit1 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p11{}; 
        ///Bit0 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p10{}; 
    }
    namespace Nonepfr2{    ///<Port Function Setting Register 2
        using Addr = Register::Address<0x4006f008,0xfffff800,0,unsigned>;
        ///Bit10 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p2a{}; 
        ///Bit9 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p29{}; 
        ///Bit8 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p28{}; 
        ///Bit7 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p27{}; 
        ///Bit6 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p26{}; 
        ///Bit5 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p25{}; 
        ///Bit4 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p24{}; 
        ///Bit3 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p23{}; 
        ///Bit2 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p22{}; 
        ///Bit1 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p21{}; 
        ///Bit0 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p20{}; 
    }
    namespace Nonepfr3{    ///<Port Function Setting Register 3
        using Addr = Register::Address<0x4006f00c,0xffff8000,0,unsigned>;
        ///Bit14 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p3e{}; 
        ///Bit13 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p3d{}; 
        ///Bit12 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p3c{}; 
        ///Bit11 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p3b{}; 
        ///Bit10 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p3a{}; 
        ///Bit9 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p39{}; 
        ///Bit8 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p38{}; 
        ///Bit7 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p37{}; 
        ///Bit6 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p36{}; 
        ///Bit5 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p35{}; 
        ///Bit4 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p34{}; 
        ///Bit3 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p33{}; 
        ///Bit2 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p32{}; 
        ///Bit1 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p31{}; 
        ///Bit0 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p30{}; 
    }
    namespace Nonepfr4{    ///<Port Function Setting Register 4
        using Addr = Register::Address<0x4006f010,0xffff8000,0,unsigned>;
        ///Bit14 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p4e{}; 
        ///Bit13 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p4d{}; 
        ///Bit12 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p4c{}; 
        ///Bit11 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p4b{}; 
        ///Bit10 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p4a{}; 
        ///Bit9 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p49{}; 
        ///Bit8 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p48{}; 
        ///Bit7 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p47{}; 
        ///Bit6 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p46{}; 
        ///Bit5 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p45{}; 
        ///Bit4 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p44{}; 
        ///Bit3 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p43{}; 
        ///Bit2 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p42{}; 
        ///Bit1 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p41{}; 
        ///Bit0 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p40{}; 
    }
    namespace Nonepfr5{    ///<Port Function Setting Register 5
        using Addr = Register::Address<0x4006f014,0xffff0000,0,unsigned>;
        ///Bit15 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p5f{}; 
        ///Bit14 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p5e{}; 
        ///Bit13 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p5d{}; 
        ///Bit12 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p5c{}; 
        ///Bit11 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p5b{}; 
        ///Bit10 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p5a{}; 
        ///Bit9 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p59{}; 
        ///Bit8 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p58{}; 
        ///Bit7 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p57{}; 
        ///Bit6 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p56{}; 
        ///Bit5 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p55{}; 
        ///Bit4 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p54{}; 
        ///Bit3 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p53{}; 
        ///Bit2 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p52{}; 
        ///Bit1 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p51{}; 
        ///Bit0 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p50{}; 
    }
    namespace Nonepfr6{    ///<Port Function Setting Register 6
        using Addr = Register::Address<0x4006f018,0xffff8000,0,unsigned>;
        ///Bit14 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p6e{}; 
        ///Bit13 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p6d{}; 
        ///Bit12 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p6c{}; 
        ///Bit11 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p6b{}; 
        ///Bit10 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p6a{}; 
        ///Bit9 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p69{}; 
        ///Bit8 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p68{}; 
        ///Bit7 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p67{}; 
        ///Bit6 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p66{}; 
        ///Bit5 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p65{}; 
        ///Bit4 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p64{}; 
        ///Bit3 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p63{}; 
        ///Bit2 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p62{}; 
        ///Bit1 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p61{}; 
        ///Bit0 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p60{}; 
    }
    namespace Nonepfr7{    ///<Port Function Setting Register 7
        using Addr = Register::Address<0x4006f01c,0xffff8000,0,unsigned>;
        ///Bit14 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p7e{}; 
        ///Bit13 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p7d{}; 
        ///Bit12 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p7c{}; 
        ///Bit11 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p7b{}; 
        ///Bit10 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p7a{}; 
        ///Bit9 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p79{}; 
        ///Bit8 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p78{}; 
        ///Bit7 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p77{}; 
        ///Bit6 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p76{}; 
        ///Bit5 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p75{}; 
        ///Bit4 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p74{}; 
        ///Bit3 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p73{}; 
        ///Bit2 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p72{}; 
        ///Bit1 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p71{}; 
        ///Bit0 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p70{}; 
    }
    namespace Nonepfr8{    ///<Port Function Setting Register 8
        using Addr = Register::Address<0x4006f020,0xfffffff0,0,unsigned>;
        ///Bit3 of PFR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p83{}; 
        ///Bit2 of PFR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p82{}; 
        ///Bit1 of PFR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p81{}; 
        ///Bit0 of PFR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p80{}; 
    }
    namespace Nonepfr9{    ///<32
        using Addr = Register::Address<0x4006f024,0xffffff00,0,unsigned>;
        ///Bit7 of PFR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p97{}; 
        ///Bit6 of PFR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p96{}; 
        ///Bit5 of PFR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p95{}; 
        ///Bit4 of PFR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p94{}; 
        ///Bit3 of PFR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p93{}; 
        ///Bit2 of PFR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p92{}; 
        ///Bit1 of PFR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p91{}; 
        ///Bit0 of PFR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p90{}; 
    }
    namespace Nonepfra{    ///<32
        using Addr = Register::Address<0x4006f028,0xffff0000,0,unsigned>;
        ///Bit15 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> paf{}; 
        ///Bit14 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pae{}; 
        ///Bit13 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pad{}; 
        ///Bit12 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pac{}; 
        ///Bit11 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pab{}; 
        ///Bit10 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> paa{}; 
        ///Bit9 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pa9{}; 
        ///Bit8 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pa8{}; 
        ///Bit7 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pa7{}; 
        ///Bit6 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pa6{}; 
        ///Bit5 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pa5{}; 
        ///Bit4 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pa4{}; 
        ///Bit3 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pa3{}; 
        ///Bit2 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pa2{}; 
        ///Bit1 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pa1{}; 
        ///Bit0 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pa0{}; 
    }
    namespace Nonepfrb{    ///<32
        using Addr = Register::Address<0x4006f02c,0xffff0000,0,unsigned>;
        ///Bit15 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pbf{}; 
        ///Bit14 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pbe{}; 
        ///Bit13 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pbd{}; 
        ///Bit12 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pbc{}; 
        ///Bit11 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pbb{}; 
        ///Bit10 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pba{}; 
        ///Bit9 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pb9{}; 
        ///Bit8 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pb8{}; 
        ///Bit7 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pb7{}; 
        ///Bit6 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pb6{}; 
        ///Bit5 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pb5{}; 
        ///Bit4 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pb4{}; 
        ///Bit3 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pb3{}; 
        ///Bit2 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pb2{}; 
        ///Bit1 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pb1{}; 
        ///Bit0 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pb0{}; 
    }
    namespace Nonepfrc{    ///<32
        using Addr = Register::Address<0x4006f030,0xffff0000,0,unsigned>;
        ///Bit15 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pcf{}; 
        ///Bit14 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pce{}; 
        ///Bit13 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pcd{}; 
        ///Bit12 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pcc{}; 
        ///Bit11 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pcb{}; 
        ///Bit10 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pca{}; 
        ///Bit9 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pc9{}; 
        ///Bit8 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pc8{}; 
        ///Bit7 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pc7{}; 
        ///Bit6 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pc6{}; 
        ///Bit5 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pc5{}; 
        ///Bit4 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pc4{}; 
        ///Bit3 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pc3{}; 
        ///Bit2 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2{}; 
        ///Bit1 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1{}; 
        ///Bit0 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0{}; 
    }
    namespace Nonepfrd{    ///<32
        using Addr = Register::Address<0x4006f034,0xfffffff8,0,unsigned>;
        ///Bit2 of PFRD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2{}; 
        ///Bit1 of PFRD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1{}; 
        ///Bit0 of PFRD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0{}; 
    }
    namespace Nonepfre{    ///<Port Function Setting Register E
        using Addr = Register::Address<0x4006f038,0xfffffff2,0,unsigned>;
        ///Bit3 of PFRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3{}; 
        ///Bit2 of PFRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2{}; 
        ///Bit0 of PFRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0{}; 
    }
    namespace Nonepfrf{    ///<32
        using Addr = Register::Address<0x4006f03c,0xffffe000,0,unsigned>;
        ///Bit12 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pfc{}; 
        ///Bit11 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pfb{}; 
        ///Bit10 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pfa{}; 
        ///Bit9 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pf9{}; 
        ///Bit8 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pf8{}; 
        ///Bit7 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pf7{}; 
        ///Bit6 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pf6{}; 
        ///Bit5 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pf5{}; 
        ///Bit4 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pf4{}; 
        ///Bit3 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pf3{}; 
        ///Bit2 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pf2{}; 
        ///Bit1 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pf1{}; 
        ///Bit0 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pf0{}; 
    }
    namespace Nonepcr0{    ///<Pull-up Setting Register 0
        using Addr = Register::Address<0x4006f100,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr1{    ///<Pull-up Setting Register 1
        using Addr = Register::Address<0x4006f104,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr2{    ///<Pull-up Setting Register 2
        using Addr = Register::Address<0x4006f108,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr3{    ///<Pull-up Setting Register 3
        using Addr = Register::Address<0x4006f10c,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr4{    ///<Pull-up Setting Register 4
        using Addr = Register::Address<0x4006f110,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr5{    ///<Pull-up Setting Register 5
        using Addr = Register::Address<0x4006f114,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr6{    ///<Pull-up Setting Register 6
        using Addr = Register::Address<0x4006f118,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr7{    ///<Pull-up Setting Register 7
        using Addr = Register::Address<0x4006f11c,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr8{    ///<Pull-up Setting Register 8
        using Addr = Register::Address<0x4006f120,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr9{    ///<Pull-up Setting Register 9
        using Addr = Register::Address<0x4006f124,0xffffffff,0,unsigned>;
    }
    namespace Nonepcra{    ///<Pull-up Setting Register A
        using Addr = Register::Address<0x4006f128,0xffffffff,0,unsigned>;
    }
    namespace Nonepcrb{    ///<Pull-up Setting Register B
        using Addr = Register::Address<0x4006f12c,0xffffffff,0,unsigned>;
    }
    namespace Nonepcrc{    ///<Pull-up Setting Register C
        using Addr = Register::Address<0x4006f130,0xffffffff,0,unsigned>;
    }
    namespace Nonepcrd{    ///<Pull-up Setting Register D
        using Addr = Register::Address<0x4006f134,0xffffffff,0,unsigned>;
    }
    namespace Nonepcre{    ///<Pull-up Setting Register E
        using Addr = Register::Address<0x4006f138,0xffffffff,0,unsigned>;
    }
    namespace Nonepcrf{    ///<Pull-up Setting Register F
        using Addr = Register::Address<0x4006f13c,0xffffffff,0,unsigned>;
    }
    namespace Noneddr0{    ///<Port input/output Direction Setting Register 0
        using Addr = Register::Address<0x4006f200,0xffff8000,0,unsigned>;
        ///Bit14 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p0e{}; 
        ///Bit13 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p0d{}; 
        ///Bit12 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p0c{}; 
        ///Bit11 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p0b{}; 
        ///Bit10 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p0a{}; 
        ///Bit9 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p09{}; 
        ///Bit8 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p08{}; 
        ///Bit7 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p07{}; 
        ///Bit6 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p06{}; 
        ///Bit5 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p05{}; 
        ///Bit4 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p04{}; 
        ///Bit3 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p03{}; 
        ///Bit2 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p02{}; 
        ///Bit1 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p01{}; 
        ///Bit0 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p00{}; 
    }
    namespace Noneddr1{    ///<Port input/output Direction Setting Register 1
        using Addr = Register::Address<0x4006f204,0xffffffff,0,unsigned>;
    }
    namespace Noneddr2{    ///<Port input/output Direction Setting Register 2
        using Addr = Register::Address<0x4006f208,0xffffffff,0,unsigned>;
    }
    namespace Noneddr3{    ///<Port input/output Direction Setting Register 3
        using Addr = Register::Address<0x4006f20c,0xffffffff,0,unsigned>;
    }
    namespace Noneddr4{    ///<Port input/output Direction Setting Register 4
        using Addr = Register::Address<0x4006f210,0xffffffff,0,unsigned>;
    }
    namespace Noneddr5{    ///<Port input/output Direction Setting Register 5
        using Addr = Register::Address<0x4006f214,0xffffffff,0,unsigned>;
    }
    namespace Noneddr6{    ///<Port input/output Direction Setting Register 6
        using Addr = Register::Address<0x4006f218,0xffffffff,0,unsigned>;
    }
    namespace Noneddr7{    ///<Port input/output Direction Setting Register 7
        using Addr = Register::Address<0x4006f21c,0xffffffff,0,unsigned>;
    }
    namespace Noneddr8{    ///<Port input/output Direction Setting Register 8
        using Addr = Register::Address<0x4006f220,0xffffffff,0,unsigned>;
    }
    namespace Noneddr9{    ///<Port input/output Direction Setting Register 9
        using Addr = Register::Address<0x4006f224,0xffffffff,0,unsigned>;
    }
    namespace Noneddra{    ///<Port input/output Direction Setting Register A
        using Addr = Register::Address<0x4006f228,0xffffffff,0,unsigned>;
    }
    namespace Noneddrb{    ///<Port input/output Direction Setting Register B
        using Addr = Register::Address<0x4006f22c,0xffffffff,0,unsigned>;
    }
    namespace Noneddrc{    ///<Port input/output Direction Setting Register C
        using Addr = Register::Address<0x4006f230,0xffffffff,0,unsigned>;
    }
    namespace Noneddrd{    ///<Port input/output Direction Setting Register D
        using Addr = Register::Address<0x4006f234,0xffffffff,0,unsigned>;
    }
    namespace Noneddre{    ///<Port input/output Direction Setting Register E
        using Addr = Register::Address<0x4006f238,0xffffffff,0,unsigned>;
    }
    namespace Noneddrf{    ///<Port input/output Direction Setting Register F
        using Addr = Register::Address<0x4006f23c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir0{    ///<Port Input Data Register 0
        using Addr = Register::Address<0x4006f300,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir1{    ///<Port Input Data Register 1
        using Addr = Register::Address<0x4006f304,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir2{    ///<Port Input Data Register 2
        using Addr = Register::Address<0x4006f308,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir3{    ///<Port Input Data Register 3
        using Addr = Register::Address<0x4006f30c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir4{    ///<Port Input Data Register 4
        using Addr = Register::Address<0x4006f310,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir5{    ///<Port Input Data Register 5
        using Addr = Register::Address<0x4006f314,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir6{    ///<Port Input Data Register 6
        using Addr = Register::Address<0x4006f318,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir7{    ///<Port Input Data Register 7
        using Addr = Register::Address<0x4006f31c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir8{    ///<Port Input Data Register 8
        using Addr = Register::Address<0x4006f320,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir9{    ///<Port Input Data Register 9
        using Addr = Register::Address<0x4006f324,0xffffffff,0,unsigned>;
    }
    namespace Nonepdira{    ///<Port Input Data Register A
        using Addr = Register::Address<0x4006f328,0xffffffff,0,unsigned>;
    }
    namespace Nonepdirb{    ///<Port Input Data Register B
        using Addr = Register::Address<0x4006f32c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdirc{    ///<Port Input Data Register C
        using Addr = Register::Address<0x4006f330,0xffffffff,0,unsigned>;
    }
    namespace Nonepdird{    ///<Port Input Data Register D
        using Addr = Register::Address<0x4006f334,0xffffffff,0,unsigned>;
    }
    namespace Nonepdire{    ///<Port Input Data Register E
        using Addr = Register::Address<0x4006f338,0xffffffff,0,unsigned>;
    }
    namespace Nonepdirf{    ///<Port Input Data Register F
        using Addr = Register::Address<0x4006f33c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor0{    ///<Port Output Data Register 0
        using Addr = Register::Address<0x4006f400,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor1{    ///<Port Output Data Register 1
        using Addr = Register::Address<0x4006f404,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor2{    ///<Port Output Data Register 2
        using Addr = Register::Address<0x4006f408,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor3{    ///<Port Output Data Register 3
        using Addr = Register::Address<0x4006f40c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor4{    ///<Port Output Data Register 4
        using Addr = Register::Address<0x4006f410,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor5{    ///<Port Output Data Register 5
        using Addr = Register::Address<0x4006f414,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor6{    ///<Port Output Data Register 6
        using Addr = Register::Address<0x4006f418,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor7{    ///<Port Output Data Register 7
        using Addr = Register::Address<0x4006f41c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor8{    ///<Port Output Data Register 8
        using Addr = Register::Address<0x4006f420,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor9{    ///<Port Output Data Register 9
        using Addr = Register::Address<0x4006f424,0xffffffff,0,unsigned>;
    }
    namespace Nonepdora{    ///<Port Output Data Register A
        using Addr = Register::Address<0x4006f428,0xffffffff,0,unsigned>;
    }
    namespace Nonepdorb{    ///<Port Output Data Register B
        using Addr = Register::Address<0x4006f42c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdorc{    ///<Port Output Data Register C
        using Addr = Register::Address<0x4006f430,0xffffffff,0,unsigned>;
    }
    namespace Nonepdord{    ///<Port Output Data Register D
        using Addr = Register::Address<0x4006f434,0xffffffff,0,unsigned>;
    }
    namespace Nonepdore{    ///<Port Output Data Register E
        using Addr = Register::Address<0x4006f438,0xffffffff,0,unsigned>;
    }
    namespace Nonepdorf{    ///<Port Output Data Register F
        using Addr = Register::Address<0x4006f43c,0xffffffff,0,unsigned>;
    }
    namespace Noneade{    ///<Analog Input Setting Register
        using Addr = Register::Address<0x4006f500,0x00000000,0,unsigned>;
        ///Bit31 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> an31{}; 
        ///Bit30 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> an30{}; 
        ///Bit29 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> an29{}; 
        ///Bit28 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> an28{}; 
        ///Bit27 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> an27{}; 
        ///Bit26 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> an26{}; 
        ///Bit25 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> an25{}; 
        ///Bit24 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> an24{}; 
        ///Bit23 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> an23{}; 
        ///Bit22 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> an22{}; 
        ///Bit21 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> an21{}; 
        ///Bit20 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> an20{}; 
        ///Bit19 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> an19{}; 
        ///Bit18 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> an18{}; 
        ///Bit17 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> an17{}; 
        ///Bit16 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> an16{}; 
        ///Bit15 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> an15{}; 
        ///Bit14 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> an14{}; 
        ///Bit13 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> an13{}; 
        ///Bit12 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> an12{}; 
        ///Bit11 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> an11{}; 
        ///Bit10 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> an10{}; 
        ///Bit9 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> an09{}; 
        ///Bit8 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> an08{}; 
        ///Bit7 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an07{}; 
        ///Bit6 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an06{}; 
        ///Bit5 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an05{}; 
        ///Bit4 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an04{}; 
        ///Bit3 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an03{}; 
        ///Bit2 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an02{}; 
        ///Bit1 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an01{}; 
        ///Bit0 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an00{}; 
    }
    namespace Nonespsr{    ///<Special Port Setting Register
        using Addr = Register::Address<0x4006f580,0xffffffc3,0,unsigned>;
        ///USB (ch.1) Pin Setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usb1c{}; 
        ///USB (ch.0) Pin Setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usb0c{}; 
        ///Main Clock (Oscillation) Pin Setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mainxc{}; 
    }
    namespace Noneepfr00{    ///<Extended Pin Function Setting Register 00
        using Addr = Register::Address<0x4006f600,0xf0fcdd08,0,unsigned>;
        ///TRACED Function Select bit 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> trc3e{}; 
        ///TRACED Function Select bit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> trc2e{}; 
        ///TRACED Function Select bit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> trc1e{}; 
        ///TRACED Function Select bit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> trc0e{}; 
        ///JTAG Function Select bit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> jtagen1s{}; 
        ///JTAG Function Select bit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> jtagen0b{}; 
        ///USB ch.1 Function Select bit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> usbp1e{}; 
        ///USB ch.0 Function Select bit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usbp0e{}; 
        ///Sub clock divide output function select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> suboute{}; 
        ///RTC clock output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rtccoe{}; 
        ///Internal high-speed CR Oscillation Output Function Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> croute{}; 
        ///NMIX Function Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nmis{}; 
    }
    namespace Noneepfr01{    ///<Extended Pin Function Setting Register 01
        using Addr = Register::Address<0x4006f604,0x0000e000,0,unsigned>;
        ///IC03 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ic03s{}; 
        ///IC02 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> ic02s{}; 
        ///IC01 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ic01s{}; 
        ///IC00 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ic00s{}; 
        ///FRCK0 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> frck0s{}; 
        ///DTTIX0 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> dtti0s{}; 
        ///DTTIX0 Function Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dtti0c{}; 
        ///RTO05 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> rto05e{}; 
        ///RTO04 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rto04e{}; 
        ///RTO03 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rto03e{}; 
        ///RTO02 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rto02e{}; 
        ///RTO01 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rto01e{}; 
        ///RTO00 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rto00e{}; 
    }
    namespace Noneepfr02{    ///<Extended Pin Function Setting Register 02
        using Addr = Register::Address<0x4006f608,0x0000e000,0,unsigned>;
        ///IC13 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ic13s{}; 
        ///IC13 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> ic12s{}; 
        ///IC13 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ic11s{}; 
        ///IC13 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ic10s{}; 
        ///FRCK1 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> frck1s{}; 
        ///DTTIX1 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> dtti1s{}; 
        ///DTTIX1 Function Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dtti1c{}; 
        ///RTO15 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> rto15e{}; 
        ///RTO14 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rto14e{}; 
        ///RTO13 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rto13e{}; 
        ///RTO12 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rto12e{}; 
        ///RTO11 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rto11e{}; 
        ///RTO10 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rto10e{}; 
    }
    namespace Noneepfr03{    ///<Extended Pin Function Setting Register 03
        using Addr = Register::Address<0x4006f60c,0x0000e000,0,unsigned>;
        ///IC23 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ic23s{}; 
        ///IC23 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> ic22s{}; 
        ///IC23 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ic21s{}; 
        ///IC23 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ic20s{}; 
        ///FRCK2 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> frck2s{}; 
        ///DTTIX2 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> dtti2s{}; 
        ///DTTIX2 Function Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dtti2c{}; 
        ///RTO25 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> rto25e{}; 
        ///RTO24 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rto24e{}; 
        ///RTO23 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rto23e{}; 
        ///RTO22 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rto22e{}; 
        ///RTO21 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rto21e{}; 
        ///RTO20 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rto20e{}; 
    }
    namespace Noneepfr04{    ///<Extended Pin Function Setting Register 04
        using Addr = Register::Address<0x4006f610,0xc0c3c083,0,unsigned>;
        ///TIOB3 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob3s{}; 
        ///TIOA3 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa3e{}; 
        ///TIOA3 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa3s{}; 
        ///TIOB2 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob2s{}; 
        ///TIOA2 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa2e{}; 
        ///TIOB1 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob1s{}; 
        ///TIOA1 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa1e{}; 
        ///TIOA1 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa1s{}; 
        ///TIOB0 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tiob0s{}; 
        ///TIOA0 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa0e{}; 
    }
    namespace Noneepfr05{    ///<Extended Pin Function Setting Register 05
        using Addr = Register::Address<0x4006f614,0xc0c3c0c3,0,unsigned>;
        ///TIOB7 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob7s{}; 
        ///TIOA7 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa7e{}; 
        ///TIOA7 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa7s{}; 
        ///TIOB6 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob6s{}; 
        ///TIOA6 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa6e{}; 
        ///TIOB5 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob5s{}; 
        ///TIOA5 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa5e{}; 
        ///TIOA5 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa5s{}; 
        ///TIOB4 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob4s{}; 
        ///TIOA4 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa4e{}; 
    }
    namespace Noneepfr06{    ///<Extended Pin Function Setting Register 06
        using Addr = Register::Address<0x4006f618,0x00000000,0,unsigned>;
        ///External Interrupt 15 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> eint15s{}; 
        ///External Interrupt 14 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eint14s{}; 
        ///External Interrupt 13 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> eint13s{}; 
        ///External Interrupt 12 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> eint12s{}; 
        ///External Interrupt 11 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> eint11s{}; 
        ///External Interrupt 10 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> eint10s{}; 
        ///External Interrupt 09 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eint09s{}; 
        ///External Interrupt 08 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> eint08s{}; 
        ///External Interrupt 07 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> eint07s{}; 
        ///External Interrupt 06 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> eint06s{}; 
        ///External Interrupt 05 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> eint05s{}; 
        ///External Interrupt 04 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> eint04s{}; 
        ///External Interrupt 03 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint03s{}; 
        ///External Interrupt 02 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint02s{}; 
        ///External Interrupt 01 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eint01s{}; 
        ///External Interrupt 00 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eint00s{}; 
    }
    namespace Noneepfr07{    ///<Extended Pin Function Setting Register 07
        using Addr = Register::Address<0x4006f61c,0xf000000f,0,unsigned>;
        ///SCK3 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck3b{}; 
        ///SOT3 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot3b{}; 
        ///SIN3 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin3s{}; 
        ///SCK2 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck2b{}; 
        ///SOT2 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot2b{}; 
        ///SIN2 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin2s{}; 
        ///SCK1 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck1b{}; 
        ///SOT1 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot1b{}; 
        ///SIN1 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin1s{}; 
        ///SCK0 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck0b{}; 
        ///SOT0 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot0b{}; 
        ///SIN0 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin0s{}; 
    }
    namespace Noneepfr08{    ///<Extended Pin Function Setting Register 08
        using Addr = Register::Address<0x4006f620,0x00000000,0,unsigned>;
        ///CTS5 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> cts5s{}; 
        ///RTS5 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> rts5e{}; 
        ///SCK7 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck7b{}; 
        ///SOT7 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot7b{}; 
        ///SIN7 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin7s{}; 
        ///SCK6 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck6b{}; 
        ///SOT6 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot6b{}; 
        ///SIN6 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin6s{}; 
        ///SCK5 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck5b{}; 
        ///SOT5 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot5b{}; 
        ///SIN5 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin5s{}; 
        ///SCK4 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck4b{}; 
        ///SOT4 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot4b{}; 
        ///SIN4 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin4s{}; 
        ///CTS4 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> cts4s{}; 
        ///RTS4 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rts4e{}; 
    }
    namespace Noneepfr09{    ///<Extended Pin Function Setting Register 09
        using Addr = Register::Address<0x4006f624,0x00000000,0,unsigned>;
        ///CTX1E Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> ctx1e{}; 
        ///CRX1S Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> crx1s{}; 
        ///CTX0E Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> ctx0e{}; 
        ///CRX0S Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> crx0s{}; 
        ///ADTRG2 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> adtrg2s{}; 
        ///ADTRG1 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> adtrg1s{}; 
        ///ADTRG0 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> adtrg0s{}; 
        ///QZIN1S Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> qzin1s{}; 
        ///QBIN1S Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> qbin1s{}; 
        ///QAIN1S Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> qain1s{}; 
        ///QZIN0S Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> qzin0s{}; 
        ///QBIN0S Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> qbin0s{}; 
        ///QAIN0S Input Select bits$
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> qain0s{}; 
    }
    namespace Noneepfr10{    ///<Extended Pin Function Setting Register 10
        using Addr = Register::Address<0x4006f628,0x00000000,0,unsigned>;
        ///UEA24E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> uea24e{}; 
        ///UEA23E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> uea23e{}; 
        ///UEA22E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> uea22e{}; 
        ///UEA21E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> uea21e{}; 
        ///UEA20E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> uea20e{}; 
        ///UEA19E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> uea19e{}; 
        ///UEA18E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> uea18e{}; 
        ///UEA17E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> uea17e{}; 
        ///UEA16E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> uea16e{}; 
        ///UEA15E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> uea15e{}; 
        ///UEA14E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> uea14e{}; 
        ///UEA13E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uea13e{}; 
        ///UEA12E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uea12e{}; 
        ///UEA11E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> uea11e{}; 
        ///UEA10E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> uea10e{}; 
        ///UEA09E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> uea09e{}; 
        ///UEA08E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> uea08e{}; 
        ///UEAOOE Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ueaooe{}; 
        ///UECS7E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> uecs7e{}; 
        ///UECS6E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> uecs6e{}; 
        ///UECS5E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> uecs5e{}; 
        ///UECS4E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> uecs4e{}; 
        ///UECS3E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> uecs3e{}; 
        ///UECS2E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uecs2e{}; 
        ///UECS1E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uecs1e{}; 
        ///UEFLSE Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ueflse{}; 
        ///UEOEXE Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ueoexe{}; 
        ///UEDQME Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uedqme{}; 
        ///UEWEXE Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uewexe{}; 
        ///UECLKE Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ueclke{}; 
        ///UEDTHB Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uedthb{}; 
        ///UEDEFB Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uedefb{}; 
    }
    namespace Noneepfr11{    ///<Extended Pin Function Setting Register 11
        using Addr = Register::Address<0x4006f62c,0xfc000000,0,unsigned>;
        ///UERLC relocation select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> uerlc{}; 
        ///UED15B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ued15b{}; 
        ///UED14B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ued14b{}; 
        ///UED13B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ued13b{}; 
        ///UED12B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ued12b{}; 
        ///UED11B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ued11b{}; 
        ///UED10B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ued10b{}; 
        ///UED09B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ued09b{}; 
        ///UED08B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ued08b{}; 
        ///UED07B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ued07b{}; 
        ///UED06B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ued06b{}; 
        ///UED05B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ued05b{}; 
        ///UED04B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ued04b{}; 
        ///UED03B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ued03b{}; 
        ///UED02B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ued02b{}; 
        ///UED01B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ued01b{}; 
        ///UED00B Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ued00b{}; 
        ///UEA07E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uea07e{}; 
        ///UEA06E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uea06e{}; 
        ///UEA05E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uea05e{}; 
        ///UEA04E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> uea04e{}; 
        ///UEA03E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uea03e{}; 
        ///UEA02E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uea02e{}; 
        ///UEA01E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> uea01e{}; 
        ///UEA00E Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uecs0e{}; 
        ///UEALEE Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uealee{}; 
    }
    namespace Noneepfr12{    ///<Extended Pin Function Setting Register 12
        using Addr = Register::Address<0x4006f630,0xc0c3c0c3,0,unsigned>;
        ///TIOB11 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob11s{}; 
        ///TIOA11 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa11e{}; 
        ///TIOA11 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa11s{}; 
        ///TIOB10 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob10s{}; 
        ///TIOA10 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa10e{}; 
        ///TIOB9 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob9s{}; 
        ///TIOA9 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa9e{}; 
        ///TIOA9 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa9s{}; 
        ///TIOB8 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob8s{}; 
        ///TIOA8 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa8e{}; 
    }
    namespace Noneepfr13{    ///<Extended Pin Function Setting Register 13
        using Addr = Register::Address<0x4006f634,0xc0c3c0c3,0,unsigned>;
        ///TIOB15 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob15s{}; 
        ///TIOA15 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa15e{}; 
        ///TIOA15 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa15s{}; 
        ///TIOB14 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob14s{}; 
        ///TIOA14 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa14e{}; 
        ///TIOB13 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob13s{}; 
        ///TIOA13 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa13e{}; 
        ///TIOA13 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa13s{}; 
        ///TIOB12 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob12s{}; 
        ///TIOA12 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa12e{}; 
    }
    namespace Noneepfr14{    ///<Extended Pin Function Setting Register 14
        using Addr = Register::Address<0x4006f638,0xc003ffc0,0,unsigned>;
        ///Input cutoff Select bit in Standby of input Pin for Ethernet-MAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eSplc{}; 
        ///PPS0_PPS1 Output Select bit for Ethernet-MAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ePse{}; 
        ///E_COUT Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eCke{}; 
        ///E_MDO1 I/O Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eMd1b{}; 
        ///E_MDO0 I/O Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eMd0b{}; 
        ///E_MDC1 I/O Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eMc1b{}; 
        ///E_MDC0 Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eMc0e{}; 
        ///E_TXER0_TXEN1 Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eTe1e{}; 
        ///E_TXEN0 Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eTe0e{}; 
        ///E_TX02_TX10, E_TX03_TX11 Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eTd1e{}; 
        ///E_TX00, E_TX01 Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eTd0e{}; 
        ///QDU-ch.2 ZIN Input Pin bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> qzin2s{}; 
        ///QDU-ch.2 BIN Input Pin bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> qbin2s{}; 
        ///QDU-ch.2 AIN Input Pin bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> qain2s{}; 
    }
    namespace Noneepfr15{    ///<Extended Pin Function Setting Register 15
        using Addr = Register::Address<0x4006f63c,0x00000000,0,unsigned>;
        ///External Interrupt 31 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> eint31s{}; 
        ///External Interrupt 30 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eint30s{}; 
        ///External Interrupt 29 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> eint29s{}; 
        ///External Interrupt 28 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> eint28s{}; 
        ///External Interrupt 27 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> eint27s{}; 
        ///External Interrupt 26 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> eint26s{}; 
        ///External Interrupt 25 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eint25s{}; 
        ///External Interrupt 24 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> eint24s{}; 
        ///External Interrupt 23 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> eint23s{}; 
        ///External Interrupt 22 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> eint22s{}; 
        ///External Interrupt 21 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> eint21s{}; 
        ///External Interrupt 20 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> eint20s{}; 
        ///External Interrupt 19 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint19s{}; 
        ///External Interrupt 18 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint18s{}; 
        ///External Interrupt 17 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eint17s{}; 
        ///External Interrupt 16 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eint16s{}; 
    }
    namespace Noneepfr16{    ///<Extended Pin Function Setting Register 16
        using Addr = Register::Address<0x4006f640,0xc0000000,0,unsigned>;
        ///MFS ch.B I2C FastMode+ Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> sfmpbc{}; 
        ///MFS ch.A I2C FastMode+ Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sfmpac{}; 
        ///SCK11 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck11b{}; 
        ///SOT11 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot11b{}; 
        ///SIN11 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin11s{}; 
        ///SCK10 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck10b{}; 
        ///SOT10 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot10b{}; 
        ///SIN10 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin10s{}; 
        ///SCK9 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck9b{}; 
        ///SOT9 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot9b{}; 
        ///SIN9 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin9s{}; 
        ///SCK8 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck8b{}; 
        ///SOT8 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot8b{}; 
        ///SIN8 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin8s{}; 
        ///SCS7 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> scs7b{}; 
        ///SCS6 Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> scs6b{}; 
    }
    namespace Noneepfr17{    ///<Extended Pin Function Setting Register 17
        using Addr = Register::Address<0x4006f644,0xf000000f,0,unsigned>;
        ///SCK15 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck15b{}; 
        ///SOT15 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot15b{}; 
        ///SIN15 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin15s{}; 
        ///SCK14 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck14b{}; 
        ///SOT14 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot14b{}; 
        ///SIN14 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin14s{}; 
        ///SCK13 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck13b{}; 
        ///SOT13 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot13b{}; 
        ///SIN13 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin13s{}; 
        ///SCK12 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck12b{}; 
        ///SOT12 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot12b{}; 
        ///SIN12 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin12s{}; 
    }
    namespace Noneepfr18{    ///<Extended Pin Function Setting Register 18
        using Addr = Register::Address<0x4006f648,0xc0003c00,0,unsigned>;
        ///S_WP input select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> sdwps{}; 
        ///S_CD input select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sdcds{}; 
        ///S_CD input select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sddata3b{}; 
        ///S_CD input select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sddata2b{}; 
        ///S_CD input select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sddata1b{}; 
        ///S_CD input select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sddata0b{}; 
        ///S_CMD input/output select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sdcmdb{}; 
        ///S_CLK output select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sdclke{}; 
        ///QDU-ch3 ZIN input select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> qzin3s{}; 
        ///QDU-ch3 BIN input select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> qbin3s{}; 
        ///QDU-ch3 AIN input select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> qain3s{}; 
        ///CEC1 Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> cecr1b{}; 
        ///CEC0 Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cecr0b{}; 
    }
    namespace Noneepfr19{    ///<Extended Pin Function Setting Register 19
        using Addr = Register::Address<0x4006f64c,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr20{    ///<Extended Pin Function Setting Register 20
        using Addr = Register::Address<0x4006f650,0xfe000000,0,unsigned>;
        ///UED31B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ued31b{}; 
        ///UED30B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ued30b{}; 
        ///UED29B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ued29b{}; 
        ///UED28B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ued28b{}; 
        ///UED27B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ued27b{}; 
        ///UED26B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ued26b{}; 
        ///UED25B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ued25b{}; 
        ///UED24B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ued24b{}; 
        ///UED23B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ued23b{}; 
        ///UED22B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ued22b{}; 
        ///UED21B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ued21b{}; 
        ///UED20B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ued20b{}; 
        ///UED19B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ued19b{}; 
        ///UED18B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ued18b{}; 
        ///UED17B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ued17b{}; 
        ///UED16B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ued16b{}; 
        ///UEDTHHB input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uedthhb{}; 
        ///UEDQM3E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uedqm3e{}; 
        ///UEDQM2E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uedqm2e{}; 
        ///UECSXE output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> uecsxe{}; 
        ///UEDWEXE output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uedwexe{}; 
        ///UECASE output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uecase{}; 
        ///UERASE output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> uerase{}; 
        ///UESMCEE output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uesmcee{}; 
        ///UESMCKE output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uesmcke{}; 
    }
    namespace Noneepfr21{    ///<Extended Pin Function Setting Register 21
        using Addr = Register::Address<0x4006f654,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr22{    ///<Extended Pin Function Setting Register 22
        using Addr = Register::Address<0x4006f658,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr23{    ///<Extended Pin Function Setting Register 23
        using Addr = Register::Address<0x4006f65c,0xffff0000,0,unsigned>;
        ///SCS73 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> scs73e{}; 
        ///SCS72 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> scs72e{}; 
        ///SCS71 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> scs71e{}; 
        ///SCS70 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> scs70e{}; 
        ///SCS63 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> scs63e{}; 
        ///SCS62 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> scs62e{}; 
        ///SCS61 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> scs61e{}; 
        ///SCS60 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> scs60e{}; 
    }
    namespace Noneepfr24{    ///<Extended Pin Function Setting Register 24
        using Addr = Register::Address<0x4006f660,0xfffff000,0,unsigned>;
        ///I2SDO0 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> i2sm4Sdo0e{}; 
        ///I2SDI0 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> i2sm4Sdi0s{}; 
        ///I2SWS0 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> i2sm4Ws0b{}; 
        ///I2SCK0 Input/Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> i2sm4Sck0b{}; 
        ///I2SMCLK0 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> i2sm4Mclk0e{}; 
        ///I2SMCLK0 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> i2sm4Mclk0s{}; 
    }
    namespace Noneepfr25{    ///<Extended Pin Function Setting Register 25
        using Addr = Register::Address<0x4006f664,0xfffffff0,0,unsigned>;
        ///TX2 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mctx2e{}; 
        ///RX2 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mcrx2s{}; 
    }
    namespace Noneepfr26{    ///<Extended Pin Function Setting Register 26
        using Addr = Register::Address<0x4006f668,0xfffc0000,0,unsigned>;
        ///Q_IO3 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> qIo3b{}; 
        ///Q_IO2 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> qIo2b{}; 
        ///Q_IO1 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> qIo1b{}; 
        ///Q_IO0 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> qIo0b{}; 
        ///Q_CS3 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> qCs3e{}; 
        ///Q_CS2 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> qCs2e{}; 
        ///Q_CS1 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> qCs1e{}; 
        ///Q_CS0 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> qCs0e{}; 
        ///Q_SCK Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> qScke{}; 
    }
    namespace Nonepzr0{    ///<Port Pseudo Open Drain Setting Register 0
        using Addr = Register::Address<0x4006f700,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr1{    ///<Port Pseudo Open Drain Setting Register 1
        using Addr = Register::Address<0x4006f704,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr2{    ///<Port Pseudo Open Drain Setting Register 2
        using Addr = Register::Address<0x4006f708,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr3{    ///<Port Pseudo Open Drain Setting Register 3
        using Addr = Register::Address<0x4006f70c,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr4{    ///<Port Pseudo Open Drain Setting Register 4
        using Addr = Register::Address<0x4006f710,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr5{    ///<Port Pseudo Open Drain Setting Register 5
        using Addr = Register::Address<0x4006f714,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr6{    ///<Port Pseudo Open Drain Setting Register 6
        using Addr = Register::Address<0x4006f718,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr7{    ///<Port Pseudo Open Drain Setting Register 7
        using Addr = Register::Address<0x4006f71c,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr8{    ///<Port Pseudo Open Drain Setting Register 8
        using Addr = Register::Address<0x4006f720,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr9{    ///<Port Pseudo Open Drain Setting Register 9
        using Addr = Register::Address<0x4006f724,0xffffffff,0,unsigned>;
    }
    namespace Nonepzra{    ///<Port Pseudo Open Drain Setting Register A
        using Addr = Register::Address<0x4006f728,0xffffffff,0,unsigned>;
    }
    namespace Nonepzrb{    ///<Port Pseudo Open Drain Setting Register B
        using Addr = Register::Address<0x4006f72c,0xffffffff,0,unsigned>;
    }
    namespace Nonepzrc{    ///<Port Pseudo Open Drain Setting Register C
        using Addr = Register::Address<0x4006f730,0xffffffff,0,unsigned>;
    }
    namespace Nonepzrd{    ///<Port Pseudo Open Drain Setting Register D
        using Addr = Register::Address<0x4006f734,0xffffffff,0,unsigned>;
    }
    namespace Nonepzre{    ///<Port Pseudo Open Drain Setting Register E
        using Addr = Register::Address<0x4006f738,0xffffffff,0,unsigned>;
    }
    namespace Nonepzrf{    ///<Port Pseudo Open Drain Setting Register F
        using Addr = Register::Address<0x4006f73c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdsr0{    ///</dr
        using Addr = Register::Address<0x4006f740,0xffffffff,0,unsigned>;
    }
    namespace Nonepdsr1{    ///</dr
        using Addr = Register::Address<0x4006f744,0xffffffff,0,unsigned>;
    }
    namespace Nonepdsr2{    ///</dr
        using Addr = Register::Address<0x4006f748,0xffffffff,0,unsigned>;
    }
    namespace Nonepdsr3{    ///</dr
        using Addr = Register::Address<0x4006f74c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdsr4{    ///</dr
        using Addr = Register::Address<0x4006f750,0xffffffff,0,unsigned>;
    }
    namespace Nonepdsr5{    ///</dr
        using Addr = Register::Address<0x4006f754,0xffffffff,0,unsigned>;
    }
    namespace Nonepdsr6{    ///</dr
        using Addr = Register::Address<0x4006f758,0xffffffff,0,unsigned>;
    }
    namespace Nonepdsr7{    ///</dr
        using Addr = Register::Address<0x4006f75c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdsr8{    ///</dr
        using Addr = Register::Address<0x4006f760,0xffffffff,0,unsigned>;
    }
    namespace Nonepdsr9{    ///</dr
        using Addr = Register::Address<0x4006f764,0xffffffff,0,unsigned>;
    }
    namespace Nonepdsra{    ///</dr
        using Addr = Register::Address<0x4006f768,0xffffffff,0,unsigned>;
    }
    namespace Nonepdsrb{    ///</dr
        using Addr = Register::Address<0x4006f76c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdsrc{    ///</dr
        using Addr = Register::Address<0x4006f770,0xffffffff,0,unsigned>;
    }
    namespace Nonepdsrd{    ///</dr
        using Addr = Register::Address<0x4006f774,0xffffffff,0,unsigned>;
    }
    namespace Nonepdsre{    ///</dr
        using Addr = Register::Address<0x4006f778,0xffffffff,0,unsigned>;
    }
    namespace Nonepdsrf{    ///</dr
        using Addr = Register::Address<0x4006f77c,0xffffffff,0,unsigned>;
    }
}
