/****************************************************************************
** Meta object code from reading C++ file 'dashboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../dashboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dashboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DashBoard_t {
    QByteArrayData data[1190];
    char stringdata0[17281];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DashBoard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DashBoard_t qt_meta_stringdata_DashBoard = {
    {
QT_MOC_LITERAL(0, 0, 9), // "DashBoard"
QT_MOC_LITERAL(1, 10, 10), // "odoChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 3), // "Odo"
QT_MOC_LITERAL(4, 26, 16), // "CylindersChanged"
QT_MOC_LITERAL(5, 43, 9), // "Cylinders"
QT_MOC_LITERAL(6, 53, 11), // "tripChanged"
QT_MOC_LITERAL(7, 65, 4), // "Trip"
QT_MOC_LITERAL(8, 70, 14), // "NMEAlogChanged"
QT_MOC_LITERAL(9, 85, 7), // "NMEAlog"
QT_MOC_LITERAL(10, 93, 10), // "rpmChanged"
QT_MOC_LITERAL(11, 104, 3), // "rpm"
QT_MOC_LITERAL(12, 108, 18), // "intakepressChanged"
QT_MOC_LITERAL(13, 127, 11), // "Intakepress"
QT_MOC_LITERAL(14, 139, 16), // "pressureVChanged"
QT_MOC_LITERAL(15, 156, 9), // "PressureV"
QT_MOC_LITERAL(16, 166, 16), // "throttleVChanged"
QT_MOC_LITERAL(17, 183, 9), // "ThrottleV"
QT_MOC_LITERAL(18, 193, 17), // "primaryinpChanged"
QT_MOC_LITERAL(19, 211, 10), // "Primaryinp"
QT_MOC_LITERAL(20, 222, 12), // "fuelcChanged"
QT_MOC_LITERAL(21, 235, 5), // "Fuelc"
QT_MOC_LITERAL(22, 241, 17), // "leadingignChanged"
QT_MOC_LITERAL(23, 259, 10), // "Leadingign"
QT_MOC_LITERAL(24, 270, 18), // "trailingignChanged"
QT_MOC_LITERAL(25, 289, 11), // "Trailingign"
QT_MOC_LITERAL(26, 301, 15), // "fueltempChanged"
QT_MOC_LITERAL(27, 317, 8), // "Fueltemp"
QT_MOC_LITERAL(28, 326, 12), // "moilpChanged"
QT_MOC_LITERAL(29, 339, 5), // "Moilp"
QT_MOC_LITERAL(30, 345, 14), // "boosttpChanged"
QT_MOC_LITERAL(31, 360, 7), // "Boosttp"
QT_MOC_LITERAL(32, 368, 14), // "boostwgChanged"
QT_MOC_LITERAL(33, 383, 7), // "Boostwg"
QT_MOC_LITERAL(34, 391, 16), // "watertempChanged"
QT_MOC_LITERAL(35, 408, 9), // "Watertemp"
QT_MOC_LITERAL(36, 418, 17), // "intaketempChanged"
QT_MOC_LITERAL(37, 436, 10), // "Intaketemp"
QT_MOC_LITERAL(38, 447, 12), // "knockChanged"
QT_MOC_LITERAL(39, 460, 5), // "Knock"
QT_MOC_LITERAL(40, 466, 12), // "speedChanged"
QT_MOC_LITERAL(41, 479, 5), // "speed"
QT_MOC_LITERAL(42, 485, 15), // "batteryVChanged"
QT_MOC_LITERAL(43, 501, 8), // "BatteryV"
QT_MOC_LITERAL(44, 510, 15), // "iscvdutyChanged"
QT_MOC_LITERAL(45, 526, 8), // "Iscvduty"
QT_MOC_LITERAL(46, 535, 13), // "o2voltChanged"
QT_MOC_LITERAL(47, 549, 6), // "O2volt"
QT_MOC_LITERAL(48, 556, 19), // "Cyl1_O2_CorrChanged"
QT_MOC_LITERAL(49, 576, 12), // "Cyl1_O2_Corr"
QT_MOC_LITERAL(50, 589, 19), // "Cyl2_O2_CorrChanged"
QT_MOC_LITERAL(51, 609, 12), // "Cyl2_O2_Corr"
QT_MOC_LITERAL(52, 622, 19), // "Cyl3_O2_CorrChanged"
QT_MOC_LITERAL(53, 642, 12), // "Cyl3_O2_Corr"
QT_MOC_LITERAL(54, 655, 19), // "Cyl4_O2_CorrChanged"
QT_MOC_LITERAL(55, 675, 12), // "Cyl4_O2_Corr"
QT_MOC_LITERAL(56, 688, 19), // "Cyl5_O2_CorrChanged"
QT_MOC_LITERAL(57, 708, 12), // "Cyl5_O2_Corr"
QT_MOC_LITERAL(58, 721, 19), // "Cyl6_O2_CorrChanged"
QT_MOC_LITERAL(59, 741, 12), // "Cyl6_O2_Corr"
QT_MOC_LITERAL(60, 754, 19), // "Cyl7_O2_CorrChanged"
QT_MOC_LITERAL(61, 774, 12), // "Cyl7_O2_Corr"
QT_MOC_LITERAL(62, 787, 19), // "Cyl8_O2_CorrChanged"
QT_MOC_LITERAL(63, 807, 12), // "Cyl8_O2_Corr"
QT_MOC_LITERAL(64, 820, 10), // "na1Changed"
QT_MOC_LITERAL(65, 831, 3), // "na1"
QT_MOC_LITERAL(66, 835, 18), // "secinjpulseChanged"
QT_MOC_LITERAL(67, 854, 11), // "Secinjpulse"
QT_MOC_LITERAL(68, 866, 10), // "na2Changed"
QT_MOC_LITERAL(69, 877, 3), // "na2"
QT_MOC_LITERAL(70, 881, 14), // "injDutyChanged"
QT_MOC_LITERAL(71, 896, 7), // "InjDuty"
QT_MOC_LITERAL(72, 904, 15), // "injDuty2Changed"
QT_MOC_LITERAL(73, 920, 8), // "InjDuty2"
QT_MOC_LITERAL(74, 929, 15), // "InjAngleChanged"
QT_MOC_LITERAL(75, 945, 8), // "InjAngle"
QT_MOC_LITERAL(76, 954, 14), // "engLoadChanged"
QT_MOC_LITERAL(77, 969, 7), // "EngLoad"
QT_MOC_LITERAL(78, 977, 12), // "mAF1VChanged"
QT_MOC_LITERAL(79, 990, 5), // "MAF1V"
QT_MOC_LITERAL(80, 996, 12), // "mAF2VChanged"
QT_MOC_LITERAL(81, 1009, 5), // "MAF2V"
QT_MOC_LITERAL(82, 1015, 12), // "injmsChanged"
QT_MOC_LITERAL(83, 1028, 5), // "injms"
QT_MOC_LITERAL(84, 1034, 10), // "injChanged"
QT_MOC_LITERAL(85, 1045, 3), // "Inj"
QT_MOC_LITERAL(86, 1049, 10), // "ignChanged"
QT_MOC_LITERAL(87, 1060, 3), // "Ign"
QT_MOC_LITERAL(88, 1064, 12), // "dwellChanged"
QT_MOC_LITERAL(89, 1077, 5), // "Dwell"
QT_MOC_LITERAL(90, 1083, 16), // "BoostPresChanged"
QT_MOC_LITERAL(91, 1100, 9), // "BoostPres"
QT_MOC_LITERAL(92, 1110, 19), // "BoostPreskpaChanged"
QT_MOC_LITERAL(93, 1130, 12), // "BoostPreskpa"
QT_MOC_LITERAL(94, 1143, 16), // "boostDutyChanged"
QT_MOC_LITERAL(95, 1160, 9), // "BoostDuty"
QT_MOC_LITERAL(96, 1170, 18), // "mAFactivityChanged"
QT_MOC_LITERAL(97, 1189, 11), // "MAFactivity"
QT_MOC_LITERAL(98, 1201, 15), // "o2volt_2Changed"
QT_MOC_LITERAL(99, 1217, 8), // "O2volt_2"
QT_MOC_LITERAL(100, 1226, 10), // "pimChanged"
QT_MOC_LITERAL(101, 1237, 3), // "pim"
QT_MOC_LITERAL(102, 1241, 15), // "auxcalc1Changed"
QT_MOC_LITERAL(103, 1257, 8), // "auxcalc1"
QT_MOC_LITERAL(104, 1266, 15), // "auxcalc2Changed"
QT_MOC_LITERAL(105, 1282, 8), // "auxcalc2"
QT_MOC_LITERAL(106, 1291, 15), // "auxcalc3Changed"
QT_MOC_LITERAL(107, 1307, 8), // "auxcalc3"
QT_MOC_LITERAL(108, 1316, 15), // "auxcalc4Changed"
QT_MOC_LITERAL(109, 1332, 8), // "auxcalc4"
QT_MOC_LITERAL(110, 1341, 12), // "sens1Changed"
QT_MOC_LITERAL(111, 1354, 5), // "sens1"
QT_MOC_LITERAL(112, 1360, 12), // "sens2Changed"
QT_MOC_LITERAL(113, 1373, 5), // "sens2"
QT_MOC_LITERAL(114, 1379, 12), // "sens3Changed"
QT_MOC_LITERAL(115, 1392, 5), // "sens3"
QT_MOC_LITERAL(116, 1398, 12), // "sens4Changed"
QT_MOC_LITERAL(117, 1411, 5), // "sens4"
QT_MOC_LITERAL(118, 1417, 12), // "sens5Changed"
QT_MOC_LITERAL(119, 1430, 5), // "sens5"
QT_MOC_LITERAL(120, 1436, 12), // "sens6Changed"
QT_MOC_LITERAL(121, 1449, 5), // "sens6"
QT_MOC_LITERAL(122, 1455, 12), // "sens7Changed"
QT_MOC_LITERAL(123, 1468, 5), // "sens7"
QT_MOC_LITERAL(124, 1474, 12), // "sens8Changed"
QT_MOC_LITERAL(125, 1487, 5), // "sens8"
QT_MOC_LITERAL(126, 1493, 12), // "flag1Changed"
QT_MOC_LITERAL(127, 1506, 5), // "Flag1"
QT_MOC_LITERAL(128, 1512, 12), // "flag2Changed"
QT_MOC_LITERAL(129, 1525, 5), // "Flag2"
QT_MOC_LITERAL(130, 1531, 12), // "flag3Changed"
QT_MOC_LITERAL(131, 1544, 5), // "Flag3"
QT_MOC_LITERAL(132, 1550, 12), // "flag4Changed"
QT_MOC_LITERAL(133, 1563, 5), // "Flag4"
QT_MOC_LITERAL(134, 1569, 12), // "flag5Changed"
QT_MOC_LITERAL(135, 1582, 5), // "Flag5"
QT_MOC_LITERAL(136, 1588, 12), // "flag6Changed"
QT_MOC_LITERAL(137, 1601, 5), // "Flag6"
QT_MOC_LITERAL(138, 1607, 12), // "flag7Changed"
QT_MOC_LITERAL(139, 1620, 5), // "Flag7"
QT_MOC_LITERAL(140, 1626, 12), // "flag8Changed"
QT_MOC_LITERAL(141, 1639, 5), // "Flag8"
QT_MOC_LITERAL(142, 1645, 12), // "flag9Changed"
QT_MOC_LITERAL(143, 1658, 5), // "Flag9"
QT_MOC_LITERAL(144, 1664, 13), // "flag10Changed"
QT_MOC_LITERAL(145, 1678, 6), // "Flag10"
QT_MOC_LITERAL(146, 1685, 13), // "flag11Changed"
QT_MOC_LITERAL(147, 1699, 6), // "Flag11"
QT_MOC_LITERAL(148, 1706, 13), // "flag12Changed"
QT_MOC_LITERAL(149, 1720, 6), // "Flag12"
QT_MOC_LITERAL(150, 1727, 13), // "flag13Changed"
QT_MOC_LITERAL(151, 1741, 6), // "Flag13"
QT_MOC_LITERAL(152, 1748, 13), // "flag14Changed"
QT_MOC_LITERAL(153, 1762, 6), // "Flag14"
QT_MOC_LITERAL(154, 1769, 13), // "flag15Changed"
QT_MOC_LITERAL(155, 1783, 6), // "Flag15"
QT_MOC_LITERAL(156, 1790, 13), // "flag16Changed"
QT_MOC_LITERAL(157, 1804, 6), // "Flag16"
QT_MOC_LITERAL(158, 1811, 13), // "flag17Changed"
QT_MOC_LITERAL(159, 1825, 6), // "Flag17"
QT_MOC_LITERAL(160, 1832, 13), // "flag18Changed"
QT_MOC_LITERAL(161, 1846, 6), // "Flag18"
QT_MOC_LITERAL(162, 1853, 13), // "flag19Changed"
QT_MOC_LITERAL(163, 1867, 6), // "Flag19"
QT_MOC_LITERAL(164, 1874, 13), // "flag20Changed"
QT_MOC_LITERAL(165, 1888, 6), // "Flag20"
QT_MOC_LITERAL(166, 1895, 13), // "flag21Changed"
QT_MOC_LITERAL(167, 1909, 6), // "Flag21"
QT_MOC_LITERAL(168, 1916, 13), // "flag22Changed"
QT_MOC_LITERAL(169, 1930, 6), // "Flag22"
QT_MOC_LITERAL(170, 1937, 13), // "flag23Changed"
QT_MOC_LITERAL(171, 1951, 6), // "Flag23"
QT_MOC_LITERAL(172, 1958, 13), // "flag24Changed"
QT_MOC_LITERAL(173, 1972, 6), // "Flag24"
QT_MOC_LITERAL(174, 1979, 13), // "flag25Changed"
QT_MOC_LITERAL(175, 1993, 6), // "Flag25"
QT_MOC_LITERAL(176, 2000, 18), // "flagString1Changed"
QT_MOC_LITERAL(177, 2019, 11), // "FlagString1"
QT_MOC_LITERAL(178, 2031, 18), // "flagString2Changed"
QT_MOC_LITERAL(179, 2050, 11), // "FlagString2"
QT_MOC_LITERAL(180, 2062, 18), // "flagString3Changed"
QT_MOC_LITERAL(181, 2081, 11), // "FlagString3"
QT_MOC_LITERAL(182, 2093, 18), // "flagString4Changed"
QT_MOC_LITERAL(183, 2112, 11), // "FlagString4"
QT_MOC_LITERAL(184, 2124, 18), // "flagString5Changed"
QT_MOC_LITERAL(185, 2143, 11), // "FlagString5"
QT_MOC_LITERAL(186, 2155, 18), // "flagString6Changed"
QT_MOC_LITERAL(187, 2174, 11), // "FlagString6"
QT_MOC_LITERAL(188, 2186, 18), // "flagString7Changed"
QT_MOC_LITERAL(189, 2205, 11), // "FlagString7"
QT_MOC_LITERAL(190, 2217, 18), // "flagString8Changed"
QT_MOC_LITERAL(191, 2236, 11), // "FlagString8"
QT_MOC_LITERAL(192, 2248, 18), // "flagString9Changed"
QT_MOC_LITERAL(193, 2267, 11), // "FlagString9"
QT_MOC_LITERAL(194, 2279, 19), // "flagString10Changed"
QT_MOC_LITERAL(195, 2299, 12), // "FlagString10"
QT_MOC_LITERAL(196, 2312, 19), // "flagString11Changed"
QT_MOC_LITERAL(197, 2332, 12), // "FlagString11"
QT_MOC_LITERAL(198, 2345, 19), // "flagString12Changed"
QT_MOC_LITERAL(199, 2365, 12), // "FlagString12"
QT_MOC_LITERAL(200, 2378, 19), // "flagString13Changed"
QT_MOC_LITERAL(201, 2398, 12), // "FlagString13"
QT_MOC_LITERAL(202, 2411, 19), // "flagString14Changed"
QT_MOC_LITERAL(203, 2431, 12), // "FlagString14"
QT_MOC_LITERAL(204, 2444, 19), // "flagString15Changed"
QT_MOC_LITERAL(205, 2464, 12), // "FlagString15"
QT_MOC_LITERAL(206, 2477, 19), // "flagString16Changed"
QT_MOC_LITERAL(207, 2497, 12), // "FlagString16"
QT_MOC_LITERAL(208, 2510, 20), // "sensorString1Changed"
QT_MOC_LITERAL(209, 2531, 13), // "SensorString1"
QT_MOC_LITERAL(210, 2545, 20), // "sensorString2Changed"
QT_MOC_LITERAL(211, 2566, 13), // "SensorString2"
QT_MOC_LITERAL(212, 2580, 20), // "sensorString3Changed"
QT_MOC_LITERAL(213, 2601, 13), // "SensorString3"
QT_MOC_LITERAL(214, 2615, 20), // "sensorString4Changed"
QT_MOC_LITERAL(215, 2636, 13), // "SensorString4"
QT_MOC_LITERAL(216, 2650, 20), // "sensorString5Changed"
QT_MOC_LITERAL(217, 2671, 13), // "SensorString5"
QT_MOC_LITERAL(218, 2685, 20), // "sensorString6Changed"
QT_MOC_LITERAL(219, 2706, 13), // "SensorString6"
QT_MOC_LITERAL(220, 2720, 20), // "sensorString7Changed"
QT_MOC_LITERAL(221, 2741, 13), // "SensorString7"
QT_MOC_LITERAL(222, 2755, 20), // "sensorString8Changed"
QT_MOC_LITERAL(223, 2776, 13), // "SensorString8"
QT_MOC_LITERAL(224, 2790, 15), // "platformChanged"
QT_MOC_LITERAL(225, 2806, 8), // "Platform"
QT_MOC_LITERAL(226, 2815, 17), // "serialStatChanged"
QT_MOC_LITERAL(227, 2833, 10), // "SerialStat"
QT_MOC_LITERAL(228, 2844, 15), // "recvDataChanged"
QT_MOC_LITERAL(229, 2860, 8), // "RecvData"
QT_MOC_LITERAL(230, 2869, 18), // "timeoutStatChanged"
QT_MOC_LITERAL(231, 2888, 11), // "TimeoutStat"
QT_MOC_LITERAL(232, 2900, 14), // "runStatChanged"
QT_MOC_LITERAL(233, 2915, 7), // "RunStat"
QT_MOC_LITERAL(234, 2923, 15), // "WifiStatChanged"
QT_MOC_LITERAL(235, 2939, 8), // "WifiStat"
QT_MOC_LITERAL(236, 2948, 19), // "EthernetStatChanged"
QT_MOC_LITERAL(237, 2968, 12), // "EthernetStat"
QT_MOC_LITERAL(238, 2981, 21), // "CBXCountrysaveChanged"
QT_MOC_LITERAL(239, 3003, 14), // "CBXCountrysave"
QT_MOC_LITERAL(240, 3018, 19), // "CBXTracksaveChanged"
QT_MOC_LITERAL(241, 3038, 12), // "CBXTracksave"
QT_MOC_LITERAL(242, 3051, 14), // "gpsTimeChanged"
QT_MOC_LITERAL(243, 3066, 7), // "gpsTime"
QT_MOC_LITERAL(244, 3074, 18), // "gpsAltitudeChanged"
QT_MOC_LITERAL(245, 3093, 11), // "gpsAltitude"
QT_MOC_LITERAL(246, 3105, 18), // "gpsLatitudeChanged"
QT_MOC_LITERAL(247, 3124, 11), // "gpsLatitude"
QT_MOC_LITERAL(248, 3136, 19), // "gpsLongitudeChanged"
QT_MOC_LITERAL(249, 3156, 12), // "gpsLongitude"
QT_MOC_LITERAL(250, 3169, 15), // "gpsSpeedChanged"
QT_MOC_LITERAL(251, 3185, 8), // "gpsSpeed"
QT_MOC_LITERAL(252, 3194, 26), // "gpsVisibleSatelitesChanged"
QT_MOC_LITERAL(253, 3221, 19), // "gpsVisibleSatelites"
QT_MOC_LITERAL(254, 3241, 17), // "gpsFIXtypeChanged"
QT_MOC_LITERAL(255, 3259, 10), // "gpsFIXtype"
QT_MOC_LITERAL(256, 3270, 17), // "gpsbearingChanged"
QT_MOC_LITERAL(257, 3288, 10), // "gpsbearing"
QT_MOC_LITERAL(258, 3299, 14), // "gpsHDOPChanged"
QT_MOC_LITERAL(259, 3314, 7), // "gpsHDOP"
QT_MOC_LITERAL(260, 3322, 12), // "unitsChanged"
QT_MOC_LITERAL(261, 3335, 5), // "units"
QT_MOC_LITERAL(262, 3341, 17), // "speedunitsChanged"
QT_MOC_LITERAL(263, 3359, 10), // "speedunits"
QT_MOC_LITERAL(264, 3370, 20), // "pressureunitsChanged"
QT_MOC_LITERAL(265, 3391, 13), // "pressureunits"
QT_MOC_LITERAL(266, 3405, 10), // "mAPChanged"
QT_MOC_LITERAL(267, 3416, 3), // "MAP"
QT_MOC_LITERAL(268, 3420, 13), // "PANVACChanged"
QT_MOC_LITERAL(269, 3434, 6), // "PANVAC"
QT_MOC_LITERAL(270, 3441, 11), // "mAP2Changed"
QT_MOC_LITERAL(271, 3453, 4), // "MAP2"
QT_MOC_LITERAL(272, 3458, 11), // "aUXTChanged"
QT_MOC_LITERAL(273, 3470, 4), // "AUXT"
QT_MOC_LITERAL(274, 3475, 10), // "aFRChanged"
QT_MOC_LITERAL(275, 3486, 3), // "AFR"
QT_MOC_LITERAL(276, 3490, 24), // "AFRLEFTBANKTARGETChanged"
QT_MOC_LITERAL(277, 3515, 17), // "AFRLEFTBANKTARGET"
QT_MOC_LITERAL(278, 3533, 25), // "AFRRIGHTBANKTARGETChanged"
QT_MOC_LITERAL(279, 3559, 18), // "AFRRIGHTBANKTARGET"
QT_MOC_LITERAL(280, 3578, 24), // "AFRLEFTBANKACTUALChanged"
QT_MOC_LITERAL(281, 3603, 17), // "AFRLEFTBANKACTUAL"
QT_MOC_LITERAL(282, 3621, 25), // "AFRRIGHTBANKACTUALChanged"
QT_MOC_LITERAL(283, 3647, 18), // "AFRRIGHTBANKACTUAL"
QT_MOC_LITERAL(284, 3666, 18), // "BOOSTOFFSETChanged"
QT_MOC_LITERAL(285, 3685, 11), // "BOOSTOFFSET"
QT_MOC_LITERAL(286, 3697, 18), // "REVLIM3STEPChanged"
QT_MOC_LITERAL(287, 3716, 11), // "REVLIM3STEP"
QT_MOC_LITERAL(288, 3728, 18), // "REVLIM2STEPChanged"
QT_MOC_LITERAL(289, 3747, 11), // "REVLIM2STEP"
QT_MOC_LITERAL(290, 3759, 21), // "REVLIMGIGHSIDEChanged"
QT_MOC_LITERAL(291, 3781, 14), // "REVLIMGIGHSIDE"
QT_MOC_LITERAL(292, 3796, 21), // "REVLIMBOURNOUTChanged"
QT_MOC_LITERAL(293, 3818, 14), // "REVLIMBOURNOUT"
QT_MOC_LITERAL(294, 3833, 21), // "LEFTBANKO2CORRChanged"
QT_MOC_LITERAL(295, 3855, 14), // "LEFTBANKO2CORR"
QT_MOC_LITERAL(296, 3870, 22), // "RIGHTBANKO2CORRChanged"
QT_MOC_LITERAL(297, 3893, 15), // "RIGHTBANKO2CORR"
QT_MOC_LITERAL(298, 3909, 25), // "TRACTIONCTRLOFFSETChanged"
QT_MOC_LITERAL(299, 3935, 18), // "TRACTIONCTRLOFFSET"
QT_MOC_LITERAL(300, 3954, 23), // "DRIVESHAFTOFFSETChanged"
QT_MOC_LITERAL(301, 3978, 16), // "DRIVESHAFTOFFSET"
QT_MOC_LITERAL(302, 3995, 16), // "TCCOMMANDChanged"
QT_MOC_LITERAL(303, 4012, 9), // "TCCOMMAND"
QT_MOC_LITERAL(304, 4022, 17), // "FSLCOMMANDChanged"
QT_MOC_LITERAL(305, 4040, 10), // "FSLCOMMAND"
QT_MOC_LITERAL(306, 4051, 15), // "FSLINDEXChanged"
QT_MOC_LITERAL(307, 4067, 8), // "FSLINDEX"
QT_MOC_LITERAL(308, 4076, 14), // "AFRcyl1Changed"
QT_MOC_LITERAL(309, 4091, 7), // "AFRcyl1"
QT_MOC_LITERAL(310, 4099, 14), // "AFRcyl2Changed"
QT_MOC_LITERAL(311, 4114, 7), // "AFRcyl2"
QT_MOC_LITERAL(312, 4122, 14), // "AFRcyl3Changed"
QT_MOC_LITERAL(313, 4137, 7), // "AFRcyl3"
QT_MOC_LITERAL(314, 4145, 14), // "AFRcyl4Changed"
QT_MOC_LITERAL(315, 4160, 7), // "AFRcyl4"
QT_MOC_LITERAL(316, 4168, 14), // "AFRcyl5Changed"
QT_MOC_LITERAL(317, 4183, 7), // "AFRcyl5"
QT_MOC_LITERAL(318, 4191, 14), // "AFRcyl6Changed"
QT_MOC_LITERAL(319, 4206, 7), // "AFRcyl6"
QT_MOC_LITERAL(320, 4214, 14), // "AFRcyl7Changed"
QT_MOC_LITERAL(321, 4229, 7), // "AFRcyl7"
QT_MOC_LITERAL(322, 4237, 14), // "AFRcyl8Changed"
QT_MOC_LITERAL(323, 4252, 7), // "AFRcyl8"
QT_MOC_LITERAL(324, 4260, 10), // "tPSChanged"
QT_MOC_LITERAL(325, 4271, 3), // "TPS"
QT_MOC_LITERAL(326, 4275, 16), // "idleValueChanged"
QT_MOC_LITERAL(327, 4292, 9), // "IdleValue"
QT_MOC_LITERAL(328, 4302, 11), // "mVSSChanged"
QT_MOC_LITERAL(329, 4314, 4), // "MVSS"
QT_MOC_LITERAL(330, 4319, 11), // "sVSSChanged"
QT_MOC_LITERAL(331, 4331, 4), // "SVSS"
QT_MOC_LITERAL(332, 4336, 11), // "inj1Changed"
QT_MOC_LITERAL(333, 4348, 4), // "Inj1"
QT_MOC_LITERAL(334, 4353, 11), // "inj2Changed"
QT_MOC_LITERAL(335, 4365, 4), // "Inj2"
QT_MOC_LITERAL(336, 4370, 11), // "inj3Changed"
QT_MOC_LITERAL(337, 4382, 4), // "Inj3"
QT_MOC_LITERAL(338, 4387, 11), // "inj4Changed"
QT_MOC_LITERAL(339, 4399, 4), // "Inj4"
QT_MOC_LITERAL(340, 4404, 11), // "ign1Changed"
QT_MOC_LITERAL(341, 4416, 4), // "Ign1"
QT_MOC_LITERAL(342, 4421, 11), // "ign2Changed"
QT_MOC_LITERAL(343, 4433, 4), // "Ign2"
QT_MOC_LITERAL(344, 4438, 11), // "ign3Changed"
QT_MOC_LITERAL(345, 4450, 4), // "Ign3"
QT_MOC_LITERAL(346, 4455, 11), // "ign4Changed"
QT_MOC_LITERAL(347, 4467, 4), // "Ign4"
QT_MOC_LITERAL(348, 4472, 11), // "tRIMChanged"
QT_MOC_LITERAL(349, 4484, 4), // "TRIM"
QT_MOC_LITERAL(350, 4489, 13), // "lAMBDAChanged"
QT_MOC_LITERAL(351, 4503, 6), // "LAMBDA"
QT_MOC_LITERAL(352, 4510, 19), // "lAMBDATargetChanged"
QT_MOC_LITERAL(353, 4530, 12), // "LAMBDATarget"
QT_MOC_LITERAL(354, 4543, 16), // "fuelPressChanged"
QT_MOC_LITERAL(355, 4560, 9), // "FuelPress"
QT_MOC_LITERAL(356, 4570, 19), // "GearOilPressChanged"
QT_MOC_LITERAL(357, 4590, 12), // "GearOilPress"
QT_MOC_LITERAL(358, 4603, 13), // "accelxChanged"
QT_MOC_LITERAL(359, 4617, 6), // "accelx"
QT_MOC_LITERAL(360, 4624, 13), // "accelyChanged"
QT_MOC_LITERAL(361, 4638, 6), // "accely"
QT_MOC_LITERAL(362, 4645, 13), // "accelzChanged"
QT_MOC_LITERAL(363, 4659, 6), // "accelz"
QT_MOC_LITERAL(364, 4666, 12), // "gyroxChanged"
QT_MOC_LITERAL(365, 4679, 5), // "gyrox"
QT_MOC_LITERAL(366, 4685, 12), // "gyroyChanged"
QT_MOC_LITERAL(367, 4698, 5), // "gyroy"
QT_MOC_LITERAL(368, 4704, 12), // "gyrozChanged"
QT_MOC_LITERAL(369, 4717, 5), // "gyroz"
QT_MOC_LITERAL(370, 4723, 14), // "compassChanged"
QT_MOC_LITERAL(371, 4738, 7), // "compass"
QT_MOC_LITERAL(372, 4746, 15), // "ambitempChanged"
QT_MOC_LITERAL(373, 4762, 8), // "ambitemp"
QT_MOC_LITERAL(374, 4771, 16), // "ambipressChanged"
QT_MOC_LITERAL(375, 4788, 9), // "ambipress"
QT_MOC_LITERAL(376, 4798, 11), // "GearChanged"
QT_MOC_LITERAL(377, 4810, 4), // "Gear"
QT_MOC_LITERAL(378, 4815, 17), // "GearoffsetChanged"
QT_MOC_LITERAL(379, 4833, 10), // "Gearoffset"
QT_MOC_LITERAL(380, 4844, 22), // "GearCalculationChanged"
QT_MOC_LITERAL(381, 4867, 15), // "GearCalculation"
QT_MOC_LITERAL(382, 4883, 12), // "powerChanged"
QT_MOC_LITERAL(383, 4896, 5), // "Power"
QT_MOC_LITERAL(384, 4902, 13), // "torqueChanged"
QT_MOC_LITERAL(385, 4916, 6), // "Torque"
QT_MOC_LITERAL(386, 4923, 17), // "accelTimerChanged"
QT_MOC_LITERAL(387, 4941, 10), // "AccelTimer"
QT_MOC_LITERAL(388, 4952, 13), // "weightChanged"
QT_MOC_LITERAL(389, 4966, 6), // "Weight"
QT_MOC_LITERAL(390, 4973, 13), // "screenChanged"
QT_MOC_LITERAL(391, 4987, 6), // "screen"
QT_MOC_LITERAL(392, 4994, 20), // "maindashsetupChanged"
QT_MOC_LITERAL(393, 5015, 13), // "maindashsetup"
QT_MOC_LITERAL(394, 5029, 17), // "dashsetup3Changed"
QT_MOC_LITERAL(395, 5047, 10), // "dashsetup3"
QT_MOC_LITERAL(396, 5058, 17), // "dashsetup2Changed"
QT_MOC_LITERAL(397, 5076, 10), // "dashsetup2"
QT_MOC_LITERAL(398, 5087, 17), // "dashsetup1Changed"
QT_MOC_LITERAL(399, 5105, 10), // "dashsetup1"
QT_MOC_LITERAL(400, 5116, 16), // "dashfilesChanged"
QT_MOC_LITERAL(401, 5133, 9), // "dashfiles"
QT_MOC_LITERAL(402, 5143, 24), // "backroundpicturesChanged"
QT_MOC_LITERAL(403, 5168, 17), // "backroundpictures"
QT_MOC_LITERAL(404, 5186, 18), // "accelpedposChanged"
QT_MOC_LITERAL(405, 5205, 11), // "accelpedpos"
QT_MOC_LITERAL(406, 5217, 20), // "airtempensor2Changed"
QT_MOC_LITERAL(407, 5238, 13), // "airtempensor2"
QT_MOC_LITERAL(408, 5252, 25), // "antilaglauchswitchChanged"
QT_MOC_LITERAL(409, 5278, 18), // "antilaglauchswitch"
QT_MOC_LITERAL(410, 5297, 22), // "antilaglaunchonChanged"
QT_MOC_LITERAL(411, 5320, 15), // "antilaglaunchon"
QT_MOC_LITERAL(412, 5336, 24), // "auxrevlimitswitchChanged"
QT_MOC_LITERAL(413, 5361, 17), // "auxrevlimitswitch"
QT_MOC_LITERAL(414, 5379, 20), // "avfueleconomyChanged"
QT_MOC_LITERAL(415, 5400, 13), // "avfueleconomy"
QT_MOC_LITERAL(416, 5414, 16), // "battlightChanged"
QT_MOC_LITERAL(417, 5431, 9), // "battlight"
QT_MOC_LITERAL(418, 5441, 19), // "boostcontrolChanged"
QT_MOC_LITERAL(419, 5461, 12), // "boostcontrol"
QT_MOC_LITERAL(420, 5474, 17), // "brakepressChanged"
QT_MOC_LITERAL(421, 5492, 10), // "brakepress"
QT_MOC_LITERAL(422, 5503, 24), // "clutchswitchstateChanged"
QT_MOC_LITERAL(423, 5528, 17), // "clutchswitchstate"
QT_MOC_LITERAL(424, 5546, 19), // "coolantpressChanged"
QT_MOC_LITERAL(425, 5566, 12), // "coolantpress"
QT_MOC_LITERAL(426, 5579, 15), // "decelcutChanged"
QT_MOC_LITERAL(427, 5595, 8), // "decelcut"
QT_MOC_LITERAL(428, 5604, 18), // "diffoiltempChanged"
QT_MOC_LITERAL(429, 5623, 11), // "diffoiltemp"
QT_MOC_LITERAL(430, 5635, 22), // "distancetoemptyChanged"
QT_MOC_LITERAL(431, 5658, 15), // "distancetoempty"
QT_MOC_LITERAL(432, 5674, 11), // "egt1Changed"
QT_MOC_LITERAL(433, 5686, 4), // "egt1"
QT_MOC_LITERAL(434, 5691, 11), // "egt2Changed"
QT_MOC_LITERAL(435, 5703, 4), // "egt2"
QT_MOC_LITERAL(436, 5708, 11), // "egt3Changed"
QT_MOC_LITERAL(437, 5720, 4), // "egt3"
QT_MOC_LITERAL(438, 5725, 11), // "egt4Changed"
QT_MOC_LITERAL(439, 5737, 4), // "egt4"
QT_MOC_LITERAL(440, 5742, 11), // "egt5Changed"
QT_MOC_LITERAL(441, 5754, 4), // "egt5"
QT_MOC_LITERAL(442, 5759, 11), // "egt6Changed"
QT_MOC_LITERAL(443, 5771, 4), // "egt6"
QT_MOC_LITERAL(444, 5776, 11), // "egt7Changed"
QT_MOC_LITERAL(445, 5788, 4), // "egt7"
QT_MOC_LITERAL(446, 5793, 11), // "egt8Changed"
QT_MOC_LITERAL(447, 5805, 4), // "egt8"
QT_MOC_LITERAL(448, 5810, 11), // "egt9Changed"
QT_MOC_LITERAL(449, 5822, 4), // "egt9"
QT_MOC_LITERAL(450, 5827, 12), // "egt10Changed"
QT_MOC_LITERAL(451, 5840, 5), // "egt10"
QT_MOC_LITERAL(452, 5846, 12), // "egt11Changed"
QT_MOC_LITERAL(453, 5859, 5), // "egt11"
QT_MOC_LITERAL(454, 5865, 12), // "egt12Changed"
QT_MOC_LITERAL(455, 5878, 5), // "egt12"
QT_MOC_LITERAL(456, 5884, 18), // "excamangle1Changed"
QT_MOC_LITERAL(457, 5903, 11), // "excamangle1"
QT_MOC_LITERAL(458, 5915, 18), // "excamangle2Changed"
QT_MOC_LITERAL(459, 5934, 11), // "excamangle2"
QT_MOC_LITERAL(460, 5946, 21), // "flatshiftstateChanged"
QT_MOC_LITERAL(461, 5968, 14), // "flatshiftstate"
QT_MOC_LITERAL(462, 5983, 17), // "fuelclevelChanged"
QT_MOC_LITERAL(463, 6001, 10), // "fuelclevel"
QT_MOC_LITERAL(464, 6012, 22), // "fuelcompositionChanged"
QT_MOC_LITERAL(465, 6035, 15), // "fuelcomposition"
QT_MOC_LITERAL(466, 6051, 19), // "fuelconsrateChanged"
QT_MOC_LITERAL(467, 6071, 12), // "fuelconsrate"
QT_MOC_LITERAL(468, 6084, 18), // "fuelcutpercChanged"
QT_MOC_LITERAL(469, 6103, 11), // "fuelcutperc"
QT_MOC_LITERAL(470, 6115, 15), // "fuelflowChanged"
QT_MOC_LITERAL(471, 6131, 8), // "fuelflow"
QT_MOC_LITERAL(472, 6140, 19), // "fuelflowdiffChanged"
QT_MOC_LITERAL(473, 6160, 12), // "fuelflowdiff"
QT_MOC_LITERAL(474, 6173, 18), // "fuelflowretChanged"
QT_MOC_LITERAL(475, 6192, 11), // "fuelflowret"
QT_MOC_LITERAL(476, 6204, 25), // "fueltrimlongtbank1Changed"
QT_MOC_LITERAL(477, 6230, 18), // "fueltrimlongtbank1"
QT_MOC_LITERAL(478, 6249, 25), // "fueltrimlongtbank2Changed"
QT_MOC_LITERAL(479, 6275, 18), // "fueltrimlongtbank2"
QT_MOC_LITERAL(480, 6294, 26), // "fueltrimshorttbank1Changed"
QT_MOC_LITERAL(481, 6321, 19), // "fueltrimshorttbank1"
QT_MOC_LITERAL(482, 6341, 26), // "fueltrimshorttbank2Changed"
QT_MOC_LITERAL(483, 6368, 19), // "fueltrimshorttbank2"
QT_MOC_LITERAL(484, 6388, 17), // "gearswitchChanged"
QT_MOC_LITERAL(485, 6406, 10), // "gearswitch"
QT_MOC_LITERAL(486, 6417, 16), // "handbrakeChanged"
QT_MOC_LITERAL(487, 6434, 9), // "handbrake"
QT_MOC_LITERAL(488, 6444, 15), // "highbeamChanged"
QT_MOC_LITERAL(489, 6460, 8), // "highbeam"
QT_MOC_LITERAL(490, 6469, 14), // "lowBeamChanged"
QT_MOC_LITERAL(491, 6484, 7), // "lowBeam"
QT_MOC_LITERAL(492, 6492, 22), // "tractionControlChanged"
QT_MOC_LITERAL(493, 6515, 15), // "tractionControl"
QT_MOC_LITERAL(494, 6531, 19), // "homeccounterChanged"
QT_MOC_LITERAL(495, 6551, 12), // "homeccounter"
QT_MOC_LITERAL(496, 6564, 18), // "incamangle1Changed"
QT_MOC_LITERAL(497, 6583, 11), // "incamangle1"
QT_MOC_LITERAL(498, 6595, 18), // "incamangle2Changed"
QT_MOC_LITERAL(499, 6614, 11), // "incamangle2"
QT_MOC_LITERAL(500, 6626, 22), // "knocklevlogged1Changed"
QT_MOC_LITERAL(501, 6649, 15), // "knocklevlogged1"
QT_MOC_LITERAL(502, 6665, 22), // "knocklevlogged2Changed"
QT_MOC_LITERAL(503, 6688, 15), // "knocklevlogged2"
QT_MOC_LITERAL(504, 6704, 23), // "knockretardbank1Changed"
QT_MOC_LITERAL(505, 6728, 16), // "knockretardbank1"
QT_MOC_LITERAL(506, 6745, 23), // "knockretardbank2Changed"
QT_MOC_LITERAL(507, 6769, 16), // "knockretardbank2"
QT_MOC_LITERAL(508, 6786, 14), // "lambda2Changed"
QT_MOC_LITERAL(509, 6801, 7), // "lambda2"
QT_MOC_LITERAL(510, 6809, 14), // "lambda3Changed"
QT_MOC_LITERAL(511, 6824, 7), // "lambda3"
QT_MOC_LITERAL(512, 6832, 14), // "lambda4Changed"
QT_MOC_LITERAL(513, 6847, 7), // "lambda4"
QT_MOC_LITERAL(514, 6855, 29), // "launchcontolfuelenrichChanged"
QT_MOC_LITERAL(515, 6885, 22), // "launchcontolfuelenrich"
QT_MOC_LITERAL(516, 6908, 27), // "launchctrolignretardChanged"
QT_MOC_LITERAL(517, 6936, 20), // "launchctrolignretard"
QT_MOC_LITERAL(518, 6957, 20), // "leftindicatorChanged"
QT_MOC_LITERAL(519, 6978, 13), // "leftindicator"
QT_MOC_LITERAL(520, 6992, 15), // "limpmodeChanged"
QT_MOC_LITERAL(521, 7008, 8), // "limpmode"
QT_MOC_LITERAL(522, 7017, 10), // "milChanged"
QT_MOC_LITERAL(523, 7028, 3), // "mil"
QT_MOC_LITERAL(524, 7032, 17), // "missccountChanged"
QT_MOC_LITERAL(525, 7050, 10), // "missccount"
QT_MOC_LITERAL(526, 7061, 16), // "nosactiveChanged"
QT_MOC_LITERAL(527, 7078, 9), // "nosactive"
QT_MOC_LITERAL(528, 7088, 15), // "nospressChanged"
QT_MOC_LITERAL(529, 7104, 8), // "nospress"
QT_MOC_LITERAL(530, 7113, 16), // "nosswitchChanged"
QT_MOC_LITERAL(531, 7130, 9), // "nosswitch"
QT_MOC_LITERAL(532, 7140, 14), // "oilpresChanged"
QT_MOC_LITERAL(533, 7155, 7), // "oilpres"
QT_MOC_LITERAL(534, 7163, 14), // "oiltempChanged"
QT_MOC_LITERAL(535, 7178, 7), // "oiltemp"
QT_MOC_LITERAL(536, 7186, 25), // "rallyantilagswitchChanged"
QT_MOC_LITERAL(537, 7212, 18), // "rallyantilagswitch"
QT_MOC_LITERAL(538, 7231, 21), // "rightindicatorChanged"
QT_MOC_LITERAL(539, 7253, 14), // "rightindicator"
QT_MOC_LITERAL(540, 7268, 22), // "targetbstlelkpaChanged"
QT_MOC_LITERAL(541, 7291, 15), // "targetbstlelkpa"
QT_MOC_LITERAL(542, 7307, 20), // "timeddutyout1Changed"
QT_MOC_LITERAL(543, 7328, 13), // "timeddutyout1"
QT_MOC_LITERAL(544, 7342, 20), // "timeddutyout2Changed"
QT_MOC_LITERAL(545, 7363, 13), // "timeddutyout2"
QT_MOC_LITERAL(546, 7377, 28), // "timeddutyoutputactiveChanged"
QT_MOC_LITERAL(547, 7406, 21), // "timeddutyoutputactive"
QT_MOC_LITERAL(548, 7428, 25), // "torqueredcutactiveChanged"
QT_MOC_LITERAL(549, 7454, 18), // "torqueredcutactive"
QT_MOC_LITERAL(550, 7473, 27), // "torqueredlevelactiveChanged"
QT_MOC_LITERAL(551, 7501, 20), // "torqueredlevelactive"
QT_MOC_LITERAL(552, 7522, 26), // "transientthroactiveChanged"
QT_MOC_LITERAL(553, 7549, 19), // "transientthroactive"
QT_MOC_LITERAL(554, 7569, 19), // "transoiltempChanged"
QT_MOC_LITERAL(555, 7589, 12), // "transoiltemp"
QT_MOC_LITERAL(556, 7602, 22), // "triggerccounterChanged"
QT_MOC_LITERAL(557, 7625, 15), // "triggerccounter"
QT_MOC_LITERAL(558, 7641, 28), // "triggersrsinceasthomeChanged"
QT_MOC_LITERAL(559, 7670, 21), // "triggersrsinceasthome"
QT_MOC_LITERAL(560, 7692, 15), // "turborpmChanged"
QT_MOC_LITERAL(561, 7708, 8), // "turborpm"
QT_MOC_LITERAL(562, 7717, 16), // "turborpm2Changed"
QT_MOC_LITERAL(563, 7734, 9), // "turborpm2"
QT_MOC_LITERAL(564, 7744, 21), // "wastegatepressChanged"
QT_MOC_LITERAL(565, 7766, 14), // "wastegatepress"
QT_MOC_LITERAL(566, 7781, 16), // "wheeldiffChanged"
QT_MOC_LITERAL(567, 7798, 9), // "wheeldiff"
QT_MOC_LITERAL(568, 7808, 16), // "wheelslipChanged"
QT_MOC_LITERAL(569, 7825, 9), // "wheelslip"
QT_MOC_LITERAL(570, 7835, 21), // "wheelspdftleftChanged"
QT_MOC_LITERAL(571, 7857, 14), // "wheelspdftleft"
QT_MOC_LITERAL(572, 7872, 22), // "wheelspdftrightChanged"
QT_MOC_LITERAL(573, 7895, 15), // "wheelspdftright"
QT_MOC_LITERAL(574, 7911, 23), // "wheelspdrearleftChanged"
QT_MOC_LITERAL(575, 7935, 16), // "wheelspdrearleft"
QT_MOC_LITERAL(576, 7952, 24), // "wheelspdrearrightChanged"
QT_MOC_LITERAL(577, 7977, 17), // "wheelspdrearright"
QT_MOC_LITERAL(578, 7995, 16), // "musicpathChanged"
QT_MOC_LITERAL(579, 8012, 9), // "musicpath"
QT_MOC_LITERAL(580, 8022, 19), // "supportedRegChanged"
QT_MOC_LITERAL(581, 8042, 12), // "supportedReg"
QT_MOC_LITERAL(582, 8055, 19), // "speedpercentChanged"
QT_MOC_LITERAL(583, 8075, 12), // "speedpercent"
QT_MOC_LITERAL(584, 8088, 20), // "pulsespermileChanged"
QT_MOC_LITERAL(585, 8109, 13), // "pulsespermile"
QT_MOC_LITERAL(586, 8123, 13), // "maxRPMChanged"
QT_MOC_LITERAL(587, 8137, 6), // "maxRPM"
QT_MOC_LITERAL(588, 8144, 16), // "rpmStage1Changed"
QT_MOC_LITERAL(589, 8161, 9), // "rpmStage1"
QT_MOC_LITERAL(590, 8171, 16), // "rpmStage2Changed"
QT_MOC_LITERAL(591, 8188, 9), // "rpmStage2"
QT_MOC_LITERAL(592, 8198, 16), // "rpmStage3Changed"
QT_MOC_LITERAL(593, 8215, 9), // "rpmStage3"
QT_MOC_LITERAL(594, 8225, 16), // "rpmStage4Changed"
QT_MOC_LITERAL(595, 8242, 9), // "rpmStage4"
QT_MOC_LITERAL(596, 8252, 16), // "waterwarnChanged"
QT_MOC_LITERAL(597, 8269, 9), // "waterwarn"
QT_MOC_LITERAL(598, 8279, 14), // "rpmwarnChanged"
QT_MOC_LITERAL(599, 8294, 7), // "rpmwarn"
QT_MOC_LITERAL(600, 8302, 16), // "knockwarnChanged"
QT_MOC_LITERAL(601, 8319, 9), // "knockwarn"
QT_MOC_LITERAL(602, 8329, 16), // "boostwarnChanged"
QT_MOC_LITERAL(603, 8346, 9), // "boostwarn"
QT_MOC_LITERAL(604, 8356, 16), // "smoothrpmChanged"
QT_MOC_LITERAL(605, 8373, 9), // "smoothrpm"
QT_MOC_LITERAL(606, 8383, 18), // "smoothspeedChanged"
QT_MOC_LITERAL(607, 8402, 11), // "smoothspeed"
QT_MOC_LITERAL(608, 8414, 26), // "smootexAnalogInput7Changed"
QT_MOC_LITERAL(609, 8441, 19), // "smootexAnalogInput7"
QT_MOC_LITERAL(610, 8461, 16), // "gearcalc1Changed"
QT_MOC_LITERAL(611, 8478, 9), // "gearcalc1"
QT_MOC_LITERAL(612, 8488, 16), // "gearcalc2Changed"
QT_MOC_LITERAL(613, 8505, 9), // "gearcalc2"
QT_MOC_LITERAL(614, 8515, 16), // "gearcalc3Changed"
QT_MOC_LITERAL(615, 8532, 9), // "gearcalc3"
QT_MOC_LITERAL(616, 8542, 16), // "gearcalc4Changed"
QT_MOC_LITERAL(617, 8559, 9), // "gearcalc4"
QT_MOC_LITERAL(618, 8569, 16), // "gearcalc5Changed"
QT_MOC_LITERAL(619, 8586, 9), // "gearcalc5"
QT_MOC_LITERAL(620, 8596, 16), // "gearcalc6Changed"
QT_MOC_LITERAL(621, 8613, 9), // "gearcalc6"
QT_MOC_LITERAL(622, 8623, 25), // "gearcalcactivationChanged"
QT_MOC_LITERAL(623, 8649, 18), // "gearcalcactivation"
QT_MOC_LITERAL(624, 8668, 10), // "ecuChanged"
QT_MOC_LITERAL(625, 8679, 3), // "ecu"
QT_MOC_LITERAL(626, 8683, 16), // "rpmstyle1Changed"
QT_MOC_LITERAL(627, 8700, 9), // "rpmstyle1"
QT_MOC_LITERAL(628, 8710, 16), // "rpmstyle2Changed"
QT_MOC_LITERAL(629, 8727, 9), // "rpmstyle2"
QT_MOC_LITERAL(630, 8737, 16), // "rpmstyle3Changed"
QT_MOC_LITERAL(631, 8754, 9), // "rpmstyle3"
QT_MOC_LITERAL(632, 8764, 21), // "RotaryTrimpot1Changed"
QT_MOC_LITERAL(633, 8786, 14), // "RotaryTrimpot1"
QT_MOC_LITERAL(634, 8801, 21), // "RotaryTrimpot2Changed"
QT_MOC_LITERAL(635, 8823, 14), // "RotaryTrimpot2"
QT_MOC_LITERAL(636, 8838, 21), // "RotaryTrimpot3Changed"
QT_MOC_LITERAL(637, 8860, 14), // "RotaryTrimpot3"
QT_MOC_LITERAL(638, 8875, 24), // "CalibrationSelectChanged"
QT_MOC_LITERAL(639, 8900, 17), // "CalibrationSelect"
QT_MOC_LITERAL(640, 8918, 12), // "ErrorChanged"
QT_MOC_LITERAL(641, 8931, 5), // "Error"
QT_MOC_LITERAL(642, 8937, 15), // "autogearChanged"
QT_MOC_LITERAL(643, 8953, 8), // "autogear"
QT_MOC_LITERAL(644, 8962, 20), // "daemonlicenseChanged"
QT_MOC_LITERAL(645, 8983, 13), // "daemonlicense"
QT_MOC_LITERAL(646, 8997, 20), // "ExternalSpeedChanged"
QT_MOC_LITERAL(647, 9018, 13), // "ExternalSpeed"
QT_MOC_LITERAL(648, 9032, 17), // "externalspeedport"
QT_MOC_LITERAL(649, 9050, 17), // "currentLapChanged"
QT_MOC_LITERAL(650, 9068, 10), // "currentLap"
QT_MOC_LITERAL(651, 9079, 14), // "laptimeChanged"
QT_MOC_LITERAL(652, 9094, 7), // "laptime"
QT_MOC_LITERAL(653, 9102, 18), // "LastlaptimeChanged"
QT_MOC_LITERAL(654, 9121, 11), // "Lastlaptime"
QT_MOC_LITERAL(655, 9133, 18), // "bestlaptimeChanged"
QT_MOC_LITERAL(656, 9152, 11), // "bestlaptime"
QT_MOC_LITERAL(657, 9164, 16), // "draggableChanged"
QT_MOC_LITERAL(658, 9181, 9), // "draggable"
QT_MOC_LITERAL(659, 9191, 11), // "wifiChanged"
QT_MOC_LITERAL(660, 9203, 4), // "wifi"
QT_MOC_LITERAL(661, 9208, 10), // "canChanged"
QT_MOC_LITERAL(662, 9219, 3), // "can"
QT_MOC_LITERAL(663, 9223, 14), // "Analog0Changed"
QT_MOC_LITERAL(664, 9238, 7), // "Analog0"
QT_MOC_LITERAL(665, 9246, 14), // "Analog1Changed"
QT_MOC_LITERAL(666, 9261, 7), // "Analog1"
QT_MOC_LITERAL(667, 9269, 14), // "Analog2Changed"
QT_MOC_LITERAL(668, 9284, 7), // "Analog2"
QT_MOC_LITERAL(669, 9292, 14), // "Analog3Changed"
QT_MOC_LITERAL(670, 9307, 7), // "Analog3"
QT_MOC_LITERAL(671, 9315, 14), // "Analog4Changed"
QT_MOC_LITERAL(672, 9330, 7), // "Analog4"
QT_MOC_LITERAL(673, 9338, 14), // "Analog5Changed"
QT_MOC_LITERAL(674, 9353, 7), // "Analog5"
QT_MOC_LITERAL(675, 9361, 14), // "Analog6Changed"
QT_MOC_LITERAL(676, 9376, 7), // "Analog6"
QT_MOC_LITERAL(677, 9384, 14), // "Analog7Changed"
QT_MOC_LITERAL(678, 9399, 7), // "Analog7"
QT_MOC_LITERAL(679, 9407, 14), // "Analog8Changed"
QT_MOC_LITERAL(680, 9422, 7), // "Analog8"
QT_MOC_LITERAL(681, 9430, 14), // "Analog9Changed"
QT_MOC_LITERAL(682, 9445, 7), // "Analog9"
QT_MOC_LITERAL(683, 9453, 15), // "Analog10Changed"
QT_MOC_LITERAL(684, 9469, 8), // "Analog10"
QT_MOC_LITERAL(685, 9478, 18), // "AnalogCalc0Changed"
QT_MOC_LITERAL(686, 9497, 11), // "AnalogCalc0"
QT_MOC_LITERAL(687, 9509, 18), // "AnalogCalc1Changed"
QT_MOC_LITERAL(688, 9528, 11), // "AnalogCalc1"
QT_MOC_LITERAL(689, 9540, 18), // "AnalogCalc2Changed"
QT_MOC_LITERAL(690, 9559, 11), // "AnalogCalc2"
QT_MOC_LITERAL(691, 9571, 18), // "AnalogCalc3Changed"
QT_MOC_LITERAL(692, 9590, 11), // "AnalogCalc3"
QT_MOC_LITERAL(693, 9602, 18), // "AnalogCalc4Changed"
QT_MOC_LITERAL(694, 9621, 11), // "AnalogCalc4"
QT_MOC_LITERAL(695, 9633, 18), // "AnalogCalc5Changed"
QT_MOC_LITERAL(696, 9652, 11), // "AnalogCalc5"
QT_MOC_LITERAL(697, 9664, 18), // "AnalogCalc6Changed"
QT_MOC_LITERAL(698, 9683, 11), // "AnalogCalc6"
QT_MOC_LITERAL(699, 9695, 18), // "AnalogCalc7Changed"
QT_MOC_LITERAL(700, 9714, 11), // "AnalogCalc7"
QT_MOC_LITERAL(701, 9726, 18), // "AnalogCalc8Changed"
QT_MOC_LITERAL(702, 9745, 11), // "AnalogCalc8"
QT_MOC_LITERAL(703, 9757, 18), // "AnalogCalc9Changed"
QT_MOC_LITERAL(704, 9776, 11), // "AnalogCalc9"
QT_MOC_LITERAL(705, 9788, 19), // "AnalogCalc10Changed"
QT_MOC_LITERAL(706, 9808, 12), // "AnalogCalc10"
QT_MOC_LITERAL(707, 9821, 20), // "EXAnalogCalc0Changed"
QT_MOC_LITERAL(708, 9842, 13), // "EXAnalogCalc0"
QT_MOC_LITERAL(709, 9856, 20), // "EXAnalogCalc1Changed"
QT_MOC_LITERAL(710, 9877, 13), // "EXAnalogCalc1"
QT_MOC_LITERAL(711, 9891, 20), // "EXAnalogCalc2Changed"
QT_MOC_LITERAL(712, 9912, 13), // "EXAnalogCalc2"
QT_MOC_LITERAL(713, 9926, 20), // "EXAnalogCalc3Changed"
QT_MOC_LITERAL(714, 9947, 13), // "EXAnalogCalc3"
QT_MOC_LITERAL(715, 9961, 20), // "EXAnalogCalc4Changed"
QT_MOC_LITERAL(716, 9982, 13), // "EXAnalogCalc4"
QT_MOC_LITERAL(717, 9996, 20), // "EXAnalogCalc5Changed"
QT_MOC_LITERAL(718, 10017, 13), // "EXAnalogCalc5"
QT_MOC_LITERAL(719, 10031, 20), // "EXAnalogCalc6Changed"
QT_MOC_LITERAL(720, 10052, 13), // "EXAnalogCalc6"
QT_MOC_LITERAL(721, 10066, 20), // "EXAnalogCalc7Changed"
QT_MOC_LITERAL(722, 10087, 13), // "EXAnalogCalc7"
QT_MOC_LITERAL(723, 10101, 21), // "LambdamultiplyChanged"
QT_MOC_LITERAL(724, 10123, 14), // "Lambdamultiply"
QT_MOC_LITERAL(725, 10138, 19), // "Userchannel1Changed"
QT_MOC_LITERAL(726, 10158, 12), // "Userchannel1"
QT_MOC_LITERAL(727, 10171, 19), // "Userchannel2Changed"
QT_MOC_LITERAL(728, 10191, 12), // "Userchannel2"
QT_MOC_LITERAL(729, 10204, 19), // "Userchannel3Changed"
QT_MOC_LITERAL(730, 10224, 12), // "Userchannel3"
QT_MOC_LITERAL(731, 10237, 19), // "Userchannel4Changed"
QT_MOC_LITERAL(732, 10257, 12), // "Userchannel4"
QT_MOC_LITERAL(733, 10270, 19), // "Userchannel5Changed"
QT_MOC_LITERAL(734, 10290, 12), // "Userchannel5"
QT_MOC_LITERAL(735, 10303, 19), // "Userchannel6Changed"
QT_MOC_LITERAL(736, 10323, 12), // "Userchannel6"
QT_MOC_LITERAL(737, 10336, 19), // "Userchannel7Changed"
QT_MOC_LITERAL(738, 10356, 12), // "Userchannel7"
QT_MOC_LITERAL(739, 10369, 19), // "Userchannel8Changed"
QT_MOC_LITERAL(740, 10389, 12), // "Userchannel8"
QT_MOC_LITERAL(741, 10402, 19), // "Userchannel9Changed"
QT_MOC_LITERAL(742, 10422, 12), // "Userchannel9"
QT_MOC_LITERAL(743, 10435, 20), // "Userchannel10Changed"
QT_MOC_LITERAL(744, 10456, 13), // "Userchannel10"
QT_MOC_LITERAL(745, 10470, 20), // "Userchannel11Changed"
QT_MOC_LITERAL(746, 10491, 13), // "Userchannel11"
QT_MOC_LITERAL(747, 10505, 20), // "Userchannel12Changed"
QT_MOC_LITERAL(748, 10526, 13), // "Userchannel12"
QT_MOC_LITERAL(749, 10540, 27), // "BitfieldEngineStatusChanged"
QT_MOC_LITERAL(750, 10568, 20), // "BitfieldEngineStatus"
QT_MOC_LITERAL(751, 10589, 16), // "FuelLevelChanged"
QT_MOC_LITERAL(752, 10606, 9), // "FuelLevel"
QT_MOC_LITERAL(753, 10616, 25), // "SteeringWheelAngleChanged"
QT_MOC_LITERAL(754, 10642, 18), // "SteeringWheelAngle"
QT_MOC_LITERAL(755, 10661, 17), // "BrightnessChanged"
QT_MOC_LITERAL(756, 10679, 10), // "Brightness"
QT_MOC_LITERAL(757, 10690, 20), // "VisibledashesChanged"
QT_MOC_LITERAL(758, 10711, 13), // "Visibledashes"
QT_MOC_LITERAL(759, 10725, 22), // "oilpressurelampChanged"
QT_MOC_LITERAL(760, 10748, 15), // "oilpressurelamp"
QT_MOC_LITERAL(761, 10764, 20), // "overtempalarmChanged"
QT_MOC_LITERAL(762, 10785, 13), // "overtempalarm"
QT_MOC_LITERAL(763, 10799, 21), // "alternatorfailChanged"
QT_MOC_LITERAL(764, 10821, 14), // "alternatorfail"
QT_MOC_LITERAL(765, 10836, 15), // "AuxTemp1Changed"
QT_MOC_LITERAL(766, 10852, 8), // "AuxTemp1"
QT_MOC_LITERAL(767, 10861, 20), // "sixtyfoottimeChanged"
QT_MOC_LITERAL(768, 10882, 13), // "sixtyfoottime"
QT_MOC_LITERAL(769, 10896, 21), // "sixtyfootspeedChanged"
QT_MOC_LITERAL(770, 10918, 14), // "sixtyfootspeed"
QT_MOC_LITERAL(771, 10933, 33), // "threehundredthirtyfoottimeCha..."
QT_MOC_LITERAL(772, 10967, 26), // "threehundredthirtyfoottime"
QT_MOC_LITERAL(773, 10994, 34), // "threehundredthirtyfootspeedCh..."
QT_MOC_LITERAL(774, 11029, 27), // "threehundredthirtyfootspeed"
QT_MOC_LITERAL(775, 11057, 20), // "eightmiletimeChanged"
QT_MOC_LITERAL(776, 11078, 13), // "eightmiletime"
QT_MOC_LITERAL(777, 11092, 21), // "eightmilespeedChanged"
QT_MOC_LITERAL(778, 11114, 14), // "eightmilespeed"
QT_MOC_LITERAL(779, 11129, 22), // "quartermiletimeChanged"
QT_MOC_LITERAL(780, 11152, 15), // "quartermiletime"
QT_MOC_LITERAL(781, 11168, 23), // "quartermilespeedChanged"
QT_MOC_LITERAL(782, 11192, 16), // "quartermilespeed"
QT_MOC_LITERAL(783, 11209, 23), // "thousandfoottimeChanged"
QT_MOC_LITERAL(784, 11233, 16), // "thousandfoottime"
QT_MOC_LITERAL(785, 11250, 24), // "thousandfootspeedChanged"
QT_MOC_LITERAL(786, 11275, 17), // "thousandfootspeed"
QT_MOC_LITERAL(787, 11293, 21), // "zerotohundredtChanged"
QT_MOC_LITERAL(788, 11315, 14), // "zerotohundredt"
QT_MOC_LITERAL(789, 11330, 30), // "hundredtotwohundredtimeChanged"
QT_MOC_LITERAL(790, 11361, 23), // "hundredtotwohundredtime"
QT_MOC_LITERAL(791, 11385, 35), // "twohundredtothreehundredtimeC..."
QT_MOC_LITERAL(792, 11421, 28), // "twohundredtothreehundredtime"
QT_MOC_LITERAL(793, 11450, 19), // "reactiontimeChanged"
QT_MOC_LITERAL(794, 11470, 12), // "reactiontime"
QT_MOC_LITERAL(795, 11483, 21), // "IGBTPhaseATempChanged"
QT_MOC_LITERAL(796, 11505, 14), // "IGBTPhaseATemp"
QT_MOC_LITERAL(797, 11520, 21), // "IGBTPhaseBTempChanged"
QT_MOC_LITERAL(798, 11542, 14), // "IGBTPhaseBTemp"
QT_MOC_LITERAL(799, 11557, 21), // "IGBTPhaseCTempChanged"
QT_MOC_LITERAL(800, 11579, 14), // "IGBTPhaseCTemp"
QT_MOC_LITERAL(801, 11594, 21), // "GateDriverTempChanged"
QT_MOC_LITERAL(802, 11616, 14), // "GateDriverTemp"
QT_MOC_LITERAL(803, 11631, 23), // "ControlBoardTempChanged"
QT_MOC_LITERAL(804, 11655, 16), // "ControlBoardTemp"
QT_MOC_LITERAL(805, 11672, 15), // "RtdTemp1Changed"
QT_MOC_LITERAL(806, 11688, 8), // "RtdTemp1"
QT_MOC_LITERAL(807, 11697, 15), // "RtdTemp2Changed"
QT_MOC_LITERAL(808, 11713, 8), // "RtdTemp2"
QT_MOC_LITERAL(809, 11722, 15), // "RtdTemp3Changed"
QT_MOC_LITERAL(810, 11738, 8), // "RtdTemp3"
QT_MOC_LITERAL(811, 11747, 15), // "RtdTemp4Changed"
QT_MOC_LITERAL(812, 11763, 8), // "RtdTemp4"
QT_MOC_LITERAL(813, 11772, 15), // "RtdTemp5Changed"
QT_MOC_LITERAL(814, 11788, 8), // "RtdTemp5"
QT_MOC_LITERAL(815, 11797, 24), // "EMotorTemperatureChanged"
QT_MOC_LITERAL(816, 11822, 17), // "EMotorTemperature"
QT_MOC_LITERAL(817, 11840, 20), // "TorqueShudderChanged"
QT_MOC_LITERAL(818, 11861, 13), // "TorqueShudder"
QT_MOC_LITERAL(819, 11875, 24), // "DigInput1FowardSwChanged"
QT_MOC_LITERAL(820, 11900, 17), // "DigInput1FowardSw"
QT_MOC_LITERAL(821, 11918, 25), // "DigInput2ReverseSwChanged"
QT_MOC_LITERAL(822, 11944, 18), // "DigInput2ReverseSw"
QT_MOC_LITERAL(823, 11963, 23), // "DigInput3BrakeSwChanged"
QT_MOC_LITERAL(824, 11987, 16), // "DigInput3BrakeSw"
QT_MOC_LITERAL(825, 12004, 30), // "DigInput4RegenDisableSwChanged"
QT_MOC_LITERAL(826, 12035, 23), // "DigInput4RegenDisableSw"
QT_MOC_LITERAL(827, 12059, 21), // "DigInput5IgnSwChanged"
QT_MOC_LITERAL(828, 12081, 14), // "DigInput5IgnSw"
QT_MOC_LITERAL(829, 12096, 23), // "DigInput6StartSwChanged"
QT_MOC_LITERAL(830, 12120, 16), // "DigInput6StartSw"
QT_MOC_LITERAL(831, 12137, 20), // "DigInput7BoolChanged"
QT_MOC_LITERAL(832, 12158, 13), // "DigInput7Bool"
QT_MOC_LITERAL(833, 12172, 20), // "DigInput8BoolChanged"
QT_MOC_LITERAL(834, 12193, 13), // "DigInput8Bool"
QT_MOC_LITERAL(835, 12207, 18), // "EMotorAngleChanged"
QT_MOC_LITERAL(836, 12226, 11), // "EMotorAngle"
QT_MOC_LITERAL(837, 12238, 18), // "EMotorSpeedChanged"
QT_MOC_LITERAL(838, 12257, 11), // "EMotorSpeed"
QT_MOC_LITERAL(839, 12269, 24), // "ElectricalOutFreqChanged"
QT_MOC_LITERAL(840, 12294, 17), // "ElectricalOutFreq"
QT_MOC_LITERAL(841, 12312, 28), // "DeltaResolverFilteredChanged"
QT_MOC_LITERAL(842, 12341, 21), // "DeltaResolverFiltered"
QT_MOC_LITERAL(843, 12363, 20), // "PhaseACurrentChanged"
QT_MOC_LITERAL(844, 12384, 13), // "PhaseACurrent"
QT_MOC_LITERAL(845, 12398, 20), // "PhaseBCurrentChanged"
QT_MOC_LITERAL(846, 12419, 13), // "PhaseBCurrent"
QT_MOC_LITERAL(847, 12433, 20), // "PhaseCCurrentChanged"
QT_MOC_LITERAL(848, 12454, 13), // "PhaseCCurrent"
QT_MOC_LITERAL(849, 12468, 19), // "DCBusCurrentChanged"
QT_MOC_LITERAL(850, 12488, 12), // "DCBusCurrent"
QT_MOC_LITERAL(851, 12501, 19), // "DCBusVoltageChanged"
QT_MOC_LITERAL(852, 12521, 12), // "DCBusVoltage"
QT_MOC_LITERAL(853, 12534, 20), // "OutputVoltageChanged"
QT_MOC_LITERAL(854, 12555, 13), // "OutputVoltage"
QT_MOC_LITERAL(855, 12569, 19), // "VABvdVoltageChanged"
QT_MOC_LITERAL(856, 12589, 12), // "VABvdVoltage"
QT_MOC_LITERAL(857, 12602, 19), // "VBCvqVoltageChanged"
QT_MOC_LITERAL(858, 12622, 12), // "VBCvqVoltage"
QT_MOC_LITERAL(859, 12635, 17), // "TirepresLFChanged"
QT_MOC_LITERAL(860, 12653, 10), // "TirepresLF"
QT_MOC_LITERAL(861, 12664, 17), // "TirepresRFChanged"
QT_MOC_LITERAL(862, 12682, 10), // "TirepresRF"
QT_MOC_LITERAL(863, 12693, 17), // "TirepresRRChanged"
QT_MOC_LITERAL(864, 12711, 10), // "TirepresRR"
QT_MOC_LITERAL(865, 12722, 17), // "TirepresLRChanged"
QT_MOC_LITERAL(866, 12740, 10), // "TirepresLR"
QT_MOC_LITERAL(867, 12751, 17), // "TiretempLFChanged"
QT_MOC_LITERAL(868, 12769, 10), // "TiretempLF"
QT_MOC_LITERAL(869, 12780, 17), // "TiretempRFChanged"
QT_MOC_LITERAL(870, 12798, 10), // "TiretempRF"
QT_MOC_LITERAL(871, 12809, 17), // "TiretempRRChanged"
QT_MOC_LITERAL(872, 12827, 10), // "TiretempRR"
QT_MOC_LITERAL(873, 12838, 17), // "TiretempLRChanged"
QT_MOC_LITERAL(874, 12856, 10), // "TiretempLR"
QT_MOC_LITERAL(875, 12867, 20), // "DigitalInput1Changed"
QT_MOC_LITERAL(876, 12888, 13), // "DigitalInput1"
QT_MOC_LITERAL(877, 12902, 20), // "DigitalInput2Changed"
QT_MOC_LITERAL(878, 12923, 13), // "DigitalInput2"
QT_MOC_LITERAL(879, 12937, 20), // "DigitalInput3Changed"
QT_MOC_LITERAL(880, 12958, 13), // "DigitalInput3"
QT_MOC_LITERAL(881, 12972, 20), // "DigitalInput4Changed"
QT_MOC_LITERAL(882, 12993, 13), // "DigitalInput4"
QT_MOC_LITERAL(883, 13007, 20), // "DigitalInput5Changed"
QT_MOC_LITERAL(884, 13028, 13), // "DigitalInput5"
QT_MOC_LITERAL(885, 13042, 20), // "DigitalInput6Changed"
QT_MOC_LITERAL(886, 13063, 13), // "DigitalInput6"
QT_MOC_LITERAL(887, 13077, 20), // "DigitalInput7Changed"
QT_MOC_LITERAL(888, 13098, 13), // "DigitalInput7"
QT_MOC_LITERAL(889, 13112, 22), // "EXDigitalInput1Changed"
QT_MOC_LITERAL(890, 13135, 15), // "EXDigitalInput1"
QT_MOC_LITERAL(891, 13151, 22), // "EXDigitalInput2Changed"
QT_MOC_LITERAL(892, 13174, 15), // "EXDigitalInput2"
QT_MOC_LITERAL(893, 13190, 22), // "EXDigitalInput3Changed"
QT_MOC_LITERAL(894, 13213, 15), // "EXDigitalInput3"
QT_MOC_LITERAL(895, 13229, 22), // "EXDigitalInput4Changed"
QT_MOC_LITERAL(896, 13252, 15), // "EXDigitalInput4"
QT_MOC_LITERAL(897, 13268, 22), // "EXDigitalInput5Changed"
QT_MOC_LITERAL(898, 13291, 15), // "EXDigitalInput5"
QT_MOC_LITERAL(899, 13307, 22), // "EXDigitalInput6Changed"
QT_MOC_LITERAL(900, 13330, 15), // "EXDigitalInput6"
QT_MOC_LITERAL(901, 13346, 22), // "EXDigitalInput7Changed"
QT_MOC_LITERAL(902, 13369, 15), // "EXDigitalInput7"
QT_MOC_LITERAL(903, 13385, 22), // "EXDigitalInput8Changed"
QT_MOC_LITERAL(904, 13408, 15), // "EXDigitalInput8"
QT_MOC_LITERAL(905, 13424, 21), // "EXAnalogInput0Changed"
QT_MOC_LITERAL(906, 13446, 14), // "EXAnalogInput0"
QT_MOC_LITERAL(907, 13461, 21), // "EXAnalogInput1Changed"
QT_MOC_LITERAL(908, 13483, 14), // "EXAnalogInput1"
QT_MOC_LITERAL(909, 13498, 21), // "EXAnalogInput2Changed"
QT_MOC_LITERAL(910, 13520, 14), // "EXAnalogInput2"
QT_MOC_LITERAL(911, 13535, 21), // "EXAnalogInput3Changed"
QT_MOC_LITERAL(912, 13557, 14), // "EXAnalogInput3"
QT_MOC_LITERAL(913, 13572, 21), // "EXAnalogInput4Changed"
QT_MOC_LITERAL(914, 13594, 14), // "EXAnalogInput4"
QT_MOC_LITERAL(915, 13609, 21), // "EXAnalogInput5Changed"
QT_MOC_LITERAL(916, 13631, 14), // "EXAnalogInput5"
QT_MOC_LITERAL(917, 13646, 21), // "EXAnalogInput6Changed"
QT_MOC_LITERAL(918, 13668, 14), // "EXAnalogInput6"
QT_MOC_LITERAL(919, 13683, 21), // "EXAnalogInput7Changed"
QT_MOC_LITERAL(920, 13705, 14), // "EXAnalogInput7"
QT_MOC_LITERAL(921, 13720, 13), // "igncutChanged"
QT_MOC_LITERAL(922, 13734, 6), // "igncut"
QT_MOC_LITERAL(923, 13741, 23), // "undrivenavgspeedChanged"
QT_MOC_LITERAL(924, 13765, 16), // "undrivenavgspeed"
QT_MOC_LITERAL(925, 13782, 21), // "drivenavgspeedChanged"
QT_MOC_LITERAL(926, 13804, 14), // "drivenavgspeed"
QT_MOC_LITERAL(927, 13819, 21), // "dsettargetslipChanged"
QT_MOC_LITERAL(928, 13841, 14), // "dsettargetslip"
QT_MOC_LITERAL(929, 13856, 28), // "tractionctlpowerlimitChanged"
QT_MOC_LITERAL(930, 13885, 21), // "tractionctlpowerlimit"
QT_MOC_LITERAL(931, 13907, 19), // "knockallpeakChanged"
QT_MOC_LITERAL(932, 13927, 12), // "knockallpeak"
QT_MOC_LITERAL(933, 13940, 16), // "knockcorrChanged"
QT_MOC_LITERAL(934, 13957, 9), // "knockcorr"
QT_MOC_LITERAL(935, 13967, 19), // "knocklastcylChanged"
QT_MOC_LITERAL(936, 13987, 12), // "knocklastcyl"
QT_MOC_LITERAL(937, 14000, 20), // "totalfueltrimChanged"
QT_MOC_LITERAL(938, 14021, 13), // "totalfueltrim"
QT_MOC_LITERAL(939, 14035, 19), // "totaligncompChanged"
QT_MOC_LITERAL(940, 14055, 12), // "totaligncomp"
QT_MOC_LITERAL(941, 14068, 17), // "egthighestChanged"
QT_MOC_LITERAL(942, 14086, 10), // "egthighest"
QT_MOC_LITERAL(943, 14097, 17), // "cputempecuChanged"
QT_MOC_LITERAL(944, 14115, 10), // "cputempecu"
QT_MOC_LITERAL(945, 14126, 21), // "errorcodecountChanged"
QT_MOC_LITERAL(946, 14148, 14), // "errorcodecount"
QT_MOC_LITERAL(947, 14163, 20), // "lostsynccountChanged"
QT_MOC_LITERAL(948, 14184, 13), // "lostsynccount"
QT_MOC_LITERAL(949, 14198, 14), // "egtdiffChanged"
QT_MOC_LITERAL(950, 14213, 7), // "egtdiff"
QT_MOC_LITERAL(951, 14221, 23), // "activeboosttableChanged"
QT_MOC_LITERAL(952, 14245, 16), // "activeboosttable"
QT_MOC_LITERAL(953, 14262, 22), // "activetunetableChanged"
QT_MOC_LITERAL(954, 14285, 15), // "activetunetable"
QT_MOC_LITERAL(955, 14301, 21), // "genericoutput1Changed"
QT_MOC_LITERAL(956, 14323, 14), // "genericoutput1"
QT_MOC_LITERAL(957, 14338, 21), // "frequencyDIEX1Changed"
QT_MOC_LITERAL(958, 14360, 14), // "frequencyDIEX1"
QT_MOC_LITERAL(959, 14375, 22), // "LF_Tyre_Temp_01Changed"
QT_MOC_LITERAL(960, 14398, 15), // "LF_Tyre_Temp_01"
QT_MOC_LITERAL(961, 14414, 22), // "LF_Tyre_Temp_02Changed"
QT_MOC_LITERAL(962, 14437, 15), // "LF_Tyre_Temp_02"
QT_MOC_LITERAL(963, 14453, 22), // "LF_Tyre_Temp_03Changed"
QT_MOC_LITERAL(964, 14476, 15), // "LF_Tyre_Temp_03"
QT_MOC_LITERAL(965, 14492, 22), // "LF_Tyre_Temp_04Changed"
QT_MOC_LITERAL(966, 14515, 15), // "LF_Tyre_Temp_04"
QT_MOC_LITERAL(967, 14531, 22), // "LF_Tyre_Temp_05Changed"
QT_MOC_LITERAL(968, 14554, 15), // "LF_Tyre_Temp_05"
QT_MOC_LITERAL(969, 14570, 22), // "LF_Tyre_Temp_06Changed"
QT_MOC_LITERAL(970, 14593, 15), // "LF_Tyre_Temp_06"
QT_MOC_LITERAL(971, 14609, 22), // "LF_Tyre_Temp_07Changed"
QT_MOC_LITERAL(972, 14632, 15), // "LF_Tyre_Temp_07"
QT_MOC_LITERAL(973, 14648, 22), // "LF_Tyre_Temp_08Changed"
QT_MOC_LITERAL(974, 14671, 15), // "LF_Tyre_Temp_08"
QT_MOC_LITERAL(975, 14687, 22), // "RF_Tyre_Temp_01Changed"
QT_MOC_LITERAL(976, 14710, 15), // "RF_Tyre_Temp_01"
QT_MOC_LITERAL(977, 14726, 22), // "RF_Tyre_Temp_02Changed"
QT_MOC_LITERAL(978, 14749, 15), // "RF_Tyre_Temp_02"
QT_MOC_LITERAL(979, 14765, 22), // "RF_Tyre_Temp_03Changed"
QT_MOC_LITERAL(980, 14788, 15), // "RF_Tyre_Temp_03"
QT_MOC_LITERAL(981, 14804, 22), // "RF_Tyre_Temp_04Changed"
QT_MOC_LITERAL(982, 14827, 15), // "RF_Tyre_Temp_04"
QT_MOC_LITERAL(983, 14843, 22), // "RF_Tyre_Temp_05Changed"
QT_MOC_LITERAL(984, 14866, 15), // "RF_Tyre_Temp_05"
QT_MOC_LITERAL(985, 14882, 22), // "RF_Tyre_Temp_06Changed"
QT_MOC_LITERAL(986, 14905, 15), // "RF_Tyre_Temp_06"
QT_MOC_LITERAL(987, 14921, 22), // "RF_Tyre_Temp_07Changed"
QT_MOC_LITERAL(988, 14944, 15), // "RF_Tyre_Temp_07"
QT_MOC_LITERAL(989, 14960, 22), // "RF_Tyre_Temp_08Changed"
QT_MOC_LITERAL(990, 14983, 15), // "RF_Tyre_Temp_08"
QT_MOC_LITERAL(991, 14999, 22), // "LR_Tyre_Temp_01Changed"
QT_MOC_LITERAL(992, 15022, 15), // "LR_Tyre_Temp_01"
QT_MOC_LITERAL(993, 15038, 22), // "LR_Tyre_Temp_02Changed"
QT_MOC_LITERAL(994, 15061, 15), // "LR_Tyre_Temp_02"
QT_MOC_LITERAL(995, 15077, 22), // "LR_Tyre_Temp_03Changed"
QT_MOC_LITERAL(996, 15100, 15), // "LR_Tyre_Temp_03"
QT_MOC_LITERAL(997, 15116, 22), // "LR_Tyre_Temp_04Changed"
QT_MOC_LITERAL(998, 15139, 15), // "LR_Tyre_Temp_04"
QT_MOC_LITERAL(999, 15155, 22), // "LR_Tyre_Temp_05Changed"
QT_MOC_LITERAL(1000, 15178, 15), // "LR_Tyre_Temp_05"
QT_MOC_LITERAL(1001, 15194, 22), // "LR_Tyre_Temp_06Changed"
QT_MOC_LITERAL(1002, 15217, 15), // "LR_Tyre_Temp_06"
QT_MOC_LITERAL(1003, 15233, 22), // "LR_Tyre_Temp_07Changed"
QT_MOC_LITERAL(1004, 15256, 15), // "LR_Tyre_Temp_07"
QT_MOC_LITERAL(1005, 15272, 22), // "LR_Tyre_Temp_08Changed"
QT_MOC_LITERAL(1006, 15295, 15), // "LR_Tyre_Temp_08"
QT_MOC_LITERAL(1007, 15311, 22), // "RR_Tyre_Temp_01Changed"
QT_MOC_LITERAL(1008, 15334, 15), // "RR_Tyre_Temp_01"
QT_MOC_LITERAL(1009, 15350, 22), // "RR_Tyre_Temp_02Changed"
QT_MOC_LITERAL(1010, 15373, 15), // "RR_Tyre_Temp_02"
QT_MOC_LITERAL(1011, 15389, 22), // "RR_Tyre_Temp_03Changed"
QT_MOC_LITERAL(1012, 15412, 15), // "RR_Tyre_Temp_03"
QT_MOC_LITERAL(1013, 15428, 22), // "RR_Tyre_Temp_04Changed"
QT_MOC_LITERAL(1014, 15451, 15), // "RR_Tyre_Temp_04"
QT_MOC_LITERAL(1015, 15467, 22), // "RR_Tyre_Temp_05Changed"
QT_MOC_LITERAL(1016, 15490, 15), // "RR_Tyre_Temp_05"
QT_MOC_LITERAL(1017, 15506, 22), // "RR_Tyre_Temp_06Changed"
QT_MOC_LITERAL(1018, 15529, 15), // "RR_Tyre_Temp_06"
QT_MOC_LITERAL(1019, 15545, 22), // "RR_Tyre_Temp_07Changed"
QT_MOC_LITERAL(1020, 15568, 15), // "RR_Tyre_Temp_07"
QT_MOC_LITERAL(1021, 15584, 22), // "RR_Tyre_Temp_08Changed"
QT_MOC_LITERAL(1022, 15607, 15), // "RR_Tyre_Temp_08"
QT_MOC_LITERAL(1023, 15623, 29), // "RPMFrequencyDividerDi1Changed"
QT_MOC_LITERAL(1024, 15653, 22), // "RPMFrequencyDividerDi1"
QT_MOC_LITERAL(1025, 15676, 20), // "DI1RPMEnabledChanged"
QT_MOC_LITERAL(1026, 15697, 13), // "DI1RPMEnabled"
QT_MOC_LITERAL(1027, 15711, 18), // "ExternalrpmChanged"
QT_MOC_LITERAL(1028, 15730, 11), // "Externalrpm"
QT_MOC_LITERAL(1029, 15742, 15), // "languageChanged"
QT_MOC_LITERAL(1030, 15758, 8), // "language"
QT_MOC_LITERAL(1031, 15767, 37), // "externalspeedconnectionreques..."
QT_MOC_LITERAL(1032, 15805, 30), // "externalspeedconnectionrequest"
QT_MOC_LITERAL(1033, 15836, 24), // "externalspeedportChanged"
QT_MOC_LITERAL(1034, 15861, 13), // "pwseq1Changed"
QT_MOC_LITERAL(1035, 15875, 6), // "pwseq1"
QT_MOC_LITERAL(1036, 15882, 13), // "pwseq2Changed"
QT_MOC_LITERAL(1037, 15896, 6), // "pwseq2"
QT_MOC_LITERAL(1038, 15903, 13), // "pwseq3Changed"
QT_MOC_LITERAL(1039, 15917, 6), // "pwseq3"
QT_MOC_LITERAL(1040, 15924, 13), // "pwseq4Changed"
QT_MOC_LITERAL(1041, 15938, 6), // "pwseq4"
QT_MOC_LITERAL(1042, 15945, 20), // "nitrous1_dutyChanged"
QT_MOC_LITERAL(1043, 15966, 13), // "nitrous1_duty"
QT_MOC_LITERAL(1044, 15980, 20), // "nitrous2_dutyChanged"
QT_MOC_LITERAL(1045, 16001, 13), // "nitrous2_duty"
QT_MOC_LITERAL(1046, 16015, 24), // "nitrous_timer_outChanged"
QT_MOC_LITERAL(1047, 16040, 17), // "nitrous_timer_out"
QT_MOC_LITERAL(1048, 16058, 18), // "n2o_addfuelChanged"
QT_MOC_LITERAL(1049, 16077, 11), // "n2o_addfuel"
QT_MOC_LITERAL(1050, 16089, 17), // "n2o_retardChanged"
QT_MOC_LITERAL(1051, 16107, 10), // "n2o_retard"
QT_MOC_LITERAL(1052, 16118, 14), // "EGOcor1Changed"
QT_MOC_LITERAL(1053, 16133, 7), // "EGOcor1"
QT_MOC_LITERAL(1054, 16141, 14), // "EGOcor2Changed"
QT_MOC_LITERAL(1055, 16156, 7), // "EGOcor2"
QT_MOC_LITERAL(1056, 16164, 14), // "EGOcor3Changed"
QT_MOC_LITERAL(1057, 16179, 7), // "EGOcor3"
QT_MOC_LITERAL(1058, 16187, 14), // "EGOcor4Changed"
QT_MOC_LITERAL(1059, 16202, 7), // "EGOcor4"
QT_MOC_LITERAL(1060, 16210, 17), // "Knock_cyl1Changed"
QT_MOC_LITERAL(1061, 16228, 10), // "Knock_cyl1"
QT_MOC_LITERAL(1062, 16239, 17), // "Knock_cyl2Changed"
QT_MOC_LITERAL(1063, 16257, 10), // "Knock_cyl2"
QT_MOC_LITERAL(1064, 16268, 17), // "Knock_cyl3Changed"
QT_MOC_LITERAL(1065, 16286, 10), // "Knock_cyl3"
QT_MOC_LITERAL(1066, 16297, 17), // "Knock_cyl4Changed"
QT_MOC_LITERAL(1067, 16315, 10), // "Knock_cyl4"
QT_MOC_LITERAL(1068, 16326, 7), // "setTrip"
QT_MOC_LITERAL(1069, 16334, 12), // "setAnalogVal"
QT_MOC_LITERAL(1070, 16347, 3), // "A00"
QT_MOC_LITERAL(1071, 16351, 3), // "A05"
QT_MOC_LITERAL(1072, 16355, 3), // "A10"
QT_MOC_LITERAL(1073, 16359, 3), // "A15"
QT_MOC_LITERAL(1074, 16363, 3), // "A20"
QT_MOC_LITERAL(1075, 16367, 3), // "A25"
QT_MOC_LITERAL(1076, 16371, 3), // "A30"
QT_MOC_LITERAL(1077, 16375, 3), // "A35"
QT_MOC_LITERAL(1078, 16379, 3), // "A40"
QT_MOC_LITERAL(1079, 16383, 3), // "A45"
QT_MOC_LITERAL(1080, 16387, 3), // "A50"
QT_MOC_LITERAL(1081, 16391, 3), // "A55"
QT_MOC_LITERAL(1082, 16395, 3), // "A60"
QT_MOC_LITERAL(1083, 16399, 3), // "A65"
QT_MOC_LITERAL(1084, 16403, 3), // "A70"
QT_MOC_LITERAL(1085, 16407, 3), // "A75"
QT_MOC_LITERAL(1086, 16411, 3), // "A80"
QT_MOC_LITERAL(1087, 16415, 3), // "A85"
QT_MOC_LITERAL(1088, 16419, 3), // "A90"
QT_MOC_LITERAL(1089, 16423, 3), // "A95"
QT_MOC_LITERAL(1090, 16427, 4), // "A100"
QT_MOC_LITERAL(1091, 16432, 4), // "A105"
QT_MOC_LITERAL(1092, 16437, 14), // "setEXAnalogVal"
QT_MOC_LITERAL(1093, 16452, 5), // "EXA00"
QT_MOC_LITERAL(1094, 16458, 5), // "EXA05"
QT_MOC_LITERAL(1095, 16464, 5), // "EXA10"
QT_MOC_LITERAL(1096, 16470, 5), // "EXA15"
QT_MOC_LITERAL(1097, 16476, 5), // "EXA20"
QT_MOC_LITERAL(1098, 16482, 5), // "EXA25"
QT_MOC_LITERAL(1099, 16488, 5), // "EXA30"
QT_MOC_LITERAL(1100, 16494, 5), // "EXA35"
QT_MOC_LITERAL(1101, 16500, 5), // "EXA40"
QT_MOC_LITERAL(1102, 16506, 5), // "EXA45"
QT_MOC_LITERAL(1103, 16512, 5), // "EXA50"
QT_MOC_LITERAL(1104, 16518, 5), // "EXA55"
QT_MOC_LITERAL(1105, 16524, 5), // "EXA60"
QT_MOC_LITERAL(1106, 16530, 5), // "EXA65"
QT_MOC_LITERAL(1107, 16536, 5), // "EXA70"
QT_MOC_LITERAL(1108, 16542, 5), // "EXA75"
QT_MOC_LITERAL(1109, 16548, 16), // "steinhartcalc0on"
QT_MOC_LITERAL(1110, 16565, 16), // "steinhartcalc1on"
QT_MOC_LITERAL(1111, 16582, 16), // "steinhartcalc2on"
QT_MOC_LITERAL(1112, 16599, 16), // "steinhartcalc3on"
QT_MOC_LITERAL(1113, 16616, 16), // "steinhartcalc4on"
QT_MOC_LITERAL(1114, 16633, 16), // "steinhartcalc5on"
QT_MOC_LITERAL(1115, 16650, 8), // "AN0R3VAL"
QT_MOC_LITERAL(1116, 16659, 8), // "AN0R4VAL"
QT_MOC_LITERAL(1117, 16668, 8), // "AN1R3VAL"
QT_MOC_LITERAL(1118, 16677, 8), // "AN1R4VAL"
QT_MOC_LITERAL(1119, 16686, 8), // "AN2R3VAL"
QT_MOC_LITERAL(1120, 16695, 8), // "AN2R4VAL"
QT_MOC_LITERAL(1121, 16704, 8), // "AN3R3VAL"
QT_MOC_LITERAL(1122, 16713, 8), // "AN3R4VAL"
QT_MOC_LITERAL(1123, 16722, 8), // "AN4R3VAL"
QT_MOC_LITERAL(1124, 16731, 8), // "AN4R4VAL"
QT_MOC_LITERAL(1125, 16740, 8), // "AN5R3VAL"
QT_MOC_LITERAL(1126, 16749, 8), // "AN5R4VAL"
QT_MOC_LITERAL(1127, 16758, 16), // "setSteinhartcalc"
QT_MOC_LITERAL(1128, 16775, 3), // "T01"
QT_MOC_LITERAL(1129, 16779, 3), // "T02"
QT_MOC_LITERAL(1130, 16783, 3), // "T03"
QT_MOC_LITERAL(1131, 16787, 3), // "R01"
QT_MOC_LITERAL(1132, 16791, 3), // "R02"
QT_MOC_LITERAL(1133, 16795, 3), // "R03"
QT_MOC_LITERAL(1134, 16799, 3), // "T11"
QT_MOC_LITERAL(1135, 16803, 3), // "T12"
QT_MOC_LITERAL(1136, 16807, 3), // "T13"
QT_MOC_LITERAL(1137, 16811, 3), // "R11"
QT_MOC_LITERAL(1138, 16815, 3), // "R12"
QT_MOC_LITERAL(1139, 16819, 3), // "R13"
QT_MOC_LITERAL(1140, 16823, 3), // "T21"
QT_MOC_LITERAL(1141, 16827, 3), // "T22"
QT_MOC_LITERAL(1142, 16831, 3), // "T23"
QT_MOC_LITERAL(1143, 16835, 3), // "R21"
QT_MOC_LITERAL(1144, 16839, 3), // "R22"
QT_MOC_LITERAL(1145, 16843, 3), // "R23"
QT_MOC_LITERAL(1146, 16847, 3), // "T31"
QT_MOC_LITERAL(1147, 16851, 3), // "T32"
QT_MOC_LITERAL(1148, 16855, 3), // "T33"
QT_MOC_LITERAL(1149, 16859, 3), // "R31"
QT_MOC_LITERAL(1150, 16863, 3), // "R32"
QT_MOC_LITERAL(1151, 16867, 3), // "R33"
QT_MOC_LITERAL(1152, 16871, 3), // "T41"
QT_MOC_LITERAL(1153, 16875, 3), // "T42"
QT_MOC_LITERAL(1154, 16879, 3), // "T43"
QT_MOC_LITERAL(1155, 16883, 3), // "R41"
QT_MOC_LITERAL(1156, 16887, 3), // "R42"
QT_MOC_LITERAL(1157, 16891, 3), // "R43"
QT_MOC_LITERAL(1158, 16895, 3), // "T51"
QT_MOC_LITERAL(1159, 16899, 3), // "T52"
QT_MOC_LITERAL(1160, 16903, 3), // "T53"
QT_MOC_LITERAL(1161, 16907, 3), // "R51"
QT_MOC_LITERAL(1162, 16911, 3), // "R52"
QT_MOC_LITERAL(1163, 16915, 3), // "R53"
QT_MOC_LITERAL(1164, 16919, 10), // "setNMEAlog"
QT_MOC_LITERAL(1165, 16930, 6), // "setecu"
QT_MOC_LITERAL(1166, 16937, 16), // "setExternalSpeed"
QT_MOC_LITERAL(1167, 16954, 15), // "setspeedpercent"
QT_MOC_LITERAL(1168, 16970, 16), // "setpulsespermile"
QT_MOC_LITERAL(1169, 16987, 9), // "setmaxRPM"
QT_MOC_LITERAL(1170, 16997, 12), // "setrpmStage1"
QT_MOC_LITERAL(1171, 17010, 12), // "setrpmStage2"
QT_MOC_LITERAL(1172, 17023, 12), // "setrpmStage3"
QT_MOC_LITERAL(1173, 17036, 12), // "setrpmStage4"
QT_MOC_LITERAL(1174, 17049, 12), // "setwaterwarn"
QT_MOC_LITERAL(1175, 17062, 10), // "setrpmwarn"
QT_MOC_LITERAL(1176, 17073, 12), // "setknockwarn"
QT_MOC_LITERAL(1177, 17086, 12), // "setboostwarn"
QT_MOC_LITERAL(1178, 17099, 12), // "setsmoothrpm"
QT_MOC_LITERAL(1179, 17112, 14), // "setsmoothspeed"
QT_MOC_LITERAL(1180, 17127, 22), // "setsmootexAnalogInput7"
QT_MOC_LITERAL(1181, 17150, 12), // "setgearcalc1"
QT_MOC_LITERAL(1182, 17163, 12), // "setgearcalc2"
QT_MOC_LITERAL(1183, 17176, 12), // "setgearcalc3"
QT_MOC_LITERAL(1184, 17189, 12), // "setgearcalc4"
QT_MOC_LITERAL(1185, 17202, 12), // "setgearcalc5"
QT_MOC_LITERAL(1186, 17215, 12), // "setgearcalc6"
QT_MOC_LITERAL(1187, 17228, 21), // "setgearcalcactivation"
QT_MOC_LITERAL(1188, 17250, 12), // "setdraggable"
QT_MOC_LITERAL(1189, 17263, 17) // "setLambdamultiply"

    },
    "DashBoard\0odoChanged\0\0Odo\0CylindersChanged\0"
    "Cylinders\0tripChanged\0Trip\0NMEAlogChanged\0"
    "NMEAlog\0rpmChanged\0rpm\0intakepressChanged\0"
    "Intakepress\0pressureVChanged\0PressureV\0"
    "throttleVChanged\0ThrottleV\0primaryinpChanged\0"
    "Primaryinp\0fuelcChanged\0Fuelc\0"
    "leadingignChanged\0Leadingign\0"
    "trailingignChanged\0Trailingign\0"
    "fueltempChanged\0Fueltemp\0moilpChanged\0"
    "Moilp\0boosttpChanged\0Boosttp\0"
    "boostwgChanged\0Boostwg\0watertempChanged\0"
    "Watertemp\0intaketempChanged\0Intaketemp\0"
    "knockChanged\0Knock\0speedChanged\0speed\0"
    "batteryVChanged\0BatteryV\0iscvdutyChanged\0"
    "Iscvduty\0o2voltChanged\0O2volt\0"
    "Cyl1_O2_CorrChanged\0Cyl1_O2_Corr\0"
    "Cyl2_O2_CorrChanged\0Cyl2_O2_Corr\0"
    "Cyl3_O2_CorrChanged\0Cyl3_O2_Corr\0"
    "Cyl4_O2_CorrChanged\0Cyl4_O2_Corr\0"
    "Cyl5_O2_CorrChanged\0Cyl5_O2_Corr\0"
    "Cyl6_O2_CorrChanged\0Cyl6_O2_Corr\0"
    "Cyl7_O2_CorrChanged\0Cyl7_O2_Corr\0"
    "Cyl8_O2_CorrChanged\0Cyl8_O2_Corr\0"
    "na1Changed\0na1\0secinjpulseChanged\0"
    "Secinjpulse\0na2Changed\0na2\0injDutyChanged\0"
    "InjDuty\0injDuty2Changed\0InjDuty2\0"
    "InjAngleChanged\0InjAngle\0engLoadChanged\0"
    "EngLoad\0mAF1VChanged\0MAF1V\0mAF2VChanged\0"
    "MAF2V\0injmsChanged\0injms\0injChanged\0"
    "Inj\0ignChanged\0Ign\0dwellChanged\0Dwell\0"
    "BoostPresChanged\0BoostPres\0"
    "BoostPreskpaChanged\0BoostPreskpa\0"
    "boostDutyChanged\0BoostDuty\0"
    "mAFactivityChanged\0MAFactivity\0"
    "o2volt_2Changed\0O2volt_2\0pimChanged\0"
    "pim\0auxcalc1Changed\0auxcalc1\0"
    "auxcalc2Changed\0auxcalc2\0auxcalc3Changed\0"
    "auxcalc3\0auxcalc4Changed\0auxcalc4\0"
    "sens1Changed\0sens1\0sens2Changed\0sens2\0"
    "sens3Changed\0sens3\0sens4Changed\0sens4\0"
    "sens5Changed\0sens5\0sens6Changed\0sens6\0"
    "sens7Changed\0sens7\0sens8Changed\0sens8\0"
    "flag1Changed\0Flag1\0flag2Changed\0Flag2\0"
    "flag3Changed\0Flag3\0flag4Changed\0Flag4\0"
    "flag5Changed\0Flag5\0flag6Changed\0Flag6\0"
    "flag7Changed\0Flag7\0flag8Changed\0Flag8\0"
    "flag9Changed\0Flag9\0flag10Changed\0"
    "Flag10\0flag11Changed\0Flag11\0flag12Changed\0"
    "Flag12\0flag13Changed\0Flag13\0flag14Changed\0"
    "Flag14\0flag15Changed\0Flag15\0flag16Changed\0"
    "Flag16\0flag17Changed\0Flag17\0flag18Changed\0"
    "Flag18\0flag19Changed\0Flag19\0flag20Changed\0"
    "Flag20\0flag21Changed\0Flag21\0flag22Changed\0"
    "Flag22\0flag23Changed\0Flag23\0flag24Changed\0"
    "Flag24\0flag25Changed\0Flag25\0"
    "flagString1Changed\0FlagString1\0"
    "flagString2Changed\0FlagString2\0"
    "flagString3Changed\0FlagString3\0"
    "flagString4Changed\0FlagString4\0"
    "flagString5Changed\0FlagString5\0"
    "flagString6Changed\0FlagString6\0"
    "flagString7Changed\0FlagString7\0"
    "flagString8Changed\0FlagString8\0"
    "flagString9Changed\0FlagString9\0"
    "flagString10Changed\0FlagString10\0"
    "flagString11Changed\0FlagString11\0"
    "flagString12Changed\0FlagString12\0"
    "flagString13Changed\0FlagString13\0"
    "flagString14Changed\0FlagString14\0"
    "flagString15Changed\0FlagString15\0"
    "flagString16Changed\0FlagString16\0"
    "sensorString1Changed\0SensorString1\0"
    "sensorString2Changed\0SensorString2\0"
    "sensorString3Changed\0SensorString3\0"
    "sensorString4Changed\0SensorString4\0"
    "sensorString5Changed\0SensorString5\0"
    "sensorString6Changed\0SensorString6\0"
    "sensorString7Changed\0SensorString7\0"
    "sensorString8Changed\0SensorString8\0"
    "platformChanged\0Platform\0serialStatChanged\0"
    "SerialStat\0recvDataChanged\0RecvData\0"
    "timeoutStatChanged\0TimeoutStat\0"
    "runStatChanged\0RunStat\0WifiStatChanged\0"
    "WifiStat\0EthernetStatChanged\0EthernetStat\0"
    "CBXCountrysaveChanged\0CBXCountrysave\0"
    "CBXTracksaveChanged\0CBXTracksave\0"
    "gpsTimeChanged\0gpsTime\0gpsAltitudeChanged\0"
    "gpsAltitude\0gpsLatitudeChanged\0"
    "gpsLatitude\0gpsLongitudeChanged\0"
    "gpsLongitude\0gpsSpeedChanged\0gpsSpeed\0"
    "gpsVisibleSatelitesChanged\0"
    "gpsVisibleSatelites\0gpsFIXtypeChanged\0"
    "gpsFIXtype\0gpsbearingChanged\0gpsbearing\0"
    "gpsHDOPChanged\0gpsHDOP\0unitsChanged\0"
    "units\0speedunitsChanged\0speedunits\0"
    "pressureunitsChanged\0pressureunits\0"
    "mAPChanged\0MAP\0PANVACChanged\0PANVAC\0"
    "mAP2Changed\0MAP2\0aUXTChanged\0AUXT\0"
    "aFRChanged\0AFR\0AFRLEFTBANKTARGETChanged\0"
    "AFRLEFTBANKTARGET\0AFRRIGHTBANKTARGETChanged\0"
    "AFRRIGHTBANKTARGET\0AFRLEFTBANKACTUALChanged\0"
    "AFRLEFTBANKACTUAL\0AFRRIGHTBANKACTUALChanged\0"
    "AFRRIGHTBANKACTUAL\0BOOSTOFFSETChanged\0"
    "BOOSTOFFSET\0REVLIM3STEPChanged\0"
    "REVLIM3STEP\0REVLIM2STEPChanged\0"
    "REVLIM2STEP\0REVLIMGIGHSIDEChanged\0"
    "REVLIMGIGHSIDE\0REVLIMBOURNOUTChanged\0"
    "REVLIMBOURNOUT\0LEFTBANKO2CORRChanged\0"
    "LEFTBANKO2CORR\0RIGHTBANKO2CORRChanged\0"
    "RIGHTBANKO2CORR\0TRACTIONCTRLOFFSETChanged\0"
    "TRACTIONCTRLOFFSET\0DRIVESHAFTOFFSETChanged\0"
    "DRIVESHAFTOFFSET\0TCCOMMANDChanged\0"
    "TCCOMMAND\0FSLCOMMANDChanged\0FSLCOMMAND\0"
    "FSLINDEXChanged\0FSLINDEX\0AFRcyl1Changed\0"
    "AFRcyl1\0AFRcyl2Changed\0AFRcyl2\0"
    "AFRcyl3Changed\0AFRcyl3\0AFRcyl4Changed\0"
    "AFRcyl4\0AFRcyl5Changed\0AFRcyl5\0"
    "AFRcyl6Changed\0AFRcyl6\0AFRcyl7Changed\0"
    "AFRcyl7\0AFRcyl8Changed\0AFRcyl8\0"
    "tPSChanged\0TPS\0idleValueChanged\0"
    "IdleValue\0mVSSChanged\0MVSS\0sVSSChanged\0"
    "SVSS\0inj1Changed\0Inj1\0inj2Changed\0"
    "Inj2\0inj3Changed\0Inj3\0inj4Changed\0"
    "Inj4\0ign1Changed\0Ign1\0ign2Changed\0"
    "Ign2\0ign3Changed\0Ign3\0ign4Changed\0"
    "Ign4\0tRIMChanged\0TRIM\0lAMBDAChanged\0"
    "LAMBDA\0lAMBDATargetChanged\0LAMBDATarget\0"
    "fuelPressChanged\0FuelPress\0"
    "GearOilPressChanged\0GearOilPress\0"
    "accelxChanged\0accelx\0accelyChanged\0"
    "accely\0accelzChanged\0accelz\0gyroxChanged\0"
    "gyrox\0gyroyChanged\0gyroy\0gyrozChanged\0"
    "gyroz\0compassChanged\0compass\0"
    "ambitempChanged\0ambitemp\0ambipressChanged\0"
    "ambipress\0GearChanged\0Gear\0GearoffsetChanged\0"
    "Gearoffset\0GearCalculationChanged\0"
    "GearCalculation\0powerChanged\0Power\0"
    "torqueChanged\0Torque\0accelTimerChanged\0"
    "AccelTimer\0weightChanged\0Weight\0"
    "screenChanged\0screen\0maindashsetupChanged\0"
    "maindashsetup\0dashsetup3Changed\0"
    "dashsetup3\0dashsetup2Changed\0dashsetup2\0"
    "dashsetup1Changed\0dashsetup1\0"
    "dashfilesChanged\0dashfiles\0"
    "backroundpicturesChanged\0backroundpictures\0"
    "accelpedposChanged\0accelpedpos\0"
    "airtempensor2Changed\0airtempensor2\0"
    "antilaglauchswitchChanged\0antilaglauchswitch\0"
    "antilaglaunchonChanged\0antilaglaunchon\0"
    "auxrevlimitswitchChanged\0auxrevlimitswitch\0"
    "avfueleconomyChanged\0avfueleconomy\0"
    "battlightChanged\0battlight\0"
    "boostcontrolChanged\0boostcontrol\0"
    "brakepressChanged\0brakepress\0"
    "clutchswitchstateChanged\0clutchswitchstate\0"
    "coolantpressChanged\0coolantpress\0"
    "decelcutChanged\0decelcut\0diffoiltempChanged\0"
    "diffoiltemp\0distancetoemptyChanged\0"
    "distancetoempty\0egt1Changed\0egt1\0"
    "egt2Changed\0egt2\0egt3Changed\0egt3\0"
    "egt4Changed\0egt4\0egt5Changed\0egt5\0"
    "egt6Changed\0egt6\0egt7Changed\0egt7\0"
    "egt8Changed\0egt8\0egt9Changed\0egt9\0"
    "egt10Changed\0egt10\0egt11Changed\0egt11\0"
    "egt12Changed\0egt12\0excamangle1Changed\0"
    "excamangle1\0excamangle2Changed\0"
    "excamangle2\0flatshiftstateChanged\0"
    "flatshiftstate\0fuelclevelChanged\0"
    "fuelclevel\0fuelcompositionChanged\0"
    "fuelcomposition\0fuelconsrateChanged\0"
    "fuelconsrate\0fuelcutpercChanged\0"
    "fuelcutperc\0fuelflowChanged\0fuelflow\0"
    "fuelflowdiffChanged\0fuelflowdiff\0"
    "fuelflowretChanged\0fuelflowret\0"
    "fueltrimlongtbank1Changed\0fueltrimlongtbank1\0"
    "fueltrimlongtbank2Changed\0fueltrimlongtbank2\0"
    "fueltrimshorttbank1Changed\0"
    "fueltrimshorttbank1\0fueltrimshorttbank2Changed\0"
    "fueltrimshorttbank2\0gearswitchChanged\0"
    "gearswitch\0handbrakeChanged\0handbrake\0"
    "highbeamChanged\0highbeam\0lowBeamChanged\0"
    "lowBeam\0tractionControlChanged\0"
    "tractionControl\0homeccounterChanged\0"
    "homeccounter\0incamangle1Changed\0"
    "incamangle1\0incamangle2Changed\0"
    "incamangle2\0knocklevlogged1Changed\0"
    "knocklevlogged1\0knocklevlogged2Changed\0"
    "knocklevlogged2\0knockretardbank1Changed\0"
    "knockretardbank1\0knockretardbank2Changed\0"
    "knockretardbank2\0lambda2Changed\0lambda2\0"
    "lambda3Changed\0lambda3\0lambda4Changed\0"
    "lambda4\0launchcontolfuelenrichChanged\0"
    "launchcontolfuelenrich\0"
    "launchctrolignretardChanged\0"
    "launchctrolignretard\0leftindicatorChanged\0"
    "leftindicator\0limpmodeChanged\0limpmode\0"
    "milChanged\0mil\0missccountChanged\0"
    "missccount\0nosactiveChanged\0nosactive\0"
    "nospressChanged\0nospress\0nosswitchChanged\0"
    "nosswitch\0oilpresChanged\0oilpres\0"
    "oiltempChanged\0oiltemp\0rallyantilagswitchChanged\0"
    "rallyantilagswitch\0rightindicatorChanged\0"
    "rightindicator\0targetbstlelkpaChanged\0"
    "targetbstlelkpa\0timeddutyout1Changed\0"
    "timeddutyout1\0timeddutyout2Changed\0"
    "timeddutyout2\0timeddutyoutputactiveChanged\0"
    "timeddutyoutputactive\0torqueredcutactiveChanged\0"
    "torqueredcutactive\0torqueredlevelactiveChanged\0"
    "torqueredlevelactive\0transientthroactiveChanged\0"
    "transientthroactive\0transoiltempChanged\0"
    "transoiltemp\0triggerccounterChanged\0"
    "triggerccounter\0triggersrsinceasthomeChanged\0"
    "triggersrsinceasthome\0turborpmChanged\0"
    "turborpm\0turborpm2Changed\0turborpm2\0"
    "wastegatepressChanged\0wastegatepress\0"
    "wheeldiffChanged\0wheeldiff\0wheelslipChanged\0"
    "wheelslip\0wheelspdftleftChanged\0"
    "wheelspdftleft\0wheelspdftrightChanged\0"
    "wheelspdftright\0wheelspdrearleftChanged\0"
    "wheelspdrearleft\0wheelspdrearrightChanged\0"
    "wheelspdrearright\0musicpathChanged\0"
    "musicpath\0supportedRegChanged\0"
    "supportedReg\0speedpercentChanged\0"
    "speedpercent\0pulsespermileChanged\0"
    "pulsespermile\0maxRPMChanged\0maxRPM\0"
    "rpmStage1Changed\0rpmStage1\0rpmStage2Changed\0"
    "rpmStage2\0rpmStage3Changed\0rpmStage3\0"
    "rpmStage4Changed\0rpmStage4\0waterwarnChanged\0"
    "waterwarn\0rpmwarnChanged\0rpmwarn\0"
    "knockwarnChanged\0knockwarn\0boostwarnChanged\0"
    "boostwarn\0smoothrpmChanged\0smoothrpm\0"
    "smoothspeedChanged\0smoothspeed\0"
    "smootexAnalogInput7Changed\0"
    "smootexAnalogInput7\0gearcalc1Changed\0"
    "gearcalc1\0gearcalc2Changed\0gearcalc2\0"
    "gearcalc3Changed\0gearcalc3\0gearcalc4Changed\0"
    "gearcalc4\0gearcalc5Changed\0gearcalc5\0"
    "gearcalc6Changed\0gearcalc6\0"
    "gearcalcactivationChanged\0gearcalcactivation\0"
    "ecuChanged\0ecu\0rpmstyle1Changed\0"
    "rpmstyle1\0rpmstyle2Changed\0rpmstyle2\0"
    "rpmstyle3Changed\0rpmstyle3\0"
    "RotaryTrimpot1Changed\0RotaryTrimpot1\0"
    "RotaryTrimpot2Changed\0RotaryTrimpot2\0"
    "RotaryTrimpot3Changed\0RotaryTrimpot3\0"
    "CalibrationSelectChanged\0CalibrationSelect\0"
    "ErrorChanged\0Error\0autogearChanged\0"
    "autogear\0daemonlicenseChanged\0"
    "daemonlicense\0ExternalSpeedChanged\0"
    "ExternalSpeed\0externalspeedport\0"
    "currentLapChanged\0currentLap\0"
    "laptimeChanged\0laptime\0LastlaptimeChanged\0"
    "Lastlaptime\0bestlaptimeChanged\0"
    "bestlaptime\0draggableChanged\0draggable\0"
    "wifiChanged\0wifi\0canChanged\0can\0"
    "Analog0Changed\0Analog0\0Analog1Changed\0"
    "Analog1\0Analog2Changed\0Analog2\0"
    "Analog3Changed\0Analog3\0Analog4Changed\0"
    "Analog4\0Analog5Changed\0Analog5\0"
    "Analog6Changed\0Analog6\0Analog7Changed\0"
    "Analog7\0Analog8Changed\0Analog8\0"
    "Analog9Changed\0Analog9\0Analog10Changed\0"
    "Analog10\0AnalogCalc0Changed\0AnalogCalc0\0"
    "AnalogCalc1Changed\0AnalogCalc1\0"
    "AnalogCalc2Changed\0AnalogCalc2\0"
    "AnalogCalc3Changed\0AnalogCalc3\0"
    "AnalogCalc4Changed\0AnalogCalc4\0"
    "AnalogCalc5Changed\0AnalogCalc5\0"
    "AnalogCalc6Changed\0AnalogCalc6\0"
    "AnalogCalc7Changed\0AnalogCalc7\0"
    "AnalogCalc8Changed\0AnalogCalc8\0"
    "AnalogCalc9Changed\0AnalogCalc9\0"
    "AnalogCalc10Changed\0AnalogCalc10\0"
    "EXAnalogCalc0Changed\0EXAnalogCalc0\0"
    "EXAnalogCalc1Changed\0EXAnalogCalc1\0"
    "EXAnalogCalc2Changed\0EXAnalogCalc2\0"
    "EXAnalogCalc3Changed\0EXAnalogCalc3\0"
    "EXAnalogCalc4Changed\0EXAnalogCalc4\0"
    "EXAnalogCalc5Changed\0EXAnalogCalc5\0"
    "EXAnalogCalc6Changed\0EXAnalogCalc6\0"
    "EXAnalogCalc7Changed\0EXAnalogCalc7\0"
    "LambdamultiplyChanged\0Lambdamultiply\0"
    "Userchannel1Changed\0Userchannel1\0"
    "Userchannel2Changed\0Userchannel2\0"
    "Userchannel3Changed\0Userchannel3\0"
    "Userchannel4Changed\0Userchannel4\0"
    "Userchannel5Changed\0Userchannel5\0"
    "Userchannel6Changed\0Userchannel6\0"
    "Userchannel7Changed\0Userchannel7\0"
    "Userchannel8Changed\0Userchannel8\0"
    "Userchannel9Changed\0Userchannel9\0"
    "Userchannel10Changed\0Userchannel10\0"
    "Userchannel11Changed\0Userchannel11\0"
    "Userchannel12Changed\0Userchannel12\0"
    "BitfieldEngineStatusChanged\0"
    "BitfieldEngineStatus\0FuelLevelChanged\0"
    "FuelLevel\0SteeringWheelAngleChanged\0"
    "SteeringWheelAngle\0BrightnessChanged\0"
    "Brightness\0VisibledashesChanged\0"
    "Visibledashes\0oilpressurelampChanged\0"
    "oilpressurelamp\0overtempalarmChanged\0"
    "overtempalarm\0alternatorfailChanged\0"
    "alternatorfail\0AuxTemp1Changed\0AuxTemp1\0"
    "sixtyfoottimeChanged\0sixtyfoottime\0"
    "sixtyfootspeedChanged\0sixtyfootspeed\0"
    "threehundredthirtyfoottimeChanged\0"
    "threehundredthirtyfoottime\0"
    "threehundredthirtyfootspeedChanged\0"
    "threehundredthirtyfootspeed\0"
    "eightmiletimeChanged\0eightmiletime\0"
    "eightmilespeedChanged\0eightmilespeed\0"
    "quartermiletimeChanged\0quartermiletime\0"
    "quartermilespeedChanged\0quartermilespeed\0"
    "thousandfoottimeChanged\0thousandfoottime\0"
    "thousandfootspeedChanged\0thousandfootspeed\0"
    "zerotohundredtChanged\0zerotohundredt\0"
    "hundredtotwohundredtimeChanged\0"
    "hundredtotwohundredtime\0"
    "twohundredtothreehundredtimeChanged\0"
    "twohundredtothreehundredtime\0"
    "reactiontimeChanged\0reactiontime\0"
    "IGBTPhaseATempChanged\0IGBTPhaseATemp\0"
    "IGBTPhaseBTempChanged\0IGBTPhaseBTemp\0"
    "IGBTPhaseCTempChanged\0IGBTPhaseCTemp\0"
    "GateDriverTempChanged\0GateDriverTemp\0"
    "ControlBoardTempChanged\0ControlBoardTemp\0"
    "RtdTemp1Changed\0RtdTemp1\0RtdTemp2Changed\0"
    "RtdTemp2\0RtdTemp3Changed\0RtdTemp3\0"
    "RtdTemp4Changed\0RtdTemp4\0RtdTemp5Changed\0"
    "RtdTemp5\0EMotorTemperatureChanged\0"
    "EMotorTemperature\0TorqueShudderChanged\0"
    "TorqueShudder\0DigInput1FowardSwChanged\0"
    "DigInput1FowardSw\0DigInput2ReverseSwChanged\0"
    "DigInput2ReverseSw\0DigInput3BrakeSwChanged\0"
    "DigInput3BrakeSw\0DigInput4RegenDisableSwChanged\0"
    "DigInput4RegenDisableSw\0DigInput5IgnSwChanged\0"
    "DigInput5IgnSw\0DigInput6StartSwChanged\0"
    "DigInput6StartSw\0DigInput7BoolChanged\0"
    "DigInput7Bool\0DigInput8BoolChanged\0"
    "DigInput8Bool\0EMotorAngleChanged\0"
    "EMotorAngle\0EMotorSpeedChanged\0"
    "EMotorSpeed\0ElectricalOutFreqChanged\0"
    "ElectricalOutFreq\0DeltaResolverFilteredChanged\0"
    "DeltaResolverFiltered\0PhaseACurrentChanged\0"
    "PhaseACurrent\0PhaseBCurrentChanged\0"
    "PhaseBCurrent\0PhaseCCurrentChanged\0"
    "PhaseCCurrent\0DCBusCurrentChanged\0"
    "DCBusCurrent\0DCBusVoltageChanged\0"
    "DCBusVoltage\0OutputVoltageChanged\0"
    "OutputVoltage\0VABvdVoltageChanged\0"
    "VABvdVoltage\0VBCvqVoltageChanged\0"
    "VBCvqVoltage\0TirepresLFChanged\0"
    "TirepresLF\0TirepresRFChanged\0TirepresRF\0"
    "TirepresRRChanged\0TirepresRR\0"
    "TirepresLRChanged\0TirepresLR\0"
    "TiretempLFChanged\0TiretempLF\0"
    "TiretempRFChanged\0TiretempRF\0"
    "TiretempRRChanged\0TiretempRR\0"
    "TiretempLRChanged\0TiretempLR\0"
    "DigitalInput1Changed\0DigitalInput1\0"
    "DigitalInput2Changed\0DigitalInput2\0"
    "DigitalInput3Changed\0DigitalInput3\0"
    "DigitalInput4Changed\0DigitalInput4\0"
    "DigitalInput5Changed\0DigitalInput5\0"
    "DigitalInput6Changed\0DigitalInput6\0"
    "DigitalInput7Changed\0DigitalInput7\0"
    "EXDigitalInput1Changed\0EXDigitalInput1\0"
    "EXDigitalInput2Changed\0EXDigitalInput2\0"
    "EXDigitalInput3Changed\0EXDigitalInput3\0"
    "EXDigitalInput4Changed\0EXDigitalInput4\0"
    "EXDigitalInput5Changed\0EXDigitalInput5\0"
    "EXDigitalInput6Changed\0EXDigitalInput6\0"
    "EXDigitalInput7Changed\0EXDigitalInput7\0"
    "EXDigitalInput8Changed\0EXDigitalInput8\0"
    "EXAnalogInput0Changed\0EXAnalogInput0\0"
    "EXAnalogInput1Changed\0EXAnalogInput1\0"
    "EXAnalogInput2Changed\0EXAnalogInput2\0"
    "EXAnalogInput3Changed\0EXAnalogInput3\0"
    "EXAnalogInput4Changed\0EXAnalogInput4\0"
    "EXAnalogInput5Changed\0EXAnalogInput5\0"
    "EXAnalogInput6Changed\0EXAnalogInput6\0"
    "EXAnalogInput7Changed\0EXAnalogInput7\0"
    "igncutChanged\0igncut\0undrivenavgspeedChanged\0"
    "undrivenavgspeed\0drivenavgspeedChanged\0"
    "drivenavgspeed\0dsettargetslipChanged\0"
    "dsettargetslip\0tractionctlpowerlimitChanged\0"
    "tractionctlpowerlimit\0knockallpeakChanged\0"
    "knockallpeak\0knockcorrChanged\0knockcorr\0"
    "knocklastcylChanged\0knocklastcyl\0"
    "totalfueltrimChanged\0totalfueltrim\0"
    "totaligncompChanged\0totaligncomp\0"
    "egthighestChanged\0egthighest\0"
    "cputempecuChanged\0cputempecu\0"
    "errorcodecountChanged\0errorcodecount\0"
    "lostsynccountChanged\0lostsynccount\0"
    "egtdiffChanged\0egtdiff\0activeboosttableChanged\0"
    "activeboosttable\0activetunetableChanged\0"
    "activetunetable\0genericoutput1Changed\0"
    "genericoutput1\0frequencyDIEX1Changed\0"
    "frequencyDIEX1\0LF_Tyre_Temp_01Changed\0"
    "LF_Tyre_Temp_01\0LF_Tyre_Temp_02Changed\0"
    "LF_Tyre_Temp_02\0LF_Tyre_Temp_03Changed\0"
    "LF_Tyre_Temp_03\0LF_Tyre_Temp_04Changed\0"
    "LF_Tyre_Temp_04\0LF_Tyre_Temp_05Changed\0"
    "LF_Tyre_Temp_05\0LF_Tyre_Temp_06Changed\0"
    "LF_Tyre_Temp_06\0LF_Tyre_Temp_07Changed\0"
    "LF_Tyre_Temp_07\0LF_Tyre_Temp_08Changed\0"
    "LF_Tyre_Temp_08\0RF_Tyre_Temp_01Changed\0"
    "RF_Tyre_Temp_01\0RF_Tyre_Temp_02Changed\0"
    "RF_Tyre_Temp_02\0RF_Tyre_Temp_03Changed\0"
    "RF_Tyre_Temp_03\0RF_Tyre_Temp_04Changed\0"
    "RF_Tyre_Temp_04\0RF_Tyre_Temp_05Changed\0"
    "RF_Tyre_Temp_05\0RF_Tyre_Temp_06Changed\0"
    "RF_Tyre_Temp_06\0RF_Tyre_Temp_07Changed\0"
    "RF_Tyre_Temp_07\0RF_Tyre_Temp_08Changed\0"
    "RF_Tyre_Temp_08\0LR_Tyre_Temp_01Changed\0"
    "LR_Tyre_Temp_01\0LR_Tyre_Temp_02Changed\0"
    "LR_Tyre_Temp_02\0LR_Tyre_Temp_03Changed\0"
    "LR_Tyre_Temp_03\0LR_Tyre_Temp_04Changed\0"
    "LR_Tyre_Temp_04\0LR_Tyre_Temp_05Changed\0"
    "LR_Tyre_Temp_05\0LR_Tyre_Temp_06Changed\0"
    "LR_Tyre_Temp_06\0LR_Tyre_Temp_07Changed\0"
    "LR_Tyre_Temp_07\0LR_Tyre_Temp_08Changed\0"
    "LR_Tyre_Temp_08\0RR_Tyre_Temp_01Changed\0"
    "RR_Tyre_Temp_01\0RR_Tyre_Temp_02Changed\0"
    "RR_Tyre_Temp_02\0RR_Tyre_Temp_03Changed\0"
    "RR_Tyre_Temp_03\0RR_Tyre_Temp_04Changed\0"
    "RR_Tyre_Temp_04\0RR_Tyre_Temp_05Changed\0"
    "RR_Tyre_Temp_05\0RR_Tyre_Temp_06Changed\0"
    "RR_Tyre_Temp_06\0RR_Tyre_Temp_07Changed\0"
    "RR_Tyre_Temp_07\0RR_Tyre_Temp_08Changed\0"
    "RR_Tyre_Temp_08\0RPMFrequencyDividerDi1Changed\0"
    "RPMFrequencyDividerDi1\0DI1RPMEnabledChanged\0"
    "DI1RPMEnabled\0ExternalrpmChanged\0"
    "Externalrpm\0languageChanged\0language\0"
    "externalspeedconnectionrequestChanged\0"
    "externalspeedconnectionrequest\0"
    "externalspeedportChanged\0pwseq1Changed\0"
    "pwseq1\0pwseq2Changed\0pwseq2\0pwseq3Changed\0"
    "pwseq3\0pwseq4Changed\0pwseq4\0"
    "nitrous1_dutyChanged\0nitrous1_duty\0"
    "nitrous2_dutyChanged\0nitrous2_duty\0"
    "nitrous_timer_outChanged\0nitrous_timer_out\0"
    "n2o_addfuelChanged\0n2o_addfuel\0"
    "n2o_retardChanged\0n2o_retard\0"
    "EGOcor1Changed\0EGOcor1\0EGOcor2Changed\0"
    "EGOcor2\0EGOcor3Changed\0EGOcor3\0"
    "EGOcor4Changed\0EGOcor4\0Knock_cyl1Changed\0"
    "Knock_cyl1\0Knock_cyl2Changed\0Knock_cyl2\0"
    "Knock_cyl3Changed\0Knock_cyl3\0"
    "Knock_cyl4Changed\0Knock_cyl4\0setTrip\0"
    "setAnalogVal\0A00\0A05\0A10\0A15\0A20\0A25\0"
    "A30\0A35\0A40\0A45\0A50\0A55\0A60\0A65\0A70\0"
    "A75\0A80\0A85\0A90\0A95\0A100\0A105\0"
    "setEXAnalogVal\0EXA00\0EXA05\0EXA10\0EXA15\0"
    "EXA20\0EXA25\0EXA30\0EXA35\0EXA40\0EXA45\0"
    "EXA50\0EXA55\0EXA60\0EXA65\0EXA70\0EXA75\0"
    "steinhartcalc0on\0steinhartcalc1on\0"
    "steinhartcalc2on\0steinhartcalc3on\0"
    "steinhartcalc4on\0steinhartcalc5on\0"
    "AN0R3VAL\0AN0R4VAL\0AN1R3VAL\0AN1R4VAL\0"
    "AN2R3VAL\0AN2R4VAL\0AN3R3VAL\0AN3R4VAL\0"
    "AN4R3VAL\0AN4R4VAL\0AN5R3VAL\0AN5R4VAL\0"
    "setSteinhartcalc\0T01\0T02\0T03\0R01\0R02\0"
    "R03\0T11\0T12\0T13\0R11\0R12\0R13\0T21\0T22\0"
    "T23\0R21\0R22\0R23\0T31\0T32\0T33\0R31\0R32\0"
    "R33\0T41\0T42\0T43\0R41\0R42\0R43\0T51\0T52\0"
    "T53\0R51\0R52\0R53\0setNMEAlog\0setecu\0"
    "setExternalSpeed\0setspeedpercent\0"
    "setpulsespermile\0setmaxRPM\0setrpmStage1\0"
    "setrpmStage2\0setrpmStage3\0setrpmStage4\0"
    "setwaterwarn\0setrpmwarn\0setknockwarn\0"
    "setboostwarn\0setsmoothrpm\0setsmoothspeed\0"
    "setsmootexAnalogInput7\0setgearcalc1\0"
    "setgearcalc2\0setgearcalc3\0setgearcalc4\0"
    "setgearcalc5\0setgearcalc6\0"
    "setgearcalcactivation\0setdraggable\0"
    "setLambdamultiply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DashBoard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     564,   14, // methods
     533, 4704, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
     534,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1, 2834,    2, 0x06 /* Public */,
       4,    1, 2837,    2, 0x06 /* Public */,
       6,    1, 2840,    2, 0x06 /* Public */,
       8,    1, 2843,    2, 0x06 /* Public */,
      10,    1, 2846,    2, 0x06 /* Public */,
      12,    1, 2849,    2, 0x06 /* Public */,
      14,    1, 2852,    2, 0x06 /* Public */,
      16,    1, 2855,    2, 0x06 /* Public */,
      18,    1, 2858,    2, 0x06 /* Public */,
      20,    1, 2861,    2, 0x06 /* Public */,
      22,    1, 2864,    2, 0x06 /* Public */,
      24,    1, 2867,    2, 0x06 /* Public */,
      26,    1, 2870,    2, 0x06 /* Public */,
      28,    1, 2873,    2, 0x06 /* Public */,
      30,    1, 2876,    2, 0x06 /* Public */,
      32,    1, 2879,    2, 0x06 /* Public */,
      34,    1, 2882,    2, 0x06 /* Public */,
      36,    1, 2885,    2, 0x06 /* Public */,
      38,    1, 2888,    2, 0x06 /* Public */,
      40,    1, 2891,    2, 0x06 /* Public */,
      42,    1, 2894,    2, 0x06 /* Public */,
      44,    1, 2897,    2, 0x06 /* Public */,
      46,    1, 2900,    2, 0x06 /* Public */,
      48,    1, 2903,    2, 0x06 /* Public */,
      50,    1, 2906,    2, 0x06 /* Public */,
      52,    1, 2909,    2, 0x06 /* Public */,
      54,    1, 2912,    2, 0x06 /* Public */,
      56,    1, 2915,    2, 0x06 /* Public */,
      58,    1, 2918,    2, 0x06 /* Public */,
      60,    1, 2921,    2, 0x06 /* Public */,
      62,    1, 2924,    2, 0x06 /* Public */,
      64,    1, 2927,    2, 0x06 /* Public */,
      66,    1, 2930,    2, 0x06 /* Public */,
      68,    1, 2933,    2, 0x06 /* Public */,
      70,    1, 2936,    2, 0x06 /* Public */,
      72,    1, 2939,    2, 0x06 /* Public */,
      74,    1, 2942,    2, 0x06 /* Public */,
      76,    1, 2945,    2, 0x06 /* Public */,
      78,    1, 2948,    2, 0x06 /* Public */,
      80,    1, 2951,    2, 0x06 /* Public */,
      82,    1, 2954,    2, 0x06 /* Public */,
      84,    1, 2957,    2, 0x06 /* Public */,
      86,    1, 2960,    2, 0x06 /* Public */,
      88,    1, 2963,    2, 0x06 /* Public */,
      90,    1, 2966,    2, 0x06 /* Public */,
      92,    1, 2969,    2, 0x06 /* Public */,
      94,    1, 2972,    2, 0x06 /* Public */,
      96,    1, 2975,    2, 0x06 /* Public */,
      98,    1, 2978,    2, 0x06 /* Public */,
     100,    1, 2981,    2, 0x06 /* Public */,
     102,    1, 2984,    2, 0x06 /* Public */,
     104,    1, 2987,    2, 0x06 /* Public */,
     106,    1, 2990,    2, 0x06 /* Public */,
     108,    1, 2993,    2, 0x06 /* Public */,
     110,    1, 2996,    2, 0x06 /* Public */,
     112,    1, 2999,    2, 0x06 /* Public */,
     114,    1, 3002,    2, 0x06 /* Public */,
     116,    1, 3005,    2, 0x06 /* Public */,
     118,    1, 3008,    2, 0x06 /* Public */,
     120,    1, 3011,    2, 0x06 /* Public */,
     122,    1, 3014,    2, 0x06 /* Public */,
     124,    1, 3017,    2, 0x06 /* Public */,
     126,    1, 3020,    2, 0x06 /* Public */,
     128,    1, 3023,    2, 0x06 /* Public */,
     130,    1, 3026,    2, 0x06 /* Public */,
     132,    1, 3029,    2, 0x06 /* Public */,
     134,    1, 3032,    2, 0x06 /* Public */,
     136,    1, 3035,    2, 0x06 /* Public */,
     138,    1, 3038,    2, 0x06 /* Public */,
     140,    1, 3041,    2, 0x06 /* Public */,
     142,    1, 3044,    2, 0x06 /* Public */,
     144,    1, 3047,    2, 0x06 /* Public */,
     146,    1, 3050,    2, 0x06 /* Public */,
     148,    1, 3053,    2, 0x06 /* Public */,
     150,    1, 3056,    2, 0x06 /* Public */,
     152,    1, 3059,    2, 0x06 /* Public */,
     154,    1, 3062,    2, 0x06 /* Public */,
     156,    1, 3065,    2, 0x06 /* Public */,
     158,    1, 3068,    2, 0x06 /* Public */,
     160,    1, 3071,    2, 0x06 /* Public */,
     162,    1, 3074,    2, 0x06 /* Public */,
     164,    1, 3077,    2, 0x06 /* Public */,
     166,    1, 3080,    2, 0x06 /* Public */,
     168,    1, 3083,    2, 0x06 /* Public */,
     170,    1, 3086,    2, 0x06 /* Public */,
     172,    1, 3089,    2, 0x06 /* Public */,
     174,    1, 3092,    2, 0x06 /* Public */,
     176,    1, 3095,    2, 0x06 /* Public */,
     178,    1, 3098,    2, 0x06 /* Public */,
     180,    1, 3101,    2, 0x06 /* Public */,
     182,    1, 3104,    2, 0x06 /* Public */,
     184,    1, 3107,    2, 0x06 /* Public */,
     186,    1, 3110,    2, 0x06 /* Public */,
     188,    1, 3113,    2, 0x06 /* Public */,
     190,    1, 3116,    2, 0x06 /* Public */,
     192,    1, 3119,    2, 0x06 /* Public */,
     194,    1, 3122,    2, 0x06 /* Public */,
     196,    1, 3125,    2, 0x06 /* Public */,
     198,    1, 3128,    2, 0x06 /* Public */,
     200,    1, 3131,    2, 0x06 /* Public */,
     202,    1, 3134,    2, 0x06 /* Public */,
     204,    1, 3137,    2, 0x06 /* Public */,
     206,    1, 3140,    2, 0x06 /* Public */,
     208,    1, 3143,    2, 0x06 /* Public */,
     210,    1, 3146,    2, 0x06 /* Public */,
     212,    1, 3149,    2, 0x06 /* Public */,
     214,    1, 3152,    2, 0x06 /* Public */,
     216,    1, 3155,    2, 0x06 /* Public */,
     218,    1, 3158,    2, 0x06 /* Public */,
     220,    1, 3161,    2, 0x06 /* Public */,
     222,    1, 3164,    2, 0x06 /* Public */,
     224,    1, 3167,    2, 0x06 /* Public */,
     226,    1, 3170,    2, 0x06 /* Public */,
     228,    1, 3173,    2, 0x06 /* Public */,
     230,    1, 3176,    2, 0x06 /* Public */,
     232,    1, 3179,    2, 0x06 /* Public */,
     234,    1, 3182,    2, 0x06 /* Public */,
     236,    1, 3185,    2, 0x06 /* Public */,
     238,    1, 3188,    2, 0x06 /* Public */,
     240,    1, 3191,    2, 0x06 /* Public */,
     242,    1, 3194,    2, 0x06 /* Public */,
     244,    1, 3197,    2, 0x06 /* Public */,
     246,    1, 3200,    2, 0x06 /* Public */,
     248,    1, 3203,    2, 0x06 /* Public */,
     250,    1, 3206,    2, 0x06 /* Public */,
     252,    1, 3209,    2, 0x06 /* Public */,
     254,    1, 3212,    2, 0x06 /* Public */,
     256,    1, 3215,    2, 0x06 /* Public */,
     258,    1, 3218,    2, 0x06 /* Public */,
     260,    1, 3221,    2, 0x06 /* Public */,
     262,    1, 3224,    2, 0x06 /* Public */,
     264,    1, 3227,    2, 0x06 /* Public */,
     266,    1, 3230,    2, 0x06 /* Public */,
     268,    1, 3233,    2, 0x06 /* Public */,
     270,    1, 3236,    2, 0x06 /* Public */,
     272,    1, 3239,    2, 0x06 /* Public */,
     274,    1, 3242,    2, 0x06 /* Public */,
     276,    1, 3245,    2, 0x06 /* Public */,
     278,    1, 3248,    2, 0x06 /* Public */,
     280,    1, 3251,    2, 0x06 /* Public */,
     282,    1, 3254,    2, 0x06 /* Public */,
     284,    1, 3257,    2, 0x06 /* Public */,
     286,    1, 3260,    2, 0x06 /* Public */,
     288,    1, 3263,    2, 0x06 /* Public */,
     290,    1, 3266,    2, 0x06 /* Public */,
     292,    1, 3269,    2, 0x06 /* Public */,
     294,    1, 3272,    2, 0x06 /* Public */,
     296,    1, 3275,    2, 0x06 /* Public */,
     298,    1, 3278,    2, 0x06 /* Public */,
     300,    1, 3281,    2, 0x06 /* Public */,
     302,    1, 3284,    2, 0x06 /* Public */,
     304,    1, 3287,    2, 0x06 /* Public */,
     306,    1, 3290,    2, 0x06 /* Public */,
     308,    1, 3293,    2, 0x06 /* Public */,
     310,    1, 3296,    2, 0x06 /* Public */,
     312,    1, 3299,    2, 0x06 /* Public */,
     314,    1, 3302,    2, 0x06 /* Public */,
     316,    1, 3305,    2, 0x06 /* Public */,
     318,    1, 3308,    2, 0x06 /* Public */,
     320,    1, 3311,    2, 0x06 /* Public */,
     322,    1, 3314,    2, 0x06 /* Public */,
     324,    1, 3317,    2, 0x06 /* Public */,
     326,    1, 3320,    2, 0x06 /* Public */,
     328,    1, 3323,    2, 0x06 /* Public */,
     330,    1, 3326,    2, 0x06 /* Public */,
     332,    1, 3329,    2, 0x06 /* Public */,
     334,    1, 3332,    2, 0x06 /* Public */,
     336,    1, 3335,    2, 0x06 /* Public */,
     338,    1, 3338,    2, 0x06 /* Public */,
     340,    1, 3341,    2, 0x06 /* Public */,
     342,    1, 3344,    2, 0x06 /* Public */,
     344,    1, 3347,    2, 0x06 /* Public */,
     346,    1, 3350,    2, 0x06 /* Public */,
     348,    1, 3353,    2, 0x06 /* Public */,
     350,    1, 3356,    2, 0x06 /* Public */,
     352,    1, 3359,    2, 0x06 /* Public */,
     354,    1, 3362,    2, 0x06 /* Public */,
     356,    1, 3365,    2, 0x06 /* Public */,
     358,    1, 3368,    2, 0x06 /* Public */,
     360,    1, 3371,    2, 0x06 /* Public */,
     362,    1, 3374,    2, 0x06 /* Public */,
     364,    1, 3377,    2, 0x06 /* Public */,
     366,    1, 3380,    2, 0x06 /* Public */,
     368,    1, 3383,    2, 0x06 /* Public */,
     370,    1, 3386,    2, 0x06 /* Public */,
     372,    1, 3389,    2, 0x06 /* Public */,
     374,    1, 3392,    2, 0x06 /* Public */,
     376,    1, 3395,    2, 0x06 /* Public */,
     378,    1, 3398,    2, 0x06 /* Public */,
     380,    1, 3401,    2, 0x06 /* Public */,
     382,    1, 3404,    2, 0x06 /* Public */,
     384,    1, 3407,    2, 0x06 /* Public */,
     386,    1, 3410,    2, 0x06 /* Public */,
     388,    1, 3413,    2, 0x06 /* Public */,
     390,    1, 3416,    2, 0x06 /* Public */,
     392,    1, 3419,    2, 0x06 /* Public */,
     394,    1, 3422,    2, 0x06 /* Public */,
     396,    1, 3425,    2, 0x06 /* Public */,
     398,    1, 3428,    2, 0x06 /* Public */,
     400,    1, 3431,    2, 0x06 /* Public */,
     402,    1, 3434,    2, 0x06 /* Public */,
     404,    1, 3437,    2, 0x06 /* Public */,
     406,    1, 3440,    2, 0x06 /* Public */,
     408,    1, 3443,    2, 0x06 /* Public */,
     410,    1, 3446,    2, 0x06 /* Public */,
     412,    1, 3449,    2, 0x06 /* Public */,
     414,    1, 3452,    2, 0x06 /* Public */,
     416,    1, 3455,    2, 0x06 /* Public */,
     418,    1, 3458,    2, 0x06 /* Public */,
     420,    1, 3461,    2, 0x06 /* Public */,
     422,    1, 3464,    2, 0x06 /* Public */,
     424,    1, 3467,    2, 0x06 /* Public */,
     426,    1, 3470,    2, 0x06 /* Public */,
     428,    1, 3473,    2, 0x06 /* Public */,
     430,    1, 3476,    2, 0x06 /* Public */,
     432,    1, 3479,    2, 0x06 /* Public */,
     434,    1, 3482,    2, 0x06 /* Public */,
     436,    1, 3485,    2, 0x06 /* Public */,
     438,    1, 3488,    2, 0x06 /* Public */,
     440,    1, 3491,    2, 0x06 /* Public */,
     442,    1, 3494,    2, 0x06 /* Public */,
     444,    1, 3497,    2, 0x06 /* Public */,
     446,    1, 3500,    2, 0x06 /* Public */,
     448,    1, 3503,    2, 0x06 /* Public */,
     450,    1, 3506,    2, 0x06 /* Public */,
     452,    1, 3509,    2, 0x06 /* Public */,
     454,    1, 3512,    2, 0x06 /* Public */,
     456,    1, 3515,    2, 0x06 /* Public */,
     458,    1, 3518,    2, 0x06 /* Public */,
     460,    1, 3521,    2, 0x06 /* Public */,
     462,    1, 3524,    2, 0x06 /* Public */,
     464,    1, 3527,    2, 0x06 /* Public */,
     466,    1, 3530,    2, 0x06 /* Public */,
     468,    1, 3533,    2, 0x06 /* Public */,
     470,    1, 3536,    2, 0x06 /* Public */,
     472,    1, 3539,    2, 0x06 /* Public */,
     474,    1, 3542,    2, 0x06 /* Public */,
     476,    1, 3545,    2, 0x06 /* Public */,
     478,    1, 3548,    2, 0x06 /* Public */,
     480,    1, 3551,    2, 0x06 /* Public */,
     482,    1, 3554,    2, 0x06 /* Public */,
     484,    1, 3557,    2, 0x06 /* Public */,
     486,    1, 3560,    2, 0x06 /* Public */,
     488,    1, 3563,    2, 0x06 /* Public */,
     490,    1, 3566,    2, 0x06 /* Public */,
     492,    1, 3569,    2, 0x06 /* Public */,
     494,    1, 3572,    2, 0x06 /* Public */,
     496,    1, 3575,    2, 0x06 /* Public */,
     498,    1, 3578,    2, 0x06 /* Public */,
     500,    1, 3581,    2, 0x06 /* Public */,
     502,    1, 3584,    2, 0x06 /* Public */,
     504,    1, 3587,    2, 0x06 /* Public */,
     506,    1, 3590,    2, 0x06 /* Public */,
     508,    1, 3593,    2, 0x06 /* Public */,
     510,    1, 3596,    2, 0x06 /* Public */,
     512,    1, 3599,    2, 0x06 /* Public */,
     514,    1, 3602,    2, 0x06 /* Public */,
     516,    1, 3605,    2, 0x06 /* Public */,
     518,    1, 3608,    2, 0x06 /* Public */,
     520,    1, 3611,    2, 0x06 /* Public */,
     522,    1, 3614,    2, 0x06 /* Public */,
     524,    1, 3617,    2, 0x06 /* Public */,
     526,    1, 3620,    2, 0x06 /* Public */,
     528,    1, 3623,    2, 0x06 /* Public */,
     530,    1, 3626,    2, 0x06 /* Public */,
     532,    1, 3629,    2, 0x06 /* Public */,
     534,    1, 3632,    2, 0x06 /* Public */,
     536,    1, 3635,    2, 0x06 /* Public */,
     538,    1, 3638,    2, 0x06 /* Public */,
     540,    1, 3641,    2, 0x06 /* Public */,
     542,    1, 3644,    2, 0x06 /* Public */,
     544,    1, 3647,    2, 0x06 /* Public */,
     546,    1, 3650,    2, 0x06 /* Public */,
     548,    1, 3653,    2, 0x06 /* Public */,
     550,    1, 3656,    2, 0x06 /* Public */,
     552,    1, 3659,    2, 0x06 /* Public */,
     554,    1, 3662,    2, 0x06 /* Public */,
     556,    1, 3665,    2, 0x06 /* Public */,
     558,    1, 3668,    2, 0x06 /* Public */,
     560,    1, 3671,    2, 0x06 /* Public */,
     562,    1, 3674,    2, 0x06 /* Public */,
     564,    1, 3677,    2, 0x06 /* Public */,
     566,    1, 3680,    2, 0x06 /* Public */,
     568,    1, 3683,    2, 0x06 /* Public */,
     570,    1, 3686,    2, 0x06 /* Public */,
     572,    1, 3689,    2, 0x06 /* Public */,
     574,    1, 3692,    2, 0x06 /* Public */,
     576,    1, 3695,    2, 0x06 /* Public */,
     578,    1, 3698,    2, 0x06 /* Public */,
     580,    1, 3701,    2, 0x06 /* Public */,
     582,    1, 3704,    2, 0x06 /* Public */,
     584,    1, 3707,    2, 0x06 /* Public */,
     586,    1, 3710,    2, 0x06 /* Public */,
     588,    1, 3713,    2, 0x06 /* Public */,
     590,    1, 3716,    2, 0x06 /* Public */,
     592,    1, 3719,    2, 0x06 /* Public */,
     594,    1, 3722,    2, 0x06 /* Public */,
     596,    1, 3725,    2, 0x06 /* Public */,
     598,    1, 3728,    2, 0x06 /* Public */,
     600,    1, 3731,    2, 0x06 /* Public */,
     602,    1, 3734,    2, 0x06 /* Public */,
     604,    1, 3737,    2, 0x06 /* Public */,
     606,    1, 3740,    2, 0x06 /* Public */,
     608,    1, 3743,    2, 0x06 /* Public */,
     610,    1, 3746,    2, 0x06 /* Public */,
     612,    1, 3749,    2, 0x06 /* Public */,
     614,    1, 3752,    2, 0x06 /* Public */,
     616,    1, 3755,    2, 0x06 /* Public */,
     618,    1, 3758,    2, 0x06 /* Public */,
     620,    1, 3761,    2, 0x06 /* Public */,
     622,    1, 3764,    2, 0x06 /* Public */,
     624,    1, 3767,    2, 0x06 /* Public */,
     626,    1, 3770,    2, 0x06 /* Public */,
     628,    1, 3773,    2, 0x06 /* Public */,
     630,    1, 3776,    2, 0x06 /* Public */,
     632,    1, 3779,    2, 0x06 /* Public */,
     634,    1, 3782,    2, 0x06 /* Public */,
     636,    1, 3785,    2, 0x06 /* Public */,
     638,    1, 3788,    2, 0x06 /* Public */,
     640,    1, 3791,    2, 0x06 /* Public */,
     642,    1, 3794,    2, 0x06 /* Public */,
     644,    1, 3797,    2, 0x06 /* Public */,
     646,    1, 3800,    2, 0x06 /* Public */,
     648,    1, 3803,    2, 0x06 /* Public */,
     649,    1, 3806,    2, 0x06 /* Public */,
     651,    1, 3809,    2, 0x06 /* Public */,
     653,    1, 3812,    2, 0x06 /* Public */,
     655,    1, 3815,    2, 0x06 /* Public */,
     657,    1, 3818,    2, 0x06 /* Public */,
     659,    1, 3821,    2, 0x06 /* Public */,
     661,    1, 3824,    2, 0x06 /* Public */,
     663,    1, 3827,    2, 0x06 /* Public */,
     665,    1, 3830,    2, 0x06 /* Public */,
     667,    1, 3833,    2, 0x06 /* Public */,
     669,    1, 3836,    2, 0x06 /* Public */,
     671,    1, 3839,    2, 0x06 /* Public */,
     673,    1, 3842,    2, 0x06 /* Public */,
     675,    1, 3845,    2, 0x06 /* Public */,
     677,    1, 3848,    2, 0x06 /* Public */,
     679,    1, 3851,    2, 0x06 /* Public */,
     681,    1, 3854,    2, 0x06 /* Public */,
     683,    1, 3857,    2, 0x06 /* Public */,
     685,    1, 3860,    2, 0x06 /* Public */,
     687,    1, 3863,    2, 0x06 /* Public */,
     689,    1, 3866,    2, 0x06 /* Public */,
     691,    1, 3869,    2, 0x06 /* Public */,
     693,    1, 3872,    2, 0x06 /* Public */,
     695,    1, 3875,    2, 0x06 /* Public */,
     697,    1, 3878,    2, 0x06 /* Public */,
     699,    1, 3881,    2, 0x06 /* Public */,
     701,    1, 3884,    2, 0x06 /* Public */,
     703,    1, 3887,    2, 0x06 /* Public */,
     705,    1, 3890,    2, 0x06 /* Public */,
     707,    1, 3893,    2, 0x06 /* Public */,
     709,    1, 3896,    2, 0x06 /* Public */,
     711,    1, 3899,    2, 0x06 /* Public */,
     713,    1, 3902,    2, 0x06 /* Public */,
     715,    1, 3905,    2, 0x06 /* Public */,
     717,    1, 3908,    2, 0x06 /* Public */,
     719,    1, 3911,    2, 0x06 /* Public */,
     721,    1, 3914,    2, 0x06 /* Public */,
     723,    1, 3917,    2, 0x06 /* Public */,
     725,    1, 3920,    2, 0x06 /* Public */,
     727,    1, 3923,    2, 0x06 /* Public */,
     729,    1, 3926,    2, 0x06 /* Public */,
     731,    1, 3929,    2, 0x06 /* Public */,
     733,    1, 3932,    2, 0x06 /* Public */,
     735,    1, 3935,    2, 0x06 /* Public */,
     737,    1, 3938,    2, 0x06 /* Public */,
     739,    1, 3941,    2, 0x06 /* Public */,
     741,    1, 3944,    2, 0x06 /* Public */,
     743,    1, 3947,    2, 0x06 /* Public */,
     745,    1, 3950,    2, 0x06 /* Public */,
     747,    1, 3953,    2, 0x06 /* Public */,
     749,    1, 3956,    2, 0x06 /* Public */,
     751,    1, 3959,    2, 0x06 /* Public */,
     753,    1, 3962,    2, 0x06 /* Public */,
     755,    1, 3965,    2, 0x06 /* Public */,
     757,    1, 3968,    2, 0x06 /* Public */,
     759,    1, 3971,    2, 0x06 /* Public */,
     761,    1, 3974,    2, 0x06 /* Public */,
     763,    1, 3977,    2, 0x06 /* Public */,
     765,    1, 3980,    2, 0x06 /* Public */,
     767,    1, 3983,    2, 0x06 /* Public */,
     769,    1, 3986,    2, 0x06 /* Public */,
     771,    1, 3989,    2, 0x06 /* Public */,
     773,    1, 3992,    2, 0x06 /* Public */,
     775,    1, 3995,    2, 0x06 /* Public */,
     777,    1, 3998,    2, 0x06 /* Public */,
     779,    1, 4001,    2, 0x06 /* Public */,
     781,    1, 4004,    2, 0x06 /* Public */,
     783,    1, 4007,    2, 0x06 /* Public */,
     785,    1, 4010,    2, 0x06 /* Public */,
     787,    1, 4013,    2, 0x06 /* Public */,
     789,    1, 4016,    2, 0x06 /* Public */,
     791,    1, 4019,    2, 0x06 /* Public */,
     793,    1, 4022,    2, 0x06 /* Public */,
     795,    1, 4025,    2, 0x06 /* Public */,
     797,    1, 4028,    2, 0x06 /* Public */,
     799,    1, 4031,    2, 0x06 /* Public */,
     801,    1, 4034,    2, 0x06 /* Public */,
     803,    1, 4037,    2, 0x06 /* Public */,
     805,    1, 4040,    2, 0x06 /* Public */,
     807,    1, 4043,    2, 0x06 /* Public */,
     809,    1, 4046,    2, 0x06 /* Public */,
     811,    1, 4049,    2, 0x06 /* Public */,
     813,    1, 4052,    2, 0x06 /* Public */,
     815,    1, 4055,    2, 0x06 /* Public */,
     817,    1, 4058,    2, 0x06 /* Public */,
     819,    1, 4061,    2, 0x06 /* Public */,
     821,    1, 4064,    2, 0x06 /* Public */,
     823,    1, 4067,    2, 0x06 /* Public */,
     825,    1, 4070,    2, 0x06 /* Public */,
     827,    1, 4073,    2, 0x06 /* Public */,
     829,    1, 4076,    2, 0x06 /* Public */,
     831,    1, 4079,    2, 0x06 /* Public */,
     833,    1, 4082,    2, 0x06 /* Public */,
     835,    1, 4085,    2, 0x06 /* Public */,
     837,    1, 4088,    2, 0x06 /* Public */,
     839,    1, 4091,    2, 0x06 /* Public */,
     841,    1, 4094,    2, 0x06 /* Public */,
     843,    1, 4097,    2, 0x06 /* Public */,
     845,    1, 4100,    2, 0x06 /* Public */,
     847,    1, 4103,    2, 0x06 /* Public */,
     849,    1, 4106,    2, 0x06 /* Public */,
     851,    1, 4109,    2, 0x06 /* Public */,
     853,    1, 4112,    2, 0x06 /* Public */,
     855,    1, 4115,    2, 0x06 /* Public */,
     857,    1, 4118,    2, 0x06 /* Public */,
     859,    1, 4121,    2, 0x06 /* Public */,
     861,    1, 4124,    2, 0x06 /* Public */,
     863,    1, 4127,    2, 0x06 /* Public */,
     865,    1, 4130,    2, 0x06 /* Public */,
     867,    1, 4133,    2, 0x06 /* Public */,
     869,    1, 4136,    2, 0x06 /* Public */,
     871,    1, 4139,    2, 0x06 /* Public */,
     873,    1, 4142,    2, 0x06 /* Public */,
     875,    1, 4145,    2, 0x06 /* Public */,
     877,    1, 4148,    2, 0x06 /* Public */,
     879,    1, 4151,    2, 0x06 /* Public */,
     881,    1, 4154,    2, 0x06 /* Public */,
     883,    1, 4157,    2, 0x06 /* Public */,
     885,    1, 4160,    2, 0x06 /* Public */,
     887,    1, 4163,    2, 0x06 /* Public */,
     889,    1, 4166,    2, 0x06 /* Public */,
     891,    1, 4169,    2, 0x06 /* Public */,
     893,    1, 4172,    2, 0x06 /* Public */,
     895,    1, 4175,    2, 0x06 /* Public */,
     897,    1, 4178,    2, 0x06 /* Public */,
     899,    1, 4181,    2, 0x06 /* Public */,
     901,    1, 4184,    2, 0x06 /* Public */,
     903,    1, 4187,    2, 0x06 /* Public */,
     905,    1, 4190,    2, 0x06 /* Public */,
     907,    1, 4193,    2, 0x06 /* Public */,
     909,    1, 4196,    2, 0x06 /* Public */,
     911,    1, 4199,    2, 0x06 /* Public */,
     913,    1, 4202,    2, 0x06 /* Public */,
     915,    1, 4205,    2, 0x06 /* Public */,
     917,    1, 4208,    2, 0x06 /* Public */,
     919,    1, 4211,    2, 0x06 /* Public */,
     921,    1, 4214,    2, 0x06 /* Public */,
     923,    1, 4217,    2, 0x06 /* Public */,
     925,    1, 4220,    2, 0x06 /* Public */,
     927,    1, 4223,    2, 0x06 /* Public */,
     929,    1, 4226,    2, 0x06 /* Public */,
     931,    1, 4229,    2, 0x06 /* Public */,
     933,    1, 4232,    2, 0x06 /* Public */,
     935,    1, 4235,    2, 0x06 /* Public */,
     937,    1, 4238,    2, 0x06 /* Public */,
     939,    1, 4241,    2, 0x06 /* Public */,
     941,    1, 4244,    2, 0x06 /* Public */,
     943,    1, 4247,    2, 0x06 /* Public */,
     945,    1, 4250,    2, 0x06 /* Public */,
     947,    1, 4253,    2, 0x06 /* Public */,
     949,    1, 4256,    2, 0x06 /* Public */,
     951,    1, 4259,    2, 0x06 /* Public */,
     953,    1, 4262,    2, 0x06 /* Public */,
     955,    1, 4265,    2, 0x06 /* Public */,
     957,    1, 4268,    2, 0x06 /* Public */,
     959,    1, 4271,    2, 0x06 /* Public */,
     961,    1, 4274,    2, 0x06 /* Public */,
     963,    1, 4277,    2, 0x06 /* Public */,
     965,    1, 4280,    2, 0x06 /* Public */,
     967,    1, 4283,    2, 0x06 /* Public */,
     969,    1, 4286,    2, 0x06 /* Public */,
     971,    1, 4289,    2, 0x06 /* Public */,
     973,    1, 4292,    2, 0x06 /* Public */,
     975,    1, 4295,    2, 0x06 /* Public */,
     977,    1, 4298,    2, 0x06 /* Public */,
     979,    1, 4301,    2, 0x06 /* Public */,
     981,    1, 4304,    2, 0x06 /* Public */,
     983,    1, 4307,    2, 0x06 /* Public */,
     985,    1, 4310,    2, 0x06 /* Public */,
     987,    1, 4313,    2, 0x06 /* Public */,
     989,    1, 4316,    2, 0x06 /* Public */,
     991,    1, 4319,    2, 0x06 /* Public */,
     993,    1, 4322,    2, 0x06 /* Public */,
     995,    1, 4325,    2, 0x06 /* Public */,
     997,    1, 4328,    2, 0x06 /* Public */,
     999,    1, 4331,    2, 0x06 /* Public */,
    1001,    1, 4334,    2, 0x06 /* Public */,
    1003,    1, 4337,    2, 0x06 /* Public */,
    1005,    1, 4340,    2, 0x06 /* Public */,
    1007,    1, 4343,    2, 0x06 /* Public */,
    1009,    1, 4346,    2, 0x06 /* Public */,
    1011,    1, 4349,    2, 0x06 /* Public */,
    1013,    1, 4352,    2, 0x06 /* Public */,
    1015,    1, 4355,    2, 0x06 /* Public */,
    1017,    1, 4358,    2, 0x06 /* Public */,
    1019,    1, 4361,    2, 0x06 /* Public */,
    1021,    1, 4364,    2, 0x06 /* Public */,
    1023,    1, 4367,    2, 0x06 /* Public */,
    1025,    1, 4370,    2, 0x06 /* Public */,
    1027,    1, 4373,    2, 0x06 /* Public */,
    1029,    1, 4376,    2, 0x06 /* Public */,
    1031,    1, 4379,    2, 0x06 /* Public */,
    1033,    1, 4382,    2, 0x06 /* Public */,
    1034,    1, 4385,    2, 0x06 /* Public */,
    1036,    1, 4388,    2, 0x06 /* Public */,
    1038,    1, 4391,    2, 0x06 /* Public */,
    1040,    1, 4394,    2, 0x06 /* Public */,
    1042,    1, 4397,    2, 0x06 /* Public */,
    1044,    1, 4400,    2, 0x06 /* Public */,
    1046,    1, 4403,    2, 0x06 /* Public */,
    1048,    1, 4406,    2, 0x06 /* Public */,
    1050,    1, 4409,    2, 0x06 /* Public */,
    1052,    1, 4412,    2, 0x06 /* Public */,
    1054,    1, 4415,    2, 0x06 /* Public */,
    1056,    1, 4418,    2, 0x06 /* Public */,
    1058,    1, 4421,    2, 0x06 /* Public */,
    1060,    1, 4424,    2, 0x06 /* Public */,
    1062,    1, 4427,    2, 0x06 /* Public */,
    1064,    1, 4430,    2, 0x06 /* Public */,
    1066,    1, 4433,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
    1068,    1, 4436,    2, 0x02 /* Public */,
    1069,   22, 4439,    2, 0x02 /* Public */,
    1092,   34, 4484,    2, 0x02 /* Public */,
    1127,   36, 4553,    2, 0x02 /* Public */,
    1164,    1, 4626,    2, 0x02 /* Public */,
    1165,    1, 4629,    2, 0x02 /* Public */,
    1166,    1, 4632,    2, 0x02 /* Public */,
    1167,    1, 4635,    2, 0x02 /* Public */,
    1168,    1, 4638,    2, 0x02 /* Public */,
    1169,    1, 4641,    2, 0x02 /* Public */,
    1170,    1, 4644,    2, 0x02 /* Public */,
    1171,    1, 4647,    2, 0x02 /* Public */,
    1172,    1, 4650,    2, 0x02 /* Public */,
    1173,    1, 4653,    2, 0x02 /* Public */,
    1174,    1, 4656,    2, 0x02 /* Public */,
    1175,    1, 4659,    2, 0x02 /* Public */,
    1176,    1, 4662,    2, 0x02 /* Public */,
    1177,    1, 4665,    2, 0x02 /* Public */,
    1178,    1, 4668,    2, 0x02 /* Public */,
    1179,    1, 4671,    2, 0x02 /* Public */,
    1180,    1, 4674,    2, 0x02 /* Public */,
    1181,    1, 4677,    2, 0x02 /* Public */,
    1182,    1, 4680,    2, 0x02 /* Public */,
    1183,    1, 4683,    2, 0x02 /* Public */,
    1184,    1, 4686,    2, 0x02 /* Public */,
    1185,    1, 4689,    2, 0x02 /* Public */,
    1186,    1, 4692,    2, 0x02 /* Public */,
    1187,    1, 4695,    2, 0x02 /* Public */,
    1188,    1, 4698,    2, 0x02 /* Public */,
    1189,    1, 4701,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QReal,   11,
    QMetaType::Void, QMetaType::QReal,   13,
    QMetaType::Void, QMetaType::QReal,   15,
    QMetaType::Void, QMetaType::QReal,   17,
    QMetaType::Void, QMetaType::QReal,   19,
    QMetaType::Void, QMetaType::QReal,   21,
    QMetaType::Void, QMetaType::QReal,   23,
    QMetaType::Void, QMetaType::QReal,   25,
    QMetaType::Void, QMetaType::QReal,   27,
    QMetaType::Void, QMetaType::QReal,   29,
    QMetaType::Void, QMetaType::QReal,   31,
    QMetaType::Void, QMetaType::QReal,   33,
    QMetaType::Void, QMetaType::QReal,   35,
    QMetaType::Void, QMetaType::QReal,   37,
    QMetaType::Void, QMetaType::QReal,   39,
    QMetaType::Void, QMetaType::QReal,   41,
    QMetaType::Void, QMetaType::QReal,   43,
    QMetaType::Void, QMetaType::QReal,   45,
    QMetaType::Void, QMetaType::QReal,   47,
    QMetaType::Void, QMetaType::QReal,   49,
    QMetaType::Void, QMetaType::QReal,   51,
    QMetaType::Void, QMetaType::QReal,   53,
    QMetaType::Void, QMetaType::QReal,   55,
    QMetaType::Void, QMetaType::QReal,   57,
    QMetaType::Void, QMetaType::QReal,   59,
    QMetaType::Void, QMetaType::QReal,   61,
    QMetaType::Void, QMetaType::QReal,   63,
    QMetaType::Void, QMetaType::QReal,   65,
    QMetaType::Void, QMetaType::QReal,   67,
    QMetaType::Void, QMetaType::QReal,   69,
    QMetaType::Void, QMetaType::QReal,   71,
    QMetaType::Void, QMetaType::QReal,   73,
    QMetaType::Void, QMetaType::QReal,   75,
    QMetaType::Void, QMetaType::QReal,   77,
    QMetaType::Void, QMetaType::QReal,   79,
    QMetaType::Void, QMetaType::QReal,   81,
    QMetaType::Void, QMetaType::QReal,   83,
    QMetaType::Void, QMetaType::QReal,   85,
    QMetaType::Void, QMetaType::QReal,   87,
    QMetaType::Void, QMetaType::QReal,   89,
    QMetaType::Void, QMetaType::QReal,   91,
    QMetaType::Void, QMetaType::QReal,   93,
    QMetaType::Void, QMetaType::QReal,   95,
    QMetaType::Void, QMetaType::QReal,   97,
    QMetaType::Void, QMetaType::QReal,   99,
    QMetaType::Void, QMetaType::QReal,  101,
    QMetaType::Void, QMetaType::QReal,  103,
    QMetaType::Void, QMetaType::QReal,  105,
    QMetaType::Void, QMetaType::QReal,  107,
    QMetaType::Void, QMetaType::QReal,  109,
    QMetaType::Void, QMetaType::QReal,  111,
    QMetaType::Void, QMetaType::QReal,  113,
    QMetaType::Void, QMetaType::QReal,  115,
    QMetaType::Void, QMetaType::QReal,  117,
    QMetaType::Void, QMetaType::QReal,  119,
    QMetaType::Void, QMetaType::QReal,  121,
    QMetaType::Void, QMetaType::QReal,  123,
    QMetaType::Void, QMetaType::QReal,  125,
    QMetaType::Void, QMetaType::QReal,  127,
    QMetaType::Void, QMetaType::QReal,  129,
    QMetaType::Void, QMetaType::QReal,  131,
    QMetaType::Void, QMetaType::QReal,  133,
    QMetaType::Void, QMetaType::QReal,  135,
    QMetaType::Void, QMetaType::QReal,  137,
    QMetaType::Void, QMetaType::QReal,  139,
    QMetaType::Void, QMetaType::QReal,  141,
    QMetaType::Void, QMetaType::QReal,  143,
    QMetaType::Void, QMetaType::QReal,  145,
    QMetaType::Void, QMetaType::QReal,  147,
    QMetaType::Void, QMetaType::QReal,  149,
    QMetaType::Void, QMetaType::QReal,  151,
    QMetaType::Void, QMetaType::QReal,  153,
    QMetaType::Void, QMetaType::QReal,  155,
    QMetaType::Void, QMetaType::QReal,  157,
    QMetaType::Void, QMetaType::QReal,  159,
    QMetaType::Void, QMetaType::QReal,  161,
    QMetaType::Void, QMetaType::QReal,  163,
    QMetaType::Void, QMetaType::QReal,  165,
    QMetaType::Void, QMetaType::QReal,  167,
    QMetaType::Void, QMetaType::QReal,  169,
    QMetaType::Void, QMetaType::QReal,  171,
    QMetaType::Void, QMetaType::QReal,  173,
    QMetaType::Void, QMetaType::QReal,  175,
    QMetaType::Void, QMetaType::QString,  177,
    QMetaType::Void, QMetaType::QString,  179,
    QMetaType::Void, QMetaType::QString,  181,
    QMetaType::Void, QMetaType::QString,  183,
    QMetaType::Void, QMetaType::QString,  185,
    QMetaType::Void, QMetaType::QString,  187,
    QMetaType::Void, QMetaType::QString,  189,
    QMetaType::Void, QMetaType::QString,  191,
    QMetaType::Void, QMetaType::QString,  193,
    QMetaType::Void, QMetaType::QString,  195,
    QMetaType::Void, QMetaType::QString,  197,
    QMetaType::Void, QMetaType::QString,  199,
    QMetaType::Void, QMetaType::QString,  201,
    QMetaType::Void, QMetaType::QString,  203,
    QMetaType::Void, QMetaType::QString,  205,
    QMetaType::Void, QMetaType::QString,  207,
    QMetaType::Void, QMetaType::QString,  209,
    QMetaType::Void, QMetaType::QString,  211,
    QMetaType::Void, QMetaType::QString,  213,
    QMetaType::Void, QMetaType::QString,  215,
    QMetaType::Void, QMetaType::QString,  217,
    QMetaType::Void, QMetaType::QString,  219,
    QMetaType::Void, QMetaType::QString,  221,
    QMetaType::Void, QMetaType::QString,  223,
    QMetaType::Void, QMetaType::QString,  225,
    QMetaType::Void, QMetaType::QString,  227,
    QMetaType::Void, QMetaType::QString,  229,
    QMetaType::Void, QMetaType::QString,  231,
    QMetaType::Void, QMetaType::QString,  233,
    QMetaType::Void, QMetaType::QString,  235,
    QMetaType::Void, QMetaType::QString,  237,
    QMetaType::Void, QMetaType::QString,  239,
    QMetaType::Void, QMetaType::QString,  241,
    QMetaType::Void, QMetaType::QString,  243,
    QMetaType::Void, QMetaType::QReal,  245,
    QMetaType::Void, QMetaType::QReal,  247,
    QMetaType::Void, QMetaType::QReal,  249,
    QMetaType::Void, QMetaType::QReal,  251,
    QMetaType::Void, QMetaType::Int,  253,
    QMetaType::Void, QMetaType::QString,  255,
    QMetaType::Void, QMetaType::QReal,  257,
    QMetaType::Void, QMetaType::QReal,  259,
    QMetaType::Void, QMetaType::QString,  261,
    QMetaType::Void, QMetaType::QString,  263,
    QMetaType::Void, QMetaType::QString,  265,
    QMetaType::Void, QMetaType::QReal,  267,
    QMetaType::Void, QMetaType::QReal,  269,
    QMetaType::Void, QMetaType::QReal,  271,
    QMetaType::Void, QMetaType::QReal,  273,
    QMetaType::Void, QMetaType::QReal,  275,
    QMetaType::Void, QMetaType::QReal,  277,
    QMetaType::Void, QMetaType::QReal,  279,
    QMetaType::Void, QMetaType::QReal,  281,
    QMetaType::Void, QMetaType::QReal,  283,
    QMetaType::Void, QMetaType::QReal,  285,
    QMetaType::Void, QMetaType::QReal,  287,
    QMetaType::Void, QMetaType::QReal,  289,
    QMetaType::Void, QMetaType::QReal,  291,
    QMetaType::Void, QMetaType::QReal,  293,
    QMetaType::Void, QMetaType::QReal,  295,
    QMetaType::Void, QMetaType::QReal,  297,
    QMetaType::Void, QMetaType::QReal,  299,
    QMetaType::Void, QMetaType::QReal,  301,
    QMetaType::Void, QMetaType::QReal,  303,
    QMetaType::Void, QMetaType::QReal,  305,
    QMetaType::Void, QMetaType::QReal,  307,
    QMetaType::Void, QMetaType::QReal,  309,
    QMetaType::Void, QMetaType::QReal,  311,
    QMetaType::Void, QMetaType::QReal,  313,
    QMetaType::Void, QMetaType::QReal,  315,
    QMetaType::Void, QMetaType::QReal,  317,
    QMetaType::Void, QMetaType::QReal,  319,
    QMetaType::Void, QMetaType::QReal,  321,
    QMetaType::Void, QMetaType::QReal,  323,
    QMetaType::Void, QMetaType::QReal,  325,
    QMetaType::Void, QMetaType::QReal,  327,
    QMetaType::Void, QMetaType::QReal,  329,
    QMetaType::Void, QMetaType::QReal,  331,
    QMetaType::Void, QMetaType::QReal,  333,
    QMetaType::Void, QMetaType::QReal,  335,
    QMetaType::Void, QMetaType::QReal,  337,
    QMetaType::Void, QMetaType::QReal,  339,
    QMetaType::Void, QMetaType::QReal,  341,
    QMetaType::Void, QMetaType::QReal,  343,
    QMetaType::Void, QMetaType::QReal,  345,
    QMetaType::Void, QMetaType::QReal,  347,
    QMetaType::Void, QMetaType::QReal,  349,
    QMetaType::Void, QMetaType::QReal,  351,
    QMetaType::Void, QMetaType::QReal,  353,
    QMetaType::Void, QMetaType::QReal,  355,
    QMetaType::Void, QMetaType::QReal,  357,
    QMetaType::Void, QMetaType::QReal,  359,
    QMetaType::Void, QMetaType::QReal,  361,
    QMetaType::Void, QMetaType::QReal,  363,
    QMetaType::Void, QMetaType::QReal,  365,
    QMetaType::Void, QMetaType::QReal,  367,
    QMetaType::Void, QMetaType::QReal,  369,
    QMetaType::Void, QMetaType::QReal,  371,
    QMetaType::Void, QMetaType::QReal,  373,
    QMetaType::Void, QMetaType::QReal,  375,
    QMetaType::Void, QMetaType::QReal,  377,
    QMetaType::Void, QMetaType::QReal,  379,
    QMetaType::Void, QMetaType::QReal,  381,
    QMetaType::Void, QMetaType::QReal,  383,
    QMetaType::Void, QMetaType::QReal,  385,
    QMetaType::Void, QMetaType::QReal,  387,
    QMetaType::Void, QMetaType::QReal,  389,
    QMetaType::Void, QMetaType::Bool,  391,
    QMetaType::Void, QMetaType::QStringList,  393,
    QMetaType::Void, QMetaType::QStringList,  395,
    QMetaType::Void, QMetaType::QStringList,  397,
    QMetaType::Void, QMetaType::QStringList,  399,
    QMetaType::Void, QMetaType::QStringList,  401,
    QMetaType::Void, QMetaType::QStringList,  403,
    QMetaType::Void, QMetaType::QReal,  405,
    QMetaType::Void, QMetaType::QReal,  407,
    QMetaType::Void, QMetaType::QReal,  409,
    QMetaType::Void, QMetaType::QReal,  411,
    QMetaType::Void, QMetaType::QReal,  413,
    QMetaType::Void, QMetaType::QReal,  415,
    QMetaType::Void, QMetaType::QReal,  417,
    QMetaType::Void, QMetaType::QReal,  419,
    QMetaType::Void, QMetaType::QReal,  421,
    QMetaType::Void, QMetaType::QReal,  423,
    QMetaType::Void, QMetaType::QReal,  425,
    QMetaType::Void, QMetaType::QReal,  427,
    QMetaType::Void, QMetaType::QReal,  429,
    QMetaType::Void, QMetaType::QReal,  431,
    QMetaType::Void, QMetaType::QReal,  433,
    QMetaType::Void, QMetaType::QReal,  435,
    QMetaType::Void, QMetaType::QReal,  437,
    QMetaType::Void, QMetaType::QReal,  439,
    QMetaType::Void, QMetaType::QReal,  441,
    QMetaType::Void, QMetaType::QReal,  443,
    QMetaType::Void, QMetaType::QReal,  445,
    QMetaType::Void, QMetaType::QReal,  447,
    QMetaType::Void, QMetaType::QReal,  449,
    QMetaType::Void, QMetaType::QReal,  451,
    QMetaType::Void, QMetaType::QReal,  453,
    QMetaType::Void, QMetaType::QReal,  455,
    QMetaType::Void, QMetaType::QReal,  457,
    QMetaType::Void, QMetaType::QReal,  459,
    QMetaType::Void, QMetaType::QReal,  461,
    QMetaType::Void, QMetaType::QReal,  463,
    QMetaType::Void, QMetaType::QReal,  465,
    QMetaType::Void, QMetaType::QReal,  467,
    QMetaType::Void, QMetaType::QReal,  469,
    QMetaType::Void, QMetaType::QReal,  471,
    QMetaType::Void, QMetaType::QReal,  473,
    QMetaType::Void, QMetaType::QReal,  475,
    QMetaType::Void, QMetaType::QReal,  477,
    QMetaType::Void, QMetaType::QReal,  479,
    QMetaType::Void, QMetaType::QReal,  481,
    QMetaType::Void, QMetaType::QReal,  483,
    QMetaType::Void, QMetaType::QReal,  485,
    QMetaType::Void, QMetaType::QReal,  487,
    QMetaType::Void, QMetaType::QReal,  489,
    QMetaType::Void, QMetaType::QReal,  491,
    QMetaType::Void, QMetaType::QReal,  493,
    QMetaType::Void, QMetaType::QReal,  495,
    QMetaType::Void, QMetaType::QReal,  497,
    QMetaType::Void, QMetaType::QReal,  499,
    QMetaType::Void, QMetaType::QReal,  501,
    QMetaType::Void, QMetaType::QReal,  503,
    QMetaType::Void, QMetaType::QReal,  505,
    QMetaType::Void, QMetaType::QReal,  507,
    QMetaType::Void, QMetaType::QReal,  509,
    QMetaType::Void, QMetaType::QReal,  511,
    QMetaType::Void, QMetaType::QReal,  513,
    QMetaType::Void, QMetaType::QReal,  515,
    QMetaType::Void, QMetaType::QReal,  517,
    QMetaType::Void, QMetaType::QReal,  519,
    QMetaType::Void, QMetaType::QReal,  521,
    QMetaType::Void, QMetaType::QReal,  523,
    QMetaType::Void, QMetaType::QReal,  525,
    QMetaType::Void, QMetaType::QReal,  527,
    QMetaType::Void, QMetaType::QReal,  529,
    QMetaType::Void, QMetaType::QReal,  531,
    QMetaType::Void, QMetaType::QReal,  533,
    QMetaType::Void, QMetaType::QReal,  535,
    QMetaType::Void, QMetaType::QReal,  537,
    QMetaType::Void, QMetaType::QReal,  539,
    QMetaType::Void, QMetaType::QReal,  541,
    QMetaType::Void, QMetaType::QReal,  543,
    QMetaType::Void, QMetaType::QReal,  545,
    QMetaType::Void, QMetaType::QReal,  547,
    QMetaType::Void, QMetaType::QReal,  549,
    QMetaType::Void, QMetaType::QReal,  551,
    QMetaType::Void, QMetaType::QReal,  553,
    QMetaType::Void, QMetaType::QReal,  555,
    QMetaType::Void, QMetaType::QReal,  557,
    QMetaType::Void, QMetaType::QReal,  559,
    QMetaType::Void, QMetaType::QReal,  561,
    QMetaType::Void, QMetaType::QReal,  563,
    QMetaType::Void, QMetaType::QReal,  565,
    QMetaType::Void, QMetaType::QReal,  567,
    QMetaType::Void, QMetaType::QReal,  569,
    QMetaType::Void, QMetaType::QReal,  571,
    QMetaType::Void, QMetaType::QReal,  573,
    QMetaType::Void, QMetaType::QReal,  575,
    QMetaType::Void, QMetaType::QReal,  577,
    QMetaType::Void, QMetaType::QString,  579,
    QMetaType::Void, QMetaType::Int,  581,
    QMetaType::Void, QMetaType::QReal,  583,
    QMetaType::Void, QMetaType::QReal,  585,
    QMetaType::Void, QMetaType::Int,  587,
    QMetaType::Void, QMetaType::Int,  589,
    QMetaType::Void, QMetaType::Int,  591,
    QMetaType::Void, QMetaType::Int,  593,
    QMetaType::Void, QMetaType::Int,  595,
    QMetaType::Void, QMetaType::Int,  597,
    QMetaType::Void, QMetaType::Int,  599,
    QMetaType::Void, QMetaType::Int,  601,
    QMetaType::Void, QMetaType::QReal,  603,
    QMetaType::Void, QMetaType::Int,  605,
    QMetaType::Void, QMetaType::Int,  607,
    QMetaType::Void, QMetaType::Int,  609,
    QMetaType::Void, QMetaType::Int,  611,
    QMetaType::Void, QMetaType::Int,  613,
    QMetaType::Void, QMetaType::Int,  615,
    QMetaType::Void, QMetaType::Int,  617,
    QMetaType::Void, QMetaType::Int,  619,
    QMetaType::Void, QMetaType::Int,  621,
    QMetaType::Void, QMetaType::Int,  623,
    QMetaType::Void, QMetaType::Int,  625,
    QMetaType::Void, QMetaType::Int,  627,
    QMetaType::Void, QMetaType::Int,  629,
    QMetaType::Void, QMetaType::Int,  631,
    QMetaType::Void, QMetaType::Int,  633,
    QMetaType::Void, QMetaType::Int,  635,
    QMetaType::Void, QMetaType::Int,  637,
    QMetaType::Void, QMetaType::Int,  639,
    QMetaType::Void, QMetaType::QString,  641,
    QMetaType::Void, QMetaType::QString,  643,
    QMetaType::Void, QMetaType::QString,  645,
    QMetaType::Void, QMetaType::Int,  647,
    QMetaType::Void, QMetaType::QString,  648,
    QMetaType::Void, QMetaType::Int,  650,
    QMetaType::Void, QMetaType::QString,  652,
    QMetaType::Void, QMetaType::QString,  654,
    QMetaType::Void, QMetaType::QString,  656,
    QMetaType::Void, QMetaType::Int,  658,
    QMetaType::Void, QMetaType::QStringList,  660,
    QMetaType::Void, QMetaType::QStringList,  662,
    QMetaType::Void, QMetaType::QReal,  664,
    QMetaType::Void, QMetaType::QReal,  666,
    QMetaType::Void, QMetaType::QReal,  668,
    QMetaType::Void, QMetaType::QReal,  670,
    QMetaType::Void, QMetaType::QReal,  672,
    QMetaType::Void, QMetaType::QReal,  674,
    QMetaType::Void, QMetaType::QReal,  676,
    QMetaType::Void, QMetaType::QReal,  678,
    QMetaType::Void, QMetaType::QReal,  680,
    QMetaType::Void, QMetaType::QReal,  682,
    QMetaType::Void, QMetaType::QReal,  684,
    QMetaType::Void, QMetaType::QReal,  686,
    QMetaType::Void, QMetaType::QReal,  688,
    QMetaType::Void, QMetaType::QReal,  690,
    QMetaType::Void, QMetaType::QReal,  692,
    QMetaType::Void, QMetaType::QReal,  694,
    QMetaType::Void, QMetaType::QReal,  696,
    QMetaType::Void, QMetaType::QReal,  698,
    QMetaType::Void, QMetaType::QReal,  700,
    QMetaType::Void, QMetaType::QReal,  702,
    QMetaType::Void, QMetaType::QReal,  704,
    QMetaType::Void, QMetaType::QReal,  706,
    QMetaType::Void, QMetaType::QReal,  708,
    QMetaType::Void, QMetaType::QReal,  710,
    QMetaType::Void, QMetaType::QReal,  712,
    QMetaType::Void, QMetaType::QReal,  714,
    QMetaType::Void, QMetaType::QReal,  716,
    QMetaType::Void, QMetaType::QReal,  718,
    QMetaType::Void, QMetaType::QReal,  720,
    QMetaType::Void, QMetaType::QReal,  722,
    QMetaType::Void, QMetaType::QReal,  724,
    QMetaType::Void, QMetaType::QReal,  726,
    QMetaType::Void, QMetaType::QReal,  728,
    QMetaType::Void, QMetaType::QReal,  730,
    QMetaType::Void, QMetaType::QReal,  732,
    QMetaType::Void, QMetaType::QReal,  734,
    QMetaType::Void, QMetaType::QReal,  736,
    QMetaType::Void, QMetaType::QReal,  738,
    QMetaType::Void, QMetaType::QReal,  740,
    QMetaType::Void, QMetaType::QReal,  742,
    QMetaType::Void, QMetaType::QReal,  744,
    QMetaType::Void, QMetaType::QReal,  746,
    QMetaType::Void, QMetaType::QReal,  748,
    QMetaType::Void, QMetaType::QReal,  750,
    QMetaType::Void, QMetaType::QReal,  752,
    QMetaType::Void, QMetaType::QReal,  754,
    QMetaType::Void, QMetaType::Int,  756,
    QMetaType::Void, QMetaType::Int,  758,
    QMetaType::Void, QMetaType::Int,  760,
    QMetaType::Void, QMetaType::Int,  762,
    QMetaType::Void, QMetaType::Int,  764,
    QMetaType::Void, QMetaType::Int,  766,
    QMetaType::Void, QMetaType::QReal,  768,
    QMetaType::Void, QMetaType::QReal,  770,
    QMetaType::Void, QMetaType::QReal,  772,
    QMetaType::Void, QMetaType::QReal,  774,
    QMetaType::Void, QMetaType::QReal,  776,
    QMetaType::Void, QMetaType::QReal,  778,
    QMetaType::Void, QMetaType::QReal,  780,
    QMetaType::Void, QMetaType::QReal,  782,
    QMetaType::Void, QMetaType::QReal,  784,
    QMetaType::Void, QMetaType::QReal,  786,
    QMetaType::Void, QMetaType::QReal,  788,
    QMetaType::Void, QMetaType::QReal,  790,
    QMetaType::Void, QMetaType::QReal,  792,
    QMetaType::Void, QMetaType::QReal,  794,
    QMetaType::Void, QMetaType::QReal,  796,
    QMetaType::Void, QMetaType::QReal,  798,
    QMetaType::Void, QMetaType::QReal,  800,
    QMetaType::Void, QMetaType::QReal,  802,
    QMetaType::Void, QMetaType::QReal,  804,
    QMetaType::Void, QMetaType::QReal,  806,
    QMetaType::Void, QMetaType::QReal,  808,
    QMetaType::Void, QMetaType::QReal,  810,
    QMetaType::Void, QMetaType::QReal,  812,
    QMetaType::Void, QMetaType::QReal,  814,
    QMetaType::Void, QMetaType::QReal,  816,
    QMetaType::Void, QMetaType::QReal,  818,
    QMetaType::Void, QMetaType::QReal,  820,
    QMetaType::Void, QMetaType::QReal,  822,
    QMetaType::Void, QMetaType::QReal,  824,
    QMetaType::Void, QMetaType::QReal,  826,
    QMetaType::Void, QMetaType::QReal,  828,
    QMetaType::Void, QMetaType::QReal,  830,
    QMetaType::Void, QMetaType::QReal,  832,
    QMetaType::Void, QMetaType::QReal,  834,
    QMetaType::Void, QMetaType::QReal,  836,
    QMetaType::Void, QMetaType::QReal,  838,
    QMetaType::Void, QMetaType::QReal,  840,
    QMetaType::Void, QMetaType::QReal,  842,
    QMetaType::Void, QMetaType::QReal,  844,
    QMetaType::Void, QMetaType::QReal,  846,
    QMetaType::Void, QMetaType::QReal,  848,
    QMetaType::Void, QMetaType::QReal,  850,
    QMetaType::Void, QMetaType::QReal,  852,
    QMetaType::Void, QMetaType::QReal,  854,
    QMetaType::Void, QMetaType::QReal,  856,
    QMetaType::Void, QMetaType::QReal,  858,
    QMetaType::Void, QMetaType::QReal,  860,
    QMetaType::Void, QMetaType::QReal,  862,
    QMetaType::Void, QMetaType::QReal,  864,
    QMetaType::Void, QMetaType::QReal,  866,
    QMetaType::Void, QMetaType::QReal,  868,
    QMetaType::Void, QMetaType::QReal,  870,
    QMetaType::Void, QMetaType::QReal,  872,
    QMetaType::Void, QMetaType::QReal,  874,
    QMetaType::Void, QMetaType::QReal,  876,
    QMetaType::Void, QMetaType::QReal,  878,
    QMetaType::Void, QMetaType::QReal,  880,
    QMetaType::Void, QMetaType::QReal,  882,
    QMetaType::Void, QMetaType::QReal,  884,
    QMetaType::Void, QMetaType::QReal,  886,
    QMetaType::Void, QMetaType::QReal,  888,
    QMetaType::Void, QMetaType::QReal,  890,
    QMetaType::Void, QMetaType::QReal,  892,
    QMetaType::Void, QMetaType::QReal,  894,
    QMetaType::Void, QMetaType::QReal,  896,
    QMetaType::Void, QMetaType::QReal,  898,
    QMetaType::Void, QMetaType::QReal,  900,
    QMetaType::Void, QMetaType::QReal,  902,
    QMetaType::Void, QMetaType::QReal,  904,
    QMetaType::Void, QMetaType::QReal,  906,
    QMetaType::Void, QMetaType::QReal,  908,
    QMetaType::Void, QMetaType::QReal,  910,
    QMetaType::Void, QMetaType::QReal,  912,
    QMetaType::Void, QMetaType::QReal,  914,
    QMetaType::Void, QMetaType::QReal,  916,
    QMetaType::Void, QMetaType::QReal,  918,
    QMetaType::Void, QMetaType::QReal,  920,
    QMetaType::Void, QMetaType::QReal,  922,
    QMetaType::Void, QMetaType::QReal,  924,
    QMetaType::Void, QMetaType::QReal,  926,
    QMetaType::Void, QMetaType::QReal,  928,
    QMetaType::Void, QMetaType::QReal,  930,
    QMetaType::Void, QMetaType::QReal,  932,
    QMetaType::Void, QMetaType::QReal,  934,
    QMetaType::Void, QMetaType::QReal,  936,
    QMetaType::Void, QMetaType::QReal,  938,
    QMetaType::Void, QMetaType::QReal,  940,
    QMetaType::Void, QMetaType::QReal,  942,
    QMetaType::Void, QMetaType::QReal,  944,
    QMetaType::Void, QMetaType::QReal,  946,
    QMetaType::Void, QMetaType::QReal,  948,
    QMetaType::Void, QMetaType::QReal,  950,
    QMetaType::Void, QMetaType::QReal,  952,
    QMetaType::Void, QMetaType::QReal,  954,
    QMetaType::Void, QMetaType::QReal,  956,
    QMetaType::Void, QMetaType::QReal,  958,
    QMetaType::Void, QMetaType::QReal,  960,
    QMetaType::Void, QMetaType::QReal,  962,
    QMetaType::Void, QMetaType::QReal,  964,
    QMetaType::Void, QMetaType::QReal,  966,
    QMetaType::Void, QMetaType::QReal,  968,
    QMetaType::Void, QMetaType::QReal,  970,
    QMetaType::Void, QMetaType::QReal,  972,
    QMetaType::Void, QMetaType::QReal,  974,
    QMetaType::Void, QMetaType::QReal,  976,
    QMetaType::Void, QMetaType::QReal,  978,
    QMetaType::Void, QMetaType::QReal,  980,
    QMetaType::Void, QMetaType::QReal,  982,
    QMetaType::Void, QMetaType::QReal,  984,
    QMetaType::Void, QMetaType::QReal,  986,
    QMetaType::Void, QMetaType::QReal,  988,
    QMetaType::Void, QMetaType::QReal,  990,
    QMetaType::Void, QMetaType::QReal,  992,
    QMetaType::Void, QMetaType::QReal,  994,
    QMetaType::Void, QMetaType::QReal,  996,
    QMetaType::Void, QMetaType::QReal,  998,
    QMetaType::Void, QMetaType::QReal, 1000,
    QMetaType::Void, QMetaType::QReal, 1002,
    QMetaType::Void, QMetaType::QReal, 1004,
    QMetaType::Void, QMetaType::QReal, 1006,
    QMetaType::Void, QMetaType::QReal, 1008,
    QMetaType::Void, QMetaType::QReal, 1010,
    QMetaType::Void, QMetaType::QReal, 1012,
    QMetaType::Void, QMetaType::QReal, 1014,
    QMetaType::Void, QMetaType::QReal, 1016,
    QMetaType::Void, QMetaType::QReal, 1018,
    QMetaType::Void, QMetaType::QReal, 1020,
    QMetaType::Void, QMetaType::QReal, 1022,
    QMetaType::Void, QMetaType::QReal, 1024,
    QMetaType::Void, QMetaType::Int, 1026,
    QMetaType::Void, QMetaType::Int, 1028,
    QMetaType::Void, QMetaType::Int, 1030,
    QMetaType::Void, QMetaType::Int, 1032,
    QMetaType::Void, QMetaType::QString,  648,
    QMetaType::Void, QMetaType::QReal, 1035,
    QMetaType::Void, QMetaType::QReal, 1037,
    QMetaType::Void, QMetaType::QReal, 1039,
    QMetaType::Void, QMetaType::QReal, 1041,
    QMetaType::Void, QMetaType::QReal, 1043,
    QMetaType::Void, QMetaType::QReal, 1045,
    QMetaType::Void, QMetaType::QReal, 1047,
    QMetaType::Void, QMetaType::QReal, 1049,
    QMetaType::Void, QMetaType::QReal, 1051,
    QMetaType::Void, QMetaType::QReal, 1053,
    QMetaType::Void, QMetaType::QReal, 1055,
    QMetaType::Void, QMetaType::QReal, 1057,
    QMetaType::Void, QMetaType::QReal, 1059,
    QMetaType::Void, QMetaType::QReal, 1061,
    QMetaType::Void, QMetaType::QReal, 1063,
    QMetaType::Void, QMetaType::QReal, 1065,
    QMetaType::Void, QMetaType::QReal, 1067,

 // methods: parameters
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, 1070, 1071, 1072, 1073, 1074, 1075, 1076, 1077, 1078, 1079, 1080, 1081, 1082, 1083, 1084, 1085, 1086, 1087, 1088, 1089, 1090, 1091,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, 1093, 1094, 1095, 1096, 1097, 1098, 1099, 1100, 1101, 1102, 1103, 1104, 1105, 1106, 1107, 1108, 1109, 1110, 1111, 1112, 1113, 1114, 1115, 1116, 1117, 1118, 1119, 1120, 1121, 1122, 1123, 1124, 1125, 1126,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, 1128, 1129, 1130, 1131, 1132, 1133, 1134, 1135, 1136, 1137, 1138, 1139, 1140, 1141, 1142, 1143, 1144, 1145, 1146, 1147, 1148, 1149, 1150, 1151, 1152, 1153, 1154, 1155, 1156, 1157, 1158, 1159, 1160, 1161, 1162, 1163,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,  625,
    QMetaType::Void, QMetaType::Int,  647,
    QMetaType::Void, QMetaType::QReal,  583,
    QMetaType::Void, QMetaType::QReal,  585,
    QMetaType::Void, QMetaType::Int,  587,
    QMetaType::Void, QMetaType::Int,  589,
    QMetaType::Void, QMetaType::Int,  591,
    QMetaType::Void, QMetaType::Int,  593,
    QMetaType::Void, QMetaType::Int,  595,
    QMetaType::Void, QMetaType::Int,  597,
    QMetaType::Void, QMetaType::Int,  599,
    QMetaType::Void, QMetaType::Int,  601,
    QMetaType::Void, QMetaType::QReal,  603,
    QMetaType::Void, QMetaType::Int,  605,
    QMetaType::Void, QMetaType::Int,  607,
    QMetaType::Void, QMetaType::Int,  609,
    QMetaType::Void, QMetaType::Int,  611,
    QMetaType::Void, QMetaType::Int,  613,
    QMetaType::Void, QMetaType::Int,  615,
    QMetaType::Void, QMetaType::Int,  617,
    QMetaType::Void, QMetaType::Int,  619,
    QMetaType::Void, QMetaType::Int,  621,
    QMetaType::Void, QMetaType::Int,  623,
    QMetaType::Void, QMetaType::Int,  658,
    QMetaType::Void, QMetaType::QReal,  724,

 // properties: name, type, flags
       3, QMetaType::QReal, 0x00495103,
       5, QMetaType::QReal, 0x00495103,
       7, QMetaType::QReal, 0x00495103,
       9, QMetaType::QReal, 0x00495103,
      11, QMetaType::QReal, 0x00495003,
      13, QMetaType::QReal, 0x00495103,
      15, QMetaType::QReal, 0x00495103,
      17, QMetaType::QReal, 0x00495103,
      19, QMetaType::QReal, 0x00495103,
      21, QMetaType::QReal, 0x00495103,
      23, QMetaType::QReal, 0x00495103,
      25, QMetaType::QReal, 0x00495103,
      27, QMetaType::QReal, 0x00495103,
      29, QMetaType::QReal, 0x00495103,
      31, QMetaType::QReal, 0x00495103,
      33, QMetaType::QReal, 0x00495103,
      35, QMetaType::QReal, 0x00495103,
      37, QMetaType::QReal, 0x00495103,
      39, QMetaType::QReal, 0x00495103,
      43, QMetaType::QReal, 0x00495103,
      41, QMetaType::QReal, 0x00495103,
      45, QMetaType::QReal, 0x00495103,
      47, QMetaType::QReal, 0x00495103,
      49, QMetaType::QReal, 0x00495103,
      51, QMetaType::QReal, 0x00495103,
      53, QMetaType::QReal, 0x00495103,
      55, QMetaType::QReal, 0x00495103,
      57, QMetaType::QReal, 0x00495103,
      59, QMetaType::QReal, 0x00495103,
      61, QMetaType::QReal, 0x00495103,
      63, QMetaType::QReal, 0x00495103,
      65, QMetaType::QReal, 0x00495003,
      67, QMetaType::QReal, 0x00495103,
      69, QMetaType::QReal, 0x00495003,
      71, QMetaType::QReal, 0x00495103,
      73, QMetaType::QReal, 0x00495103,
      75, QMetaType::QReal, 0x00495103,
     101, QMetaType::QReal, 0x00495003,
      77, QMetaType::QReal, 0x00495103,
      79, QMetaType::QReal, 0x00495103,
      81, QMetaType::QReal, 0x00495103,
      83, QMetaType::QReal, 0x00495003,
      85, QMetaType::QReal, 0x00495103,
      87, QMetaType::QReal, 0x00495103,
      89, QMetaType::QReal, 0x00495103,
      91, QMetaType::QReal, 0x00495103,
      93, QMetaType::QReal, 0x00495103,
      95, QMetaType::QReal, 0x00495103,
      97, QMetaType::QReal, 0x00495103,
      99, QMetaType::QReal, 0x00495103,
     111, QMetaType::QReal, 0x00495003,
     113, QMetaType::QReal, 0x00495003,
     115, QMetaType::QReal, 0x00495003,
     117, QMetaType::QReal, 0x00495003,
     119, QMetaType::QReal, 0x00495003,
     121, QMetaType::QReal, 0x00495003,
     123, QMetaType::QReal, 0x00495003,
     125, QMetaType::QReal, 0x00495003,
     103, QMetaType::QReal, 0x00495003,
     105, QMetaType::QReal, 0x00495003,
     107, QMetaType::QReal, 0x00495003,
     109, QMetaType::QReal, 0x00495003,
     127, QMetaType::QReal, 0x00495103,
     129, QMetaType::QReal, 0x00495103,
     131, QMetaType::QReal, 0x00495103,
     133, QMetaType::QReal, 0x00495103,
     135, QMetaType::QReal, 0x00495103,
     137, QMetaType::QReal, 0x00495103,
     139, QMetaType::QReal, 0x00495103,
     141, QMetaType::QReal, 0x00495103,
     143, QMetaType::QReal, 0x00495103,
     145, QMetaType::QReal, 0x00495103,
     147, QMetaType::QReal, 0x00495103,
     149, QMetaType::QReal, 0x00495103,
     151, QMetaType::QReal, 0x00495103,
     153, QMetaType::QReal, 0x00495103,
     155, QMetaType::QReal, 0x00495103,
     157, QMetaType::QReal, 0x00495103,
     159, QMetaType::QReal, 0x00495103,
     161, QMetaType::QReal, 0x00495103,
     163, QMetaType::QReal, 0x00495103,
     165, QMetaType::QReal, 0x00495103,
     167, QMetaType::QReal, 0x00495103,
     169, QMetaType::QReal, 0x00495103,
     171, QMetaType::QReal, 0x00495103,
     173, QMetaType::QReal, 0x00495103,
     175, QMetaType::QReal, 0x00495103,
     177, QMetaType::QString, 0x00495103,
     179, QMetaType::QString, 0x00495103,
     181, QMetaType::QString, 0x00495103,
     183, QMetaType::QString, 0x00495103,
     185, QMetaType::QString, 0x00495103,
     187, QMetaType::QString, 0x00495103,
     189, QMetaType::QString, 0x00495103,
     191, QMetaType::QString, 0x00495103,
     193, QMetaType::QString, 0x00495103,
     195, QMetaType::QString, 0x00495103,
     197, QMetaType::QString, 0x00495103,
     199, QMetaType::QString, 0x00495103,
     201, QMetaType::QString, 0x00495103,
     203, QMetaType::QString, 0x00495103,
     205, QMetaType::QString, 0x00495103,
     207, QMetaType::QString, 0x00495103,
     209, QMetaType::QString, 0x00495103,
     211, QMetaType::QString, 0x00495103,
     213, QMetaType::QString, 0x00495103,
     215, QMetaType::QString, 0x00495103,
     217, QMetaType::QString, 0x00495103,
     219, QMetaType::QString, 0x00495103,
     221, QMetaType::QString, 0x00495103,
     223, QMetaType::QString, 0x00495103,
     225, QMetaType::QString, 0x00495103,
     227, QMetaType::QString, 0x00495103,
     229, QMetaType::QString, 0x00495103,
     231, QMetaType::QString, 0x00495103,
     233, QMetaType::QString, 0x00495103,
     235, QMetaType::QString, 0x00495103,
     237, QMetaType::QString, 0x00495103,
     239, QMetaType::QString, 0x00495103,
     241, QMetaType::QString, 0x00495103,
     267, QMetaType::QReal, 0x00495103,
     269, QMetaType::QReal, 0x00495103,
     271, QMetaType::QReal, 0x00495103,
     273, QMetaType::QReal, 0x00495103,
     275, QMetaType::QReal, 0x00495103,
     277, QMetaType::QReal, 0x00495103,
     279, QMetaType::QReal, 0x00495103,
     281, QMetaType::QReal, 0x00495103,
     283, QMetaType::QReal, 0x00495103,
     285, QMetaType::QReal, 0x00495103,
     287, QMetaType::QReal, 0x00495103,
     289, QMetaType::QReal, 0x00495103,
     291, QMetaType::QReal, 0x00495103,
     293, QMetaType::QReal, 0x00495103,
     295, QMetaType::QReal, 0x00495103,
     297, QMetaType::QReal, 0x00495103,
     299, QMetaType::QReal, 0x00495103,
     301, QMetaType::QReal, 0x00495103,
     303, QMetaType::QReal, 0x00495103,
     305, QMetaType::QReal, 0x00495103,
     307, QMetaType::QReal, 0x00495103,
     309, QMetaType::QReal, 0x00495103,
     311, QMetaType::QReal, 0x00495103,
     313, QMetaType::QReal, 0x00495103,
     315, QMetaType::QReal, 0x00495103,
     317, QMetaType::QReal, 0x00495103,
     319, QMetaType::QReal, 0x00495103,
     321, QMetaType::QReal, 0x00495103,
     323, QMetaType::QReal, 0x00495103,
     325, QMetaType::QReal, 0x00495103,
     327, QMetaType::QReal, 0x00495103,
     329, QMetaType::QReal, 0x00495103,
     331, QMetaType::QReal, 0x00495103,
     333, QMetaType::QReal, 0x00495103,
     335, QMetaType::QReal, 0x00495103,
     337, QMetaType::QReal, 0x00495103,
     339, QMetaType::QReal, 0x00495103,
     341, QMetaType::QReal, 0x00495103,
     343, QMetaType::QReal, 0x00495103,
     345, QMetaType::QReal, 0x00495103,
     347, QMetaType::QReal, 0x00495103,
     349, QMetaType::QReal, 0x00495103,
     351, QMetaType::QReal, 0x00495103,
     353, QMetaType::QReal, 0x00495103,
     355, QMetaType::QReal, 0x00495103,
     357, QMetaType::QReal, 0x00495103,
     243, QMetaType::QString, 0x00495003,
     245, QMetaType::QReal, 0x00495003,
     247, QMetaType::QReal, 0x00495003,
     249, QMetaType::QReal, 0x00495003,
     251, QMetaType::QReal, 0x00495003,
     253, QMetaType::Int, 0x00495003,
     255, QMetaType::QString, 0x00495003,
     257, QMetaType::QReal, 0x00495003,
     259, QMetaType::QReal, 0x00495003,
     261, QMetaType::QString, 0x00495003,
     263, QMetaType::QString, 0x00495003,
     265, QMetaType::QString, 0x00495003,
     359, QMetaType::QReal, 0x00495003,
     361, QMetaType::QReal, 0x00495003,
     363, QMetaType::QReal, 0x00495003,
     365, QMetaType::QReal, 0x00495003,
     367, QMetaType::QReal, 0x00495003,
     369, QMetaType::QReal, 0x00495003,
     371, QMetaType::QReal, 0x00495003,
     373, QMetaType::QReal, 0x00495003,
     375, QMetaType::QReal, 0x00495003,
     377, QMetaType::QReal, 0x00495103,
     379, QMetaType::QReal, 0x00495103,
     381, QMetaType::QReal, 0x00495103,
     383, QMetaType::QReal, 0x00495103,
     385, QMetaType::QReal, 0x00495103,
     387, QMetaType::QReal, 0x00495103,
     389, QMetaType::QReal, 0x00495103,
     391, QMetaType::Bool, 0x00495003,
     393, QMetaType::QStringList, 0x00495003,
     395, QMetaType::QStringList, 0x00495003,
     397, QMetaType::QStringList, 0x00495003,
     399, QMetaType::QStringList, 0x00495003,
     401, QMetaType::QStringList, 0x00495003,
     403, QMetaType::QStringList, 0x00495003,
     405, QMetaType::QReal, 0x00495003,
     407, QMetaType::QReal, 0x00495003,
     409, QMetaType::QReal, 0x00495003,
     411, QMetaType::QReal, 0x00495003,
     413, QMetaType::QReal, 0x00495003,
     415, QMetaType::QReal, 0x00495003,
     417, QMetaType::QReal, 0x00495003,
     419, QMetaType::QReal, 0x00495003,
     421, QMetaType::QReal, 0x00495003,
     423, QMetaType::QReal, 0x00495003,
     425, QMetaType::QReal, 0x00495003,
     427, QMetaType::QReal, 0x00495003,
     429, QMetaType::QReal, 0x00495003,
     431, QMetaType::QReal, 0x00495003,
     433, QMetaType::QReal, 0x00495003,
     435, QMetaType::QReal, 0x00495003,
     437, QMetaType::QReal, 0x00495003,
     439, QMetaType::QReal, 0x00495003,
     441, QMetaType::QReal, 0x00495003,
     443, QMetaType::QReal, 0x00495003,
     445, QMetaType::QReal, 0x00495003,
     447, QMetaType::QReal, 0x00495003,
     449, QMetaType::QReal, 0x00495003,
     451, QMetaType::QReal, 0x00495003,
     453, QMetaType::QReal, 0x00495003,
     455, QMetaType::QReal, 0x00495003,
     457, QMetaType::QReal, 0x00495003,
     459, QMetaType::QReal, 0x00495003,
     461, QMetaType::QReal, 0x00495003,
     463, QMetaType::QReal, 0x00495003,
     465, QMetaType::QReal, 0x00495003,
     467, QMetaType::QReal, 0x00495003,
     469, QMetaType::QReal, 0x00495003,
     471, QMetaType::QReal, 0x00495003,
     473, QMetaType::QReal, 0x00495003,
     475, QMetaType::QReal, 0x00495003,
     477, QMetaType::QReal, 0x00495003,
     479, QMetaType::QReal, 0x00495003,
     481, QMetaType::QReal, 0x00495003,
     483, QMetaType::QReal, 0x00495003,
     485, QMetaType::QReal, 0x00495003,
     487, QMetaType::QReal, 0x00495003,
     489, QMetaType::QReal, 0x00495003,
     491, QMetaType::QReal, 0x00495003,
     493, QMetaType::QReal, 0x00495003,
     495, QMetaType::QReal, 0x00495003,
     497, QMetaType::QReal, 0x00495003,
     499, QMetaType::QReal, 0x00495003,
     501, QMetaType::QReal, 0x00495003,
     503, QMetaType::QReal, 0x00495003,
     505, QMetaType::QReal, 0x00495003,
     507, QMetaType::QReal, 0x00495003,
     509, QMetaType::QReal, 0x00495003,
     511, QMetaType::QReal, 0x00495003,
     513, QMetaType::QReal, 0x00495003,
     515, QMetaType::QReal, 0x00495003,
     517, QMetaType::QReal, 0x00495003,
     519, QMetaType::QReal, 0x00495003,
     521, QMetaType::QReal, 0x00495003,
     523, QMetaType::QReal, 0x00495003,
     525, QMetaType::QReal, 0x00495003,
     527, QMetaType::QReal, 0x00495003,
     529, QMetaType::QReal, 0x00495003,
     531, QMetaType::QReal, 0x00495003,
     533, QMetaType::QReal, 0x00495003,
     535, QMetaType::QReal, 0x00495003,
     537, QMetaType::QReal, 0x00495003,
     539, QMetaType::QReal, 0x00495003,
     541, QMetaType::QReal, 0x00495003,
     543, QMetaType::QReal, 0x00495003,
     545, QMetaType::QReal, 0x00495003,
     547, QMetaType::QReal, 0x00495003,
     549, QMetaType::QReal, 0x00495003,
     551, QMetaType::QReal, 0x00495003,
     553, QMetaType::QReal, 0x00495003,
     555, QMetaType::QReal, 0x00495003,
     557, QMetaType::QReal, 0x00495003,
     559, QMetaType::QReal, 0x00495003,
     561, QMetaType::QReal, 0x00495003,
     563, QMetaType::QReal, 0x00495003,
     565, QMetaType::QReal, 0x00495003,
     567, QMetaType::QReal, 0x00495003,
     569, QMetaType::QReal, 0x00495003,
     571, QMetaType::QReal, 0x00495003,
     573, QMetaType::QReal, 0x00495003,
     575, QMetaType::QReal, 0x00495003,
     577, QMetaType::QReal, 0x00495003,
     579, QMetaType::QString, 0x00495003,
     581, QMetaType::Int, 0x00495003,
     583, QMetaType::QReal, 0x00495003,
     585, QMetaType::QReal, 0x00495003,
     587, QMetaType::Int, 0x00495003,
     589, QMetaType::Int, 0x00495003,
     591, QMetaType::Int, 0x00495003,
     593, QMetaType::Int, 0x00495003,
     595, QMetaType::Int, 0x00495003,
     597, QMetaType::Int, 0x00495003,
     599, QMetaType::Int, 0x00495003,
     601, QMetaType::Int, 0x00495003,
     603, QMetaType::QReal, 0x00495003,
     605, QMetaType::Int, 0x00495003,
     607, QMetaType::Int, 0x00495003,
     609, QMetaType::Int, 0x00495003,
     611, QMetaType::Int, 0x00495003,
     613, QMetaType::Int, 0x00495003,
     615, QMetaType::Int, 0x00495003,
     617, QMetaType::Int, 0x00495003,
     619, QMetaType::Int, 0x00495003,
     621, QMetaType::Int, 0x00495003,
     623, QMetaType::Int, 0x00495003,
     625, QMetaType::Int, 0x00495003,
     627, QMetaType::Int, 0x00495003,
     629, QMetaType::Int, 0x00495003,
     631, QMetaType::Int, 0x00495003,
     633, QMetaType::Int, 0x00495103,
     635, QMetaType::Int, 0x00495103,
     637, QMetaType::Int, 0x00495103,
     639, QMetaType::Int, 0x00495103,
     641, QMetaType::QString, 0x00495103,
     643, QMetaType::QString, 0x00495003,
     647, QMetaType::Int, 0x00495103,
     645, QMetaType::QString, 0x00495003,
     652, QMetaType::QString, 0x00495003,
     654, QMetaType::QString, 0x00495103,
     656, QMetaType::QString, 0x00495003,
     650, QMetaType::Int, 0x00495003,
     658, QMetaType::Int, 0x00495003,
     660, QMetaType::QStringList, 0x00495003,
     662, QMetaType::QStringList, 0x00495003,
     664, QMetaType::QReal, 0x00495103,
     666, QMetaType::QReal, 0x00495103,
     668, QMetaType::QReal, 0x00495103,
     670, QMetaType::QReal, 0x00495103,
     672, QMetaType::QReal, 0x00495103,
     674, QMetaType::QReal, 0x00495103,
     676, QMetaType::QReal, 0x00495103,
     678, QMetaType::QReal, 0x00495103,
     680, QMetaType::QReal, 0x00495103,
     682, QMetaType::QReal, 0x00495103,
     684, QMetaType::QReal, 0x00495103,
     686, QMetaType::QReal, 0x00495103,
     688, QMetaType::QReal, 0x00495103,
     690, QMetaType::QReal, 0x00495103,
     692, QMetaType::QReal, 0x00495103,
     694, QMetaType::QReal, 0x00495103,
     696, QMetaType::QReal, 0x00495103,
     698, QMetaType::QReal, 0x00495103,
     700, QMetaType::QReal, 0x00495103,
     702, QMetaType::QReal, 0x00495103,
     704, QMetaType::QReal, 0x00495103,
     706, QMetaType::QReal, 0x00495103,
     708, QMetaType::QReal, 0x00495103,
     710, QMetaType::QReal, 0x00495103,
     712, QMetaType::QReal, 0x00495103,
     714, QMetaType::QReal, 0x00495103,
     716, QMetaType::QReal, 0x00495103,
     718, QMetaType::QReal, 0x00495103,
     720, QMetaType::QReal, 0x00495103,
     722, QMetaType::QReal, 0x00495103,
     724, QMetaType::QReal, 0x00495103,
     726, QMetaType::QReal, 0x00495103,
     728, QMetaType::QReal, 0x00495103,
     730, QMetaType::QReal, 0x00495103,
     732, QMetaType::QReal, 0x00495103,
     734, QMetaType::QReal, 0x00495103,
     736, QMetaType::QReal, 0x00495103,
     738, QMetaType::QReal, 0x00495103,
     740, QMetaType::QReal, 0x00495103,
     742, QMetaType::QReal, 0x00495103,
     744, QMetaType::QReal, 0x00495103,
     746, QMetaType::QReal, 0x00495103,
     748, QMetaType::QReal, 0x00495103,
    1035, QMetaType::QReal, 0x00495003,
    1037, QMetaType::QReal, 0x00495003,
    1039, QMetaType::QReal, 0x00495003,
    1041, QMetaType::QReal, 0x00495003,
    1043, QMetaType::QReal, 0x00495003,
    1045, QMetaType::QReal, 0x00495003,
    1047, QMetaType::QReal, 0x00495003,
    1049, QMetaType::QReal, 0x00495003,
    1051, QMetaType::QReal, 0x00495003,
    1053, QMetaType::QReal, 0x00495103,
    1055, QMetaType::QReal, 0x00495103,
    1057, QMetaType::QReal, 0x00495103,
    1059, QMetaType::QReal, 0x00495103,
    1061, QMetaType::QReal, 0x00495103,
    1063, QMetaType::QReal, 0x00495103,
    1065, QMetaType::QReal, 0x00495103,
    1067, QMetaType::QReal, 0x00495103,
     752, QMetaType::QReal, 0x00495103,
     754, QMetaType::QReal, 0x00495103,
     756, QMetaType::Int, 0x00495103,
     758, QMetaType::Int, 0x00495103,
     760, QMetaType::Int, 0x00495003,
     762, QMetaType::Int, 0x00495003,
     764, QMetaType::Int, 0x00495003,
     766, QMetaType::Int, 0x00495103,
     754, QMetaType::QReal, 0x00495103,
     768, QMetaType::QReal, 0x00495003,
     770, QMetaType::QReal, 0x00495003,
     772, QMetaType::QReal, 0x00495003,
     774, QMetaType::QReal, 0x00495003,
     776, QMetaType::QReal, 0x00495003,
     778, QMetaType::QReal, 0x00495003,
     780, QMetaType::QReal, 0x00495003,
     782, QMetaType::QReal, 0x00495003,
     784, QMetaType::QReal, 0x00495003,
     786, QMetaType::QReal, 0x00495003,
     788, QMetaType::QReal, 0x00495003,
     790, QMetaType::QReal, 0x00495003,
     792, QMetaType::QReal, 0x00495003,
     794, QMetaType::QReal, 0x00495003,
     796, QMetaType::QReal, 0x00495103,
     798, QMetaType::QReal, 0x00495103,
     800, QMetaType::QReal, 0x00495103,
     802, QMetaType::QReal, 0x00495103,
     804, QMetaType::QReal, 0x00495103,
     806, QMetaType::QReal, 0x00495103,
     808, QMetaType::QReal, 0x00495103,
     810, QMetaType::QReal, 0x00495103,
     812, QMetaType::QReal, 0x00495103,
     814, QMetaType::QReal, 0x00495103,
     816, QMetaType::QReal, 0x00495103,
     818, QMetaType::QReal, 0x00495103,
     820, QMetaType::QReal, 0x00495103,
     822, QMetaType::QReal, 0x00495103,
     824, QMetaType::QReal, 0x00495103,
     826, QMetaType::QReal, 0x00495103,
     828, QMetaType::QReal, 0x00495103,
     830, QMetaType::QReal, 0x00495103,
     832, QMetaType::QReal, 0x00495103,
     834, QMetaType::QReal, 0x00495103,
     836, QMetaType::QReal, 0x00495103,
     838, QMetaType::QReal, 0x00495103,
     840, QMetaType::QReal, 0x00495103,
     842, QMetaType::QReal, 0x00495103,
     844, QMetaType::QReal, 0x00495103,
     846, QMetaType::QReal, 0x00495103,
     848, QMetaType::QReal, 0x00495103,
     850, QMetaType::QReal, 0x00495103,
     852, QMetaType::QReal, 0x00495103,
     854, QMetaType::QReal, 0x00495103,
     856, QMetaType::QReal, 0x00495103,
     858, QMetaType::QReal, 0x00495103,
     860, QMetaType::QReal, 0x00495103,
     862, QMetaType::QReal, 0x00495103,
     866, QMetaType::QReal, 0x00495103,
     864, QMetaType::QReal, 0x00495103,
     868, QMetaType::QReal, 0x00495103,
     870, QMetaType::QReal, 0x00495103,
     874, QMetaType::QReal, 0x00495103,
     872, QMetaType::QReal, 0x00495103,
     876, QMetaType::QReal, 0x00495103,
     878, QMetaType::QReal, 0x00495103,
     880, QMetaType::QReal, 0x00495103,
     882, QMetaType::QReal, 0x00495103,
     884, QMetaType::QReal, 0x00495103,
     886, QMetaType::QReal, 0x00495103,
     888, QMetaType::QReal, 0x00495103,
     890, QMetaType::QReal, 0x00495103,
     892, QMetaType::QReal, 0x00495103,
     894, QMetaType::QReal, 0x00495103,
     896, QMetaType::QReal, 0x00495103,
     898, QMetaType::QReal, 0x00495103,
     900, QMetaType::QReal, 0x00495103,
     902, QMetaType::QReal, 0x00495103,
     904, QMetaType::QReal, 0x00495103,
     906, QMetaType::QReal, 0x00495103,
     908, QMetaType::QReal, 0x00495103,
     910, QMetaType::QReal, 0x00495103,
     912, QMetaType::QReal, 0x00495103,
     914, QMetaType::QReal, 0x00495103,
     916, QMetaType::QReal, 0x00495103,
     918, QMetaType::QReal, 0x00495103,
     920, QMetaType::QReal, 0x00495103,
     922, QMetaType::QReal, 0x00495003,
     924, QMetaType::QReal, 0x00495003,
     926, QMetaType::QReal, 0x00495003,
     928, QMetaType::QReal, 0x00495003,
     930, QMetaType::QReal, 0x00495003,
     932, QMetaType::QReal, 0x00495003,
     934, QMetaType::QReal, 0x00495003,
     936, QMetaType::QReal, 0x00495003,
     938, QMetaType::QReal, 0x00495003,
     940, QMetaType::QReal, 0x00495003,
     942, QMetaType::QReal, 0x00495003,
     944, QMetaType::QReal, 0x00495003,
     946, QMetaType::QReal, 0x00495003,
     948, QMetaType::QReal, 0x00495003,
     950, QMetaType::QReal, 0x00495003,
     952, QMetaType::QReal, 0x00495003,
     954, QMetaType::QReal, 0x00495003,
     956, QMetaType::QReal, 0x00495003,
     958, QMetaType::QReal, 0x00495003,
     960, QMetaType::QReal, 0x00495103,
     962, QMetaType::QReal, 0x00495103,
     964, QMetaType::QReal, 0x00495103,
     966, QMetaType::QReal, 0x00495103,
     968, QMetaType::QReal, 0x00495103,
     970, QMetaType::QReal, 0x00495103,
     972, QMetaType::QReal, 0x00495103,
     974, QMetaType::QReal, 0x00495103,
     976, QMetaType::QReal, 0x00495103,
     978, QMetaType::QReal, 0x00495103,
     980, QMetaType::QReal, 0x00495103,
     982, QMetaType::QReal, 0x00495103,
     984, QMetaType::QReal, 0x00495103,
     986, QMetaType::QReal, 0x00495103,
     988, QMetaType::QReal, 0x00495103,
     990, QMetaType::QReal, 0x00495103,
     992, QMetaType::QReal, 0x00495103,
     994, QMetaType::QReal, 0x00495103,
     996, QMetaType::QReal, 0x00495103,
     998, QMetaType::QReal, 0x00495103,
    1000, QMetaType::QReal, 0x00495103,
    1002, QMetaType::QReal, 0x00495103,
    1004, QMetaType::QReal, 0x00495103,
    1006, QMetaType::QReal, 0x00495103,
    1008, QMetaType::QReal, 0x00495103,
    1010, QMetaType::QReal, 0x00495103,
    1012, QMetaType::QReal, 0x00495103,
    1014, QMetaType::QReal, 0x00495103,
    1016, QMetaType::QReal, 0x00495103,
    1018, QMetaType::QReal, 0x00495103,
    1020, QMetaType::QReal, 0x00495103,
    1022, QMetaType::QReal, 0x00495103,
    1024, QMetaType::QReal, 0x00495103,
    1026, QMetaType::Int, 0x00495103,
    1028, QMetaType::Int, 0x00495103,
    1030, QMetaType::Int, 0x00495003,
    1032, QMetaType::Int, 0x00495003,
     648, QMetaType::QString, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      14,
      15,
      16,
      17,
      18,
      20,
      19,
      21,
      22,
      23,
      24,
      25,
      26,
      27,
      28,
      29,
      30,
      31,
      32,
      33,
      34,
      35,
      36,
      49,
      37,
      38,
      39,
      40,
      41,
      42,
      43,
      44,
      45,
      46,
      47,
      48,
      54,
      55,
      56,
      57,
      58,
      59,
      60,
      61,
      50,
      51,
      52,
      53,
      62,
      63,
      64,
      65,
      66,
      67,
      68,
      69,
      70,
      71,
      72,
      73,
      74,
      75,
      76,
      77,
      78,
      79,
      80,
      81,
      82,
      83,
      84,
      85,
      86,
      87,
      88,
      89,
      90,
      91,
      92,
      93,
      94,
      95,
      96,
      97,
      98,
      99,
     100,
     101,
     102,
     103,
     104,
     105,
     106,
     107,
     108,
     109,
     110,
     111,
     112,
     113,
     114,
     115,
     116,
     117,
     118,
     119,
     132,
     133,
     134,
     135,
     136,
     137,
     138,
     139,
     140,
     141,
     142,
     143,
     144,
     145,
     146,
     147,
     148,
     149,
     150,
     151,
     152,
     153,
     154,
     155,
     156,
     157,
     158,
     159,
     158,
     161,
     162,
     163,
     164,
     165,
     166,
     167,
     168,
     169,
     170,
     171,
     172,
     173,
     174,
     175,
     176,
     177,
     120,
     121,
     122,
     123,
     124,
     125,
     126,
     127,
     128,
     129,
     130,
     131,
     178,
     179,
     180,
     181,
     182,
     183,
     184,
     185,
     186,
     187,
     188,
     189,
     190,
     191,
     192,
     193,
     194,
     195,
     196,
     197,
     198,
     199,
     200,
     201,
     202,
     203,
     204,
     205,
     206,
     207,
     208,
     209,
     210,
     211,
     212,
     213,
     214,
     215,
     216,
     217,
     218,
     219,
     220,
     221,
     222,
     223,
     224,
     225,
     226,
     227,
     228,
     229,
     230,
     231,
     232,
     233,
     234,
     235,
     236,
     237,
     238,
     239,
     240,
     241,
     242,
     243,
     244,
     245,
     246,
     247,
     248,
     249,
     250,
     251,
     252,
     253,
     254,
     255,
     256,
     257,
     258,
     259,
     260,
     261,
     262,
     263,
     264,
     265,
     266,
     267,
     268,
     269,
     270,
     271,
     272,
     273,
     274,
     275,
     276,
     277,
     278,
     279,
     280,
     281,
     282,
     283,
     284,
     285,
     286,
     287,
     288,
     289,
     290,
     291,
     292,
     293,
     294,
     295,
     296,
     297,
     298,
     299,
     300,
     301,
     302,
     303,
     304,
     305,
     306,
     307,
     308,
     309,
     310,
     311,
     312,
     313,
     314,
     315,
     316,
     317,
     318,
     319,
     320,
     322,
     321,
     325,
     326,
     327,
     324,
     328,
     329,
     330,
     331,
     332,
     333,
     334,
     335,
     336,
     337,
     338,
     339,
     340,
     341,
     342,
     343,
     344,
     345,
     346,
     347,
     348,
     349,
     350,
     351,
     352,
     353,
     354,
     355,
     356,
     357,
     358,
     359,
     360,
     361,
     362,
     363,
     364,
     365,
     366,
     367,
     368,
     369,
     370,
     371,
     372,
     373,
     517,
     518,
     519,
     520,
     521,
     522,
     523,
     524,
     525,
     526,
     527,
     528,
     529,
     530,
     531,
     532,
     533,
     375,
     376,
     377,
     378,
     379,
     380,
     381,
     382,
     376,
     383,
     384,
     385,
     386,
     387,
     388,
     389,
     390,
     391,
     392,
     393,
     394,
     395,
     396,
     397,
     398,
     399,
     400,
     401,
     402,
     403,
     404,
     405,
     406,
     407,
     408,
     409,
     410,
     411,
     412,
     413,
     414,
     415,
     416,
     417,
     418,
     419,
     420,
     421,
     422,
     423,
     424,
     425,
     426,
     427,
     428,
     429,
     430,
     432,
     431,
     433,
     434,
     436,
     435,
     437,
     438,
     439,
     440,
     441,
     442,
     443,
     444,
     445,
     446,
     447,
     448,
     449,
     450,
     451,
     452,
     453,
     454,
     455,
     456,
     457,
     458,
     459,
     460,
     461,
     462,
     463,
     464,
     465,
     466,
     467,
     468,
     469,
     470,
     471,
     472,
     473,
     474,
     475,
     476,
     477,
     478,
     479,
     480,
     481,
     482,
     483,
     484,
     485,
     486,
     487,
     488,
     489,
     490,
     491,
     492,
     493,
     494,
     495,
     496,
     497,
     498,
     499,
     500,
     501,
     502,
     503,
     504,
     505,
     506,
     507,
     508,
     509,
     510,
     511,
     512,
     513,
     514,
     515,
     516,

       0        // eod
};

void DashBoard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DashBoard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->odoChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->CylindersChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->tripChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->NMEAlogChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->rpmChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->intakepressChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: _t->pressureVChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 7: _t->throttleVChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 8: _t->primaryinpChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 9: _t->fuelcChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 10: _t->leadingignChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 11: _t->trailingignChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 12: _t->fueltempChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 13: _t->moilpChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 14: _t->boosttpChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 15: _t->boostwgChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 16: _t->watertempChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 17: _t->intaketempChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 18: _t->knockChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 19: _t->speedChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 20: _t->batteryVChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 21: _t->iscvdutyChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 22: _t->o2voltChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 23: _t->Cyl1_O2_CorrChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 24: _t->Cyl2_O2_CorrChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 25: _t->Cyl3_O2_CorrChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 26: _t->Cyl4_O2_CorrChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 27: _t->Cyl5_O2_CorrChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 28: _t->Cyl6_O2_CorrChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 29: _t->Cyl7_O2_CorrChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 30: _t->Cyl8_O2_CorrChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 31: _t->na1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 32: _t->secinjpulseChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 33: _t->na2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 34: _t->injDutyChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 35: _t->injDuty2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 36: _t->InjAngleChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 37: _t->engLoadChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 38: _t->mAF1VChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 39: _t->mAF2VChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 40: _t->injmsChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 41: _t->injChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 42: _t->ignChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 43: _t->dwellChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 44: _t->BoostPresChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 45: _t->BoostPreskpaChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 46: _t->boostDutyChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 47: _t->mAFactivityChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 48: _t->o2volt_2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 49: _t->pimChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 50: _t->auxcalc1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 51: _t->auxcalc2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 52: _t->auxcalc3Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 53: _t->auxcalc4Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 54: _t->sens1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 55: _t->sens2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 56: _t->sens3Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 57: _t->sens4Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 58: _t->sens5Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 59: _t->sens6Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 60: _t->sens7Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 61: _t->sens8Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 62: _t->flag1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 63: _t->flag2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 64: _t->flag3Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 65: _t->flag4Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 66: _t->flag5Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 67: _t->flag6Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 68: _t->flag7Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 69: _t->flag8Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 70: _t->flag9Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 71: _t->flag10Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 72: _t->flag11Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 73: _t->flag12Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 74: _t->flag13Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 75: _t->flag14Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 76: _t->flag15Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 77: _t->flag16Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 78: _t->flag17Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 79: _t->flag18Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 80: _t->flag19Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 81: _t->flag20Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 82: _t->flag21Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 83: _t->flag22Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 84: _t->flag23Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 85: _t->flag24Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 86: _t->flag25Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 87: _t->flagString1Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 88: _t->flagString2Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 89: _t->flagString3Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 90: _t->flagString4Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 91: _t->flagString5Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 92: _t->flagString6Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 93: _t->flagString7Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 94: _t->flagString8Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 95: _t->flagString9Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 96: _t->flagString10Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 97: _t->flagString11Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 98: _t->flagString12Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 99: _t->flagString13Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 100: _t->flagString14Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 101: _t->flagString15Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 102: _t->flagString16Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 103: _t->sensorString1Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 104: _t->sensorString2Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 105: _t->sensorString3Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 106: _t->sensorString4Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 107: _t->sensorString5Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 108: _t->sensorString6Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 109: _t->sensorString7Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 110: _t->sensorString8Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 111: _t->platformChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 112: _t->serialStatChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 113: _t->recvDataChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 114: _t->timeoutStatChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 115: _t->runStatChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 116: _t->WifiStatChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 117: _t->EthernetStatChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 118: _t->CBXCountrysaveChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 119: _t->CBXTracksaveChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 120: _t->gpsTimeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 121: _t->gpsAltitudeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 122: _t->gpsLatitudeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 123: _t->gpsLongitudeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 124: _t->gpsSpeedChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 125: _t->gpsVisibleSatelitesChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 126: _t->gpsFIXtypeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 127: _t->gpsbearingChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 128: _t->gpsHDOPChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 129: _t->unitsChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 130: _t->speedunitsChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 131: _t->pressureunitsChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 132: _t->mAPChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 133: _t->PANVACChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 134: _t->mAP2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 135: _t->aUXTChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 136: _t->aFRChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 137: _t->AFRLEFTBANKTARGETChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 138: _t->AFRRIGHTBANKTARGETChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 139: _t->AFRLEFTBANKACTUALChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 140: _t->AFRRIGHTBANKACTUALChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 141: _t->BOOSTOFFSETChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 142: _t->REVLIM3STEPChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 143: _t->REVLIM2STEPChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 144: _t->REVLIMGIGHSIDEChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 145: _t->REVLIMBOURNOUTChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 146: _t->LEFTBANKO2CORRChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 147: _t->RIGHTBANKO2CORRChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 148: _t->TRACTIONCTRLOFFSETChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 149: _t->DRIVESHAFTOFFSETChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 150: _t->TCCOMMANDChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 151: _t->FSLCOMMANDChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 152: _t->FSLINDEXChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 153: _t->AFRcyl1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 154: _t->AFRcyl2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 155: _t->AFRcyl3Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 156: _t->AFRcyl4Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 157: _t->AFRcyl5Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 158: _t->AFRcyl6Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 159: _t->AFRcyl7Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 160: _t->AFRcyl8Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 161: _t->tPSChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 162: _t->idleValueChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 163: _t->mVSSChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 164: _t->sVSSChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 165: _t->inj1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 166: _t->inj2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 167: _t->inj3Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 168: _t->inj4Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 169: _t->ign1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 170: _t->ign2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 171: _t->ign3Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 172: _t->ign4Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 173: _t->tRIMChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 174: _t->lAMBDAChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 175: _t->lAMBDATargetChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 176: _t->fuelPressChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 177: _t->GearOilPressChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 178: _t->accelxChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 179: _t->accelyChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 180: _t->accelzChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 181: _t->gyroxChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 182: _t->gyroyChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 183: _t->gyrozChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 184: _t->compassChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 185: _t->ambitempChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 186: _t->ambipressChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 187: _t->GearChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 188: _t->GearoffsetChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 189: _t->GearCalculationChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 190: _t->powerChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 191: _t->torqueChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 192: _t->accelTimerChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 193: _t->weightChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 194: _t->screenChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 195: _t->maindashsetupChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 196: _t->dashsetup3Changed((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 197: _t->dashsetup2Changed((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 198: _t->dashsetup1Changed((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 199: _t->dashfilesChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 200: _t->backroundpicturesChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 201: _t->accelpedposChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 202: _t->airtempensor2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 203: _t->antilaglauchswitchChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 204: _t->antilaglaunchonChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 205: _t->auxrevlimitswitchChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 206: _t->avfueleconomyChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 207: _t->battlightChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 208: _t->boostcontrolChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 209: _t->brakepressChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 210: _t->clutchswitchstateChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 211: _t->coolantpressChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 212: _t->decelcutChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 213: _t->diffoiltempChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 214: _t->distancetoemptyChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 215: _t->egt1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 216: _t->egt2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 217: _t->egt3Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 218: _t->egt4Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 219: _t->egt5Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 220: _t->egt6Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 221: _t->egt7Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 222: _t->egt8Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 223: _t->egt9Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 224: _t->egt10Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 225: _t->egt11Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 226: _t->egt12Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 227: _t->excamangle1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 228: _t->excamangle2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 229: _t->flatshiftstateChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 230: _t->fuelclevelChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 231: _t->fuelcompositionChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 232: _t->fuelconsrateChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 233: _t->fuelcutpercChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 234: _t->fuelflowChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 235: _t->fuelflowdiffChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 236: _t->fuelflowretChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 237: _t->fueltrimlongtbank1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 238: _t->fueltrimlongtbank2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 239: _t->fueltrimshorttbank1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 240: _t->fueltrimshorttbank2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 241: _t->gearswitchChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 242: _t->handbrakeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 243: _t->highbeamChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 244: _t->lowBeamChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 245: _t->tractionControlChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 246: _t->homeccounterChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 247: _t->incamangle1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 248: _t->incamangle2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 249: _t->knocklevlogged1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 250: _t->knocklevlogged2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 251: _t->knockretardbank1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 252: _t->knockretardbank2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 253: _t->lambda2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 254: _t->lambda3Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 255: _t->lambda4Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 256: _t->launchcontolfuelenrichChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 257: _t->launchctrolignretardChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 258: _t->leftindicatorChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 259: _t->limpmodeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 260: _t->milChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 261: _t->missccountChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 262: _t->nosactiveChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 263: _t->nospressChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 264: _t->nosswitchChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 265: _t->oilpresChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 266: _t->oiltempChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 267: _t->rallyantilagswitchChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 268: _t->rightindicatorChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 269: _t->targetbstlelkpaChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 270: _t->timeddutyout1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 271: _t->timeddutyout2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 272: _t->timeddutyoutputactiveChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 273: _t->torqueredcutactiveChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 274: _t->torqueredlevelactiveChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 275: _t->transientthroactiveChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 276: _t->transoiltempChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 277: _t->triggerccounterChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 278: _t->triggersrsinceasthomeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 279: _t->turborpmChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 280: _t->turborpm2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 281: _t->wastegatepressChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 282: _t->wheeldiffChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 283: _t->wheelslipChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 284: _t->wheelspdftleftChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 285: _t->wheelspdftrightChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 286: _t->wheelspdrearleftChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 287: _t->wheelspdrearrightChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 288: _t->musicpathChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 289: _t->supportedRegChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 290: _t->speedpercentChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 291: _t->pulsespermileChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 292: _t->maxRPMChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 293: _t->rpmStage1Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 294: _t->rpmStage2Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 295: _t->rpmStage3Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 296: _t->rpmStage4Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 297: _t->waterwarnChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 298: _t->rpmwarnChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 299: _t->knockwarnChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 300: _t->boostwarnChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 301: _t->smoothrpmChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 302: _t->smoothspeedChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 303: _t->smootexAnalogInput7Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 304: _t->gearcalc1Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 305: _t->gearcalc2Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 306: _t->gearcalc3Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 307: _t->gearcalc4Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 308: _t->gearcalc5Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 309: _t->gearcalc6Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 310: _t->gearcalcactivationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 311: _t->ecuChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 312: _t->rpmstyle1Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 313: _t->rpmstyle2Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 314: _t->rpmstyle3Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 315: _t->RotaryTrimpot1Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 316: _t->RotaryTrimpot2Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 317: _t->RotaryTrimpot3Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 318: _t->CalibrationSelectChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 319: _t->ErrorChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 320: _t->autogearChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 321: _t->daemonlicenseChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 322: _t->ExternalSpeedChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 323: _t->externalspeedport((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 324: _t->currentLapChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 325: _t->laptimeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 326: _t->LastlaptimeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 327: _t->bestlaptimeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 328: _t->draggableChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 329: _t->wifiChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 330: _t->canChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 331: _t->Analog0Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 332: _t->Analog1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 333: _t->Analog2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 334: _t->Analog3Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 335: _t->Analog4Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 336: _t->Analog5Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 337: _t->Analog6Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 338: _t->Analog7Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 339: _t->Analog8Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 340: _t->Analog9Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 341: _t->Analog10Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 342: _t->AnalogCalc0Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 343: _t->AnalogCalc1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 344: _t->AnalogCalc2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 345: _t->AnalogCalc3Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 346: _t->AnalogCalc4Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 347: _t->AnalogCalc5Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 348: _t->AnalogCalc6Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 349: _t->AnalogCalc7Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 350: _t->AnalogCalc8Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 351: _t->AnalogCalc9Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 352: _t->AnalogCalc10Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 353: _t->EXAnalogCalc0Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 354: _t->EXAnalogCalc1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 355: _t->EXAnalogCalc2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 356: _t->EXAnalogCalc3Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 357: _t->EXAnalogCalc4Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 358: _t->EXAnalogCalc5Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 359: _t->EXAnalogCalc6Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 360: _t->EXAnalogCalc7Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 361: _t->LambdamultiplyChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 362: _t->Userchannel1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 363: _t->Userchannel2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 364: _t->Userchannel3Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 365: _t->Userchannel4Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 366: _t->Userchannel5Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 367: _t->Userchannel6Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 368: _t->Userchannel7Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 369: _t->Userchannel8Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 370: _t->Userchannel9Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 371: _t->Userchannel10Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 372: _t->Userchannel11Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 373: _t->Userchannel12Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 374: _t->BitfieldEngineStatusChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 375: _t->FuelLevelChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 376: _t->SteeringWheelAngleChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 377: _t->BrightnessChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 378: _t->VisibledashesChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 379: _t->oilpressurelampChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 380: _t->overtempalarmChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 381: _t->alternatorfailChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 382: _t->AuxTemp1Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 383: _t->sixtyfoottimeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 384: _t->sixtyfootspeedChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 385: _t->threehundredthirtyfoottimeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 386: _t->threehundredthirtyfootspeedChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 387: _t->eightmiletimeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 388: _t->eightmilespeedChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 389: _t->quartermiletimeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 390: _t->quartermilespeedChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 391: _t->thousandfoottimeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 392: _t->thousandfootspeedChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 393: _t->zerotohundredtChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 394: _t->hundredtotwohundredtimeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 395: _t->twohundredtothreehundredtimeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 396: _t->reactiontimeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 397: _t->IGBTPhaseATempChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 398: _t->IGBTPhaseBTempChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 399: _t->IGBTPhaseCTempChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 400: _t->GateDriverTempChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 401: _t->ControlBoardTempChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 402: _t->RtdTemp1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 403: _t->RtdTemp2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 404: _t->RtdTemp3Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 405: _t->RtdTemp4Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 406: _t->RtdTemp5Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 407: _t->EMotorTemperatureChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 408: _t->TorqueShudderChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 409: _t->DigInput1FowardSwChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 410: _t->DigInput2ReverseSwChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 411: _t->DigInput3BrakeSwChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 412: _t->DigInput4RegenDisableSwChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 413: _t->DigInput5IgnSwChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 414: _t->DigInput6StartSwChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 415: _t->DigInput7BoolChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 416: _t->DigInput8BoolChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 417: _t->EMotorAngleChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 418: _t->EMotorSpeedChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 419: _t->ElectricalOutFreqChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 420: _t->DeltaResolverFilteredChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 421: _t->PhaseACurrentChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 422: _t->PhaseBCurrentChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 423: _t->PhaseCCurrentChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 424: _t->DCBusCurrentChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 425: _t->DCBusVoltageChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 426: _t->OutputVoltageChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 427: _t->VABvdVoltageChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 428: _t->VBCvqVoltageChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 429: _t->TirepresLFChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 430: _t->TirepresRFChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 431: _t->TirepresRRChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 432: _t->TirepresLRChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 433: _t->TiretempLFChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 434: _t->TiretempRFChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 435: _t->TiretempRRChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 436: _t->TiretempLRChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 437: _t->DigitalInput1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 438: _t->DigitalInput2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 439: _t->DigitalInput3Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 440: _t->DigitalInput4Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 441: _t->DigitalInput5Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 442: _t->DigitalInput6Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 443: _t->DigitalInput7Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 444: _t->EXDigitalInput1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 445: _t->EXDigitalInput2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 446: _t->EXDigitalInput3Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 447: _t->EXDigitalInput4Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 448: _t->EXDigitalInput5Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 449: _t->EXDigitalInput6Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 450: _t->EXDigitalInput7Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 451: _t->EXDigitalInput8Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 452: _t->EXAnalogInput0Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 453: _t->EXAnalogInput1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 454: _t->EXAnalogInput2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 455: _t->EXAnalogInput3Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 456: _t->EXAnalogInput4Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 457: _t->EXAnalogInput5Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 458: _t->EXAnalogInput6Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 459: _t->EXAnalogInput7Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 460: _t->igncutChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 461: _t->undrivenavgspeedChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 462: _t->drivenavgspeedChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 463: _t->dsettargetslipChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 464: _t->tractionctlpowerlimitChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 465: _t->knockallpeakChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 466: _t->knockcorrChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 467: _t->knocklastcylChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 468: _t->totalfueltrimChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 469: _t->totaligncompChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 470: _t->egthighestChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 471: _t->cputempecuChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 472: _t->errorcodecountChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 473: _t->lostsynccountChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 474: _t->egtdiffChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 475: _t->activeboosttableChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 476: _t->activetunetableChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 477: _t->genericoutput1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 478: _t->frequencyDIEX1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 479: _t->LF_Tyre_Temp_01Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 480: _t->LF_Tyre_Temp_02Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 481: _t->LF_Tyre_Temp_03Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 482: _t->LF_Tyre_Temp_04Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 483: _t->LF_Tyre_Temp_05Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 484: _t->LF_Tyre_Temp_06Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 485: _t->LF_Tyre_Temp_07Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 486: _t->LF_Tyre_Temp_08Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 487: _t->RF_Tyre_Temp_01Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 488: _t->RF_Tyre_Temp_02Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 489: _t->RF_Tyre_Temp_03Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 490: _t->RF_Tyre_Temp_04Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 491: _t->RF_Tyre_Temp_05Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 492: _t->RF_Tyre_Temp_06Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 493: _t->RF_Tyre_Temp_07Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 494: _t->RF_Tyre_Temp_08Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 495: _t->LR_Tyre_Temp_01Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 496: _t->LR_Tyre_Temp_02Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 497: _t->LR_Tyre_Temp_03Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 498: _t->LR_Tyre_Temp_04Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 499: _t->LR_Tyre_Temp_05Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 500: _t->LR_Tyre_Temp_06Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 501: _t->LR_Tyre_Temp_07Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 502: _t->LR_Tyre_Temp_08Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 503: _t->RR_Tyre_Temp_01Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 504: _t->RR_Tyre_Temp_02Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 505: _t->RR_Tyre_Temp_03Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 506: _t->RR_Tyre_Temp_04Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 507: _t->RR_Tyre_Temp_05Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 508: _t->RR_Tyre_Temp_06Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 509: _t->RR_Tyre_Temp_07Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 510: _t->RR_Tyre_Temp_08Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 511: _t->RPMFrequencyDividerDi1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 512: _t->DI1RPMEnabledChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 513: _t->ExternalrpmChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 514: _t->languageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 515: _t->externalspeedconnectionrequestChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 516: _t->externalspeedportChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 517: _t->pwseq1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 518: _t->pwseq2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 519: _t->pwseq3Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 520: _t->pwseq4Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 521: _t->nitrous1_dutyChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 522: _t->nitrous2_dutyChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 523: _t->nitrous_timer_outChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 524: _t->n2o_addfuelChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 525: _t->n2o_retardChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 526: _t->EGOcor1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 527: _t->EGOcor2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 528: _t->EGOcor3Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 529: _t->EGOcor4Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 530: _t->Knock_cyl1Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 531: _t->Knock_cyl2Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 532: _t->Knock_cyl3Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 533: _t->Knock_cyl4Changed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 534: _t->setTrip((*reinterpret_cast< const qreal(*)>(_a[1]))); break;
        case 535: _t->setAnalogVal((*reinterpret_cast< const qreal(*)>(_a[1])),(*reinterpret_cast< const qreal(*)>(_a[2])),(*reinterpret_cast< const qreal(*)>(_a[3])),(*reinterpret_cast< const qreal(*)>(_a[4])),(*reinterpret_cast< const qreal(*)>(_a[5])),(*reinterpret_cast< const qreal(*)>(_a[6])),(*reinterpret_cast< const qreal(*)>(_a[7])),(*reinterpret_cast< const qreal(*)>(_a[8])),(*reinterpret_cast< const qreal(*)>(_a[9])),(*reinterpret_cast< const qreal(*)>(_a[10])),(*reinterpret_cast< const qreal(*)>(_a[11])),(*reinterpret_cast< const qreal(*)>(_a[12])),(*reinterpret_cast< const qreal(*)>(_a[13])),(*reinterpret_cast< const qreal(*)>(_a[14])),(*reinterpret_cast< const qreal(*)>(_a[15])),(*reinterpret_cast< const qreal(*)>(_a[16])),(*reinterpret_cast< const qreal(*)>(_a[17])),(*reinterpret_cast< const qreal(*)>(_a[18])),(*reinterpret_cast< const qreal(*)>(_a[19])),(*reinterpret_cast< const qreal(*)>(_a[20])),(*reinterpret_cast< const qreal(*)>(_a[21])),(*reinterpret_cast< const qreal(*)>(_a[22]))); break;
        case 536: _t->setEXAnalogVal((*reinterpret_cast< const qreal(*)>(_a[1])),(*reinterpret_cast< const qreal(*)>(_a[2])),(*reinterpret_cast< const qreal(*)>(_a[3])),(*reinterpret_cast< const qreal(*)>(_a[4])),(*reinterpret_cast< const qreal(*)>(_a[5])),(*reinterpret_cast< const qreal(*)>(_a[6])),(*reinterpret_cast< const qreal(*)>(_a[7])),(*reinterpret_cast< const qreal(*)>(_a[8])),(*reinterpret_cast< const qreal(*)>(_a[9])),(*reinterpret_cast< const qreal(*)>(_a[10])),(*reinterpret_cast< const qreal(*)>(_a[11])),(*reinterpret_cast< const qreal(*)>(_a[12])),(*reinterpret_cast< const qreal(*)>(_a[13])),(*reinterpret_cast< const qreal(*)>(_a[14])),(*reinterpret_cast< const qreal(*)>(_a[15])),(*reinterpret_cast< const qreal(*)>(_a[16])),(*reinterpret_cast< const int(*)>(_a[17])),(*reinterpret_cast< const int(*)>(_a[18])),(*reinterpret_cast< const int(*)>(_a[19])),(*reinterpret_cast< const int(*)>(_a[20])),(*reinterpret_cast< const int(*)>(_a[21])),(*reinterpret_cast< const int(*)>(_a[22])),(*reinterpret_cast< const int(*)>(_a[23])),(*reinterpret_cast< const int(*)>(_a[24])),(*reinterpret_cast< const int(*)>(_a[25])),(*reinterpret_cast< const int(*)>(_a[26])),(*reinterpret_cast< const int(*)>(_a[27])),(*reinterpret_cast< const int(*)>(_a[28])),(*reinterpret_cast< const int(*)>(_a[29])),(*reinterpret_cast< const int(*)>(_a[30])),(*reinterpret_cast< const int(*)>(_a[31])),(*reinterpret_cast< const int(*)>(_a[32])),(*reinterpret_cast< const int(*)>(_a[33])),(*reinterpret_cast< const int(*)>(_a[34]))); break;
        case 537: _t->setSteinhartcalc((*reinterpret_cast< const qreal(*)>(_a[1])),(*reinterpret_cast< const qreal(*)>(_a[2])),(*reinterpret_cast< const qreal(*)>(_a[3])),(*reinterpret_cast< const qreal(*)>(_a[4])),(*reinterpret_cast< const qreal(*)>(_a[5])),(*reinterpret_cast< const qreal(*)>(_a[6])),(*reinterpret_cast< const qreal(*)>(_a[7])),(*reinterpret_cast< const qreal(*)>(_a[8])),(*reinterpret_cast< const qreal(*)>(_a[9])),(*reinterpret_cast< const qreal(*)>(_a[10])),(*reinterpret_cast< const qreal(*)>(_a[11])),(*reinterpret_cast< const qreal(*)>(_a[12])),(*reinterpret_cast< const qreal(*)>(_a[13])),(*reinterpret_cast< const qreal(*)>(_a[14])),(*reinterpret_cast< const qreal(*)>(_a[15])),(*reinterpret_cast< const qreal(*)>(_a[16])),(*reinterpret_cast< const qreal(*)>(_a[17])),(*reinterpret_cast< const qreal(*)>(_a[18])),(*reinterpret_cast< const qreal(*)>(_a[19])),(*reinterpret_cast< const qreal(*)>(_a[20])),(*reinterpret_cast< const qreal(*)>(_a[21])),(*reinterpret_cast< const qreal(*)>(_a[22])),(*reinterpret_cast< const qreal(*)>(_a[23])),(*reinterpret_cast< const qreal(*)>(_a[24])),(*reinterpret_cast< const qreal(*)>(_a[25])),(*reinterpret_cast< const qreal(*)>(_a[26])),(*reinterpret_cast< const qreal(*)>(_a[27])),(*reinterpret_cast< const qreal(*)>(_a[28])),(*reinterpret_cast< const qreal(*)>(_a[29])),(*reinterpret_cast< const qreal(*)>(_a[30])),(*reinterpret_cast< const qreal(*)>(_a[31])),(*reinterpret_cast< const qreal(*)>(_a[32])),(*reinterpret_cast< const qreal(*)>(_a[33])),(*reinterpret_cast< const qreal(*)>(_a[34])),(*reinterpret_cast< const qreal(*)>(_a[35])),(*reinterpret_cast< const qreal(*)>(_a[36]))); break;
        case 538: _t->setNMEAlog((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 539: _t->setecu((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 540: _t->setExternalSpeed((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 541: _t->setspeedpercent((*reinterpret_cast< const qreal(*)>(_a[1]))); break;
        case 542: _t->setpulsespermile((*reinterpret_cast< const qreal(*)>(_a[1]))); break;
        case 543: _t->setmaxRPM((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 544: _t->setrpmStage1((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 545: _t->setrpmStage2((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 546: _t->setrpmStage3((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 547: _t->setrpmStage4((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 548: _t->setwaterwarn((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 549: _t->setrpmwarn((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 550: _t->setknockwarn((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 551: _t->setboostwarn((*reinterpret_cast< const qreal(*)>(_a[1]))); break;
        case 552: _t->setsmoothrpm((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 553: _t->setsmoothspeed((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 554: _t->setsmootexAnalogInput7((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 555: _t->setgearcalc1((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 556: _t->setgearcalc2((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 557: _t->setgearcalc3((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 558: _t->setgearcalc4((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 559: _t->setgearcalc5((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 560: _t->setgearcalc6((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 561: _t->setgearcalcactivation((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 562: _t->setdraggable((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 563: _t->setLambdamultiply((*reinterpret_cast< const qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::odoChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::CylindersChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::tripChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::NMEAlogChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::rpmChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::intakepressChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::pressureVChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::throttleVChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::primaryinpChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::fuelcChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::leadingignChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::trailingignChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::fueltempChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::moilpChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::boosttpChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::boostwgChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::watertempChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::intaketempChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::knockChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::speedChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::batteryVChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::iscvdutyChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::o2voltChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Cyl1_O2_CorrChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Cyl2_O2_CorrChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Cyl3_O2_CorrChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Cyl4_O2_CorrChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Cyl5_O2_CorrChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Cyl6_O2_CorrChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Cyl7_O2_CorrChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Cyl8_O2_CorrChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::na1Changed)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::secinjpulseChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::na2Changed)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::injDutyChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::injDuty2Changed)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::InjAngleChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::engLoadChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::mAF1VChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::mAF2VChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::injmsChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::injChanged)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::ignChanged)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::dwellChanged)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::BoostPresChanged)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::BoostPreskpaChanged)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::boostDutyChanged)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::mAFactivityChanged)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::o2volt_2Changed)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::pimChanged)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::auxcalc1Changed)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::auxcalc2Changed)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::auxcalc3Changed)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::auxcalc4Changed)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::sens1Changed)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::sens2Changed)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::sens3Changed)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::sens4Changed)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::sens5Changed)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::sens6Changed)) {
                *result = 59;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::sens7Changed)) {
                *result = 60;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::sens8Changed)) {
                *result = 61;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flag1Changed)) {
                *result = 62;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flag2Changed)) {
                *result = 63;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flag3Changed)) {
                *result = 64;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flag4Changed)) {
                *result = 65;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flag5Changed)) {
                *result = 66;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flag6Changed)) {
                *result = 67;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flag7Changed)) {
                *result = 68;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flag8Changed)) {
                *result = 69;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flag9Changed)) {
                *result = 70;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flag10Changed)) {
                *result = 71;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flag11Changed)) {
                *result = 72;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flag12Changed)) {
                *result = 73;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flag13Changed)) {
                *result = 74;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flag14Changed)) {
                *result = 75;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flag15Changed)) {
                *result = 76;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flag16Changed)) {
                *result = 77;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flag17Changed)) {
                *result = 78;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flag18Changed)) {
                *result = 79;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flag19Changed)) {
                *result = 80;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flag20Changed)) {
                *result = 81;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flag21Changed)) {
                *result = 82;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flag22Changed)) {
                *result = 83;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flag23Changed)) {
                *result = 84;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flag24Changed)) {
                *result = 85;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flag25Changed)) {
                *result = 86;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flagString1Changed)) {
                *result = 87;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flagString2Changed)) {
                *result = 88;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flagString3Changed)) {
                *result = 89;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flagString4Changed)) {
                *result = 90;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flagString5Changed)) {
                *result = 91;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flagString6Changed)) {
                *result = 92;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flagString7Changed)) {
                *result = 93;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flagString8Changed)) {
                *result = 94;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flagString9Changed)) {
                *result = 95;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flagString10Changed)) {
                *result = 96;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flagString11Changed)) {
                *result = 97;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flagString12Changed)) {
                *result = 98;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flagString13Changed)) {
                *result = 99;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flagString14Changed)) {
                *result = 100;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flagString15Changed)) {
                *result = 101;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flagString16Changed)) {
                *result = 102;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::sensorString1Changed)) {
                *result = 103;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::sensorString2Changed)) {
                *result = 104;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::sensorString3Changed)) {
                *result = 105;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::sensorString4Changed)) {
                *result = 106;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::sensorString5Changed)) {
                *result = 107;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::sensorString6Changed)) {
                *result = 108;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::sensorString7Changed)) {
                *result = 109;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::sensorString8Changed)) {
                *result = 110;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::platformChanged)) {
                *result = 111;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::serialStatChanged)) {
                *result = 112;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::recvDataChanged)) {
                *result = 113;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::timeoutStatChanged)) {
                *result = 114;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::runStatChanged)) {
                *result = 115;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::WifiStatChanged)) {
                *result = 116;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EthernetStatChanged)) {
                *result = 117;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::CBXCountrysaveChanged)) {
                *result = 118;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::CBXTracksaveChanged)) {
                *result = 119;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::gpsTimeChanged)) {
                *result = 120;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::gpsAltitudeChanged)) {
                *result = 121;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::gpsLatitudeChanged)) {
                *result = 122;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::gpsLongitudeChanged)) {
                *result = 123;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::gpsSpeedChanged)) {
                *result = 124;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::gpsVisibleSatelitesChanged)) {
                *result = 125;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::gpsFIXtypeChanged)) {
                *result = 126;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::gpsbearingChanged)) {
                *result = 127;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::gpsHDOPChanged)) {
                *result = 128;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::unitsChanged)) {
                *result = 129;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::speedunitsChanged)) {
                *result = 130;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::pressureunitsChanged)) {
                *result = 131;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::mAPChanged)) {
                *result = 132;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::PANVACChanged)) {
                *result = 133;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::mAP2Changed)) {
                *result = 134;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::aUXTChanged)) {
                *result = 135;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::aFRChanged)) {
                *result = 136;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::AFRLEFTBANKTARGETChanged)) {
                *result = 137;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::AFRRIGHTBANKTARGETChanged)) {
                *result = 138;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::AFRLEFTBANKACTUALChanged)) {
                *result = 139;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::AFRRIGHTBANKACTUALChanged)) {
                *result = 140;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::BOOSTOFFSETChanged)) {
                *result = 141;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::REVLIM3STEPChanged)) {
                *result = 142;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::REVLIM2STEPChanged)) {
                *result = 143;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::REVLIMGIGHSIDEChanged)) {
                *result = 144;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::REVLIMBOURNOUTChanged)) {
                *result = 145;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::LEFTBANKO2CORRChanged)) {
                *result = 146;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RIGHTBANKO2CORRChanged)) {
                *result = 147;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::TRACTIONCTRLOFFSETChanged)) {
                *result = 148;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::DRIVESHAFTOFFSETChanged)) {
                *result = 149;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::TCCOMMANDChanged)) {
                *result = 150;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::FSLCOMMANDChanged)) {
                *result = 151;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::FSLINDEXChanged)) {
                *result = 152;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::AFRcyl1Changed)) {
                *result = 153;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::AFRcyl2Changed)) {
                *result = 154;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::AFRcyl3Changed)) {
                *result = 155;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::AFRcyl4Changed)) {
                *result = 156;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::AFRcyl5Changed)) {
                *result = 157;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::AFRcyl6Changed)) {
                *result = 158;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::AFRcyl7Changed)) {
                *result = 159;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::AFRcyl8Changed)) {
                *result = 160;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::tPSChanged)) {
                *result = 161;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::idleValueChanged)) {
                *result = 162;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::mVSSChanged)) {
                *result = 163;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::sVSSChanged)) {
                *result = 164;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::inj1Changed)) {
                *result = 165;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::inj2Changed)) {
                *result = 166;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::inj3Changed)) {
                *result = 167;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::inj4Changed)) {
                *result = 168;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::ign1Changed)) {
                *result = 169;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::ign2Changed)) {
                *result = 170;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::ign3Changed)) {
                *result = 171;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::ign4Changed)) {
                *result = 172;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::tRIMChanged)) {
                *result = 173;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::lAMBDAChanged)) {
                *result = 174;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::lAMBDATargetChanged)) {
                *result = 175;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::fuelPressChanged)) {
                *result = 176;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::GearOilPressChanged)) {
                *result = 177;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::accelxChanged)) {
                *result = 178;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::accelyChanged)) {
                *result = 179;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::accelzChanged)) {
                *result = 180;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::gyroxChanged)) {
                *result = 181;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::gyroyChanged)) {
                *result = 182;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::gyrozChanged)) {
                *result = 183;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::compassChanged)) {
                *result = 184;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::ambitempChanged)) {
                *result = 185;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::ambipressChanged)) {
                *result = 186;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::GearChanged)) {
                *result = 187;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::GearoffsetChanged)) {
                *result = 188;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::GearCalculationChanged)) {
                *result = 189;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::powerChanged)) {
                *result = 190;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::torqueChanged)) {
                *result = 191;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::accelTimerChanged)) {
                *result = 192;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::weightChanged)) {
                *result = 193;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::screenChanged)) {
                *result = 194;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::maindashsetupChanged)) {
                *result = 195;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::dashsetup3Changed)) {
                *result = 196;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::dashsetup2Changed)) {
                *result = 197;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::dashsetup1Changed)) {
                *result = 198;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::dashfilesChanged)) {
                *result = 199;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::backroundpicturesChanged)) {
                *result = 200;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::accelpedposChanged)) {
                *result = 201;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::airtempensor2Changed)) {
                *result = 202;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::antilaglauchswitchChanged)) {
                *result = 203;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::antilaglaunchonChanged)) {
                *result = 204;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::auxrevlimitswitchChanged)) {
                *result = 205;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::avfueleconomyChanged)) {
                *result = 206;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::battlightChanged)) {
                *result = 207;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::boostcontrolChanged)) {
                *result = 208;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::brakepressChanged)) {
                *result = 209;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::clutchswitchstateChanged)) {
                *result = 210;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::coolantpressChanged)) {
                *result = 211;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::decelcutChanged)) {
                *result = 212;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::diffoiltempChanged)) {
                *result = 213;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::distancetoemptyChanged)) {
                *result = 214;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::egt1Changed)) {
                *result = 215;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::egt2Changed)) {
                *result = 216;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::egt3Changed)) {
                *result = 217;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::egt4Changed)) {
                *result = 218;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::egt5Changed)) {
                *result = 219;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::egt6Changed)) {
                *result = 220;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::egt7Changed)) {
                *result = 221;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::egt8Changed)) {
                *result = 222;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::egt9Changed)) {
                *result = 223;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::egt10Changed)) {
                *result = 224;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::egt11Changed)) {
                *result = 225;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::egt12Changed)) {
                *result = 226;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::excamangle1Changed)) {
                *result = 227;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::excamangle2Changed)) {
                *result = 228;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::flatshiftstateChanged)) {
                *result = 229;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::fuelclevelChanged)) {
                *result = 230;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::fuelcompositionChanged)) {
                *result = 231;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::fuelconsrateChanged)) {
                *result = 232;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::fuelcutpercChanged)) {
                *result = 233;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::fuelflowChanged)) {
                *result = 234;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::fuelflowdiffChanged)) {
                *result = 235;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::fuelflowretChanged)) {
                *result = 236;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::fueltrimlongtbank1Changed)) {
                *result = 237;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::fueltrimlongtbank2Changed)) {
                *result = 238;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::fueltrimshorttbank1Changed)) {
                *result = 239;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::fueltrimshorttbank2Changed)) {
                *result = 240;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::gearswitchChanged)) {
                *result = 241;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::handbrakeChanged)) {
                *result = 242;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::highbeamChanged)) {
                *result = 243;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::lowBeamChanged)) {
                *result = 244;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::tractionControlChanged)) {
                *result = 245;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::homeccounterChanged)) {
                *result = 246;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::incamangle1Changed)) {
                *result = 247;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::incamangle2Changed)) {
                *result = 248;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::knocklevlogged1Changed)) {
                *result = 249;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::knocklevlogged2Changed)) {
                *result = 250;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::knockretardbank1Changed)) {
                *result = 251;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::knockretardbank2Changed)) {
                *result = 252;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::lambda2Changed)) {
                *result = 253;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::lambda3Changed)) {
                *result = 254;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::lambda4Changed)) {
                *result = 255;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::launchcontolfuelenrichChanged)) {
                *result = 256;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::launchctrolignretardChanged)) {
                *result = 257;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::leftindicatorChanged)) {
                *result = 258;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::limpmodeChanged)) {
                *result = 259;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::milChanged)) {
                *result = 260;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::missccountChanged)) {
                *result = 261;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::nosactiveChanged)) {
                *result = 262;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::nospressChanged)) {
                *result = 263;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::nosswitchChanged)) {
                *result = 264;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::oilpresChanged)) {
                *result = 265;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::oiltempChanged)) {
                *result = 266;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::rallyantilagswitchChanged)) {
                *result = 267;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::rightindicatorChanged)) {
                *result = 268;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::targetbstlelkpaChanged)) {
                *result = 269;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::timeddutyout1Changed)) {
                *result = 270;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::timeddutyout2Changed)) {
                *result = 271;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::timeddutyoutputactiveChanged)) {
                *result = 272;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::torqueredcutactiveChanged)) {
                *result = 273;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::torqueredlevelactiveChanged)) {
                *result = 274;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::transientthroactiveChanged)) {
                *result = 275;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::transoiltempChanged)) {
                *result = 276;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::triggerccounterChanged)) {
                *result = 277;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::triggersrsinceasthomeChanged)) {
                *result = 278;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::turborpmChanged)) {
                *result = 279;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::turborpm2Changed)) {
                *result = 280;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::wastegatepressChanged)) {
                *result = 281;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::wheeldiffChanged)) {
                *result = 282;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::wheelslipChanged)) {
                *result = 283;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::wheelspdftleftChanged)) {
                *result = 284;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::wheelspdftrightChanged)) {
                *result = 285;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::wheelspdrearleftChanged)) {
                *result = 286;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::wheelspdrearrightChanged)) {
                *result = 287;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::musicpathChanged)) {
                *result = 288;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::supportedRegChanged)) {
                *result = 289;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::speedpercentChanged)) {
                *result = 290;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::pulsespermileChanged)) {
                *result = 291;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::maxRPMChanged)) {
                *result = 292;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::rpmStage1Changed)) {
                *result = 293;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::rpmStage2Changed)) {
                *result = 294;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::rpmStage3Changed)) {
                *result = 295;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::rpmStage4Changed)) {
                *result = 296;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::waterwarnChanged)) {
                *result = 297;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::rpmwarnChanged)) {
                *result = 298;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::knockwarnChanged)) {
                *result = 299;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::boostwarnChanged)) {
                *result = 300;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::smoothrpmChanged)) {
                *result = 301;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::smoothspeedChanged)) {
                *result = 302;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::smootexAnalogInput7Changed)) {
                *result = 303;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::gearcalc1Changed)) {
                *result = 304;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::gearcalc2Changed)) {
                *result = 305;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::gearcalc3Changed)) {
                *result = 306;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::gearcalc4Changed)) {
                *result = 307;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::gearcalc5Changed)) {
                *result = 308;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::gearcalc6Changed)) {
                *result = 309;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::gearcalcactivationChanged)) {
                *result = 310;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::ecuChanged)) {
                *result = 311;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::rpmstyle1Changed)) {
                *result = 312;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::rpmstyle2Changed)) {
                *result = 313;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::rpmstyle3Changed)) {
                *result = 314;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RotaryTrimpot1Changed)) {
                *result = 315;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RotaryTrimpot2Changed)) {
                *result = 316;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RotaryTrimpot3Changed)) {
                *result = 317;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::CalibrationSelectChanged)) {
                *result = 318;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::ErrorChanged)) {
                *result = 319;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::autogearChanged)) {
                *result = 320;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::daemonlicenseChanged)) {
                *result = 321;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::ExternalSpeedChanged)) {
                *result = 322;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::externalspeedport)) {
                *result = 323;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::currentLapChanged)) {
                *result = 324;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::laptimeChanged)) {
                *result = 325;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::LastlaptimeChanged)) {
                *result = 326;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::bestlaptimeChanged)) {
                *result = 327;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::draggableChanged)) {
                *result = 328;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::wifiChanged)) {
                *result = 329;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::canChanged)) {
                *result = 330;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Analog0Changed)) {
                *result = 331;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Analog1Changed)) {
                *result = 332;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Analog2Changed)) {
                *result = 333;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Analog3Changed)) {
                *result = 334;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Analog4Changed)) {
                *result = 335;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Analog5Changed)) {
                *result = 336;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Analog6Changed)) {
                *result = 337;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Analog7Changed)) {
                *result = 338;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Analog8Changed)) {
                *result = 339;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Analog9Changed)) {
                *result = 340;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Analog10Changed)) {
                *result = 341;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::AnalogCalc0Changed)) {
                *result = 342;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::AnalogCalc1Changed)) {
                *result = 343;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::AnalogCalc2Changed)) {
                *result = 344;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::AnalogCalc3Changed)) {
                *result = 345;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::AnalogCalc4Changed)) {
                *result = 346;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::AnalogCalc5Changed)) {
                *result = 347;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::AnalogCalc6Changed)) {
                *result = 348;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::AnalogCalc7Changed)) {
                *result = 349;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::AnalogCalc8Changed)) {
                *result = 350;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::AnalogCalc9Changed)) {
                *result = 351;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::AnalogCalc10Changed)) {
                *result = 352;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EXAnalogCalc0Changed)) {
                *result = 353;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EXAnalogCalc1Changed)) {
                *result = 354;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EXAnalogCalc2Changed)) {
                *result = 355;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EXAnalogCalc3Changed)) {
                *result = 356;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EXAnalogCalc4Changed)) {
                *result = 357;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EXAnalogCalc5Changed)) {
                *result = 358;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EXAnalogCalc6Changed)) {
                *result = 359;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EXAnalogCalc7Changed)) {
                *result = 360;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::LambdamultiplyChanged)) {
                *result = 361;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Userchannel1Changed)) {
                *result = 362;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Userchannel2Changed)) {
                *result = 363;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Userchannel3Changed)) {
                *result = 364;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Userchannel4Changed)) {
                *result = 365;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Userchannel5Changed)) {
                *result = 366;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Userchannel6Changed)) {
                *result = 367;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Userchannel7Changed)) {
                *result = 368;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Userchannel8Changed)) {
                *result = 369;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Userchannel9Changed)) {
                *result = 370;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Userchannel10Changed)) {
                *result = 371;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Userchannel11Changed)) {
                *result = 372;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Userchannel12Changed)) {
                *result = 373;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::BitfieldEngineStatusChanged)) {
                *result = 374;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::FuelLevelChanged)) {
                *result = 375;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::SteeringWheelAngleChanged)) {
                *result = 376;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::BrightnessChanged)) {
                *result = 377;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::VisibledashesChanged)) {
                *result = 378;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::oilpressurelampChanged)) {
                *result = 379;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::overtempalarmChanged)) {
                *result = 380;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::alternatorfailChanged)) {
                *result = 381;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::AuxTemp1Changed)) {
                *result = 382;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::sixtyfoottimeChanged)) {
                *result = 383;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::sixtyfootspeedChanged)) {
                *result = 384;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::threehundredthirtyfoottimeChanged)) {
                *result = 385;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::threehundredthirtyfootspeedChanged)) {
                *result = 386;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::eightmiletimeChanged)) {
                *result = 387;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::eightmilespeedChanged)) {
                *result = 388;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::quartermiletimeChanged)) {
                *result = 389;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::quartermilespeedChanged)) {
                *result = 390;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::thousandfoottimeChanged)) {
                *result = 391;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::thousandfootspeedChanged)) {
                *result = 392;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::zerotohundredtChanged)) {
                *result = 393;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::hundredtotwohundredtimeChanged)) {
                *result = 394;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::twohundredtothreehundredtimeChanged)) {
                *result = 395;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::reactiontimeChanged)) {
                *result = 396;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::IGBTPhaseATempChanged)) {
                *result = 397;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::IGBTPhaseBTempChanged)) {
                *result = 398;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::IGBTPhaseCTempChanged)) {
                *result = 399;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::GateDriverTempChanged)) {
                *result = 400;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::ControlBoardTempChanged)) {
                *result = 401;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RtdTemp1Changed)) {
                *result = 402;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RtdTemp2Changed)) {
                *result = 403;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RtdTemp3Changed)) {
                *result = 404;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RtdTemp4Changed)) {
                *result = 405;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RtdTemp5Changed)) {
                *result = 406;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EMotorTemperatureChanged)) {
                *result = 407;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::TorqueShudderChanged)) {
                *result = 408;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::DigInput1FowardSwChanged)) {
                *result = 409;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::DigInput2ReverseSwChanged)) {
                *result = 410;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::DigInput3BrakeSwChanged)) {
                *result = 411;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::DigInput4RegenDisableSwChanged)) {
                *result = 412;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::DigInput5IgnSwChanged)) {
                *result = 413;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::DigInput6StartSwChanged)) {
                *result = 414;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::DigInput7BoolChanged)) {
                *result = 415;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::DigInput8BoolChanged)) {
                *result = 416;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EMotorAngleChanged)) {
                *result = 417;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EMotorSpeedChanged)) {
                *result = 418;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::ElectricalOutFreqChanged)) {
                *result = 419;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::DeltaResolverFilteredChanged)) {
                *result = 420;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::PhaseACurrentChanged)) {
                *result = 421;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::PhaseBCurrentChanged)) {
                *result = 422;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::PhaseCCurrentChanged)) {
                *result = 423;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::DCBusCurrentChanged)) {
                *result = 424;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::DCBusVoltageChanged)) {
                *result = 425;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::OutputVoltageChanged)) {
                *result = 426;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::VABvdVoltageChanged)) {
                *result = 427;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::VBCvqVoltageChanged)) {
                *result = 428;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::TirepresLFChanged)) {
                *result = 429;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::TirepresRFChanged)) {
                *result = 430;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::TirepresRRChanged)) {
                *result = 431;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::TirepresLRChanged)) {
                *result = 432;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::TiretempLFChanged)) {
                *result = 433;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::TiretempRFChanged)) {
                *result = 434;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::TiretempRRChanged)) {
                *result = 435;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::TiretempLRChanged)) {
                *result = 436;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::DigitalInput1Changed)) {
                *result = 437;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::DigitalInput2Changed)) {
                *result = 438;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::DigitalInput3Changed)) {
                *result = 439;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::DigitalInput4Changed)) {
                *result = 440;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::DigitalInput5Changed)) {
                *result = 441;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::DigitalInput6Changed)) {
                *result = 442;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::DigitalInput7Changed)) {
                *result = 443;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EXDigitalInput1Changed)) {
                *result = 444;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EXDigitalInput2Changed)) {
                *result = 445;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EXDigitalInput3Changed)) {
                *result = 446;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EXDigitalInput4Changed)) {
                *result = 447;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EXDigitalInput5Changed)) {
                *result = 448;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EXDigitalInput6Changed)) {
                *result = 449;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EXDigitalInput7Changed)) {
                *result = 450;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EXDigitalInput8Changed)) {
                *result = 451;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EXAnalogInput0Changed)) {
                *result = 452;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EXAnalogInput1Changed)) {
                *result = 453;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EXAnalogInput2Changed)) {
                *result = 454;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EXAnalogInput3Changed)) {
                *result = 455;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EXAnalogInput4Changed)) {
                *result = 456;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EXAnalogInput5Changed)) {
                *result = 457;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EXAnalogInput6Changed)) {
                *result = 458;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EXAnalogInput7Changed)) {
                *result = 459;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::igncutChanged)) {
                *result = 460;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::undrivenavgspeedChanged)) {
                *result = 461;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::drivenavgspeedChanged)) {
                *result = 462;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::dsettargetslipChanged)) {
                *result = 463;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::tractionctlpowerlimitChanged)) {
                *result = 464;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::knockallpeakChanged)) {
                *result = 465;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::knockcorrChanged)) {
                *result = 466;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::knocklastcylChanged)) {
                *result = 467;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::totalfueltrimChanged)) {
                *result = 468;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::totaligncompChanged)) {
                *result = 469;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::egthighestChanged)) {
                *result = 470;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::cputempecuChanged)) {
                *result = 471;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::errorcodecountChanged)) {
                *result = 472;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::lostsynccountChanged)) {
                *result = 473;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::egtdiffChanged)) {
                *result = 474;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::activeboosttableChanged)) {
                *result = 475;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::activetunetableChanged)) {
                *result = 476;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::genericoutput1Changed)) {
                *result = 477;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::frequencyDIEX1Changed)) {
                *result = 478;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::LF_Tyre_Temp_01Changed)) {
                *result = 479;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::LF_Tyre_Temp_02Changed)) {
                *result = 480;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::LF_Tyre_Temp_03Changed)) {
                *result = 481;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::LF_Tyre_Temp_04Changed)) {
                *result = 482;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::LF_Tyre_Temp_05Changed)) {
                *result = 483;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::LF_Tyre_Temp_06Changed)) {
                *result = 484;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::LF_Tyre_Temp_07Changed)) {
                *result = 485;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::LF_Tyre_Temp_08Changed)) {
                *result = 486;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RF_Tyre_Temp_01Changed)) {
                *result = 487;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RF_Tyre_Temp_02Changed)) {
                *result = 488;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RF_Tyre_Temp_03Changed)) {
                *result = 489;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RF_Tyre_Temp_04Changed)) {
                *result = 490;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RF_Tyre_Temp_05Changed)) {
                *result = 491;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RF_Tyre_Temp_06Changed)) {
                *result = 492;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RF_Tyre_Temp_07Changed)) {
                *result = 493;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RF_Tyre_Temp_08Changed)) {
                *result = 494;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::LR_Tyre_Temp_01Changed)) {
                *result = 495;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::LR_Tyre_Temp_02Changed)) {
                *result = 496;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::LR_Tyre_Temp_03Changed)) {
                *result = 497;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::LR_Tyre_Temp_04Changed)) {
                *result = 498;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::LR_Tyre_Temp_05Changed)) {
                *result = 499;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::LR_Tyre_Temp_06Changed)) {
                *result = 500;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::LR_Tyre_Temp_07Changed)) {
                *result = 501;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::LR_Tyre_Temp_08Changed)) {
                *result = 502;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RR_Tyre_Temp_01Changed)) {
                *result = 503;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RR_Tyre_Temp_02Changed)) {
                *result = 504;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RR_Tyre_Temp_03Changed)) {
                *result = 505;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RR_Tyre_Temp_04Changed)) {
                *result = 506;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RR_Tyre_Temp_05Changed)) {
                *result = 507;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RR_Tyre_Temp_06Changed)) {
                *result = 508;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RR_Tyre_Temp_07Changed)) {
                *result = 509;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RR_Tyre_Temp_08Changed)) {
                *result = 510;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::RPMFrequencyDividerDi1Changed)) {
                *result = 511;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::DI1RPMEnabledChanged)) {
                *result = 512;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::ExternalrpmChanged)) {
                *result = 513;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::languageChanged)) {
                *result = 514;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::externalspeedconnectionrequestChanged)) {
                *result = 515;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::externalspeedportChanged)) {
                *result = 516;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::pwseq1Changed)) {
                *result = 517;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::pwseq2Changed)) {
                *result = 518;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::pwseq3Changed)) {
                *result = 519;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::pwseq4Changed)) {
                *result = 520;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::nitrous1_dutyChanged)) {
                *result = 521;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::nitrous2_dutyChanged)) {
                *result = 522;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::nitrous_timer_outChanged)) {
                *result = 523;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::n2o_addfuelChanged)) {
                *result = 524;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::n2o_retardChanged)) {
                *result = 525;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EGOcor1Changed)) {
                *result = 526;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EGOcor2Changed)) {
                *result = 527;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EGOcor3Changed)) {
                *result = 528;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::EGOcor4Changed)) {
                *result = 529;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Knock_cyl1Changed)) {
                *result = 530;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Knock_cyl2Changed)) {
                *result = 531;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Knock_cyl3Changed)) {
                *result = 532;
                return;
            }
        }
        {
            using _t = void (DashBoard::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DashBoard::Knock_cyl4Changed)) {
                *result = 533;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DashBoard *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->Odo(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->Cylinders(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->Trip(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->NMEAlog(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->rpm(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->Intakepress(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->PressureV(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->ThrottleV(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = _t->Primaryinp(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = _t->Fuelc(); break;
        case 10: *reinterpret_cast< qreal*>(_v) = _t->Leadingign(); break;
        case 11: *reinterpret_cast< qreal*>(_v) = _t->Trailingign(); break;
        case 12: *reinterpret_cast< qreal*>(_v) = _t->Fueltemp(); break;
        case 13: *reinterpret_cast< qreal*>(_v) = _t->Moilp(); break;
        case 14: *reinterpret_cast< qreal*>(_v) = _t->Boosttp(); break;
        case 15: *reinterpret_cast< qreal*>(_v) = _t->Boostwg(); break;
        case 16: *reinterpret_cast< qreal*>(_v) = _t->Watertemp(); break;
        case 17: *reinterpret_cast< qreal*>(_v) = _t->Intaketemp(); break;
        case 18: *reinterpret_cast< qreal*>(_v) = _t->Knock(); break;
        case 19: *reinterpret_cast< qreal*>(_v) = _t->BatteryV(); break;
        case 20: *reinterpret_cast< qreal*>(_v) = _t->speed(); break;
        case 21: *reinterpret_cast< qreal*>(_v) = _t->Iscvduty(); break;
        case 22: *reinterpret_cast< qreal*>(_v) = _t->O2volt(); break;
        case 23: *reinterpret_cast< qreal*>(_v) = _t->Cyl1_O2_Corr(); break;
        case 24: *reinterpret_cast< qreal*>(_v) = _t->Cyl2_O2_Corr(); break;
        case 25: *reinterpret_cast< qreal*>(_v) = _t->Cyl3_O2_Corr(); break;
        case 26: *reinterpret_cast< qreal*>(_v) = _t->Cyl4_O2_Corr(); break;
        case 27: *reinterpret_cast< qreal*>(_v) = _t->Cyl5_O2_Corr(); break;
        case 28: *reinterpret_cast< qreal*>(_v) = _t->Cyl6_O2_Corr(); break;
        case 29: *reinterpret_cast< qreal*>(_v) = _t->Cyl7_O2_Corr(); break;
        case 30: *reinterpret_cast< qreal*>(_v) = _t->Cyl8_O2_Corr(); break;
        case 31: *reinterpret_cast< qreal*>(_v) = _t->na1(); break;
        case 32: *reinterpret_cast< qreal*>(_v) = _t->Secinjpulse(); break;
        case 33: *reinterpret_cast< qreal*>(_v) = _t->na2(); break;
        case 34: *reinterpret_cast< qreal*>(_v) = _t->InjDuty(); break;
        case 35: *reinterpret_cast< qreal*>(_v) = _t->InjDuty2(); break;
        case 36: *reinterpret_cast< qreal*>(_v) = _t->InjAngle(); break;
        case 37: *reinterpret_cast< qreal*>(_v) = _t->pim(); break;
        case 38: *reinterpret_cast< qreal*>(_v) = _t->EngLoad(); break;
        case 39: *reinterpret_cast< qreal*>(_v) = _t->MAF1V(); break;
        case 40: *reinterpret_cast< qreal*>(_v) = _t->MAF2V(); break;
        case 41: *reinterpret_cast< qreal*>(_v) = _t->injms(); break;
        case 42: *reinterpret_cast< qreal*>(_v) = _t->Inj(); break;
        case 43: *reinterpret_cast< qreal*>(_v) = _t->Ign(); break;
        case 44: *reinterpret_cast< qreal*>(_v) = _t->Dwell(); break;
        case 45: *reinterpret_cast< qreal*>(_v) = _t->BoostPres(); break;
        case 46: *reinterpret_cast< qreal*>(_v) = _t->BoostPreskpa(); break;
        case 47: *reinterpret_cast< qreal*>(_v) = _t->BoostDuty(); break;
        case 48: *reinterpret_cast< qreal*>(_v) = _t->MAFactivity(); break;
        case 49: *reinterpret_cast< qreal*>(_v) = _t->O2volt_2(); break;
        case 50: *reinterpret_cast< qreal*>(_v) = _t->sens1(); break;
        case 51: *reinterpret_cast< qreal*>(_v) = _t->sens2(); break;
        case 52: *reinterpret_cast< qreal*>(_v) = _t->sens3(); break;
        case 53: *reinterpret_cast< qreal*>(_v) = _t->sens4(); break;
        case 54: *reinterpret_cast< qreal*>(_v) = _t->sens5(); break;
        case 55: *reinterpret_cast< qreal*>(_v) = _t->sens6(); break;
        case 56: *reinterpret_cast< qreal*>(_v) = _t->sens7(); break;
        case 57: *reinterpret_cast< qreal*>(_v) = _t->sens8(); break;
        case 58: *reinterpret_cast< qreal*>(_v) = _t->auxcalc1(); break;
        case 59: *reinterpret_cast< qreal*>(_v) = _t->auxcalc2(); break;
        case 60: *reinterpret_cast< qreal*>(_v) = _t->auxcalc3(); break;
        case 61: *reinterpret_cast< qreal*>(_v) = _t->auxcalc4(); break;
        case 62: *reinterpret_cast< qreal*>(_v) = _t->Flag1(); break;
        case 63: *reinterpret_cast< qreal*>(_v) = _t->Flag2(); break;
        case 64: *reinterpret_cast< qreal*>(_v) = _t->Flag3(); break;
        case 65: *reinterpret_cast< qreal*>(_v) = _t->Flag4(); break;
        case 66: *reinterpret_cast< qreal*>(_v) = _t->Flag5(); break;
        case 67: *reinterpret_cast< qreal*>(_v) = _t->Flag6(); break;
        case 68: *reinterpret_cast< qreal*>(_v) = _t->Flag7(); break;
        case 69: *reinterpret_cast< qreal*>(_v) = _t->Flag8(); break;
        case 70: *reinterpret_cast< qreal*>(_v) = _t->Flag9(); break;
        case 71: *reinterpret_cast< qreal*>(_v) = _t->Flag10(); break;
        case 72: *reinterpret_cast< qreal*>(_v) = _t->Flag11(); break;
        case 73: *reinterpret_cast< qreal*>(_v) = _t->Flag12(); break;
        case 74: *reinterpret_cast< qreal*>(_v) = _t->Flag13(); break;
        case 75: *reinterpret_cast< qreal*>(_v) = _t->Flag14(); break;
        case 76: *reinterpret_cast< qreal*>(_v) = _t->Flag15(); break;
        case 77: *reinterpret_cast< qreal*>(_v) = _t->Flag16(); break;
        case 78: *reinterpret_cast< qreal*>(_v) = _t->Flag17(); break;
        case 79: *reinterpret_cast< qreal*>(_v) = _t->Flag18(); break;
        case 80: *reinterpret_cast< qreal*>(_v) = _t->Flag19(); break;
        case 81: *reinterpret_cast< qreal*>(_v) = _t->Flag20(); break;
        case 82: *reinterpret_cast< qreal*>(_v) = _t->Flag21(); break;
        case 83: *reinterpret_cast< qreal*>(_v) = _t->Flag22(); break;
        case 84: *reinterpret_cast< qreal*>(_v) = _t->Flag23(); break;
        case 85: *reinterpret_cast< qreal*>(_v) = _t->Flag24(); break;
        case 86: *reinterpret_cast< qreal*>(_v) = _t->Flag25(); break;
        case 87: *reinterpret_cast< QString*>(_v) = _t->FlagString1(); break;
        case 88: *reinterpret_cast< QString*>(_v) = _t->FlagString2(); break;
        case 89: *reinterpret_cast< QString*>(_v) = _t->FlagString3(); break;
        case 90: *reinterpret_cast< QString*>(_v) = _t->FlagString4(); break;
        case 91: *reinterpret_cast< QString*>(_v) = _t->FlagString5(); break;
        case 92: *reinterpret_cast< QString*>(_v) = _t->FlagString6(); break;
        case 93: *reinterpret_cast< QString*>(_v) = _t->FlagString7(); break;
        case 94: *reinterpret_cast< QString*>(_v) = _t->FlagString8(); break;
        case 95: *reinterpret_cast< QString*>(_v) = _t->FlagString9(); break;
        case 96: *reinterpret_cast< QString*>(_v) = _t->FlagString10(); break;
        case 97: *reinterpret_cast< QString*>(_v) = _t->FlagString11(); break;
        case 98: *reinterpret_cast< QString*>(_v) = _t->FlagString12(); break;
        case 99: *reinterpret_cast< QString*>(_v) = _t->FlagString13(); break;
        case 100: *reinterpret_cast< QString*>(_v) = _t->FlagString14(); break;
        case 101: *reinterpret_cast< QString*>(_v) = _t->FlagString15(); break;
        case 102: *reinterpret_cast< QString*>(_v) = _t->FlagString16(); break;
        case 103: *reinterpret_cast< QString*>(_v) = _t->SensorString1(); break;
        case 104: *reinterpret_cast< QString*>(_v) = _t->SensorString2(); break;
        case 105: *reinterpret_cast< QString*>(_v) = _t->SensorString3(); break;
        case 106: *reinterpret_cast< QString*>(_v) = _t->SensorString4(); break;
        case 107: *reinterpret_cast< QString*>(_v) = _t->SensorString5(); break;
        case 108: *reinterpret_cast< QString*>(_v) = _t->SensorString6(); break;
        case 109: *reinterpret_cast< QString*>(_v) = _t->SensorString7(); break;
        case 110: *reinterpret_cast< QString*>(_v) = _t->SensorString8(); break;
        case 111: *reinterpret_cast< QString*>(_v) = _t->Platform(); break;
        case 112: *reinterpret_cast< QString*>(_v) = _t->SerialStat(); break;
        case 113: *reinterpret_cast< QString*>(_v) = _t->RecvData(); break;
        case 114: *reinterpret_cast< QString*>(_v) = _t->TimeoutStat(); break;
        case 115: *reinterpret_cast< QString*>(_v) = _t->RunStat(); break;
        case 116: *reinterpret_cast< QString*>(_v) = _t->WifiStat(); break;
        case 117: *reinterpret_cast< QString*>(_v) = _t->EthernetStat(); break;
        case 118: *reinterpret_cast< QString*>(_v) = _t->CBXCountrysave(); break;
        case 119: *reinterpret_cast< QString*>(_v) = _t->CBXTracksave(); break;
        case 120: *reinterpret_cast< qreal*>(_v) = _t->MAP(); break;
        case 121: *reinterpret_cast< qreal*>(_v) = _t->PANVAC(); break;
        case 122: *reinterpret_cast< qreal*>(_v) = _t->MAP2(); break;
        case 123: *reinterpret_cast< qreal*>(_v) = _t->AUXT(); break;
        case 124: *reinterpret_cast< qreal*>(_v) = _t->AFR(); break;
        case 125: *reinterpret_cast< qreal*>(_v) = _t->AFRLEFTBANKTARGET(); break;
        case 126: *reinterpret_cast< qreal*>(_v) = _t->AFRRIGHTBANKTARGET(); break;
        case 127: *reinterpret_cast< qreal*>(_v) = _t->AFRLEFTBANKACTUAL(); break;
        case 128: *reinterpret_cast< qreal*>(_v) = _t->AFRRIGHTBANKACTUAL(); break;
        case 129: *reinterpret_cast< qreal*>(_v) = _t->BOOSTOFFSET(); break;
        case 130: *reinterpret_cast< qreal*>(_v) = _t->REVLIM3STEP(); break;
        case 131: *reinterpret_cast< qreal*>(_v) = _t->REVLIM2STEP(); break;
        case 132: *reinterpret_cast< qreal*>(_v) = _t->REVLIMGIGHSIDE(); break;
        case 133: *reinterpret_cast< qreal*>(_v) = _t->REVLIMBOURNOUT(); break;
        case 134: *reinterpret_cast< qreal*>(_v) = _t->LEFTBANKO2CORR(); break;
        case 135: *reinterpret_cast< qreal*>(_v) = _t->RIGHTBANKO2CORR(); break;
        case 136: *reinterpret_cast< qreal*>(_v) = _t->TRACTIONCTRLOFFSET(); break;
        case 137: *reinterpret_cast< qreal*>(_v) = _t->DRIVESHAFTOFFSET(); break;
        case 138: *reinterpret_cast< qreal*>(_v) = _t->TCCOMMAND(); break;
        case 139: *reinterpret_cast< qreal*>(_v) = _t->FSLCOMMAND(); break;
        case 140: *reinterpret_cast< qreal*>(_v) = _t->FSLINDEX(); break;
        case 141: *reinterpret_cast< qreal*>(_v) = _t->AFRcyl1(); break;
        case 142: *reinterpret_cast< qreal*>(_v) = _t->AFRcyl2(); break;
        case 143: *reinterpret_cast< qreal*>(_v) = _t->AFRcyl3(); break;
        case 144: *reinterpret_cast< qreal*>(_v) = _t->AFRcyl4(); break;
        case 145: *reinterpret_cast< qreal*>(_v) = _t->AFRcyl5(); break;
        case 146: *reinterpret_cast< qreal*>(_v) = _t->AFRcyl6(); break;
        case 147: *reinterpret_cast< qreal*>(_v) = _t->AFRcyl7(); break;
        case 148: *reinterpret_cast< qreal*>(_v) = _t->AFRcyl8(); break;
        case 149: *reinterpret_cast< qreal*>(_v) = _t->TPS(); break;
        case 150: *reinterpret_cast< qreal*>(_v) = _t->IdleValue(); break;
        case 151: *reinterpret_cast< qreal*>(_v) = _t->MVSS(); break;
        case 152: *reinterpret_cast< qreal*>(_v) = _t->SVSS(); break;
        case 153: *reinterpret_cast< qreal*>(_v) = _t->Inj1(); break;
        case 154: *reinterpret_cast< qreal*>(_v) = _t->Inj2(); break;
        case 155: *reinterpret_cast< qreal*>(_v) = _t->Inj3(); break;
        case 156: *reinterpret_cast< qreal*>(_v) = _t->Inj4(); break;
        case 157: *reinterpret_cast< qreal*>(_v) = _t->Ign1(); break;
        case 158: *reinterpret_cast< qreal*>(_v) = _t->Ign2(); break;
        case 159: *reinterpret_cast< qreal*>(_v) = _t->Ign3(); break;
        case 160: *reinterpret_cast< qreal*>(_v) = _t->Ign4(); break;
        case 161: *reinterpret_cast< qreal*>(_v) = _t->TRIM(); break;
        case 162: *reinterpret_cast< qreal*>(_v) = _t->LAMBDA(); break;
        case 163: *reinterpret_cast< qreal*>(_v) = _t->LAMBDATarget(); break;
        case 164: *reinterpret_cast< qreal*>(_v) = _t->FuelPress(); break;
        case 165: *reinterpret_cast< qreal*>(_v) = _t->GearOilPress(); break;
        case 166: *reinterpret_cast< QString*>(_v) = _t->gpsTime(); break;
        case 167: *reinterpret_cast< qreal*>(_v) = _t->gpsAltitude(); break;
        case 168: *reinterpret_cast< qreal*>(_v) = _t->gpsLatitude(); break;
        case 169: *reinterpret_cast< qreal*>(_v) = _t->gpsLongitude(); break;
        case 170: *reinterpret_cast< qreal*>(_v) = _t->gpsSpeed(); break;
        case 171: *reinterpret_cast< int*>(_v) = _t->gpsVisibleSatelites(); break;
        case 172: *reinterpret_cast< QString*>(_v) = _t->gpsFIXtype(); break;
        case 173: *reinterpret_cast< qreal*>(_v) = _t->gpsbearing(); break;
        case 174: *reinterpret_cast< qreal*>(_v) = _t->gpsHDOP(); break;
        case 175: *reinterpret_cast< QString*>(_v) = _t->units(); break;
        case 176: *reinterpret_cast< QString*>(_v) = _t->speedunits(); break;
        case 177: *reinterpret_cast< QString*>(_v) = _t->pressureunits(); break;
        case 178: *reinterpret_cast< qreal*>(_v) = _t->accelx(); break;
        case 179: *reinterpret_cast< qreal*>(_v) = _t->accely(); break;
        case 180: *reinterpret_cast< qreal*>(_v) = _t->accelz(); break;
        case 181: *reinterpret_cast< qreal*>(_v) = _t->gyrox(); break;
        case 182: *reinterpret_cast< qreal*>(_v) = _t->gyroy(); break;
        case 183: *reinterpret_cast< qreal*>(_v) = _t->gyroz(); break;
        case 184: *reinterpret_cast< qreal*>(_v) = _t->compass(); break;
        case 185: *reinterpret_cast< qreal*>(_v) = _t->ambitemp(); break;
        case 186: *reinterpret_cast< qreal*>(_v) = _t->ambipress(); break;
        case 187: *reinterpret_cast< qreal*>(_v) = _t->Gear(); break;
        case 188: *reinterpret_cast< qreal*>(_v) = _t->Gearoffset(); break;
        case 189: *reinterpret_cast< qreal*>(_v) = _t->GearCalculation(); break;
        case 190: *reinterpret_cast< qreal*>(_v) = _t->Power(); break;
        case 191: *reinterpret_cast< qreal*>(_v) = _t->Torque(); break;
        case 192: *reinterpret_cast< qreal*>(_v) = _t->AccelTimer(); break;
        case 193: *reinterpret_cast< qreal*>(_v) = _t->Weight(); break;
        case 194: *reinterpret_cast< bool*>(_v) = _t->screen(); break;
        case 195: *reinterpret_cast< QStringList*>(_v) = _t->maindashsetup(); break;
        case 196: *reinterpret_cast< QStringList*>(_v) = _t->dashsetup3(); break;
        case 197: *reinterpret_cast< QStringList*>(_v) = _t->dashsetup2(); break;
        case 198: *reinterpret_cast< QStringList*>(_v) = _t->dashsetup1(); break;
        case 199: *reinterpret_cast< QStringList*>(_v) = _t->dashfiles(); break;
        case 200: *reinterpret_cast< QStringList*>(_v) = _t->backroundpictures(); break;
        case 201: *reinterpret_cast< qreal*>(_v) = _t->accelpedpos(); break;
        case 202: *reinterpret_cast< qreal*>(_v) = _t->airtempensor2(); break;
        case 203: *reinterpret_cast< qreal*>(_v) = _t->antilaglauchswitch(); break;
        case 204: *reinterpret_cast< qreal*>(_v) = _t->antilaglaunchon(); break;
        case 205: *reinterpret_cast< qreal*>(_v) = _t->auxrevlimitswitch(); break;
        case 206: *reinterpret_cast< qreal*>(_v) = _t->avfueleconomy(); break;
        case 207: *reinterpret_cast< qreal*>(_v) = _t->battlight(); break;
        case 208: *reinterpret_cast< qreal*>(_v) = _t->boostcontrol(); break;
        case 209: *reinterpret_cast< qreal*>(_v) = _t->brakepress(); break;
        case 210: *reinterpret_cast< qreal*>(_v) = _t->clutchswitchstate(); break;
        case 211: *reinterpret_cast< qreal*>(_v) = _t->coolantpress(); break;
        case 212: *reinterpret_cast< qreal*>(_v) = _t->decelcut(); break;
        case 213: *reinterpret_cast< qreal*>(_v) = _t->diffoiltemp(); break;
        case 214: *reinterpret_cast< qreal*>(_v) = _t->distancetoempty(); break;
        case 215: *reinterpret_cast< qreal*>(_v) = _t->egt1(); break;
        case 216: *reinterpret_cast< qreal*>(_v) = _t->egt2(); break;
        case 217: *reinterpret_cast< qreal*>(_v) = _t->egt3(); break;
        case 218: *reinterpret_cast< qreal*>(_v) = _t->egt4(); break;
        case 219: *reinterpret_cast< qreal*>(_v) = _t->egt5(); break;
        case 220: *reinterpret_cast< qreal*>(_v) = _t->egt6(); break;
        case 221: *reinterpret_cast< qreal*>(_v) = _t->egt7(); break;
        case 222: *reinterpret_cast< qreal*>(_v) = _t->egt8(); break;
        case 223: *reinterpret_cast< qreal*>(_v) = _t->egt9(); break;
        case 224: *reinterpret_cast< qreal*>(_v) = _t->egt10(); break;
        case 225: *reinterpret_cast< qreal*>(_v) = _t->egt11(); break;
        case 226: *reinterpret_cast< qreal*>(_v) = _t->egt12(); break;
        case 227: *reinterpret_cast< qreal*>(_v) = _t->excamangle1(); break;
        case 228: *reinterpret_cast< qreal*>(_v) = _t->excamangle2(); break;
        case 229: *reinterpret_cast< qreal*>(_v) = _t->flatshiftstate(); break;
        case 230: *reinterpret_cast< qreal*>(_v) = _t->fuelclevel(); break;
        case 231: *reinterpret_cast< qreal*>(_v) = _t->fuelcomposition(); break;
        case 232: *reinterpret_cast< qreal*>(_v) = _t->fuelconsrate(); break;
        case 233: *reinterpret_cast< qreal*>(_v) = _t->fuelcutperc(); break;
        case 234: *reinterpret_cast< qreal*>(_v) = _t->fuelflow(); break;
        case 235: *reinterpret_cast< qreal*>(_v) = _t->fuelflowdiff(); break;
        case 236: *reinterpret_cast< qreal*>(_v) = _t->fuelflowret(); break;
        case 237: *reinterpret_cast< qreal*>(_v) = _t->fueltrimlongtbank1(); break;
        case 238: *reinterpret_cast< qreal*>(_v) = _t->fueltrimlongtbank2(); break;
        case 239: *reinterpret_cast< qreal*>(_v) = _t->fueltrimshorttbank1(); break;
        case 240: *reinterpret_cast< qreal*>(_v) = _t->fueltrimshorttbank2(); break;
        case 241: *reinterpret_cast< qreal*>(_v) = _t->gearswitch(); break;
        case 242: *reinterpret_cast< qreal*>(_v) = _t->handbrake(); break;
        case 243: *reinterpret_cast< qreal*>(_v) = _t->highbeam(); break;
        case 244: *reinterpret_cast< qreal*>(_v) = _t->lowBeam(); break;
        case 245: *reinterpret_cast< qreal*>(_v) = _t->tractionControl(); break;
        case 246: *reinterpret_cast< qreal*>(_v) = _t->homeccounter(); break;
        case 247: *reinterpret_cast< qreal*>(_v) = _t->incamangle1(); break;
        case 248: *reinterpret_cast< qreal*>(_v) = _t->incamangle2(); break;
        case 249: *reinterpret_cast< qreal*>(_v) = _t->knocklevlogged1(); break;
        case 250: *reinterpret_cast< qreal*>(_v) = _t->knocklevlogged2(); break;
        case 251: *reinterpret_cast< qreal*>(_v) = _t->knockretardbank1(); break;
        case 252: *reinterpret_cast< qreal*>(_v) = _t->knockretardbank2(); break;
        case 253: *reinterpret_cast< qreal*>(_v) = _t->lambda2(); break;
        case 254: *reinterpret_cast< qreal*>(_v) = _t->lambda3(); break;
        case 255: *reinterpret_cast< qreal*>(_v) = _t->lambda4(); break;
        case 256: *reinterpret_cast< qreal*>(_v) = _t->launchcontolfuelenrich(); break;
        case 257: *reinterpret_cast< qreal*>(_v) = _t->launchctrolignretard(); break;
        case 258: *reinterpret_cast< qreal*>(_v) = _t->leftindicator(); break;
        case 259: *reinterpret_cast< qreal*>(_v) = _t->limpmode(); break;
        case 260: *reinterpret_cast< qreal*>(_v) = _t->mil(); break;
        case 261: *reinterpret_cast< qreal*>(_v) = _t->missccount(); break;
        case 262: *reinterpret_cast< qreal*>(_v) = _t->nosactive(); break;
        case 263: *reinterpret_cast< qreal*>(_v) = _t->nospress(); break;
        case 264: *reinterpret_cast< qreal*>(_v) = _t->nosswitch(); break;
        case 265: *reinterpret_cast< qreal*>(_v) = _t->oilpres(); break;
        case 266: *reinterpret_cast< qreal*>(_v) = _t->oiltemp(); break;
        case 267: *reinterpret_cast< qreal*>(_v) = _t->rallyantilagswitch(); break;
        case 268: *reinterpret_cast< qreal*>(_v) = _t->rightindicator(); break;
        case 269: *reinterpret_cast< qreal*>(_v) = _t->targetbstlelkpa(); break;
        case 270: *reinterpret_cast< qreal*>(_v) = _t->timeddutyout1(); break;
        case 271: *reinterpret_cast< qreal*>(_v) = _t->timeddutyout2(); break;
        case 272: *reinterpret_cast< qreal*>(_v) = _t->timeddutyoutputactive(); break;
        case 273: *reinterpret_cast< qreal*>(_v) = _t->torqueredcutactive(); break;
        case 274: *reinterpret_cast< qreal*>(_v) = _t->torqueredlevelactive(); break;
        case 275: *reinterpret_cast< qreal*>(_v) = _t->transientthroactive(); break;
        case 276: *reinterpret_cast< qreal*>(_v) = _t->transoiltemp(); break;
        case 277: *reinterpret_cast< qreal*>(_v) = _t->triggerccounter(); break;
        case 278: *reinterpret_cast< qreal*>(_v) = _t->triggersrsinceasthome(); break;
        case 279: *reinterpret_cast< qreal*>(_v) = _t->turborpm(); break;
        case 280: *reinterpret_cast< qreal*>(_v) = _t->turborpm2(); break;
        case 281: *reinterpret_cast< qreal*>(_v) = _t->wastegatepress(); break;
        case 282: *reinterpret_cast< qreal*>(_v) = _t->wheeldiff(); break;
        case 283: *reinterpret_cast< qreal*>(_v) = _t->wheelslip(); break;
        case 284: *reinterpret_cast< qreal*>(_v) = _t->wheelspdftleft(); break;
        case 285: *reinterpret_cast< qreal*>(_v) = _t->wheelspdftright(); break;
        case 286: *reinterpret_cast< qreal*>(_v) = _t->wheelspdrearleft(); break;
        case 287: *reinterpret_cast< qreal*>(_v) = _t->wheelspdrearright(); break;
        case 288: *reinterpret_cast< QString*>(_v) = _t->musicpath(); break;
        case 289: *reinterpret_cast< int*>(_v) = _t->supportedReg(); break;
        case 290: *reinterpret_cast< qreal*>(_v) = _t->speedpercent(); break;
        case 291: *reinterpret_cast< qreal*>(_v) = _t->pulsespermile(); break;
        case 292: *reinterpret_cast< int*>(_v) = _t->maxRPM(); break;
        case 293: *reinterpret_cast< int*>(_v) = _t->rpmStage1(); break;
        case 294: *reinterpret_cast< int*>(_v) = _t->rpmStage2(); break;
        case 295: *reinterpret_cast< int*>(_v) = _t->rpmStage3(); break;
        case 296: *reinterpret_cast< int*>(_v) = _t->rpmStage4(); break;
        case 297: *reinterpret_cast< int*>(_v) = _t->waterwarn(); break;
        case 298: *reinterpret_cast< int*>(_v) = _t->rpmwarn(); break;
        case 299: *reinterpret_cast< int*>(_v) = _t->knockwarn(); break;
        case 300: *reinterpret_cast< qreal*>(_v) = _t->boostwarn(); break;
        case 301: *reinterpret_cast< int*>(_v) = _t->smoothrpm(); break;
        case 302: *reinterpret_cast< int*>(_v) = _t->smoothspeed(); break;
        case 303: *reinterpret_cast< int*>(_v) = _t->smootexAnalogInput7(); break;
        case 304: *reinterpret_cast< int*>(_v) = _t->gearcalc1(); break;
        case 305: *reinterpret_cast< int*>(_v) = _t->gearcalc2(); break;
        case 306: *reinterpret_cast< int*>(_v) = _t->gearcalc3(); break;
        case 307: *reinterpret_cast< int*>(_v) = _t->gearcalc4(); break;
        case 308: *reinterpret_cast< int*>(_v) = _t->gearcalc5(); break;
        case 309: *reinterpret_cast< int*>(_v) = _t->gearcalc6(); break;
        case 310: *reinterpret_cast< int*>(_v) = _t->gearcalcactivation(); break;
        case 311: *reinterpret_cast< int*>(_v) = _t->ecu(); break;
        case 312: *reinterpret_cast< int*>(_v) = _t->rpmstyle1(); break;
        case 313: *reinterpret_cast< int*>(_v) = _t->rpmstyle2(); break;
        case 314: *reinterpret_cast< int*>(_v) = _t->rpmstyle3(); break;
        case 315: *reinterpret_cast< int*>(_v) = _t->RotaryTrimpot1(); break;
        case 316: *reinterpret_cast< int*>(_v) = _t->RotaryTrimpot2(); break;
        case 317: *reinterpret_cast< int*>(_v) = _t->RotaryTrimpot3(); break;
        case 318: *reinterpret_cast< int*>(_v) = _t->CalibrationSelect(); break;
        case 319: *reinterpret_cast< QString*>(_v) = _t->Error(); break;
        case 320: *reinterpret_cast< QString*>(_v) = _t->autogear(); break;
        case 321: *reinterpret_cast< int*>(_v) = _t->ExternalSpeed(); break;
        case 322: *reinterpret_cast< QString*>(_v) = _t->daemonlicense(); break;
        case 323: *reinterpret_cast< QString*>(_v) = _t->laptime(); break;
        case 324: *reinterpret_cast< QString*>(_v) = _t->Lastlaptime(); break;
        case 325: *reinterpret_cast< QString*>(_v) = _t->bestlaptime(); break;
        case 326: *reinterpret_cast< int*>(_v) = _t->currentLap(); break;
        case 327: *reinterpret_cast< int*>(_v) = _t->draggable(); break;
        case 328: *reinterpret_cast< QStringList*>(_v) = _t->wifi(); break;
        case 329: *reinterpret_cast< QStringList*>(_v) = _t->can(); break;
        case 330: *reinterpret_cast< qreal*>(_v) = _t->Analog0(); break;
        case 331: *reinterpret_cast< qreal*>(_v) = _t->Analog1(); break;
        case 332: *reinterpret_cast< qreal*>(_v) = _t->Analog2(); break;
        case 333: *reinterpret_cast< qreal*>(_v) = _t->Analog3(); break;
        case 334: *reinterpret_cast< qreal*>(_v) = _t->Analog4(); break;
        case 335: *reinterpret_cast< qreal*>(_v) = _t->Analog5(); break;
        case 336: *reinterpret_cast< qreal*>(_v) = _t->Analog6(); break;
        case 337: *reinterpret_cast< qreal*>(_v) = _t->Analog7(); break;
        case 338: *reinterpret_cast< qreal*>(_v) = _t->Analog8(); break;
        case 339: *reinterpret_cast< qreal*>(_v) = _t->Analog9(); break;
        case 340: *reinterpret_cast< qreal*>(_v) = _t->Analog10(); break;
        case 341: *reinterpret_cast< qreal*>(_v) = _t->AnalogCalc0(); break;
        case 342: *reinterpret_cast< qreal*>(_v) = _t->AnalogCalc1(); break;
        case 343: *reinterpret_cast< qreal*>(_v) = _t->AnalogCalc2(); break;
        case 344: *reinterpret_cast< qreal*>(_v) = _t->AnalogCalc3(); break;
        case 345: *reinterpret_cast< qreal*>(_v) = _t->AnalogCalc4(); break;
        case 346: *reinterpret_cast< qreal*>(_v) = _t->AnalogCalc5(); break;
        case 347: *reinterpret_cast< qreal*>(_v) = _t->AnalogCalc6(); break;
        case 348: *reinterpret_cast< qreal*>(_v) = _t->AnalogCalc7(); break;
        case 349: *reinterpret_cast< qreal*>(_v) = _t->AnalogCalc8(); break;
        case 350: *reinterpret_cast< qreal*>(_v) = _t->AnalogCalc9(); break;
        case 351: *reinterpret_cast< qreal*>(_v) = _t->AnalogCalc10(); break;
        case 352: *reinterpret_cast< qreal*>(_v) = _t->EXAnalogCalc0(); break;
        case 353: *reinterpret_cast< qreal*>(_v) = _t->EXAnalogCalc1(); break;
        case 354: *reinterpret_cast< qreal*>(_v) = _t->EXAnalogCalc2(); break;
        case 355: *reinterpret_cast< qreal*>(_v) = _t->EXAnalogCalc3(); break;
        case 356: *reinterpret_cast< qreal*>(_v) = _t->EXAnalogCalc4(); break;
        case 357: *reinterpret_cast< qreal*>(_v) = _t->EXAnalogCalc5(); break;
        case 358: *reinterpret_cast< qreal*>(_v) = _t->EXAnalogCalc6(); break;
        case 359: *reinterpret_cast< qreal*>(_v) = _t->EXAnalogCalc7(); break;
        case 360: *reinterpret_cast< qreal*>(_v) = _t->Lambdamultiply(); break;
        case 361: *reinterpret_cast< qreal*>(_v) = _t->Userchannel1(); break;
        case 362: *reinterpret_cast< qreal*>(_v) = _t->Userchannel2(); break;
        case 363: *reinterpret_cast< qreal*>(_v) = _t->Userchannel3(); break;
        case 364: *reinterpret_cast< qreal*>(_v) = _t->Userchannel4(); break;
        case 365: *reinterpret_cast< qreal*>(_v) = _t->Userchannel5(); break;
        case 366: *reinterpret_cast< qreal*>(_v) = _t->Userchannel6(); break;
        case 367: *reinterpret_cast< qreal*>(_v) = _t->Userchannel7(); break;
        case 368: *reinterpret_cast< qreal*>(_v) = _t->Userchannel8(); break;
        case 369: *reinterpret_cast< qreal*>(_v) = _t->Userchannel9(); break;
        case 370: *reinterpret_cast< qreal*>(_v) = _t->Userchannel10(); break;
        case 371: *reinterpret_cast< qreal*>(_v) = _t->Userchannel11(); break;
        case 372: *reinterpret_cast< qreal*>(_v) = _t->Userchannel12(); break;
        case 373: *reinterpret_cast< qreal*>(_v) = _t->pwseq1(); break;
        case 374: *reinterpret_cast< qreal*>(_v) = _t->pwseq2(); break;
        case 375: *reinterpret_cast< qreal*>(_v) = _t->pwseq3(); break;
        case 376: *reinterpret_cast< qreal*>(_v) = _t->pwseq4(); break;
        case 377: *reinterpret_cast< qreal*>(_v) = _t->nitrous1_duty(); break;
        case 378: *reinterpret_cast< qreal*>(_v) = _t->nitrous2_duty(); break;
        case 379: *reinterpret_cast< qreal*>(_v) = _t->nitrous_timer_out(); break;
        case 380: *reinterpret_cast< qreal*>(_v) = _t->n2o_addfuel(); break;
        case 381: *reinterpret_cast< qreal*>(_v) = _t->n2o_retard(); break;
        case 382: *reinterpret_cast< qreal*>(_v) = _t->EGOcor1(); break;
        case 383: *reinterpret_cast< qreal*>(_v) = _t->EGOcor2(); break;
        case 384: *reinterpret_cast< qreal*>(_v) = _t->EGOcor3(); break;
        case 385: *reinterpret_cast< qreal*>(_v) = _t->EGOcor4(); break;
        case 386: *reinterpret_cast< qreal*>(_v) = _t->Knock_cyl1(); break;
        case 387: *reinterpret_cast< qreal*>(_v) = _t->Knock_cyl2(); break;
        case 388: *reinterpret_cast< qreal*>(_v) = _t->Knock_cyl3(); break;
        case 389: *reinterpret_cast< qreal*>(_v) = _t->Knock_cyl4(); break;
        case 390: *reinterpret_cast< qreal*>(_v) = _t->FuelLevel(); break;
        case 391: *reinterpret_cast< qreal*>(_v) = _t->SteeringWheelAngle(); break;
        case 392: *reinterpret_cast< int*>(_v) = _t->Brightness(); break;
        case 393: *reinterpret_cast< int*>(_v) = _t->Visibledashes(); break;
        case 394: *reinterpret_cast< int*>(_v) = _t->oilpressurelamp(); break;
        case 395: *reinterpret_cast< int*>(_v) = _t->overtempalarm(); break;
        case 396: *reinterpret_cast< int*>(_v) = _t->alternatorfail(); break;
        case 397: *reinterpret_cast< int*>(_v) = _t->AuxTemp1(); break;
        case 398: *reinterpret_cast< qreal*>(_v) = _t->SteeringWheelAngle(); break;
        case 399: *reinterpret_cast< qreal*>(_v) = _t->sixtyfoottime(); break;
        case 400: *reinterpret_cast< qreal*>(_v) = _t->sixtyfootspeed(); break;
        case 401: *reinterpret_cast< qreal*>(_v) = _t->threehundredthirtyfoottime(); break;
        case 402: *reinterpret_cast< qreal*>(_v) = _t->threehundredthirtyfootspeed(); break;
        case 403: *reinterpret_cast< qreal*>(_v) = _t->eightmiletime(); break;
        case 404: *reinterpret_cast< qreal*>(_v) = _t->eightmilespeed(); break;
        case 405: *reinterpret_cast< qreal*>(_v) = _t->quartermiletime(); break;
        case 406: *reinterpret_cast< qreal*>(_v) = _t->quartermilespeed(); break;
        case 407: *reinterpret_cast< qreal*>(_v) = _t->thousandfoottime(); break;
        case 408: *reinterpret_cast< qreal*>(_v) = _t->thousandfootspeed(); break;
        case 409: *reinterpret_cast< qreal*>(_v) = _t->zerotohundredt(); break;
        case 410: *reinterpret_cast< qreal*>(_v) = _t->hundredtotwohundredtime(); break;
        case 411: *reinterpret_cast< qreal*>(_v) = _t->twohundredtothreehundredtime(); break;
        case 412: *reinterpret_cast< qreal*>(_v) = _t->reactiontime(); break;
        case 413: *reinterpret_cast< qreal*>(_v) = _t->IGBTPhaseATemp(); break;
        case 414: *reinterpret_cast< qreal*>(_v) = _t->IGBTPhaseBTemp(); break;
        case 415: *reinterpret_cast< qreal*>(_v) = _t->IGBTPhaseCTemp(); break;
        case 416: *reinterpret_cast< qreal*>(_v) = _t->GateDriverTemp(); break;
        case 417: *reinterpret_cast< qreal*>(_v) = _t->ControlBoardTemp(); break;
        case 418: *reinterpret_cast< qreal*>(_v) = _t->RtdTemp1(); break;
        case 419: *reinterpret_cast< qreal*>(_v) = _t->RtdTemp2(); break;
        case 420: *reinterpret_cast< qreal*>(_v) = _t->RtdTemp3(); break;
        case 421: *reinterpret_cast< qreal*>(_v) = _t->RtdTemp4(); break;
        case 422: *reinterpret_cast< qreal*>(_v) = _t->RtdTemp5(); break;
        case 423: *reinterpret_cast< qreal*>(_v) = _t->EMotorTemperature(); break;
        case 424: *reinterpret_cast< qreal*>(_v) = _t->TorqueShudder(); break;
        case 425: *reinterpret_cast< qreal*>(_v) = _t->DigInput1FowardSw(); break;
        case 426: *reinterpret_cast< qreal*>(_v) = _t->DigInput2ReverseSw(); break;
        case 427: *reinterpret_cast< qreal*>(_v) = _t->DigInput3BrakeSw(); break;
        case 428: *reinterpret_cast< qreal*>(_v) = _t->DigInput4RegenDisableSw(); break;
        case 429: *reinterpret_cast< qreal*>(_v) = _t->DigInput5IgnSw(); break;
        case 430: *reinterpret_cast< qreal*>(_v) = _t->DigInput6StartSw(); break;
        case 431: *reinterpret_cast< qreal*>(_v) = _t->DigInput7Bool(); break;
        case 432: *reinterpret_cast< qreal*>(_v) = _t->DigInput8Bool(); break;
        case 433: *reinterpret_cast< qreal*>(_v) = _t->EMotorAngle(); break;
        case 434: *reinterpret_cast< qreal*>(_v) = _t->EMotorSpeed(); break;
        case 435: *reinterpret_cast< qreal*>(_v) = _t->ElectricalOutFreq(); break;
        case 436: *reinterpret_cast< qreal*>(_v) = _t->DeltaResolverFiltered(); break;
        case 437: *reinterpret_cast< qreal*>(_v) = _t->PhaseACurrent(); break;
        case 438: *reinterpret_cast< qreal*>(_v) = _t->PhaseBCurrent(); break;
        case 439: *reinterpret_cast< qreal*>(_v) = _t->PhaseCCurrent(); break;
        case 440: *reinterpret_cast< qreal*>(_v) = _t->DCBusCurrent(); break;
        case 441: *reinterpret_cast< qreal*>(_v) = _t->DCBusVoltage(); break;
        case 442: *reinterpret_cast< qreal*>(_v) = _t->OutputVoltage(); break;
        case 443: *reinterpret_cast< qreal*>(_v) = _t->VABvdVoltage(); break;
        case 444: *reinterpret_cast< qreal*>(_v) = _t->VBCvqVoltage(); break;
        case 445: *reinterpret_cast< qreal*>(_v) = _t->TirepresLF(); break;
        case 446: *reinterpret_cast< qreal*>(_v) = _t->TirepresRF(); break;
        case 447: *reinterpret_cast< qreal*>(_v) = _t->TirepresLR(); break;
        case 448: *reinterpret_cast< qreal*>(_v) = _t->TirepresRR(); break;
        case 449: *reinterpret_cast< qreal*>(_v) = _t->TiretempLF(); break;
        case 450: *reinterpret_cast< qreal*>(_v) = _t->TiretempRF(); break;
        case 451: *reinterpret_cast< qreal*>(_v) = _t->TiretempLR(); break;
        case 452: *reinterpret_cast< qreal*>(_v) = _t->TiretempRR(); break;
        case 453: *reinterpret_cast< qreal*>(_v) = _t->DigitalInput1(); break;
        case 454: *reinterpret_cast< qreal*>(_v) = _t->DigitalInput2(); break;
        case 455: *reinterpret_cast< qreal*>(_v) = _t->DigitalInput3(); break;
        case 456: *reinterpret_cast< qreal*>(_v) = _t->DigitalInput4(); break;
        case 457: *reinterpret_cast< qreal*>(_v) = _t->DigitalInput5(); break;
        case 458: *reinterpret_cast< qreal*>(_v) = _t->DigitalInput6(); break;
        case 459: *reinterpret_cast< qreal*>(_v) = _t->DigitalInput7(); break;
        case 460: *reinterpret_cast< qreal*>(_v) = _t->EXDigitalInput1(); break;
        case 461: *reinterpret_cast< qreal*>(_v) = _t->EXDigitalInput2(); break;
        case 462: *reinterpret_cast< qreal*>(_v) = _t->EXDigitalInput3(); break;
        case 463: *reinterpret_cast< qreal*>(_v) = _t->EXDigitalInput4(); break;
        case 464: *reinterpret_cast< qreal*>(_v) = _t->EXDigitalInput5(); break;
        case 465: *reinterpret_cast< qreal*>(_v) = _t->EXDigitalInput6(); break;
        case 466: *reinterpret_cast< qreal*>(_v) = _t->EXDigitalInput7(); break;
        case 467: *reinterpret_cast< qreal*>(_v) = _t->EXDigitalInput8(); break;
        case 468: *reinterpret_cast< qreal*>(_v) = _t->EXAnalogInput0(); break;
        case 469: *reinterpret_cast< qreal*>(_v) = _t->EXAnalogInput1(); break;
        case 470: *reinterpret_cast< qreal*>(_v) = _t->EXAnalogInput2(); break;
        case 471: *reinterpret_cast< qreal*>(_v) = _t->EXAnalogInput3(); break;
        case 472: *reinterpret_cast< qreal*>(_v) = _t->EXAnalogInput4(); break;
        case 473: *reinterpret_cast< qreal*>(_v) = _t->EXAnalogInput5(); break;
        case 474: *reinterpret_cast< qreal*>(_v) = _t->EXAnalogInput6(); break;
        case 475: *reinterpret_cast< qreal*>(_v) = _t->EXAnalogInput7(); break;
        case 476: *reinterpret_cast< qreal*>(_v) = _t->igncut(); break;
        case 477: *reinterpret_cast< qreal*>(_v) = _t->undrivenavgspeed(); break;
        case 478: *reinterpret_cast< qreal*>(_v) = _t->drivenavgspeed(); break;
        case 479: *reinterpret_cast< qreal*>(_v) = _t->dsettargetslip(); break;
        case 480: *reinterpret_cast< qreal*>(_v) = _t->tractionctlpowerlimit(); break;
        case 481: *reinterpret_cast< qreal*>(_v) = _t->knockallpeak(); break;
        case 482: *reinterpret_cast< qreal*>(_v) = _t->knockcorr(); break;
        case 483: *reinterpret_cast< qreal*>(_v) = _t->knocklastcyl(); break;
        case 484: *reinterpret_cast< qreal*>(_v) = _t->totalfueltrim(); break;
        case 485: *reinterpret_cast< qreal*>(_v) = _t->totaligncomp(); break;
        case 486: *reinterpret_cast< qreal*>(_v) = _t->egthighest(); break;
        case 487: *reinterpret_cast< qreal*>(_v) = _t->cputempecu(); break;
        case 488: *reinterpret_cast< qreal*>(_v) = _t->errorcodecount(); break;
        case 489: *reinterpret_cast< qreal*>(_v) = _t->lostsynccount(); break;
        case 490: *reinterpret_cast< qreal*>(_v) = _t->egtdiff(); break;
        case 491: *reinterpret_cast< qreal*>(_v) = _t->activeboosttable(); break;
        case 492: *reinterpret_cast< qreal*>(_v) = _t->activetunetable(); break;
        case 493: *reinterpret_cast< qreal*>(_v) = _t->genericoutput1(); break;
        case 494: *reinterpret_cast< qreal*>(_v) = _t->frequencyDIEX1(); break;
        case 495: *reinterpret_cast< qreal*>(_v) = _t->LF_Tyre_Temp_01(); break;
        case 496: *reinterpret_cast< qreal*>(_v) = _t->LF_Tyre_Temp_02(); break;
        case 497: *reinterpret_cast< qreal*>(_v) = _t->LF_Tyre_Temp_03(); break;
        case 498: *reinterpret_cast< qreal*>(_v) = _t->LF_Tyre_Temp_04(); break;
        case 499: *reinterpret_cast< qreal*>(_v) = _t->LF_Tyre_Temp_05(); break;
        case 500: *reinterpret_cast< qreal*>(_v) = _t->LF_Tyre_Temp_06(); break;
        case 501: *reinterpret_cast< qreal*>(_v) = _t->LF_Tyre_Temp_07(); break;
        case 502: *reinterpret_cast< qreal*>(_v) = _t->LF_Tyre_Temp_08(); break;
        case 503: *reinterpret_cast< qreal*>(_v) = _t->RF_Tyre_Temp_01(); break;
        case 504: *reinterpret_cast< qreal*>(_v) = _t->RF_Tyre_Temp_02(); break;
        case 505: *reinterpret_cast< qreal*>(_v) = _t->RF_Tyre_Temp_03(); break;
        case 506: *reinterpret_cast< qreal*>(_v) = _t->RF_Tyre_Temp_04(); break;
        case 507: *reinterpret_cast< qreal*>(_v) = _t->RF_Tyre_Temp_05(); break;
        case 508: *reinterpret_cast< qreal*>(_v) = _t->RF_Tyre_Temp_06(); break;
        case 509: *reinterpret_cast< qreal*>(_v) = _t->RF_Tyre_Temp_07(); break;
        case 510: *reinterpret_cast< qreal*>(_v) = _t->RF_Tyre_Temp_08(); break;
        case 511: *reinterpret_cast< qreal*>(_v) = _t->LR_Tyre_Temp_01(); break;
        case 512: *reinterpret_cast< qreal*>(_v) = _t->LR_Tyre_Temp_02(); break;
        case 513: *reinterpret_cast< qreal*>(_v) = _t->LR_Tyre_Temp_03(); break;
        case 514: *reinterpret_cast< qreal*>(_v) = _t->LR_Tyre_Temp_04(); break;
        case 515: *reinterpret_cast< qreal*>(_v) = _t->LR_Tyre_Temp_05(); break;
        case 516: *reinterpret_cast< qreal*>(_v) = _t->LR_Tyre_Temp_06(); break;
        case 517: *reinterpret_cast< qreal*>(_v) = _t->LR_Tyre_Temp_07(); break;
        case 518: *reinterpret_cast< qreal*>(_v) = _t->LR_Tyre_Temp_08(); break;
        case 519: *reinterpret_cast< qreal*>(_v) = _t->RR_Tyre_Temp_01(); break;
        case 520: *reinterpret_cast< qreal*>(_v) = _t->RR_Tyre_Temp_02(); break;
        case 521: *reinterpret_cast< qreal*>(_v) = _t->RR_Tyre_Temp_03(); break;
        case 522: *reinterpret_cast< qreal*>(_v) = _t->RR_Tyre_Temp_04(); break;
        case 523: *reinterpret_cast< qreal*>(_v) = _t->RR_Tyre_Temp_05(); break;
        case 524: *reinterpret_cast< qreal*>(_v) = _t->RR_Tyre_Temp_06(); break;
        case 525: *reinterpret_cast< qreal*>(_v) = _t->RR_Tyre_Temp_07(); break;
        case 526: *reinterpret_cast< qreal*>(_v) = _t->RR_Tyre_Temp_08(); break;
        case 527: *reinterpret_cast< qreal*>(_v) = _t->RPMFrequencyDividerDi1(); break;
        case 528: *reinterpret_cast< int*>(_v) = _t->DI1RPMEnabled(); break;
        case 529: *reinterpret_cast< int*>(_v) = _t->Externalrpm(); break;
        case 530: *reinterpret_cast< int*>(_v) = _t->language(); break;
        case 531: *reinterpret_cast< int*>(_v) = _t->externalspeedconnectionrequest(); break;
        case 532: *reinterpret_cast< QString*>(_v) = _t->externalspeedport(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DashBoard *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOdo(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setCylinders(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setTrip(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setNMEAlog(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setrpm(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setIntakepress(*reinterpret_cast< qreal*>(_v)); break;
        case 6: _t->setPressureV(*reinterpret_cast< qreal*>(_v)); break;
        case 7: _t->setThrottleV(*reinterpret_cast< qreal*>(_v)); break;
        case 8: _t->setPrimaryinp(*reinterpret_cast< qreal*>(_v)); break;
        case 9: _t->setFuelc(*reinterpret_cast< qreal*>(_v)); break;
        case 10: _t->setLeadingign(*reinterpret_cast< qreal*>(_v)); break;
        case 11: _t->setTrailingign(*reinterpret_cast< qreal*>(_v)); break;
        case 12: _t->setFueltemp(*reinterpret_cast< qreal*>(_v)); break;
        case 13: _t->setMoilp(*reinterpret_cast< qreal*>(_v)); break;
        case 14: _t->setBoosttp(*reinterpret_cast< qreal*>(_v)); break;
        case 15: _t->setBoostwg(*reinterpret_cast< qreal*>(_v)); break;
        case 16: _t->setWatertemp(*reinterpret_cast< qreal*>(_v)); break;
        case 17: _t->setIntaketemp(*reinterpret_cast< qreal*>(_v)); break;
        case 18: _t->setKnock(*reinterpret_cast< qreal*>(_v)); break;
        case 19: _t->setBatteryV(*reinterpret_cast< qreal*>(_v)); break;
        case 20: _t->setSpeed(*reinterpret_cast< qreal*>(_v)); break;
        case 21: _t->setIscvduty(*reinterpret_cast< qreal*>(_v)); break;
        case 22: _t->setO2volt(*reinterpret_cast< qreal*>(_v)); break;
        case 23: _t->setCyl1_O2_Corr(*reinterpret_cast< qreal*>(_v)); break;
        case 24: _t->setCyl2_O2_Corr(*reinterpret_cast< qreal*>(_v)); break;
        case 25: _t->setCyl3_O2_Corr(*reinterpret_cast< qreal*>(_v)); break;
        case 26: _t->setCyl4_O2_Corr(*reinterpret_cast< qreal*>(_v)); break;
        case 27: _t->setCyl5_O2_Corr(*reinterpret_cast< qreal*>(_v)); break;
        case 28: _t->setCyl6_O2_Corr(*reinterpret_cast< qreal*>(_v)); break;
        case 29: _t->setCyl7_O2_Corr(*reinterpret_cast< qreal*>(_v)); break;
        case 30: _t->setCyl8_O2_Corr(*reinterpret_cast< qreal*>(_v)); break;
        case 31: _t->setna1(*reinterpret_cast< qreal*>(_v)); break;
        case 32: _t->setSecinjpulse(*reinterpret_cast< qreal*>(_v)); break;
        case 33: _t->setna2(*reinterpret_cast< qreal*>(_v)); break;
        case 34: _t->setInjDuty(*reinterpret_cast< qreal*>(_v)); break;
        case 35: _t->setInjDuty2(*reinterpret_cast< qreal*>(_v)); break;
        case 36: _t->setInjAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 37: _t->setpim(*reinterpret_cast< qreal*>(_v)); break;
        case 38: _t->setEngLoad(*reinterpret_cast< qreal*>(_v)); break;
        case 39: _t->setMAF1V(*reinterpret_cast< qreal*>(_v)); break;
        case 40: _t->setMAF2V(*reinterpret_cast< qreal*>(_v)); break;
        case 41: _t->setinjms(*reinterpret_cast< qreal*>(_v)); break;
        case 42: _t->setInj(*reinterpret_cast< qreal*>(_v)); break;
        case 43: _t->setIgn(*reinterpret_cast< qreal*>(_v)); break;
        case 44: _t->setDwell(*reinterpret_cast< qreal*>(_v)); break;
        case 45: _t->setBoostPres(*reinterpret_cast< qreal*>(_v)); break;
        case 46: _t->setBoostPreskpa(*reinterpret_cast< qreal*>(_v)); break;
        case 47: _t->setBoostDuty(*reinterpret_cast< qreal*>(_v)); break;
        case 48: _t->setMAFactivity(*reinterpret_cast< qreal*>(_v)); break;
        case 49: _t->setO2volt_2(*reinterpret_cast< qreal*>(_v)); break;
        case 50: _t->setsens1(*reinterpret_cast< qreal*>(_v)); break;
        case 51: _t->setsens2(*reinterpret_cast< qreal*>(_v)); break;
        case 52: _t->setsens3(*reinterpret_cast< qreal*>(_v)); break;
        case 53: _t->setsens4(*reinterpret_cast< qreal*>(_v)); break;
        case 54: _t->setsens5(*reinterpret_cast< qreal*>(_v)); break;
        case 55: _t->setsens6(*reinterpret_cast< qreal*>(_v)); break;
        case 56: _t->setsens7(*reinterpret_cast< qreal*>(_v)); break;
        case 57: _t->setsens8(*reinterpret_cast< qreal*>(_v)); break;
        case 58: _t->setauxcalc1(*reinterpret_cast< qreal*>(_v)); break;
        case 59: _t->setauxcalc2(*reinterpret_cast< qreal*>(_v)); break;
        case 60: _t->setauxcalc3(*reinterpret_cast< qreal*>(_v)); break;
        case 61: _t->setauxcalc4(*reinterpret_cast< qreal*>(_v)); break;
        case 62: _t->setFlag1(*reinterpret_cast< qreal*>(_v)); break;
        case 63: _t->setFlag2(*reinterpret_cast< qreal*>(_v)); break;
        case 64: _t->setFlag3(*reinterpret_cast< qreal*>(_v)); break;
        case 65: _t->setFlag4(*reinterpret_cast< qreal*>(_v)); break;
        case 66: _t->setFlag5(*reinterpret_cast< qreal*>(_v)); break;
        case 67: _t->setFlag6(*reinterpret_cast< qreal*>(_v)); break;
        case 68: _t->setFlag7(*reinterpret_cast< qreal*>(_v)); break;
        case 69: _t->setFlag8(*reinterpret_cast< qreal*>(_v)); break;
        case 70: _t->setFlag9(*reinterpret_cast< qreal*>(_v)); break;
        case 71: _t->setFlag10(*reinterpret_cast< qreal*>(_v)); break;
        case 72: _t->setFlag11(*reinterpret_cast< qreal*>(_v)); break;
        case 73: _t->setFlag12(*reinterpret_cast< qreal*>(_v)); break;
        case 74: _t->setFlag13(*reinterpret_cast< qreal*>(_v)); break;
        case 75: _t->setFlag14(*reinterpret_cast< qreal*>(_v)); break;
        case 76: _t->setFlag15(*reinterpret_cast< qreal*>(_v)); break;
        case 77: _t->setFlag16(*reinterpret_cast< qreal*>(_v)); break;
        case 78: _t->setFlag17(*reinterpret_cast< qreal*>(_v)); break;
        case 79: _t->setFlag18(*reinterpret_cast< qreal*>(_v)); break;
        case 80: _t->setFlag19(*reinterpret_cast< qreal*>(_v)); break;
        case 81: _t->setFlag20(*reinterpret_cast< qreal*>(_v)); break;
        case 82: _t->setFlag21(*reinterpret_cast< qreal*>(_v)); break;
        case 83: _t->setFlag22(*reinterpret_cast< qreal*>(_v)); break;
        case 84: _t->setFlag23(*reinterpret_cast< qreal*>(_v)); break;
        case 85: _t->setFlag24(*reinterpret_cast< qreal*>(_v)); break;
        case 86: _t->setFlag25(*reinterpret_cast< qreal*>(_v)); break;
        case 87: _t->setFlagString1(*reinterpret_cast< QString*>(_v)); break;
        case 88: _t->setFlagString2(*reinterpret_cast< QString*>(_v)); break;
        case 89: _t->setFlagString3(*reinterpret_cast< QString*>(_v)); break;
        case 90: _t->setFlagString4(*reinterpret_cast< QString*>(_v)); break;
        case 91: _t->setFlagString5(*reinterpret_cast< QString*>(_v)); break;
        case 92: _t->setFlagString6(*reinterpret_cast< QString*>(_v)); break;
        case 93: _t->setFlagString7(*reinterpret_cast< QString*>(_v)); break;
        case 94: _t->setFlagString8(*reinterpret_cast< QString*>(_v)); break;
        case 95: _t->setFlagString9(*reinterpret_cast< QString*>(_v)); break;
        case 96: _t->setFlagString10(*reinterpret_cast< QString*>(_v)); break;
        case 97: _t->setFlagString11(*reinterpret_cast< QString*>(_v)); break;
        case 98: _t->setFlagString12(*reinterpret_cast< QString*>(_v)); break;
        case 99: _t->setFlagString13(*reinterpret_cast< QString*>(_v)); break;
        case 100: _t->setFlagString14(*reinterpret_cast< QString*>(_v)); break;
        case 101: _t->setFlagString15(*reinterpret_cast< QString*>(_v)); break;
        case 102: _t->setFlagString16(*reinterpret_cast< QString*>(_v)); break;
        case 103: _t->setSensorString1(*reinterpret_cast< QString*>(_v)); break;
        case 104: _t->setSensorString2(*reinterpret_cast< QString*>(_v)); break;
        case 105: _t->setSensorString3(*reinterpret_cast< QString*>(_v)); break;
        case 106: _t->setSensorString4(*reinterpret_cast< QString*>(_v)); break;
        case 107: _t->setSensorString5(*reinterpret_cast< QString*>(_v)); break;
        case 108: _t->setSensorString6(*reinterpret_cast< QString*>(_v)); break;
        case 109: _t->setSensorString7(*reinterpret_cast< QString*>(_v)); break;
        case 110: _t->setSensorString8(*reinterpret_cast< QString*>(_v)); break;
        case 111: _t->setPlatform(*reinterpret_cast< QString*>(_v)); break;
        case 112: _t->setSerialStat(*reinterpret_cast< QString*>(_v)); break;
        case 113: _t->setRecvData(*reinterpret_cast< QString*>(_v)); break;
        case 114: _t->setTimeoutStat(*reinterpret_cast< QString*>(_v)); break;
        case 115: _t->setRunStat(*reinterpret_cast< QString*>(_v)); break;
        case 116: _t->setWifiStat(*reinterpret_cast< QString*>(_v)); break;
        case 117: _t->setEthernetStat(*reinterpret_cast< QString*>(_v)); break;
        case 118: _t->setCBXCountrysave(*reinterpret_cast< QString*>(_v)); break;
        case 119: _t->setCBXTracksave(*reinterpret_cast< QString*>(_v)); break;
        case 120: _t->setMAP(*reinterpret_cast< qreal*>(_v)); break;
        case 121: _t->setPANVAC(*reinterpret_cast< qreal*>(_v)); break;
        case 122: _t->setMAP2(*reinterpret_cast< qreal*>(_v)); break;
        case 123: _t->setAUXT(*reinterpret_cast< qreal*>(_v)); break;
        case 124: _t->setAFR(*reinterpret_cast< qreal*>(_v)); break;
        case 125: _t->setAFRLEFTBANKTARGET(*reinterpret_cast< qreal*>(_v)); break;
        case 126: _t->setAFRRIGHTBANKTARGET(*reinterpret_cast< qreal*>(_v)); break;
        case 127: _t->setAFRLEFTBANKACTUAL(*reinterpret_cast< qreal*>(_v)); break;
        case 128: _t->setAFRRIGHTBANKACTUAL(*reinterpret_cast< qreal*>(_v)); break;
        case 129: _t->setBOOSTOFFSET(*reinterpret_cast< qreal*>(_v)); break;
        case 130: _t->setREVLIM3STEP(*reinterpret_cast< qreal*>(_v)); break;
        case 131: _t->setREVLIM2STEP(*reinterpret_cast< qreal*>(_v)); break;
        case 132: _t->setREVLIMGIGHSIDE(*reinterpret_cast< qreal*>(_v)); break;
        case 133: _t->setREVLIMBOURNOUT(*reinterpret_cast< qreal*>(_v)); break;
        case 134: _t->setLEFTBANKO2CORR(*reinterpret_cast< qreal*>(_v)); break;
        case 135: _t->setRIGHTBANKO2CORR(*reinterpret_cast< qreal*>(_v)); break;
        case 136: _t->setTRACTIONCTRLOFFSET(*reinterpret_cast< qreal*>(_v)); break;
        case 137: _t->setDRIVESHAFTOFFSET(*reinterpret_cast< qreal*>(_v)); break;
        case 138: _t->setTCCOMMAND(*reinterpret_cast< qreal*>(_v)); break;
        case 139: _t->setFSLCOMMAND(*reinterpret_cast< qreal*>(_v)); break;
        case 140: _t->setFSLINDEX(*reinterpret_cast< qreal*>(_v)); break;
        case 141: _t->setAFRcyl1(*reinterpret_cast< qreal*>(_v)); break;
        case 142: _t->setAFRcyl2(*reinterpret_cast< qreal*>(_v)); break;
        case 143: _t->setAFRcyl3(*reinterpret_cast< qreal*>(_v)); break;
        case 144: _t->setAFRcyl4(*reinterpret_cast< qreal*>(_v)); break;
        case 145: _t->setAFRcyl5(*reinterpret_cast< qreal*>(_v)); break;
        case 146: _t->setAFRcyl6(*reinterpret_cast< qreal*>(_v)); break;
        case 147: _t->setAFRcyl7(*reinterpret_cast< qreal*>(_v)); break;
        case 148: _t->setAFRcyl8(*reinterpret_cast< qreal*>(_v)); break;
        case 149: _t->setTPS(*reinterpret_cast< qreal*>(_v)); break;
        case 150: _t->setIdleValue(*reinterpret_cast< qreal*>(_v)); break;
        case 151: _t->setMVSS(*reinterpret_cast< qreal*>(_v)); break;
        case 152: _t->setSVSS(*reinterpret_cast< qreal*>(_v)); break;
        case 153: _t->setInj1(*reinterpret_cast< qreal*>(_v)); break;
        case 154: _t->setInj2(*reinterpret_cast< qreal*>(_v)); break;
        case 155: _t->setInj3(*reinterpret_cast< qreal*>(_v)); break;
        case 156: _t->setInj4(*reinterpret_cast< qreal*>(_v)); break;
        case 157: _t->setIgn1(*reinterpret_cast< qreal*>(_v)); break;
        case 158: _t->setIgn2(*reinterpret_cast< qreal*>(_v)); break;
        case 159: _t->setIgn3(*reinterpret_cast< qreal*>(_v)); break;
        case 160: _t->setIgn4(*reinterpret_cast< qreal*>(_v)); break;
        case 161: _t->setTRIM(*reinterpret_cast< qreal*>(_v)); break;
        case 162: _t->setLAMBDA(*reinterpret_cast< qreal*>(_v)); break;
        case 163: _t->setLAMBDATarget(*reinterpret_cast< qreal*>(_v)); break;
        case 164: _t->setFuelPress(*reinterpret_cast< qreal*>(_v)); break;
        case 165: _t->setGearOilPress(*reinterpret_cast< qreal*>(_v)); break;
        case 166: _t->setgpsTime(*reinterpret_cast< QString*>(_v)); break;
        case 167: _t->setgpsAltitude(*reinterpret_cast< qreal*>(_v)); break;
        case 168: _t->setgpsLatitude(*reinterpret_cast< qreal*>(_v)); break;
        case 169: _t->setgpsLongitude(*reinterpret_cast< qreal*>(_v)); break;
        case 170: _t->setgpsSpeed(*reinterpret_cast< qreal*>(_v)); break;
        case 171: _t->setgpsVisibleSatelites(*reinterpret_cast< int*>(_v)); break;
        case 172: _t->setgpsFIXtype(*reinterpret_cast< QString*>(_v)); break;
        case 173: _t->setgpsbearing(*reinterpret_cast< qreal*>(_v)); break;
        case 174: _t->setgpsHDOP(*reinterpret_cast< qreal*>(_v)); break;
        case 175: _t->setunits(*reinterpret_cast< QString*>(_v)); break;
        case 176: _t->setspeedunits(*reinterpret_cast< QString*>(_v)); break;
        case 177: _t->setpressureunits(*reinterpret_cast< QString*>(_v)); break;
        case 178: _t->setaccelx(*reinterpret_cast< qreal*>(_v)); break;
        case 179: _t->setaccely(*reinterpret_cast< qreal*>(_v)); break;
        case 180: _t->setaccelz(*reinterpret_cast< qreal*>(_v)); break;
        case 181: _t->setgyrox(*reinterpret_cast< qreal*>(_v)); break;
        case 182: _t->setgyroy(*reinterpret_cast< qreal*>(_v)); break;
        case 183: _t->setgyroz(*reinterpret_cast< qreal*>(_v)); break;
        case 184: _t->setcompass(*reinterpret_cast< qreal*>(_v)); break;
        case 185: _t->setambitemp(*reinterpret_cast< qreal*>(_v)); break;
        case 186: _t->setambipress(*reinterpret_cast< qreal*>(_v)); break;
        case 187: _t->setGear(*reinterpret_cast< qreal*>(_v)); break;
        case 188: _t->setGearoffset(*reinterpret_cast< qreal*>(_v)); break;
        case 189: _t->setGearCalculation(*reinterpret_cast< qreal*>(_v)); break;
        case 190: _t->setPower(*reinterpret_cast< qreal*>(_v)); break;
        case 191: _t->setTorque(*reinterpret_cast< qreal*>(_v)); break;
        case 192: _t->setAccelTimer(*reinterpret_cast< qreal*>(_v)); break;
        case 193: _t->setWeight(*reinterpret_cast< qreal*>(_v)); break;
        case 194: _t->setscreen(*reinterpret_cast< bool*>(_v)); break;
        case 195: _t->setmaindashsetup(*reinterpret_cast< QStringList*>(_v)); break;
        case 196: _t->setdashsetup3(*reinterpret_cast< QStringList*>(_v)); break;
        case 197: _t->setdashsetup3(*reinterpret_cast< QStringList*>(_v)); break;
        case 198: _t->setdashsetup1(*reinterpret_cast< QStringList*>(_v)); break;
        case 199: _t->setdashfiles(*reinterpret_cast< QStringList*>(_v)); break;
        case 200: _t->setbackroundpictures(*reinterpret_cast< QStringList*>(_v)); break;
        case 201: _t->setaccelpedpos(*reinterpret_cast< qreal*>(_v)); break;
        case 202: _t->setairtempensor2(*reinterpret_cast< qreal*>(_v)); break;
        case 203: _t->setantilaglauchswitch(*reinterpret_cast< qreal*>(_v)); break;
        case 204: _t->setantilaglaunchon(*reinterpret_cast< qreal*>(_v)); break;
        case 205: _t->setauxrevlimitswitch(*reinterpret_cast< qreal*>(_v)); break;
        case 206: _t->setavfueleconomy(*reinterpret_cast< qreal*>(_v)); break;
        case 207: _t->setbattlight(*reinterpret_cast< qreal*>(_v)); break;
        case 208: _t->setboostcontrol(*reinterpret_cast< qreal*>(_v)); break;
        case 209: _t->setbrakepress(*reinterpret_cast< qreal*>(_v)); break;
        case 210: _t->setclutchswitchstate(*reinterpret_cast< qreal*>(_v)); break;
        case 211: _t->setcoolantpress(*reinterpret_cast< qreal*>(_v)); break;
        case 212: _t->setdecelcut(*reinterpret_cast< qreal*>(_v)); break;
        case 213: _t->setdiffoiltemp(*reinterpret_cast< qreal*>(_v)); break;
        case 214: _t->setdistancetoempty(*reinterpret_cast< qreal*>(_v)); break;
        case 215: _t->setegt1(*reinterpret_cast< qreal*>(_v)); break;
        case 216: _t->setegt2(*reinterpret_cast< qreal*>(_v)); break;
        case 217: _t->setegt3(*reinterpret_cast< qreal*>(_v)); break;
        case 218: _t->setegt4(*reinterpret_cast< qreal*>(_v)); break;
        case 219: _t->setegt5(*reinterpret_cast< qreal*>(_v)); break;
        case 220: _t->setegt6(*reinterpret_cast< qreal*>(_v)); break;
        case 221: _t->setegt7(*reinterpret_cast< qreal*>(_v)); break;
        case 222: _t->setegt8(*reinterpret_cast< qreal*>(_v)); break;
        case 223: _t->setegt9(*reinterpret_cast< qreal*>(_v)); break;
        case 224: _t->setegt10(*reinterpret_cast< qreal*>(_v)); break;
        case 225: _t->setegt11(*reinterpret_cast< qreal*>(_v)); break;
        case 226: _t->setegt12(*reinterpret_cast< qreal*>(_v)); break;
        case 227: _t->setexcamangle1(*reinterpret_cast< qreal*>(_v)); break;
        case 228: _t->setexcamangle2(*reinterpret_cast< qreal*>(_v)); break;
        case 229: _t->setflatshiftstate(*reinterpret_cast< qreal*>(_v)); break;
        case 230: _t->setfuelclevel(*reinterpret_cast< qreal*>(_v)); break;
        case 231: _t->setfuelcomposition(*reinterpret_cast< qreal*>(_v)); break;
        case 232: _t->setfuelconsrate(*reinterpret_cast< qreal*>(_v)); break;
        case 233: _t->setfuelcutperc(*reinterpret_cast< qreal*>(_v)); break;
        case 234: _t->setfuelflow(*reinterpret_cast< qreal*>(_v)); break;
        case 235: _t->setfuelflowdiff(*reinterpret_cast< qreal*>(_v)); break;
        case 236: _t->setfuelflowret(*reinterpret_cast< qreal*>(_v)); break;
        case 237: _t->setfueltrimlongtbank1(*reinterpret_cast< qreal*>(_v)); break;
        case 238: _t->setfueltrimlongtbank2(*reinterpret_cast< qreal*>(_v)); break;
        case 239: _t->setfueltrimshorttbank1(*reinterpret_cast< qreal*>(_v)); break;
        case 240: _t->setfueltrimshorttbank2(*reinterpret_cast< qreal*>(_v)); break;
        case 241: _t->setgearswitch(*reinterpret_cast< qreal*>(_v)); break;
        case 242: _t->sethandbrake(*reinterpret_cast< qreal*>(_v)); break;
        case 243: _t->sethighbeam(*reinterpret_cast< qreal*>(_v)); break;
        case 244: _t->setlowBeam(*reinterpret_cast< qreal*>(_v)); break;
        case 245: _t->settractionControl(*reinterpret_cast< qreal*>(_v)); break;
        case 246: _t->sethomeccounter(*reinterpret_cast< qreal*>(_v)); break;
        case 247: _t->setincamangle1(*reinterpret_cast< qreal*>(_v)); break;
        case 248: _t->setincamangle2(*reinterpret_cast< qreal*>(_v)); break;
        case 249: _t->setknocklevlogged1(*reinterpret_cast< qreal*>(_v)); break;
        case 250: _t->setknocklevlogged2(*reinterpret_cast< qreal*>(_v)); break;
        case 251: _t->setknockretardbank1(*reinterpret_cast< qreal*>(_v)); break;
        case 252: _t->setknockretardbank2(*reinterpret_cast< qreal*>(_v)); break;
        case 253: _t->setlambda2(*reinterpret_cast< qreal*>(_v)); break;
        case 254: _t->setlambda3(*reinterpret_cast< qreal*>(_v)); break;
        case 255: _t->setlambda4(*reinterpret_cast< qreal*>(_v)); break;
        case 256: _t->setlaunchcontolfuelenrich(*reinterpret_cast< qreal*>(_v)); break;
        case 257: _t->setlaunchctrolignretard(*reinterpret_cast< qreal*>(_v)); break;
        case 258: _t->setleftindicator(*reinterpret_cast< qreal*>(_v)); break;
        case 259: _t->setlimpmode(*reinterpret_cast< qreal*>(_v)); break;
        case 260: _t->setmil(*reinterpret_cast< qreal*>(_v)); break;
        case 261: _t->setmissccount(*reinterpret_cast< qreal*>(_v)); break;
        case 262: _t->setnosactive(*reinterpret_cast< qreal*>(_v)); break;
        case 263: _t->setnospress(*reinterpret_cast< qreal*>(_v)); break;
        case 264: _t->setnosswitch(*reinterpret_cast< qreal*>(_v)); break;
        case 265: _t->setoilpres(*reinterpret_cast< qreal*>(_v)); break;
        case 266: _t->setoiltemp(*reinterpret_cast< qreal*>(_v)); break;
        case 267: _t->setrallyantilagswitch(*reinterpret_cast< qreal*>(_v)); break;
        case 268: _t->setrightindicator(*reinterpret_cast< qreal*>(_v)); break;
        case 269: _t->settargetbstlelkpa(*reinterpret_cast< qreal*>(_v)); break;
        case 270: _t->settimeddutyout1(*reinterpret_cast< qreal*>(_v)); break;
        case 271: _t->settimeddutyout2(*reinterpret_cast< qreal*>(_v)); break;
        case 272: _t->settimeddutyoutputactive(*reinterpret_cast< qreal*>(_v)); break;
        case 273: _t->settorqueredcutactive(*reinterpret_cast< qreal*>(_v)); break;
        case 274: _t->settorqueredlevelactive(*reinterpret_cast< qreal*>(_v)); break;
        case 275: _t->settransientthroactive(*reinterpret_cast< qreal*>(_v)); break;
        case 276: _t->settransoiltemp(*reinterpret_cast< qreal*>(_v)); break;
        case 277: _t->settriggerccounter(*reinterpret_cast< qreal*>(_v)); break;
        case 278: _t->settriggersrsinceasthome(*reinterpret_cast< qreal*>(_v)); break;
        case 279: _t->setturborpm(*reinterpret_cast< qreal*>(_v)); break;
        case 280: _t->setturborpm2(*reinterpret_cast< qreal*>(_v)); break;
        case 281: _t->setwastegatepress(*reinterpret_cast< qreal*>(_v)); break;
        case 282: _t->setwheeldiff(*reinterpret_cast< qreal*>(_v)); break;
        case 283: _t->setwheelslip(*reinterpret_cast< qreal*>(_v)); break;
        case 284: _t->setwheelspdftleft(*reinterpret_cast< qreal*>(_v)); break;
        case 285: _t->setwheelspdftright(*reinterpret_cast< qreal*>(_v)); break;
        case 286: _t->setwheelspdrearleft(*reinterpret_cast< qreal*>(_v)); break;
        case 287: _t->setwheelspdrearright(*reinterpret_cast< qreal*>(_v)); break;
        case 288: _t->setmusicpath(*reinterpret_cast< QString*>(_v)); break;
        case 289: _t->setsupportedReg(*reinterpret_cast< int*>(_v)); break;
        case 290: _t->setspeedpercent(*reinterpret_cast< qreal*>(_v)); break;
        case 291: _t->setpulsespermile(*reinterpret_cast< qreal*>(_v)); break;
        case 292: _t->setmaxRPM(*reinterpret_cast< int*>(_v)); break;
        case 293: _t->setrpmStage1(*reinterpret_cast< int*>(_v)); break;
        case 294: _t->setrpmStage2(*reinterpret_cast< int*>(_v)); break;
        case 295: _t->setrpmStage3(*reinterpret_cast< int*>(_v)); break;
        case 296: _t->setrpmStage4(*reinterpret_cast< int*>(_v)); break;
        case 297: _t->setwaterwarn(*reinterpret_cast< int*>(_v)); break;
        case 298: _t->setrpmwarn(*reinterpret_cast< int*>(_v)); break;
        case 299: _t->setknockwarn(*reinterpret_cast< int*>(_v)); break;
        case 300: _t->setboostwarn(*reinterpret_cast< qreal*>(_v)); break;
        case 301: _t->setsmoothrpm(*reinterpret_cast< int*>(_v)); break;
        case 302: _t->setsmoothspeed(*reinterpret_cast< int*>(_v)); break;
        case 303: _t->setsmootexAnalogInput7(*reinterpret_cast< int*>(_v)); break;
        case 304: _t->setgearcalc1(*reinterpret_cast< int*>(_v)); break;
        case 305: _t->setgearcalc2(*reinterpret_cast< int*>(_v)); break;
        case 306: _t->setgearcalc3(*reinterpret_cast< int*>(_v)); break;
        case 307: _t->setgearcalc4(*reinterpret_cast< int*>(_v)); break;
        case 308: _t->setgearcalc5(*reinterpret_cast< int*>(_v)); break;
        case 309: _t->setgearcalc6(*reinterpret_cast< int*>(_v)); break;
        case 310: _t->setgearcalcactivation(*reinterpret_cast< int*>(_v)); break;
        case 311: _t->setecu(*reinterpret_cast< int*>(_v)); break;
        case 312: _t->setrpmstyle1(*reinterpret_cast< int*>(_v)); break;
        case 313: _t->setrpmstyle2(*reinterpret_cast< int*>(_v)); break;
        case 314: _t->setrpmstyle3(*reinterpret_cast< int*>(_v)); break;
        case 315: _t->setRotaryTrimpot1(*reinterpret_cast< int*>(_v)); break;
        case 316: _t->setRotaryTrimpot2(*reinterpret_cast< int*>(_v)); break;
        case 317: _t->setRotaryTrimpot3(*reinterpret_cast< int*>(_v)); break;
        case 318: _t->setCalibrationSelect(*reinterpret_cast< int*>(_v)); break;
        case 319: _t->setError(*reinterpret_cast< QString*>(_v)); break;
        case 320: _t->setautogear(*reinterpret_cast< QString*>(_v)); break;
        case 321: _t->setExternalSpeed(*reinterpret_cast< int*>(_v)); break;
        case 322: _t->setdaemonlicense(*reinterpret_cast< QString*>(_v)); break;
        case 323: _t->setlaptime(*reinterpret_cast< QString*>(_v)); break;
        case 324: _t->setLastlaptime(*reinterpret_cast< QString*>(_v)); break;
        case 325: _t->setbestlaptime(*reinterpret_cast< QString*>(_v)); break;
        case 326: _t->setcurrentLap(*reinterpret_cast< int*>(_v)); break;
        case 327: _t->setdraggable(*reinterpret_cast< int*>(_v)); break;
        case 328: _t->setwifi(*reinterpret_cast< QStringList*>(_v)); break;
        case 329: _t->setcan(*reinterpret_cast< QStringList*>(_v)); break;
        case 330: _t->setAnalog0(*reinterpret_cast< qreal*>(_v)); break;
        case 331: _t->setAnalog1(*reinterpret_cast< qreal*>(_v)); break;
        case 332: _t->setAnalog2(*reinterpret_cast< qreal*>(_v)); break;
        case 333: _t->setAnalog3(*reinterpret_cast< qreal*>(_v)); break;
        case 334: _t->setAnalog4(*reinterpret_cast< qreal*>(_v)); break;
        case 335: _t->setAnalog5(*reinterpret_cast< qreal*>(_v)); break;
        case 336: _t->setAnalog6(*reinterpret_cast< qreal*>(_v)); break;
        case 337: _t->setAnalog7(*reinterpret_cast< qreal*>(_v)); break;
        case 338: _t->setAnalog8(*reinterpret_cast< qreal*>(_v)); break;
        case 339: _t->setAnalog9(*reinterpret_cast< qreal*>(_v)); break;
        case 340: _t->setAnalog10(*reinterpret_cast< qreal*>(_v)); break;
        case 341: _t->setAnalogCalc0(*reinterpret_cast< qreal*>(_v)); break;
        case 342: _t->setAnalogCalc1(*reinterpret_cast< qreal*>(_v)); break;
        case 343: _t->setAnalogCalc2(*reinterpret_cast< qreal*>(_v)); break;
        case 344: _t->setAnalogCalc3(*reinterpret_cast< qreal*>(_v)); break;
        case 345: _t->setAnalogCalc4(*reinterpret_cast< qreal*>(_v)); break;
        case 346: _t->setAnalogCalc5(*reinterpret_cast< qreal*>(_v)); break;
        case 347: _t->setAnalogCalc6(*reinterpret_cast< qreal*>(_v)); break;
        case 348: _t->setAnalogCalc7(*reinterpret_cast< qreal*>(_v)); break;
        case 349: _t->setAnalogCalc8(*reinterpret_cast< qreal*>(_v)); break;
        case 350: _t->setAnalogCalc9(*reinterpret_cast< qreal*>(_v)); break;
        case 351: _t->setAnalogCalc10(*reinterpret_cast< qreal*>(_v)); break;
        case 352: _t->setEXAnalogCalc0(*reinterpret_cast< qreal*>(_v)); break;
        case 353: _t->setEXAnalogCalc1(*reinterpret_cast< qreal*>(_v)); break;
        case 354: _t->setEXAnalogCalc2(*reinterpret_cast< qreal*>(_v)); break;
        case 355: _t->setEXAnalogCalc3(*reinterpret_cast< qreal*>(_v)); break;
        case 356: _t->setEXAnalogCalc4(*reinterpret_cast< qreal*>(_v)); break;
        case 357: _t->setEXAnalogCalc5(*reinterpret_cast< qreal*>(_v)); break;
        case 358: _t->setEXAnalogCalc6(*reinterpret_cast< qreal*>(_v)); break;
        case 359: _t->setEXAnalogCalc7(*reinterpret_cast< qreal*>(_v)); break;
        case 360: _t->setLambdamultiply(*reinterpret_cast< qreal*>(_v)); break;
        case 361: _t->setUserchannel1(*reinterpret_cast< qreal*>(_v)); break;
        case 362: _t->setUserchannel2(*reinterpret_cast< qreal*>(_v)); break;
        case 363: _t->setUserchannel3(*reinterpret_cast< qreal*>(_v)); break;
        case 364: _t->setUserchannel4(*reinterpret_cast< qreal*>(_v)); break;
        case 365: _t->setUserchannel5(*reinterpret_cast< qreal*>(_v)); break;
        case 366: _t->setUserchannel6(*reinterpret_cast< qreal*>(_v)); break;
        case 367: _t->setUserchannel7(*reinterpret_cast< qreal*>(_v)); break;
        case 368: _t->setUserchannel8(*reinterpret_cast< qreal*>(_v)); break;
        case 369: _t->setUserchannel9(*reinterpret_cast< qreal*>(_v)); break;
        case 370: _t->setUserchannel10(*reinterpret_cast< qreal*>(_v)); break;
        case 371: _t->setUserchannel11(*reinterpret_cast< qreal*>(_v)); break;
        case 372: _t->setUserchannel12(*reinterpret_cast< qreal*>(_v)); break;
        case 373: _t->setpwseq1(*reinterpret_cast< qreal*>(_v)); break;
        case 374: _t->setpwseq2(*reinterpret_cast< qreal*>(_v)); break;
        case 375: _t->setpwseq3(*reinterpret_cast< qreal*>(_v)); break;
        case 376: _t->setpwseq4(*reinterpret_cast< qreal*>(_v)); break;
        case 377: _t->setnitrous1_duty(*reinterpret_cast< qreal*>(_v)); break;
        case 378: _t->setnitrous2_duty(*reinterpret_cast< qreal*>(_v)); break;
        case 379: _t->setnitrous_timer_out(*reinterpret_cast< qreal*>(_v)); break;
        case 380: _t->setn2o_addfuel(*reinterpret_cast< qreal*>(_v)); break;
        case 381: _t->setn2o_retard(*reinterpret_cast< qreal*>(_v)); break;
        case 382: _t->setEGOcor1(*reinterpret_cast< qreal*>(_v)); break;
        case 383: _t->setEGOcor2(*reinterpret_cast< qreal*>(_v)); break;
        case 384: _t->setEGOcor3(*reinterpret_cast< qreal*>(_v)); break;
        case 385: _t->setEGOcor4(*reinterpret_cast< qreal*>(_v)); break;
        case 386: _t->setKnock_cyl1(*reinterpret_cast< qreal*>(_v)); break;
        case 387: _t->setKnock_cyl2(*reinterpret_cast< qreal*>(_v)); break;
        case 388: _t->setKnock_cyl3(*reinterpret_cast< qreal*>(_v)); break;
        case 389: _t->setKnock_cyl4(*reinterpret_cast< qreal*>(_v)); break;
        case 390: _t->setFuelLevel(*reinterpret_cast< qreal*>(_v)); break;
        case 391: _t->setSteeringWheelAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 392: _t->setBrightness(*reinterpret_cast< int*>(_v)); break;
        case 393: _t->setVisibledashes(*reinterpret_cast< int*>(_v)); break;
        case 394: _t->setoilpressurelamp(*reinterpret_cast< int*>(_v)); break;
        case 395: _t->setovertempalarm(*reinterpret_cast< int*>(_v)); break;
        case 396: _t->setalternatorfail(*reinterpret_cast< int*>(_v)); break;
        case 397: _t->setAuxTemp1(*reinterpret_cast< int*>(_v)); break;
        case 398: _t->setSteeringWheelAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 399: _t->setsixtyfoottime(*reinterpret_cast< qreal*>(_v)); break;
        case 400: _t->setsixtyfootspeed(*reinterpret_cast< qreal*>(_v)); break;
        case 401: _t->setthreehundredthirtyfoottime(*reinterpret_cast< qreal*>(_v)); break;
        case 402: _t->setthreehundredthirtyfootspeed(*reinterpret_cast< qreal*>(_v)); break;
        case 403: _t->seteightmiletime(*reinterpret_cast< qreal*>(_v)); break;
        case 404: _t->seteightmilespeed(*reinterpret_cast< qreal*>(_v)); break;
        case 405: _t->setquartermiletime(*reinterpret_cast< qreal*>(_v)); break;
        case 406: _t->setquartermilespeed(*reinterpret_cast< qreal*>(_v)); break;
        case 407: _t->setthousandfoottime(*reinterpret_cast< qreal*>(_v)); break;
        case 408: _t->setthousandfootspeed(*reinterpret_cast< qreal*>(_v)); break;
        case 409: _t->setzerotohundredt(*reinterpret_cast< qreal*>(_v)); break;
        case 410: _t->sethundredtotwohundredtime(*reinterpret_cast< qreal*>(_v)); break;
        case 411: _t->settwohundredtothreehundredtime(*reinterpret_cast< qreal*>(_v)); break;
        case 412: _t->setreactiontime(*reinterpret_cast< qreal*>(_v)); break;
        case 413: _t->setIGBTPhaseATemp(*reinterpret_cast< qreal*>(_v)); break;
        case 414: _t->setIGBTPhaseBTemp(*reinterpret_cast< qreal*>(_v)); break;
        case 415: _t->setIGBTPhaseCTemp(*reinterpret_cast< qreal*>(_v)); break;
        case 416: _t->setGateDriverTemp(*reinterpret_cast< qreal*>(_v)); break;
        case 417: _t->setControlBoardTemp(*reinterpret_cast< qreal*>(_v)); break;
        case 418: _t->setRtdTemp1(*reinterpret_cast< qreal*>(_v)); break;
        case 419: _t->setRtdTemp2(*reinterpret_cast< qreal*>(_v)); break;
        case 420: _t->setRtdTemp3(*reinterpret_cast< qreal*>(_v)); break;
        case 421: _t->setRtdTemp4(*reinterpret_cast< qreal*>(_v)); break;
        case 422: _t->setRtdTemp5(*reinterpret_cast< qreal*>(_v)); break;
        case 423: _t->setEMotorTemperature(*reinterpret_cast< qreal*>(_v)); break;
        case 424: _t->setTorqueShudder(*reinterpret_cast< qreal*>(_v)); break;
        case 425: _t->setDigInput1FowardSw(*reinterpret_cast< qreal*>(_v)); break;
        case 426: _t->setDigInput2ReverseSw(*reinterpret_cast< qreal*>(_v)); break;
        case 427: _t->setDigInput3BrakeSw(*reinterpret_cast< qreal*>(_v)); break;
        case 428: _t->setDigInput4RegenDisableSw(*reinterpret_cast< qreal*>(_v)); break;
        case 429: _t->setDigInput5IgnSw(*reinterpret_cast< qreal*>(_v)); break;
        case 430: _t->setDigInput6StartSw(*reinterpret_cast< qreal*>(_v)); break;
        case 431: _t->setDigInput7Bool(*reinterpret_cast< qreal*>(_v)); break;
        case 432: _t->setDigInput8Bool(*reinterpret_cast< qreal*>(_v)); break;
        case 433: _t->setEMotorAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 434: _t->setEMotorSpeed(*reinterpret_cast< qreal*>(_v)); break;
        case 435: _t->setElectricalOutFreq(*reinterpret_cast< qreal*>(_v)); break;
        case 436: _t->setDeltaResolverFiltered(*reinterpret_cast< qreal*>(_v)); break;
        case 437: _t->setPhaseACurrent(*reinterpret_cast< qreal*>(_v)); break;
        case 438: _t->setPhaseBCurrent(*reinterpret_cast< qreal*>(_v)); break;
        case 439: _t->setPhaseCCurrent(*reinterpret_cast< qreal*>(_v)); break;
        case 440: _t->setDCBusCurrent(*reinterpret_cast< qreal*>(_v)); break;
        case 441: _t->setDCBusVoltage(*reinterpret_cast< qreal*>(_v)); break;
        case 442: _t->setOutputVoltage(*reinterpret_cast< qreal*>(_v)); break;
        case 443: _t->setVABvdVoltage(*reinterpret_cast< qreal*>(_v)); break;
        case 444: _t->setVBCvqVoltage(*reinterpret_cast< qreal*>(_v)); break;
        case 445: _t->setTirepresLF(*reinterpret_cast< qreal*>(_v)); break;
        case 446: _t->setTirepresRF(*reinterpret_cast< qreal*>(_v)); break;
        case 447: _t->setTirepresLR(*reinterpret_cast< qreal*>(_v)); break;
        case 448: _t->setTirepresRR(*reinterpret_cast< qreal*>(_v)); break;
        case 449: _t->setTiretempLF(*reinterpret_cast< qreal*>(_v)); break;
        case 450: _t->setTiretempRF(*reinterpret_cast< qreal*>(_v)); break;
        case 451: _t->setTiretempLR(*reinterpret_cast< qreal*>(_v)); break;
        case 452: _t->setTiretempRR(*reinterpret_cast< qreal*>(_v)); break;
        case 453: _t->setDigitalInput1(*reinterpret_cast< qreal*>(_v)); break;
        case 454: _t->setDigitalInput2(*reinterpret_cast< qreal*>(_v)); break;
        case 455: _t->setDigitalInput3(*reinterpret_cast< qreal*>(_v)); break;
        case 456: _t->setDigitalInput4(*reinterpret_cast< qreal*>(_v)); break;
        case 457: _t->setDigitalInput5(*reinterpret_cast< qreal*>(_v)); break;
        case 458: _t->setDigitalInput6(*reinterpret_cast< qreal*>(_v)); break;
        case 459: _t->setDigitalInput7(*reinterpret_cast< qreal*>(_v)); break;
        case 460: _t->setEXDigitalInput1(*reinterpret_cast< qreal*>(_v)); break;
        case 461: _t->setEXDigitalInput2(*reinterpret_cast< qreal*>(_v)); break;
        case 462: _t->setEXDigitalInput3(*reinterpret_cast< qreal*>(_v)); break;
        case 463: _t->setEXDigitalInput4(*reinterpret_cast< qreal*>(_v)); break;
        case 464: _t->setEXDigitalInput5(*reinterpret_cast< qreal*>(_v)); break;
        case 465: _t->setEXDigitalInput6(*reinterpret_cast< qreal*>(_v)); break;
        case 466: _t->setEXDigitalInput7(*reinterpret_cast< qreal*>(_v)); break;
        case 467: _t->setEXDigitalInput8(*reinterpret_cast< qreal*>(_v)); break;
        case 468: _t->setEXAnalogInput0(*reinterpret_cast< qreal*>(_v)); break;
        case 469: _t->setEXAnalogInput1(*reinterpret_cast< qreal*>(_v)); break;
        case 470: _t->setEXAnalogInput2(*reinterpret_cast< qreal*>(_v)); break;
        case 471: _t->setEXAnalogInput3(*reinterpret_cast< qreal*>(_v)); break;
        case 472: _t->setEXAnalogInput4(*reinterpret_cast< qreal*>(_v)); break;
        case 473: _t->setEXAnalogInput5(*reinterpret_cast< qreal*>(_v)); break;
        case 474: _t->setEXAnalogInput6(*reinterpret_cast< qreal*>(_v)); break;
        case 475: _t->setEXAnalogInput7(*reinterpret_cast< qreal*>(_v)); break;
        case 476: _t->setigncut(*reinterpret_cast< qreal*>(_v)); break;
        case 477: _t->setundrivenavgspeed(*reinterpret_cast< qreal*>(_v)); break;
        case 478: _t->setdrivenavgspeed(*reinterpret_cast< qreal*>(_v)); break;
        case 479: _t->setdsettargetslip(*reinterpret_cast< qreal*>(_v)); break;
        case 480: _t->settractionctlpowerlimit(*reinterpret_cast< qreal*>(_v)); break;
        case 481: _t->setknockallpeak(*reinterpret_cast< qreal*>(_v)); break;
        case 482: _t->setknockcorr(*reinterpret_cast< qreal*>(_v)); break;
        case 483: _t->setknocklastcyl(*reinterpret_cast< qreal*>(_v)); break;
        case 484: _t->settotalfueltrim(*reinterpret_cast< qreal*>(_v)); break;
        case 485: _t->settotaligncomp(*reinterpret_cast< qreal*>(_v)); break;
        case 486: _t->setegthighest(*reinterpret_cast< qreal*>(_v)); break;
        case 487: _t->setcputempecu(*reinterpret_cast< qreal*>(_v)); break;
        case 488: _t->seterrorcodecount(*reinterpret_cast< qreal*>(_v)); break;
        case 489: _t->setlostsynccount(*reinterpret_cast< qreal*>(_v)); break;
        case 490: _t->setegtdiff(*reinterpret_cast< qreal*>(_v)); break;
        case 491: _t->setactiveboosttable(*reinterpret_cast< qreal*>(_v)); break;
        case 492: _t->setactivetunetable(*reinterpret_cast< qreal*>(_v)); break;
        case 493: _t->setgenericoutput1(*reinterpret_cast< qreal*>(_v)); break;
        case 494: _t->setfrequencyDIEX1(*reinterpret_cast< qreal*>(_v)); break;
        case 495: _t->setLF_Tyre_Temp_01(*reinterpret_cast< qreal*>(_v)); break;
        case 496: _t->setLF_Tyre_Temp_02(*reinterpret_cast< qreal*>(_v)); break;
        case 497: _t->setLF_Tyre_Temp_03(*reinterpret_cast< qreal*>(_v)); break;
        case 498: _t->setLF_Tyre_Temp_04(*reinterpret_cast< qreal*>(_v)); break;
        case 499: _t->setLF_Tyre_Temp_05(*reinterpret_cast< qreal*>(_v)); break;
        case 500: _t->setLF_Tyre_Temp_06(*reinterpret_cast< qreal*>(_v)); break;
        case 501: _t->setLF_Tyre_Temp_07(*reinterpret_cast< qreal*>(_v)); break;
        case 502: _t->setLF_Tyre_Temp_08(*reinterpret_cast< qreal*>(_v)); break;
        case 503: _t->setRF_Tyre_Temp_01(*reinterpret_cast< qreal*>(_v)); break;
        case 504: _t->setRF_Tyre_Temp_02(*reinterpret_cast< qreal*>(_v)); break;
        case 505: _t->setRF_Tyre_Temp_03(*reinterpret_cast< qreal*>(_v)); break;
        case 506: _t->setRF_Tyre_Temp_04(*reinterpret_cast< qreal*>(_v)); break;
        case 507: _t->setRF_Tyre_Temp_05(*reinterpret_cast< qreal*>(_v)); break;
        case 508: _t->setRF_Tyre_Temp_06(*reinterpret_cast< qreal*>(_v)); break;
        case 509: _t->setRF_Tyre_Temp_07(*reinterpret_cast< qreal*>(_v)); break;
        case 510: _t->setRF_Tyre_Temp_08(*reinterpret_cast< qreal*>(_v)); break;
        case 511: _t->setLR_Tyre_Temp_01(*reinterpret_cast< qreal*>(_v)); break;
        case 512: _t->setLR_Tyre_Temp_02(*reinterpret_cast< qreal*>(_v)); break;
        case 513: _t->setLR_Tyre_Temp_03(*reinterpret_cast< qreal*>(_v)); break;
        case 514: _t->setLR_Tyre_Temp_04(*reinterpret_cast< qreal*>(_v)); break;
        case 515: _t->setLR_Tyre_Temp_05(*reinterpret_cast< qreal*>(_v)); break;
        case 516: _t->setLR_Tyre_Temp_06(*reinterpret_cast< qreal*>(_v)); break;
        case 517: _t->setLR_Tyre_Temp_07(*reinterpret_cast< qreal*>(_v)); break;
        case 518: _t->setLR_Tyre_Temp_08(*reinterpret_cast< qreal*>(_v)); break;
        case 519: _t->setRR_Tyre_Temp_01(*reinterpret_cast< qreal*>(_v)); break;
        case 520: _t->setRR_Tyre_Temp_02(*reinterpret_cast< qreal*>(_v)); break;
        case 521: _t->setRR_Tyre_Temp_03(*reinterpret_cast< qreal*>(_v)); break;
        case 522: _t->setRR_Tyre_Temp_04(*reinterpret_cast< qreal*>(_v)); break;
        case 523: _t->setRR_Tyre_Temp_05(*reinterpret_cast< qreal*>(_v)); break;
        case 524: _t->setRR_Tyre_Temp_06(*reinterpret_cast< qreal*>(_v)); break;
        case 525: _t->setRR_Tyre_Temp_07(*reinterpret_cast< qreal*>(_v)); break;
        case 526: _t->setRR_Tyre_Temp_08(*reinterpret_cast< qreal*>(_v)); break;
        case 527: _t->setRPMFrequencyDividerDi1(*reinterpret_cast< qreal*>(_v)); break;
        case 528: _t->setDI1RPMEnabled(*reinterpret_cast< int*>(_v)); break;
        case 529: _t->setExternalrpm(*reinterpret_cast< int*>(_v)); break;
        case 530: _t->setlanguage(*reinterpret_cast< int*>(_v)); break;
        case 531: _t->setexternalspeedconnectionrequest(*reinterpret_cast< int*>(_v)); break;
        case 532: _t->setexternalspeedport(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject DashBoard::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DashBoard.data,
    qt_meta_data_DashBoard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DashBoard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DashBoard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DashBoard.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DashBoard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 564)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 564;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 564)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 564;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 533;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 533;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 533;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 533;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 533;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 533;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DashBoard::odoChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DashBoard::CylindersChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DashBoard::tripChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DashBoard::NMEAlogChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DashBoard::rpmChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DashBoard::intakepressChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DashBoard::pressureVChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DashBoard::throttleVChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DashBoard::primaryinpChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DashBoard::fuelcChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void DashBoard::leadingignChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void DashBoard::trailingignChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void DashBoard::fueltempChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void DashBoard::moilpChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void DashBoard::boosttpChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void DashBoard::boostwgChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void DashBoard::watertempChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void DashBoard::intaketempChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void DashBoard::knockChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void DashBoard::speedChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void DashBoard::batteryVChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void DashBoard::iscvdutyChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void DashBoard::o2voltChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void DashBoard::Cyl1_O2_CorrChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void DashBoard::Cyl2_O2_CorrChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void DashBoard::Cyl3_O2_CorrChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void DashBoard::Cyl4_O2_CorrChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void DashBoard::Cyl5_O2_CorrChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void DashBoard::Cyl6_O2_CorrChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void DashBoard::Cyl7_O2_CorrChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void DashBoard::Cyl8_O2_CorrChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void DashBoard::na1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void DashBoard::secinjpulseChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void DashBoard::na2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void DashBoard::injDutyChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void DashBoard::injDuty2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void DashBoard::InjAngleChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void DashBoard::engLoadChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void DashBoard::mAF1VChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void DashBoard::mAF2VChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void DashBoard::injmsChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void DashBoard::injChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void DashBoard::ignChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void DashBoard::dwellChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void DashBoard::BoostPresChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void DashBoard::BoostPreskpaChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void DashBoard::boostDutyChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void DashBoard::mAFactivityChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void DashBoard::o2volt_2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void DashBoard::pimChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void DashBoard::auxcalc1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void DashBoard::auxcalc2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void DashBoard::auxcalc3Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void DashBoard::auxcalc4Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void DashBoard::sens1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void DashBoard::sens2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void DashBoard::sens3Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void DashBoard::sens4Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void DashBoard::sens5Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void DashBoard::sens6Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void DashBoard::sens7Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void DashBoard::sens8Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void DashBoard::flag1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void DashBoard::flag2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void DashBoard::flag3Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void DashBoard::flag4Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void DashBoard::flag5Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void DashBoard::flag6Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void DashBoard::flag7Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void DashBoard::flag8Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void DashBoard::flag9Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void DashBoard::flag10Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void DashBoard::flag11Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void DashBoard::flag12Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void DashBoard::flag13Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void DashBoard::flag14Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 75, _a);
}

// SIGNAL 76
void DashBoard::flag15Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 76, _a);
}

// SIGNAL 77
void DashBoard::flag16Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 77, _a);
}

// SIGNAL 78
void DashBoard::flag17Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 78, _a);
}

// SIGNAL 79
void DashBoard::flag18Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 79, _a);
}

// SIGNAL 80
void DashBoard::flag19Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 80, _a);
}

// SIGNAL 81
void DashBoard::flag20Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 81, _a);
}

// SIGNAL 82
void DashBoard::flag21Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 82, _a);
}

// SIGNAL 83
void DashBoard::flag22Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 83, _a);
}

// SIGNAL 84
void DashBoard::flag23Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 84, _a);
}

// SIGNAL 85
void DashBoard::flag24Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 85, _a);
}

// SIGNAL 86
void DashBoard::flag25Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 86, _a);
}

// SIGNAL 87
void DashBoard::flagString1Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 87, _a);
}

// SIGNAL 88
void DashBoard::flagString2Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 88, _a);
}

// SIGNAL 89
void DashBoard::flagString3Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 89, _a);
}

// SIGNAL 90
void DashBoard::flagString4Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 90, _a);
}

// SIGNAL 91
void DashBoard::flagString5Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 91, _a);
}

// SIGNAL 92
void DashBoard::flagString6Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 92, _a);
}

// SIGNAL 93
void DashBoard::flagString7Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 93, _a);
}

// SIGNAL 94
void DashBoard::flagString8Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 94, _a);
}

// SIGNAL 95
void DashBoard::flagString9Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 95, _a);
}

// SIGNAL 96
void DashBoard::flagString10Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 96, _a);
}

// SIGNAL 97
void DashBoard::flagString11Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 97, _a);
}

// SIGNAL 98
void DashBoard::flagString12Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 98, _a);
}

// SIGNAL 99
void DashBoard::flagString13Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 99, _a);
}

// SIGNAL 100
void DashBoard::flagString14Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 100, _a);
}

// SIGNAL 101
void DashBoard::flagString15Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 101, _a);
}

// SIGNAL 102
void DashBoard::flagString16Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 102, _a);
}

// SIGNAL 103
void DashBoard::sensorString1Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 103, _a);
}

// SIGNAL 104
void DashBoard::sensorString2Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 104, _a);
}

// SIGNAL 105
void DashBoard::sensorString3Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 105, _a);
}

// SIGNAL 106
void DashBoard::sensorString4Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 106, _a);
}

// SIGNAL 107
void DashBoard::sensorString5Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 107, _a);
}

// SIGNAL 108
void DashBoard::sensorString6Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 108, _a);
}

// SIGNAL 109
void DashBoard::sensorString7Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 109, _a);
}

// SIGNAL 110
void DashBoard::sensorString8Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 110, _a);
}

// SIGNAL 111
void DashBoard::platformChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 111, _a);
}

// SIGNAL 112
void DashBoard::serialStatChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 112, _a);
}

// SIGNAL 113
void DashBoard::recvDataChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 113, _a);
}

// SIGNAL 114
void DashBoard::timeoutStatChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 114, _a);
}

// SIGNAL 115
void DashBoard::runStatChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 115, _a);
}

// SIGNAL 116
void DashBoard::WifiStatChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 116, _a);
}

// SIGNAL 117
void DashBoard::EthernetStatChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 117, _a);
}

// SIGNAL 118
void DashBoard::CBXCountrysaveChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 118, _a);
}

// SIGNAL 119
void DashBoard::CBXTracksaveChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 119, _a);
}

// SIGNAL 120
void DashBoard::gpsTimeChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 120, _a);
}

// SIGNAL 121
void DashBoard::gpsAltitudeChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 121, _a);
}

// SIGNAL 122
void DashBoard::gpsLatitudeChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 122, _a);
}

// SIGNAL 123
void DashBoard::gpsLongitudeChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 123, _a);
}

// SIGNAL 124
void DashBoard::gpsSpeedChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 124, _a);
}

// SIGNAL 125
void DashBoard::gpsVisibleSatelitesChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 125, _a);
}

// SIGNAL 126
void DashBoard::gpsFIXtypeChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 126, _a);
}

// SIGNAL 127
void DashBoard::gpsbearingChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 127, _a);
}

// SIGNAL 128
void DashBoard::gpsHDOPChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 128, _a);
}

// SIGNAL 129
void DashBoard::unitsChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 129, _a);
}

// SIGNAL 130
void DashBoard::speedunitsChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 130, _a);
}

// SIGNAL 131
void DashBoard::pressureunitsChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 131, _a);
}

// SIGNAL 132
void DashBoard::mAPChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 132, _a);
}

// SIGNAL 133
void DashBoard::PANVACChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 133, _a);
}

// SIGNAL 134
void DashBoard::mAP2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 134, _a);
}

// SIGNAL 135
void DashBoard::aUXTChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 135, _a);
}

// SIGNAL 136
void DashBoard::aFRChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 136, _a);
}

// SIGNAL 137
void DashBoard::AFRLEFTBANKTARGETChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 137, _a);
}

// SIGNAL 138
void DashBoard::AFRRIGHTBANKTARGETChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 138, _a);
}

// SIGNAL 139
void DashBoard::AFRLEFTBANKACTUALChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 139, _a);
}

// SIGNAL 140
void DashBoard::AFRRIGHTBANKACTUALChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 140, _a);
}

// SIGNAL 141
void DashBoard::BOOSTOFFSETChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 141, _a);
}

// SIGNAL 142
void DashBoard::REVLIM3STEPChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 142, _a);
}

// SIGNAL 143
void DashBoard::REVLIM2STEPChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 143, _a);
}

// SIGNAL 144
void DashBoard::REVLIMGIGHSIDEChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 144, _a);
}

// SIGNAL 145
void DashBoard::REVLIMBOURNOUTChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 145, _a);
}

// SIGNAL 146
void DashBoard::LEFTBANKO2CORRChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 146, _a);
}

// SIGNAL 147
void DashBoard::RIGHTBANKO2CORRChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 147, _a);
}

// SIGNAL 148
void DashBoard::TRACTIONCTRLOFFSETChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 148, _a);
}

// SIGNAL 149
void DashBoard::DRIVESHAFTOFFSETChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 149, _a);
}

// SIGNAL 150
void DashBoard::TCCOMMANDChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 150, _a);
}

// SIGNAL 151
void DashBoard::FSLCOMMANDChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 151, _a);
}

// SIGNAL 152
void DashBoard::FSLINDEXChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 152, _a);
}

// SIGNAL 153
void DashBoard::AFRcyl1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 153, _a);
}

// SIGNAL 154
void DashBoard::AFRcyl2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 154, _a);
}

// SIGNAL 155
void DashBoard::AFRcyl3Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 155, _a);
}

// SIGNAL 156
void DashBoard::AFRcyl4Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 156, _a);
}

// SIGNAL 157
void DashBoard::AFRcyl5Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 157, _a);
}

// SIGNAL 158
void DashBoard::AFRcyl6Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 158, _a);
}

// SIGNAL 159
void DashBoard::AFRcyl7Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 159, _a);
}

// SIGNAL 160
void DashBoard::AFRcyl8Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 160, _a);
}

// SIGNAL 161
void DashBoard::tPSChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 161, _a);
}

// SIGNAL 162
void DashBoard::idleValueChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 162, _a);
}

// SIGNAL 163
void DashBoard::mVSSChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 163, _a);
}

// SIGNAL 164
void DashBoard::sVSSChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 164, _a);
}

// SIGNAL 165
void DashBoard::inj1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 165, _a);
}

// SIGNAL 166
void DashBoard::inj2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 166, _a);
}

// SIGNAL 167
void DashBoard::inj3Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 167, _a);
}

// SIGNAL 168
void DashBoard::inj4Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 168, _a);
}

// SIGNAL 169
void DashBoard::ign1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 169, _a);
}

// SIGNAL 170
void DashBoard::ign2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 170, _a);
}

// SIGNAL 171
void DashBoard::ign3Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 171, _a);
}

// SIGNAL 172
void DashBoard::ign4Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 172, _a);
}

// SIGNAL 173
void DashBoard::tRIMChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 173, _a);
}

// SIGNAL 174
void DashBoard::lAMBDAChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 174, _a);
}

// SIGNAL 175
void DashBoard::lAMBDATargetChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 175, _a);
}

// SIGNAL 176
void DashBoard::fuelPressChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 176, _a);
}

// SIGNAL 177
void DashBoard::GearOilPressChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 177, _a);
}

// SIGNAL 178
void DashBoard::accelxChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 178, _a);
}

// SIGNAL 179
void DashBoard::accelyChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 179, _a);
}

// SIGNAL 180
void DashBoard::accelzChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 180, _a);
}

// SIGNAL 181
void DashBoard::gyroxChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 181, _a);
}

// SIGNAL 182
void DashBoard::gyroyChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 182, _a);
}

// SIGNAL 183
void DashBoard::gyrozChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 183, _a);
}

// SIGNAL 184
void DashBoard::compassChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 184, _a);
}

// SIGNAL 185
void DashBoard::ambitempChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 185, _a);
}

// SIGNAL 186
void DashBoard::ambipressChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 186, _a);
}

// SIGNAL 187
void DashBoard::GearChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 187, _a);
}

// SIGNAL 188
void DashBoard::GearoffsetChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 188, _a);
}

// SIGNAL 189
void DashBoard::GearCalculationChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 189, _a);
}

// SIGNAL 190
void DashBoard::powerChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 190, _a);
}

// SIGNAL 191
void DashBoard::torqueChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 191, _a);
}

// SIGNAL 192
void DashBoard::accelTimerChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 192, _a);
}

// SIGNAL 193
void DashBoard::weightChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 193, _a);
}

// SIGNAL 194
void DashBoard::screenChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 194, _a);
}

// SIGNAL 195
void DashBoard::maindashsetupChanged(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 195, _a);
}

// SIGNAL 196
void DashBoard::dashsetup3Changed(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 196, _a);
}

// SIGNAL 197
void DashBoard::dashsetup2Changed(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 197, _a);
}

// SIGNAL 198
void DashBoard::dashsetup1Changed(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 198, _a);
}

// SIGNAL 199
void DashBoard::dashfilesChanged(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 199, _a);
}

// SIGNAL 200
void DashBoard::backroundpicturesChanged(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 200, _a);
}

// SIGNAL 201
void DashBoard::accelpedposChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 201, _a);
}

// SIGNAL 202
void DashBoard::airtempensor2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 202, _a);
}

// SIGNAL 203
void DashBoard::antilaglauchswitchChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 203, _a);
}

// SIGNAL 204
void DashBoard::antilaglaunchonChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 204, _a);
}

// SIGNAL 205
void DashBoard::auxrevlimitswitchChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 205, _a);
}

// SIGNAL 206
void DashBoard::avfueleconomyChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 206, _a);
}

// SIGNAL 207
void DashBoard::battlightChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 207, _a);
}

// SIGNAL 208
void DashBoard::boostcontrolChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 208, _a);
}

// SIGNAL 209
void DashBoard::brakepressChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 209, _a);
}

// SIGNAL 210
void DashBoard::clutchswitchstateChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 210, _a);
}

// SIGNAL 211
void DashBoard::coolantpressChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 211, _a);
}

// SIGNAL 212
void DashBoard::decelcutChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 212, _a);
}

// SIGNAL 213
void DashBoard::diffoiltempChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 213, _a);
}

// SIGNAL 214
void DashBoard::distancetoemptyChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 214, _a);
}

// SIGNAL 215
void DashBoard::egt1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 215, _a);
}

// SIGNAL 216
void DashBoard::egt2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 216, _a);
}

// SIGNAL 217
void DashBoard::egt3Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 217, _a);
}

// SIGNAL 218
void DashBoard::egt4Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 218, _a);
}

// SIGNAL 219
void DashBoard::egt5Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 219, _a);
}

// SIGNAL 220
void DashBoard::egt6Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 220, _a);
}

// SIGNAL 221
void DashBoard::egt7Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 221, _a);
}

// SIGNAL 222
void DashBoard::egt8Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 222, _a);
}

// SIGNAL 223
void DashBoard::egt9Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 223, _a);
}

// SIGNAL 224
void DashBoard::egt10Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 224, _a);
}

// SIGNAL 225
void DashBoard::egt11Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 225, _a);
}

// SIGNAL 226
void DashBoard::egt12Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 226, _a);
}

// SIGNAL 227
void DashBoard::excamangle1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 227, _a);
}

// SIGNAL 228
void DashBoard::excamangle2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 228, _a);
}

// SIGNAL 229
void DashBoard::flatshiftstateChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 229, _a);
}

// SIGNAL 230
void DashBoard::fuelclevelChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 230, _a);
}

// SIGNAL 231
void DashBoard::fuelcompositionChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 231, _a);
}

// SIGNAL 232
void DashBoard::fuelconsrateChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 232, _a);
}

// SIGNAL 233
void DashBoard::fuelcutpercChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 233, _a);
}

// SIGNAL 234
void DashBoard::fuelflowChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 234, _a);
}

// SIGNAL 235
void DashBoard::fuelflowdiffChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 235, _a);
}

// SIGNAL 236
void DashBoard::fuelflowretChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 236, _a);
}

// SIGNAL 237
void DashBoard::fueltrimlongtbank1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 237, _a);
}

// SIGNAL 238
void DashBoard::fueltrimlongtbank2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 238, _a);
}

// SIGNAL 239
void DashBoard::fueltrimshorttbank1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 239, _a);
}

// SIGNAL 240
void DashBoard::fueltrimshorttbank2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 240, _a);
}

// SIGNAL 241
void DashBoard::gearswitchChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 241, _a);
}

// SIGNAL 242
void DashBoard::handbrakeChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 242, _a);
}

// SIGNAL 243
void DashBoard::highbeamChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 243, _a);
}

// SIGNAL 244
void DashBoard::lowBeamChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 244, _a);
}

// SIGNAL 245
void DashBoard::tractionControlChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 245, _a);
}

// SIGNAL 246
void DashBoard::homeccounterChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 246, _a);
}

// SIGNAL 247
void DashBoard::incamangle1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 247, _a);
}

// SIGNAL 248
void DashBoard::incamangle2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 248, _a);
}

// SIGNAL 249
void DashBoard::knocklevlogged1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 249, _a);
}

// SIGNAL 250
void DashBoard::knocklevlogged2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 250, _a);
}

// SIGNAL 251
void DashBoard::knockretardbank1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 251, _a);
}

// SIGNAL 252
void DashBoard::knockretardbank2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 252, _a);
}

// SIGNAL 253
void DashBoard::lambda2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 253, _a);
}

// SIGNAL 254
void DashBoard::lambda3Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 254, _a);
}

// SIGNAL 255
void DashBoard::lambda4Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 255, _a);
}

// SIGNAL 256
void DashBoard::launchcontolfuelenrichChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 256, _a);
}

// SIGNAL 257
void DashBoard::launchctrolignretardChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 257, _a);
}

// SIGNAL 258
void DashBoard::leftindicatorChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 258, _a);
}

// SIGNAL 259
void DashBoard::limpmodeChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 259, _a);
}

// SIGNAL 260
void DashBoard::milChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 260, _a);
}

// SIGNAL 261
void DashBoard::missccountChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 261, _a);
}

// SIGNAL 262
void DashBoard::nosactiveChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 262, _a);
}

// SIGNAL 263
void DashBoard::nospressChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 263, _a);
}

// SIGNAL 264
void DashBoard::nosswitchChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 264, _a);
}

// SIGNAL 265
void DashBoard::oilpresChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 265, _a);
}

// SIGNAL 266
void DashBoard::oiltempChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 266, _a);
}

// SIGNAL 267
void DashBoard::rallyantilagswitchChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 267, _a);
}

// SIGNAL 268
void DashBoard::rightindicatorChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 268, _a);
}

// SIGNAL 269
void DashBoard::targetbstlelkpaChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 269, _a);
}

// SIGNAL 270
void DashBoard::timeddutyout1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 270, _a);
}

// SIGNAL 271
void DashBoard::timeddutyout2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 271, _a);
}

// SIGNAL 272
void DashBoard::timeddutyoutputactiveChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 272, _a);
}

// SIGNAL 273
void DashBoard::torqueredcutactiveChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 273, _a);
}

// SIGNAL 274
void DashBoard::torqueredlevelactiveChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 274, _a);
}

// SIGNAL 275
void DashBoard::transientthroactiveChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 275, _a);
}

// SIGNAL 276
void DashBoard::transoiltempChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 276, _a);
}

// SIGNAL 277
void DashBoard::triggerccounterChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 277, _a);
}

// SIGNAL 278
void DashBoard::triggersrsinceasthomeChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 278, _a);
}

// SIGNAL 279
void DashBoard::turborpmChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 279, _a);
}

// SIGNAL 280
void DashBoard::turborpm2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 280, _a);
}

// SIGNAL 281
void DashBoard::wastegatepressChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 281, _a);
}

// SIGNAL 282
void DashBoard::wheeldiffChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 282, _a);
}

// SIGNAL 283
void DashBoard::wheelslipChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 283, _a);
}

// SIGNAL 284
void DashBoard::wheelspdftleftChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 284, _a);
}

// SIGNAL 285
void DashBoard::wheelspdftrightChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 285, _a);
}

// SIGNAL 286
void DashBoard::wheelspdrearleftChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 286, _a);
}

// SIGNAL 287
void DashBoard::wheelspdrearrightChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 287, _a);
}

// SIGNAL 288
void DashBoard::musicpathChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 288, _a);
}

// SIGNAL 289
void DashBoard::supportedRegChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 289, _a);
}

// SIGNAL 290
void DashBoard::speedpercentChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 290, _a);
}

// SIGNAL 291
void DashBoard::pulsespermileChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 291, _a);
}

// SIGNAL 292
void DashBoard::maxRPMChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 292, _a);
}

// SIGNAL 293
void DashBoard::rpmStage1Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 293, _a);
}

// SIGNAL 294
void DashBoard::rpmStage2Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 294, _a);
}

// SIGNAL 295
void DashBoard::rpmStage3Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 295, _a);
}

// SIGNAL 296
void DashBoard::rpmStage4Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 296, _a);
}

// SIGNAL 297
void DashBoard::waterwarnChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 297, _a);
}

// SIGNAL 298
void DashBoard::rpmwarnChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 298, _a);
}

// SIGNAL 299
void DashBoard::knockwarnChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 299, _a);
}

// SIGNAL 300
void DashBoard::boostwarnChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 300, _a);
}

// SIGNAL 301
void DashBoard::smoothrpmChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 301, _a);
}

// SIGNAL 302
void DashBoard::smoothspeedChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 302, _a);
}

// SIGNAL 303
void DashBoard::smootexAnalogInput7Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 303, _a);
}

// SIGNAL 304
void DashBoard::gearcalc1Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 304, _a);
}

// SIGNAL 305
void DashBoard::gearcalc2Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 305, _a);
}

// SIGNAL 306
void DashBoard::gearcalc3Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 306, _a);
}

// SIGNAL 307
void DashBoard::gearcalc4Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 307, _a);
}

// SIGNAL 308
void DashBoard::gearcalc5Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 308, _a);
}

// SIGNAL 309
void DashBoard::gearcalc6Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 309, _a);
}

// SIGNAL 310
void DashBoard::gearcalcactivationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 310, _a);
}

// SIGNAL 311
void DashBoard::ecuChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 311, _a);
}

// SIGNAL 312
void DashBoard::rpmstyle1Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 312, _a);
}

// SIGNAL 313
void DashBoard::rpmstyle2Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 313, _a);
}

// SIGNAL 314
void DashBoard::rpmstyle3Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 314, _a);
}

// SIGNAL 315
void DashBoard::RotaryTrimpot1Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 315, _a);
}

// SIGNAL 316
void DashBoard::RotaryTrimpot2Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 316, _a);
}

// SIGNAL 317
void DashBoard::RotaryTrimpot3Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 317, _a);
}

// SIGNAL 318
void DashBoard::CalibrationSelectChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 318, _a);
}

// SIGNAL 319
void DashBoard::ErrorChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 319, _a);
}

// SIGNAL 320
void DashBoard::autogearChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 320, _a);
}

// SIGNAL 321
void DashBoard::daemonlicenseChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 321, _a);
}

// SIGNAL 322
void DashBoard::ExternalSpeedChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 322, _a);
}

// SIGNAL 323
void DashBoard::externalspeedport(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 323, _a);
}

// SIGNAL 324
void DashBoard::currentLapChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 324, _a);
}

// SIGNAL 325
void DashBoard::laptimeChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 325, _a);
}

// SIGNAL 326
void DashBoard::LastlaptimeChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 326, _a);
}

// SIGNAL 327
void DashBoard::bestlaptimeChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 327, _a);
}

// SIGNAL 328
void DashBoard::draggableChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 328, _a);
}

// SIGNAL 329
void DashBoard::wifiChanged(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 329, _a);
}

// SIGNAL 330
void DashBoard::canChanged(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 330, _a);
}

// SIGNAL 331
void DashBoard::Analog0Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 331, _a);
}

// SIGNAL 332
void DashBoard::Analog1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 332, _a);
}

// SIGNAL 333
void DashBoard::Analog2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 333, _a);
}

// SIGNAL 334
void DashBoard::Analog3Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 334, _a);
}

// SIGNAL 335
void DashBoard::Analog4Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 335, _a);
}

// SIGNAL 336
void DashBoard::Analog5Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 336, _a);
}

// SIGNAL 337
void DashBoard::Analog6Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 337, _a);
}

// SIGNAL 338
void DashBoard::Analog7Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 338, _a);
}

// SIGNAL 339
void DashBoard::Analog8Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 339, _a);
}

// SIGNAL 340
void DashBoard::Analog9Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 340, _a);
}

// SIGNAL 341
void DashBoard::Analog10Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 341, _a);
}

// SIGNAL 342
void DashBoard::AnalogCalc0Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 342, _a);
}

// SIGNAL 343
void DashBoard::AnalogCalc1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 343, _a);
}

// SIGNAL 344
void DashBoard::AnalogCalc2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 344, _a);
}

// SIGNAL 345
void DashBoard::AnalogCalc3Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 345, _a);
}

// SIGNAL 346
void DashBoard::AnalogCalc4Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 346, _a);
}

// SIGNAL 347
void DashBoard::AnalogCalc5Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 347, _a);
}

// SIGNAL 348
void DashBoard::AnalogCalc6Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 348, _a);
}

// SIGNAL 349
void DashBoard::AnalogCalc7Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 349, _a);
}

// SIGNAL 350
void DashBoard::AnalogCalc8Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 350, _a);
}

// SIGNAL 351
void DashBoard::AnalogCalc9Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 351, _a);
}

// SIGNAL 352
void DashBoard::AnalogCalc10Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 352, _a);
}

// SIGNAL 353
void DashBoard::EXAnalogCalc0Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 353, _a);
}

// SIGNAL 354
void DashBoard::EXAnalogCalc1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 354, _a);
}

// SIGNAL 355
void DashBoard::EXAnalogCalc2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 355, _a);
}

// SIGNAL 356
void DashBoard::EXAnalogCalc3Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 356, _a);
}

// SIGNAL 357
void DashBoard::EXAnalogCalc4Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 357, _a);
}

// SIGNAL 358
void DashBoard::EXAnalogCalc5Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 358, _a);
}

// SIGNAL 359
void DashBoard::EXAnalogCalc6Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 359, _a);
}

// SIGNAL 360
void DashBoard::EXAnalogCalc7Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 360, _a);
}

// SIGNAL 361
void DashBoard::LambdamultiplyChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 361, _a);
}

// SIGNAL 362
void DashBoard::Userchannel1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 362, _a);
}

// SIGNAL 363
void DashBoard::Userchannel2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 363, _a);
}

// SIGNAL 364
void DashBoard::Userchannel3Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 364, _a);
}

// SIGNAL 365
void DashBoard::Userchannel4Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 365, _a);
}

// SIGNAL 366
void DashBoard::Userchannel5Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 366, _a);
}

// SIGNAL 367
void DashBoard::Userchannel6Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 367, _a);
}

// SIGNAL 368
void DashBoard::Userchannel7Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 368, _a);
}

// SIGNAL 369
void DashBoard::Userchannel8Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 369, _a);
}

// SIGNAL 370
void DashBoard::Userchannel9Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 370, _a);
}

// SIGNAL 371
void DashBoard::Userchannel10Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 371, _a);
}

// SIGNAL 372
void DashBoard::Userchannel11Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 372, _a);
}

// SIGNAL 373
void DashBoard::Userchannel12Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 373, _a);
}

// SIGNAL 374
void DashBoard::BitfieldEngineStatusChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 374, _a);
}

// SIGNAL 375
void DashBoard::FuelLevelChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 375, _a);
}

// SIGNAL 376
void DashBoard::SteeringWheelAngleChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 376, _a);
}

// SIGNAL 377
void DashBoard::BrightnessChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 377, _a);
}

// SIGNAL 378
void DashBoard::VisibledashesChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 378, _a);
}

// SIGNAL 379
void DashBoard::oilpressurelampChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 379, _a);
}

// SIGNAL 380
void DashBoard::overtempalarmChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 380, _a);
}

// SIGNAL 381
void DashBoard::alternatorfailChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 381, _a);
}

// SIGNAL 382
void DashBoard::AuxTemp1Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 382, _a);
}

// SIGNAL 383
void DashBoard::sixtyfoottimeChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 383, _a);
}

// SIGNAL 384
void DashBoard::sixtyfootspeedChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 384, _a);
}

// SIGNAL 385
void DashBoard::threehundredthirtyfoottimeChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 385, _a);
}

// SIGNAL 386
void DashBoard::threehundredthirtyfootspeedChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 386, _a);
}

// SIGNAL 387
void DashBoard::eightmiletimeChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 387, _a);
}

// SIGNAL 388
void DashBoard::eightmilespeedChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 388, _a);
}

// SIGNAL 389
void DashBoard::quartermiletimeChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 389, _a);
}

// SIGNAL 390
void DashBoard::quartermilespeedChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 390, _a);
}

// SIGNAL 391
void DashBoard::thousandfoottimeChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 391, _a);
}

// SIGNAL 392
void DashBoard::thousandfootspeedChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 392, _a);
}

// SIGNAL 393
void DashBoard::zerotohundredtChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 393, _a);
}

// SIGNAL 394
void DashBoard::hundredtotwohundredtimeChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 394, _a);
}

// SIGNAL 395
void DashBoard::twohundredtothreehundredtimeChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 395, _a);
}

// SIGNAL 396
void DashBoard::reactiontimeChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 396, _a);
}

// SIGNAL 397
void DashBoard::IGBTPhaseATempChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 397, _a);
}

// SIGNAL 398
void DashBoard::IGBTPhaseBTempChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 398, _a);
}

// SIGNAL 399
void DashBoard::IGBTPhaseCTempChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 399, _a);
}

// SIGNAL 400
void DashBoard::GateDriverTempChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 400, _a);
}

// SIGNAL 401
void DashBoard::ControlBoardTempChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 401, _a);
}

// SIGNAL 402
void DashBoard::RtdTemp1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 402, _a);
}

// SIGNAL 403
void DashBoard::RtdTemp2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 403, _a);
}

// SIGNAL 404
void DashBoard::RtdTemp3Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 404, _a);
}

// SIGNAL 405
void DashBoard::RtdTemp4Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 405, _a);
}

// SIGNAL 406
void DashBoard::RtdTemp5Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 406, _a);
}

// SIGNAL 407
void DashBoard::EMotorTemperatureChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 407, _a);
}

// SIGNAL 408
void DashBoard::TorqueShudderChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 408, _a);
}

// SIGNAL 409
void DashBoard::DigInput1FowardSwChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 409, _a);
}

// SIGNAL 410
void DashBoard::DigInput2ReverseSwChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 410, _a);
}

// SIGNAL 411
void DashBoard::DigInput3BrakeSwChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 411, _a);
}

// SIGNAL 412
void DashBoard::DigInput4RegenDisableSwChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 412, _a);
}

// SIGNAL 413
void DashBoard::DigInput5IgnSwChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 413, _a);
}

// SIGNAL 414
void DashBoard::DigInput6StartSwChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 414, _a);
}

// SIGNAL 415
void DashBoard::DigInput7BoolChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 415, _a);
}

// SIGNAL 416
void DashBoard::DigInput8BoolChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 416, _a);
}

// SIGNAL 417
void DashBoard::EMotorAngleChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 417, _a);
}

// SIGNAL 418
void DashBoard::EMotorSpeedChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 418, _a);
}

// SIGNAL 419
void DashBoard::ElectricalOutFreqChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 419, _a);
}

// SIGNAL 420
void DashBoard::DeltaResolverFilteredChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 420, _a);
}

// SIGNAL 421
void DashBoard::PhaseACurrentChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 421, _a);
}

// SIGNAL 422
void DashBoard::PhaseBCurrentChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 422, _a);
}

// SIGNAL 423
void DashBoard::PhaseCCurrentChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 423, _a);
}

// SIGNAL 424
void DashBoard::DCBusCurrentChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 424, _a);
}

// SIGNAL 425
void DashBoard::DCBusVoltageChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 425, _a);
}

// SIGNAL 426
void DashBoard::OutputVoltageChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 426, _a);
}

// SIGNAL 427
void DashBoard::VABvdVoltageChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 427, _a);
}

// SIGNAL 428
void DashBoard::VBCvqVoltageChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 428, _a);
}

// SIGNAL 429
void DashBoard::TirepresLFChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 429, _a);
}

// SIGNAL 430
void DashBoard::TirepresRFChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 430, _a);
}

// SIGNAL 431
void DashBoard::TirepresRRChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 431, _a);
}

// SIGNAL 432
void DashBoard::TirepresLRChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 432, _a);
}

// SIGNAL 433
void DashBoard::TiretempLFChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 433, _a);
}

// SIGNAL 434
void DashBoard::TiretempRFChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 434, _a);
}

// SIGNAL 435
void DashBoard::TiretempRRChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 435, _a);
}

// SIGNAL 436
void DashBoard::TiretempLRChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 436, _a);
}

// SIGNAL 437
void DashBoard::DigitalInput1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 437, _a);
}

// SIGNAL 438
void DashBoard::DigitalInput2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 438, _a);
}

// SIGNAL 439
void DashBoard::DigitalInput3Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 439, _a);
}

// SIGNAL 440
void DashBoard::DigitalInput4Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 440, _a);
}

// SIGNAL 441
void DashBoard::DigitalInput5Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 441, _a);
}

// SIGNAL 442
void DashBoard::DigitalInput6Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 442, _a);
}

// SIGNAL 443
void DashBoard::DigitalInput7Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 443, _a);
}

// SIGNAL 444
void DashBoard::EXDigitalInput1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 444, _a);
}

// SIGNAL 445
void DashBoard::EXDigitalInput2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 445, _a);
}

// SIGNAL 446
void DashBoard::EXDigitalInput3Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 446, _a);
}

// SIGNAL 447
void DashBoard::EXDigitalInput4Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 447, _a);
}

// SIGNAL 448
void DashBoard::EXDigitalInput5Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 448, _a);
}

// SIGNAL 449
void DashBoard::EXDigitalInput6Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 449, _a);
}

// SIGNAL 450
void DashBoard::EXDigitalInput7Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 450, _a);
}

// SIGNAL 451
void DashBoard::EXDigitalInput8Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 451, _a);
}

// SIGNAL 452
void DashBoard::EXAnalogInput0Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 452, _a);
}

// SIGNAL 453
void DashBoard::EXAnalogInput1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 453, _a);
}

// SIGNAL 454
void DashBoard::EXAnalogInput2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 454, _a);
}

// SIGNAL 455
void DashBoard::EXAnalogInput3Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 455, _a);
}

// SIGNAL 456
void DashBoard::EXAnalogInput4Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 456, _a);
}

// SIGNAL 457
void DashBoard::EXAnalogInput5Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 457, _a);
}

// SIGNAL 458
void DashBoard::EXAnalogInput6Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 458, _a);
}

// SIGNAL 459
void DashBoard::EXAnalogInput7Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 459, _a);
}

// SIGNAL 460
void DashBoard::igncutChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 460, _a);
}

// SIGNAL 461
void DashBoard::undrivenavgspeedChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 461, _a);
}

// SIGNAL 462
void DashBoard::drivenavgspeedChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 462, _a);
}

// SIGNAL 463
void DashBoard::dsettargetslipChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 463, _a);
}

// SIGNAL 464
void DashBoard::tractionctlpowerlimitChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 464, _a);
}

// SIGNAL 465
void DashBoard::knockallpeakChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 465, _a);
}

// SIGNAL 466
void DashBoard::knockcorrChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 466, _a);
}

// SIGNAL 467
void DashBoard::knocklastcylChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 467, _a);
}

// SIGNAL 468
void DashBoard::totalfueltrimChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 468, _a);
}

// SIGNAL 469
void DashBoard::totaligncompChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 469, _a);
}

// SIGNAL 470
void DashBoard::egthighestChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 470, _a);
}

// SIGNAL 471
void DashBoard::cputempecuChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 471, _a);
}

// SIGNAL 472
void DashBoard::errorcodecountChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 472, _a);
}

// SIGNAL 473
void DashBoard::lostsynccountChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 473, _a);
}

// SIGNAL 474
void DashBoard::egtdiffChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 474, _a);
}

// SIGNAL 475
void DashBoard::activeboosttableChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 475, _a);
}

// SIGNAL 476
void DashBoard::activetunetableChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 476, _a);
}

// SIGNAL 477
void DashBoard::genericoutput1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 477, _a);
}

// SIGNAL 478
void DashBoard::frequencyDIEX1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 478, _a);
}

// SIGNAL 479
void DashBoard::LF_Tyre_Temp_01Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 479, _a);
}

// SIGNAL 480
void DashBoard::LF_Tyre_Temp_02Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 480, _a);
}

// SIGNAL 481
void DashBoard::LF_Tyre_Temp_03Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 481, _a);
}

// SIGNAL 482
void DashBoard::LF_Tyre_Temp_04Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 482, _a);
}

// SIGNAL 483
void DashBoard::LF_Tyre_Temp_05Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 483, _a);
}

// SIGNAL 484
void DashBoard::LF_Tyre_Temp_06Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 484, _a);
}

// SIGNAL 485
void DashBoard::LF_Tyre_Temp_07Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 485, _a);
}

// SIGNAL 486
void DashBoard::LF_Tyre_Temp_08Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 486, _a);
}

// SIGNAL 487
void DashBoard::RF_Tyre_Temp_01Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 487, _a);
}

// SIGNAL 488
void DashBoard::RF_Tyre_Temp_02Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 488, _a);
}

// SIGNAL 489
void DashBoard::RF_Tyre_Temp_03Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 489, _a);
}

// SIGNAL 490
void DashBoard::RF_Tyre_Temp_04Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 490, _a);
}

// SIGNAL 491
void DashBoard::RF_Tyre_Temp_05Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 491, _a);
}

// SIGNAL 492
void DashBoard::RF_Tyre_Temp_06Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 492, _a);
}

// SIGNAL 493
void DashBoard::RF_Tyre_Temp_07Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 493, _a);
}

// SIGNAL 494
void DashBoard::RF_Tyre_Temp_08Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 494, _a);
}

// SIGNAL 495
void DashBoard::LR_Tyre_Temp_01Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 495, _a);
}

// SIGNAL 496
void DashBoard::LR_Tyre_Temp_02Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 496, _a);
}

// SIGNAL 497
void DashBoard::LR_Tyre_Temp_03Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 497, _a);
}

// SIGNAL 498
void DashBoard::LR_Tyre_Temp_04Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 498, _a);
}

// SIGNAL 499
void DashBoard::LR_Tyre_Temp_05Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 499, _a);
}

// SIGNAL 500
void DashBoard::LR_Tyre_Temp_06Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 500, _a);
}

// SIGNAL 501
void DashBoard::LR_Tyre_Temp_07Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 501, _a);
}

// SIGNAL 502
void DashBoard::LR_Tyre_Temp_08Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 502, _a);
}

// SIGNAL 503
void DashBoard::RR_Tyre_Temp_01Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 503, _a);
}

// SIGNAL 504
void DashBoard::RR_Tyre_Temp_02Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 504, _a);
}

// SIGNAL 505
void DashBoard::RR_Tyre_Temp_03Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 505, _a);
}

// SIGNAL 506
void DashBoard::RR_Tyre_Temp_04Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 506, _a);
}

// SIGNAL 507
void DashBoard::RR_Tyre_Temp_05Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 507, _a);
}

// SIGNAL 508
void DashBoard::RR_Tyre_Temp_06Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 508, _a);
}

// SIGNAL 509
void DashBoard::RR_Tyre_Temp_07Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 509, _a);
}

// SIGNAL 510
void DashBoard::RR_Tyre_Temp_08Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 510, _a);
}

// SIGNAL 511
void DashBoard::RPMFrequencyDividerDi1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 511, _a);
}

// SIGNAL 512
void DashBoard::DI1RPMEnabledChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 512, _a);
}

// SIGNAL 513
void DashBoard::ExternalrpmChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 513, _a);
}

// SIGNAL 514
void DashBoard::languageChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 514, _a);
}

// SIGNAL 515
void DashBoard::externalspeedconnectionrequestChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 515, _a);
}

// SIGNAL 516
void DashBoard::externalspeedportChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 516, _a);
}

// SIGNAL 517
void DashBoard::pwseq1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 517, _a);
}

// SIGNAL 518
void DashBoard::pwseq2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 518, _a);
}

// SIGNAL 519
void DashBoard::pwseq3Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 519, _a);
}

// SIGNAL 520
void DashBoard::pwseq4Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 520, _a);
}

// SIGNAL 521
void DashBoard::nitrous1_dutyChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 521, _a);
}

// SIGNAL 522
void DashBoard::nitrous2_dutyChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 522, _a);
}

// SIGNAL 523
void DashBoard::nitrous_timer_outChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 523, _a);
}

// SIGNAL 524
void DashBoard::n2o_addfuelChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 524, _a);
}

// SIGNAL 525
void DashBoard::n2o_retardChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 525, _a);
}

// SIGNAL 526
void DashBoard::EGOcor1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 526, _a);
}

// SIGNAL 527
void DashBoard::EGOcor2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 527, _a);
}

// SIGNAL 528
void DashBoard::EGOcor3Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 528, _a);
}

// SIGNAL 529
void DashBoard::EGOcor4Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 529, _a);
}

// SIGNAL 530
void DashBoard::Knock_cyl1Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 530, _a);
}

// SIGNAL 531
void DashBoard::Knock_cyl2Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 531, _a);
}

// SIGNAL 532
void DashBoard::Knock_cyl3Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 532, _a);
}

// SIGNAL 533
void DashBoard::Knock_cyl4Changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 533, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
