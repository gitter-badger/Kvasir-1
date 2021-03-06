#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Real-time clock
    namespace Nonetr{    ///<time register
        using Addr = Register::Address<0x40002800,0xff808080,0,unsigned>;
        ///AM/PM notation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pm{}; 
        ///Hour tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ht{}; 
        ///Hour units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> hu{}; 
        ///Minute tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> mnt{}; 
        ///Minute units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mnu{}; 
        ///Second tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> st{}; 
        ///Second units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> su{}; 
    }
    namespace Nonedr{    ///<date register
        using Addr = Register::Address<0x40002804,0xff0000c0,0,unsigned>;
        ///Year tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> yt{}; 
        ///Year units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> yu{}; 
        ///Week day units
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> wdu{}; 
        ///Month tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mt{}; 
        ///Month units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mu{}; 
        ///Date tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> dt{}; 
        ///Date units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> du{}; 
    }
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x40002808,0xff080020,0,unsigned>;
        ///Calibration output enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> coe{}; 
        ///Output selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> osel{}; 
        ///Output polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pol{}; 
        ///Backup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> bkp{}; 
        ///Subtract 1 hour (winter time
              change)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> sub1h{}; 
        ///Add 1 hour (summer time
              change)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> add1h{}; 
        ///Time-stamp interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tsie{}; 
        ///Wakeup timer interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wutie{}; 
        ///Alarm B interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> alrbie{}; 
        ///Alarm A interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> alraie{}; 
        ///Time stamp enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tse{}; 
        ///Wakeup timer enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wute{}; 
        ///Alarm B enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> alrbe{}; 
        ///Alarm A enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> alrae{}; 
        ///Coarse digital calibration
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dce{}; 
        ///Hour format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fmt{}; 
        ///Reference clock detection enable (50 or
              60 Hz)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> refckon{}; 
        ///Time-stamp event active
              edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tsedge{}; 
        ///Wakeup clock selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> wcksel{}; 
    }
    namespace Noneisr{    ///<initialization and status
          register
        using Addr = Register::Address<0x4000280c,0xffffc008,0,unsigned>;
        ///Tamper detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tamp1f{}; 
        ///Time-stamp overflow flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tsovf{}; 
        ///Time-stamp flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tsf{}; 
        ///Wakeup timer flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wutf{}; 
        ///Alarm B flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> alrbf{}; 
        ///Alarm A flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> alraf{}; 
        ///Initialization mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> init{}; 
        ///Initialization flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> initf{}; 
        ///Registers synchronization
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rsf{}; 
        ///Initialization status flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> inits{}; 
        ///Wakeup timer write flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wutwf{}; 
        ///Alarm B write flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alrbwf{}; 
        ///Alarm A write flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> alrawf{}; 
    }
    namespace Noneprer{    ///<prescaler register
        using Addr = Register::Address<0x40002810,0xff80e000,0,unsigned>;
        ///Asynchronous prescaler
              factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> predivA{}; 
        ///Synchronous prescaler
              factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> predivS{}; 
    }
    namespace Nonewutr{    ///<wakeup timer register
        using Addr = Register::Address<0x40002814,0xffff0000,0,unsigned>;
        ///Wakeup auto-reload value
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wut{}; 
    }
    namespace Nonecalibr{    ///<calibration register
        using Addr = Register::Address<0x40002818,0xffffff60,0,unsigned>;
        ///Digital calibration sign
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dcs{}; 
        ///Digital calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dc{}; 
    }
    namespace Nonealrmar{    ///<alarm A register
        using Addr = Register::Address<0x4000281c,0x00000000,0,unsigned>;
        ///Alarm A date mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> msk4{}; 
        ///Week day selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> wdsel{}; 
        ///Date tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> dt{}; 
        ///Date units or day in BCD
              format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> du{}; 
        ///Alarm A hours mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> msk3{}; 
        ///AM/PM notation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pm{}; 
        ///Hour tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ht{}; 
        ///Hour units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> hu{}; 
        ///Alarm A minutes mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msk2{}; 
        ///Minute tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> mnt{}; 
        ///Minute units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mnu{}; 
        ///Alarm A seconds mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msk1{}; 
        ///Second tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> st{}; 
        ///Second units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> su{}; 
    }
    namespace Nonealrmbr{    ///<alarm B register
        using Addr = Register::Address<0x40002820,0x00000000,0,unsigned>;
        ///Alarm B date mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> msk4{}; 
        ///Week day selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> wdsel{}; 
        ///Date tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> dt{}; 
        ///Date units or day in BCD
              format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> du{}; 
        ///Alarm B hours mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> msk3{}; 
        ///AM/PM notation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pm{}; 
        ///Hour tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ht{}; 
        ///Hour units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> hu{}; 
        ///Alarm B minutes mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msk2{}; 
        ///Minute tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> mnt{}; 
        ///Minute units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mnu{}; 
        ///Alarm B seconds mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msk1{}; 
        ///Second tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> st{}; 
        ///Second units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> su{}; 
    }
    namespace Nonewpr{    ///<write protection register
        using Addr = Register::Address<0x40002824,0xffffff00,0,unsigned>;
        ///Write protection key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace Nonetstr{    ///<time stamp time register
        using Addr = Register::Address<0x40002830,0xff808080,0,unsigned>;
        ///Second units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> su{}; 
        ///Second tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> st{}; 
        ///Minute units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mnu{}; 
        ///Minute tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> mnt{}; 
        ///Hour units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> hu{}; 
        ///Hour tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ht{}; 
        ///AM/PM notation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pm{}; 
    }
    namespace Nonetsdr{    ///<time stamp date register
        using Addr = Register::Address<0x40002834,0xffff00c0,0,unsigned>;
        ///Week day units
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> wdu{}; 
        ///Month tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mt{}; 
        ///Month units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mu{}; 
        ///Date tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> dt{}; 
        ///Date units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> du{}; 
    }
    namespace Nonetafcr{    ///<tamper and alternate function configuration
          register
        using Addr = Register::Address<0x40002840,0xfff8fff8,0,unsigned>;
        ///AFO_ALARM output type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> alarmouttype{}; 
        ///TIMESTAMP mapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tsinsel{}; 
        ///TAMPER1 mapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tamp1insel{}; 
        ///Tamper interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tampie{}; 
        ///Active level for tamper 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tamp1trg{}; 
        ///Tamper 1 detection enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tamp1e{}; 
    }
    namespace Nonebkp0r{    ///<backup register
        using Addr = Register::Address<0x40002850,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp1r{    ///<backup register
        using Addr = Register::Address<0x40002854,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp2r{    ///<backup register
        using Addr = Register::Address<0x40002858,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp3r{    ///<backup register
        using Addr = Register::Address<0x4000285c,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp4r{    ///<backup register
        using Addr = Register::Address<0x40002860,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp5r{    ///<backup register
        using Addr = Register::Address<0x40002864,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp6r{    ///<backup register
        using Addr = Register::Address<0x40002868,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp7r{    ///<backup register
        using Addr = Register::Address<0x4000286c,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp8r{    ///<backup register
        using Addr = Register::Address<0x40002870,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp9r{    ///<backup register
        using Addr = Register::Address<0x40002874,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp10r{    ///<backup register
        using Addr = Register::Address<0x40002878,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp11r{    ///<backup register
        using Addr = Register::Address<0x4000287c,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp12r{    ///<backup register
        using Addr = Register::Address<0x40002880,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp13r{    ///<backup register
        using Addr = Register::Address<0x40002884,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp14r{    ///<backup register
        using Addr = Register::Address<0x40002888,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp15r{    ///<backup register
        using Addr = Register::Address<0x4000288c,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp16r{    ///<backup register
        using Addr = Register::Address<0x40002890,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp17r{    ///<backup register
        using Addr = Register::Address<0x40002894,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp18r{    ///<backup register
        using Addr = Register::Address<0x40002898,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace Nonebkp19r{    ///<backup register
        using Addr = Register::Address<0x4000289c,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
}
