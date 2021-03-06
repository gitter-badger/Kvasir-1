#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System configuration controller
    namespace Nonecfgr1{    ///<configuration register 1
        using Addr = Register::Address<0x40010000,0x02c007fc,0,unsigned>;
        ///Memory mapping selection
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> memMode{}; 
        ///TIM16 DMA request remapping
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tim16DmaRmp{}; 
        ///TIM17 DMA request remapping
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tim17DmaRmp{}; 
        ///TIM6 and DAC1 DMA request remapping
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim6Dac1DmaRmp{}; 
        ///TIM7 and DAC2 DMA request remapping
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tim7Dac2DmaRmp{}; 
        ///TIM18 and DAC3 DMA request remapping
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tim18Dac3DmaRmp{}; 
        ///Fast Mode Plus (FM+) driving capability
              activation bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> i2cPb6Fm{}; 
        ///Fast Mode Plus (FM+) driving capability
              activation bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> i2cPb7Fm{}; 
        ///Fast Mode Plus (FM+) driving capability
              activation bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> i2cPb8Fm{}; 
        ///Fast Mode Plus (FM+) driving capability
              activation bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> i2cPb9Fm{}; 
        ///I2C1 Fast Mode Plus
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> i2c1Fm{}; 
        ///I2C2 Fast Mode Plus
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c2Fm{}; 
        ///VBAT monitoring enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> vbatMon{}; 
        ///Interrupt enable bits from
              FPU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> fpuIt{}; 
    }
    namespace Noneexticr1{    ///<external interrupt configuration register
          1
        using Addr = Register::Address<0x40010008,0xffff0000,0,unsigned>;
        ///EXTI 3 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti3{}; 
        ///EXTI 2 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti2{}; 
        ///EXTI 1 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti1{}; 
        ///EXTI 0 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti0{}; 
    }
    namespace Noneexticr2{    ///<external interrupt configuration register
          2
        using Addr = Register::Address<0x4001000c,0xffff0000,0,unsigned>;
        ///EXTI 7 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti7{}; 
        ///EXTI 6 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti6{}; 
        ///EXTI 5 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti5{}; 
        ///EXTI 4 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti4{}; 
    }
    namespace Noneexticr3{    ///<external interrupt configuration register
          3
        using Addr = Register::Address<0x40010010,0xffff0000,0,unsigned>;
        ///EXTI 11 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti11{}; 
        ///EXTI 10 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti10{}; 
        ///EXTI 9 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti9{}; 
        ///EXTI 8 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti8{}; 
    }
    namespace Noneexticr4{    ///<external interrupt configuration register
          4
        using Addr = Register::Address<0x40010014,0xffff0000,0,unsigned>;
        ///EXTI 15 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti15{}; 
        ///EXTI 14 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti14{}; 
        ///EXTI 13 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti13{}; 
        ///EXTI 12 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti12{}; 
    }
    namespace Nonecfgr2{    ///<configuration register 2
        using Addr = Register::Address<0x40010018,0xfffffef8,0,unsigned>;
        ///SRAM parity flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sramPef{}; 
        ///PVD lock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pvdLock{}; 
        ///SRAM parity lock bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sramParityLock{}; 
        ///Cortex-M4 LOCKUP bit enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> locupLock{}; 
    }
}
