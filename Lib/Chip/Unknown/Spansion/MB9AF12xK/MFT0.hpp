#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral MFT0 
    namespace NonefrtTcsa0{    ///< register FRT_TCSA0 
        using Addr = Register::Address<0x40020030,0xffff1c00,0,unsigned>;
        /// bitfield CLK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> clk{}; 
        /// bitfield SCLR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sclr{}; 
        /// bitfield MODE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mode{}; 
        /// bitfield STOP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stop{}; 
        /// bitfield BFE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bfe{}; 
        /// bitfield ICRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> icre{}; 
        /// bitfield ICLR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> iclr{}; 
        /// bitfield IRQZE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> irqze{}; 
        /// bitfield IRQZF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> irqzf{}; 
        /// bitfield ECKE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ecke{}; 
    }
    namespace NonefrtTcsa1{    ///< register FRT_TCSA1 
        using Addr = Register::Address<0x40020040,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcsa2{    ///< register FRT_TCSA2 
        using Addr = Register::Address<0x40020050,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcsb0{    ///< register FRT_TCSB0 
        using Addr = Register::Address<0x40020034,0xfffffffe,0,unsigned>;
        /// bitfield AD0E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ad0e{}; 
    }
    namespace NonefrtTcsb1{    ///< register FRT_TCSB1 
        using Addr = Register::Address<0x40020044,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcsb2{    ///< register FRT_TCSB2 
        using Addr = Register::Address<0x40020054,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTccp0{    ///< register FRT_TCCP0 
        using Addr = Register::Address<0x40020028,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTccp1{    ///< register FRT_TCCP1 
        using Addr = Register::Address<0x40020038,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTccp2{    ///< register FRT_TCCP2 
        using Addr = Register::Address<0x40020048,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcdt0{    ///< register FRT_TCDT0 
        using Addr = Register::Address<0x4002002c,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcdt1{    ///< register FRT_TCDT1 
        using Addr = Register::Address<0x4002003c,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcdt2{    ///< register FRT_TCDT2 
        using Addr = Register::Address<0x4002004c,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcfs10{    ///< register OCU_OCFS10 
        using Addr = Register::Address<0x40020058,0xffffff00,0,unsigned char>;
        /// bitfield FSO0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fso0{}; 
        /// bitfield FSO1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> fso1{}; 
    }
    namespace NoneocuOcfs32{    ///< register OCU_OCFS32 
        using Addr = Register::Address<0x40020059,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcfs54{    ///< register OCU_OCFS54 
        using Addr = Register::Address<0x4002005c,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcsa10{    ///< register OCU_OCSA10 
        using Addr = Register::Address<0x40020018,0xffffff00,0,unsigned char>;
        /// bitfield CST0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cst0{}; 
        /// bitfield CST1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cst1{}; 
        /// bitfield BDIS0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bdis0{}; 
        /// bitfield BDIS1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bdis1{}; 
        /// bitfield IOE0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ioe0{}; 
        /// bitfield IOE1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ioe1{}; 
        /// bitfield IOP0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> iop0{}; 
        /// bitfield IOP1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iop1{}; 
    }
    namespace NoneocuOcsa32{    ///< register OCU_OCSA32 
        using Addr = Register::Address<0x4002001c,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcsa54{    ///< register OCU_OCSA54 
        using Addr = Register::Address<0x40020020,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcsb10{    ///< register OCU_OCSB10 
        using Addr = Register::Address<0x40020019,0xffffff8c,0,unsigned char>;
        /// bitfield OTD0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otd0{}; 
        /// bitfield OTD1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> otd1{}; 
        /// bitfield CMOD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cmod{}; 
        /// bitfield BTS0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bts0{}; 
        /// bitfield BTS1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bts1{}; 
    }
    namespace NoneocuOcsb32{    ///< register OCU_OCSB32 
        using Addr = Register::Address<0x4002001d,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcsb54{    ///< register OCU_OCSB54 
        using Addr = Register::Address<0x40020021,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcsc{    ///< register OCU_OCSC 
        using Addr = Register::Address<0x40020024,0xffffc0ff,0,unsigned>;
        /// bitfield MOD0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mod0{}; 
        /// bitfield MOD1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mod1{}; 
        /// bitfield MOD2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mod2{}; 
        /// bitfield MOD3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mod3{}; 
        /// bitfield MOD4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mod4{}; 
        /// bitfield MOD5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mod5{}; 
    }
    namespace NoneocuOccp0{    ///< register OCU_OCCP0 
        using Addr = Register::Address<0x40020000,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOccp1{    ///< register OCU_OCCP1 
        using Addr = Register::Address<0x40020004,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOccp2{    ///< register OCU_OCCP2 
        using Addr = Register::Address<0x40020008,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOccp3{    ///< register OCU_OCCP3 
        using Addr = Register::Address<0x4002000c,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOccp4{    ///< register OCU_OCCP4 
        using Addr = Register::Address<0x40020010,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOccp5{    ///< register OCU_OCCP5 
        using Addr = Register::Address<0x40020014,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWfsa10{    ///< register WFG_WFSA10 
        using Addr = Register::Address<0x4002008c,0xffffe000,0,unsigned>;
        /// bitfield DCK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dck{}; 
        /// bitfield TMD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> tmd{}; 
        /// bitfield GTEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> gten{}; 
        /// bitfield PSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psel{}; 
        /// bitfield PGEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pgen{}; 
        /// bitfield DMOD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dmod{}; 
    }
    namespace NonewfgWfsa32{    ///< register WFG_WFSA32 
        using Addr = Register::Address<0x40020090,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWfsa54{    ///< register WFG_WFSA54 
        using Addr = Register::Address<0x40020094,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWftm10{    ///< register WFG_WFTM10 
        using Addr = Register::Address<0x40020080,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWftm32{    ///< register WFG_WFTM32 
        using Addr = Register::Address<0x40020084,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWftm54{    ///< register WFG_WFTM54 
        using Addr = Register::Address<0x40020088,0xffffffff,0,unsigned>;
    }
    namespace NonewfgNzcl{    ///< register WFG_NZCL 
        using Addr = Register::Address<0x4002009c,0xffffffe0,0,unsigned>;
        /// bitfield DTIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtie{}; 
        /// bitfield NWS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> nws{}; 
        /// bitfield SDTI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sdti{}; 
    }
    namespace NonewfgWfir{    ///< register WFG_WFIR 
        using Addr = Register::Address<0x40020098,0xffff000c,0,unsigned>;
        /// bitfield DTIF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtif{}; 
        /// bitfield DTIC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dtic{}; 
        /// bitfield TMIF10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tmif10{}; 
        /// bitfield TMIC10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tmic10{}; 
        /// bitfield TMIE10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tmie10{}; 
        /// bitfield TMIS10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tmis10{}; 
        /// bitfield TMIF32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tmif32{}; 
        /// bitfield TMIC32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tmic32{}; 
        /// bitfield TMIE32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tmie32{}; 
        /// bitfield TMIS32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tmis32{}; 
        /// bitfield TMIF54 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tmif54{}; 
        /// bitfield TMIC54 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tmic54{}; 
        /// bitfield TMIE54 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tmie54{}; 
        /// bitfield TMIS54 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tmis54{}; 
    }
    namespace NoneicuIcfs10{    ///< register ICU_ICFS10 
        using Addr = Register::Address<0x40020060,0xffffff00,0,unsigned char>;
        /// bitfield FSI0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fsi0{}; 
        /// bitfield FSI1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> fsi1{}; 
    }
    namespace NoneicuIcfs32{    ///< register ICU_ICFS32 
        using Addr = Register::Address<0x40020061,0xffffffff,0,unsigned>;
    }
    namespace NoneicuIcsa10{    ///< register ICU_ICSA10 
        using Addr = Register::Address<0x40020078,0xffffff00,0,unsigned char>;
        /// bitfield EG0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eg0{}; 
        /// bitfield EG1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eg1{}; 
        /// bitfield ICE0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ice0{}; 
        /// bitfield ICE1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ice1{}; 
        /// bitfield ICP0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> icp0{}; 
        /// bitfield ICP1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> icp1{}; 
    }
    namespace NoneicuIcsa32{    ///< register ICU_ICSA32 
        using Addr = Register::Address<0x4002007c,0xffffffff,0,unsigned>;
    }
    namespace NoneicuIcsb10{    ///< register ICU_ICSB10 
        using Addr = Register::Address<0x40020079,0xfffffffc,0,unsigned char>;
        /// bitfield IEI0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> iei0{}; 
        /// bitfield IEI1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iei1{}; 
    }
    namespace NoneicuIcsb32{    ///< register ICU_ICSB32 
        using Addr = Register::Address<0x4002007d,0xffffffff,0,unsigned>;
    }
    namespace NoneicuIccp0{    ///< register ICU_ICCP0 
        using Addr = Register::Address<0x40020068,0xffffffff,0,unsigned>;
    }
    namespace NoneicuIccp1{    ///< register ICU_ICCP1 
        using Addr = Register::Address<0x4002006c,0xffffffff,0,unsigned>;
    }
    namespace NoneicuIccp2{    ///< register ICU_ICCP2 
        using Addr = Register::Address<0x40020070,0xffffffff,0,unsigned>;
    }
    namespace NoneicuIccp3{    ///< register ICU_ICCP3 
        using Addr = Register::Address<0x40020074,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcsa{    ///< register ADCMP_ACSA 
        using Addr = Register::Address<0x400200bc,0xffffc0c0,0,unsigned>;
        /// bitfield CE0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ce0{}; 
        /// bitfield CE1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ce1{}; 
        /// bitfield CE2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ce2{}; 
        /// bitfield SEL0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sel0{}; 
        /// bitfield SEL1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sel1{}; 
        /// bitfield SEL2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sel2{}; 
    }
    namespace NoneadcmpAcsb{    ///< register ADCMP_ACSB 
        using Addr = Register::Address<0x400200b8,0xffffff88,0,unsigned char>;
        /// bitfield BDIS0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bdis0{}; 
        /// bitfield BDIS1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bdis1{}; 
        /// bitfield BDIS2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bdis2{}; 
        /// bitfield BTS0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bts0{}; 
        /// bitfield BTS1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bts1{}; 
        /// bitfield BTS2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bts2{}; 
    }
    namespace NoneadcmpAccp0{    ///< register ADCMP_ACCP0 
        using Addr = Register::Address<0x400200a0,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAccp1{    ///< register ADCMP_ACCP1 
        using Addr = Register::Address<0x400200a8,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAccp2{    ///< register ADCMP_ACCP2 
        using Addr = Register::Address<0x400200b0,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAccpdn0{    ///< register ADCMP_ACCPDN0 
        using Addr = Register::Address<0x400200a4,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAccpdn1{    ///< register ADCMP_ACCPDN1 
        using Addr = Register::Address<0x400200ac,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAccpdn2{    ///< register ADCMP_ACCPDN2 
        using Addr = Register::Address<0x400200b4,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAtsa{    ///< register ADCMP_ATSA 
        using Addr = Register::Address<0x400200c0,0xfffffcfc,0,unsigned>;
        /// bitfield AD0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ad0s{}; 
        /// bitfield AD0P 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> ad0p{}; 
    }
}
