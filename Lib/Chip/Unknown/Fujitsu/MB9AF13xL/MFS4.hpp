#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Multi-function Serial Interface 4
    namespace NoneuartScr{    ///<Serial Control Register
        using Addr = Register::Address<0x40038401,0xffffff60,0,unsigned char>;
        ///Programmable Clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> upcl{}; 
        ///Received interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rie{}; 
        ///Transmit interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tie{}; 
        ///Transmit bus idle interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbie{}; 
        ///Received operation enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxe{}; 
        ///Transmission operation enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txe{}; 
    }
    namespace NoneuartSmr{    ///<Serial Mode Register
        using Addr = Register::Address<0x40038400,0xffffff02,0,unsigned char>;
        ///Operation mode set bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        ///Wake-up control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wucr{}; 
        ///Stop bit length select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sbl{}; 
        ///Transfer direction select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bds{}; 
        ///Serial data output enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> soe{}; 
    }
    namespace NoneuartSsr{    ///<Serial Status Register
        using Addr = Register::Address<0x40038405,0xffffff40,0,unsigned char>;
        ///Received error flag clear bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rec{}; 
        ///Parity error flag bit (only functions in operation mode 0) 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe{}; 
        ///Framing error flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fre{}; 
        ///Overrun error flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ore{}; 
        ///Received data full flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rdrf{}; 
        ///Transmit data empty flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tdre{}; 
        ///Transmit bus idle flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tbi{}; 
    }
    namespace NoneuartEscr{    ///<Extended Communication Control Register
        using Addr = Register::Address<0x40038404,0xffffff00,0,unsigned char>;
        ///Flow control enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> flwen{}; 
        ///Extension stop bit length select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> esbl{}; 
        ///Inverted serial data format bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> inv{}; 
        ///Parity enable bit (only functions in operation mode 0) 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pen{}; 
        ///Parity select bit (only functions in operation mode 0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p{}; 
        ///Data length select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> l{}; 
    }
    namespace NoneuartRdr{    ///<Received Data Register
        using Addr = Register::Address<0x40038408,0xffffffff,0,unsigned>;
    }
    namespace NoneuartTdr{    ///<Transmit Data Register
        using Addr = Register::Address<0x40038408,0xffffffff,0,unsigned>;
    }
    namespace NoneuartBgr{    ///<Baud Rate Generator Registers
        using Addr = Register::Address<0x4003840c,0xffff0000,0,unsigned>;
        ///External clock select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Baud Rate Generator Registers 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        ///Baud Rate Generator Registers 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
    }
    namespace NonecsioScr{    ///<Serial Control Register
        using Addr = Register::Address<0x40038401,0xffffff00,0,unsigned char>;
        ///Programmable clear bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> upcl{}; 
        ///Master/Slave function select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ms{}; 
        ///SPI corresponding bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> spi{}; 
        ///Received interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rie{}; 
        ///Transmit interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tie{}; 
        ///Transmit bus idle interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbie{}; 
        ///Data received enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxe{}; 
        ///Data transmission enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txe{}; 
    }
    namespace NonecsioSmr{    ///<Serial Mode Register
        using Addr = Register::Address<0x40038400,0xffffff00,0,unsigned char>;
        ///Operation mode set bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        ///Wake-up control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wucr{}; 
        ///Serial clock invert bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> scinv{}; 
        ///Transfer direction select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bds{}; 
        ///Master mode serial clock output enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scke{}; 
        ///Serial data output enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> soe{}; 
    }
    namespace NonecsioSsr{    ///<Serial Status Register
        using Addr = Register::Address<0x40038405,0xffffff70,0,unsigned char>;
        ///Received error flag clear bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rec{}; 
        ///Overrun error flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ore{}; 
        ///Received data full flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rdrf{}; 
        ///Transmit data empty flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tdre{}; 
        ///Transmit bus idle flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tbi{}; 
    }
    namespace NonecsioEscr{    ///<Extended Communication Control Register
        using Addr = Register::Address<0x40038404,0xffffff60,0,unsigned char>;
        ///Serial output pin set bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sop{}; 
        ///Data transmit/received wait select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> wt{}; 
        ///Data length select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> l{}; 
    }
    namespace NonecsioRdr{    ///<Received Data Register
        using Addr = Register::Address<0x40038408,0xffffffff,0,unsigned>;
    }
    namespace NonecsioTdr{    ///<Transmit Data Register
        using Addr = Register::Address<0x40038408,0xffffffff,0,unsigned>;
    }
    namespace NonecsioBgr{    ///<Baud Rate Generator Registers
        using Addr = Register::Address<0x4003840c,0xffff8000,0,unsigned>;
        ///Baud Rate Generator Registers 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        ///Baud Rate Generator Registers 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
    }
    namespace Nonei2cIbcr{    ///<I2C Bus Control Register
        using Addr = Register::Address<0x40038401,0xffffff00,0,unsigned char>;
        ///Master/slave select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mss{}; 
        ///Operation flag/iteration start condition generation bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> actScc{}; 
        ///Data byte acknowledge enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> acke{}; 
        ///Wait selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wsel{}; 
        ///Condition detection interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cnde{}; 
        ///Interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> inte{}; 
        ///Bus error flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ber{}; 
        ///interrupt flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> int_{}; 
    }
    namespace Nonei2cSmr{    ///<Serial Mode Register
        using Addr = Register::Address<0x40038400,0xffffff03,0,unsigned char>;
        ///operation mode set bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        ///Wake-up control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wucr{}; 
        ///Received interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rie{}; 
        ///Transmit interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tie{}; 
    }
    namespace Nonei2cIbsr{    ///<I2C Bus Status Register
        using Addr = Register::Address<0x40038404,0xffffff00,0,unsigned char>;
        ///First byte bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fbt{}; 
        ///Acknowledge flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rack{}; 
        ///Reserved address detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rsa{}; 
        ///Data direction bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> trx{}; 
        ///Arbitration lost bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> al{}; 
        ///Iteration start condition check bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rsc{}; 
        ///Stop condition check bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> spc{}; 
        ///Bus state bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bb{}; 
    }
    namespace Nonei2cSsr{    ///<Serial Status Register 
        using Addr = Register::Address<0x40038405,0xffffff00,0,unsigned char>;
        ///Received error flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rec{}; 
        ///Transmit empty flag set bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tset{}; 
        ///DMA mode enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Transmit bus idle interrupt enable bit (Effective only when DMA mode is enabled) 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tbie{}; 
        ///Overrun error flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ore{}; 
        ///Received data full flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rdrf{}; 
        ///Transmit data empty flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tdre{}; 
        ///Transmit bus idle flag bit (Effective only when DMA mode is enabled) 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tbi{}; 
    }
    namespace Nonei2cRdr{    ///<Received Data Register
        using Addr = Register::Address<0x40038408,0xffffffff,0,unsigned>;
    }
    namespace Nonei2cTdr{    ///<Transmit Data Register
        using Addr = Register::Address<0x40038408,0xffffffff,0,unsigned>;
    }
    namespace Nonei2cIsmk{    ///<7-bit Slave Address Mask Register
        using Addr = Register::Address<0x40038411,0xffffff00,0,unsigned char>;
        ///I2C interface operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> en{}; 
        ///Slave address mask bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> sm{}; 
    }
    namespace Nonei2cIsba{    ///<7-bit Slave Address Register
        using Addr = Register::Address<0x40038410,0xffffff00,0,unsigned char>;
        ///Slave address enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> saen{}; 
        ///7-bit slave address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> sa{}; 
    }
    namespace Nonei2cBgr{    ///<Baud Rate Generator Registers
        using Addr = Register::Address<0x4003840c,0xffff8000,0,unsigned>;
        ///Baud Rate Generator Registers 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        ///Baud Rate Generator Registers 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
    }
}
