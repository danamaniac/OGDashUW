/****************************************************************************
** Meta object code from reading C++ file 'appsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../appsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AppSettings_t {
    QByteArrayData data[166];
    char stringdata0[1535];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppSettings_t qt_meta_stringdata_AppSettings = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AppSettings"
QT_MOC_LITERAL(1, 12, 11), // "getBaudRate"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "setBaudRate"
QT_MOC_LITERAL(4, 37, 3), // "arg"
QT_MOC_LITERAL(5, 41, 9), // "getParity"
QT_MOC_LITERAL(6, 51, 9), // "setParity"
QT_MOC_LITERAL(7, 61, 11), // "getDataBits"
QT_MOC_LITERAL(8, 73, 11), // "setDataBits"
QT_MOC_LITERAL(9, 85, 11), // "getStopBits"
QT_MOC_LITERAL(10, 97, 11), // "setStopBits"
QT_MOC_LITERAL(11, 109, 14), // "getFlowControl"
QT_MOC_LITERAL(12, 124, 14), // "setFlowControl"
QT_MOC_LITERAL(13, 139, 6), // "getECU"
QT_MOC_LITERAL(14, 146, 6), // "setECU"
QT_MOC_LITERAL(15, 153, 12), // "getInterface"
QT_MOC_LITERAL(16, 166, 12), // "setInterface"
QT_MOC_LITERAL(17, 179, 10), // "getLogging"
QT_MOC_LITERAL(18, 190, 10), // "setLogging"
QT_MOC_LITERAL(19, 201, 17), // "writeMainSettings"
QT_MOC_LITERAL(20, 219, 25), // "writeSelectedDashSettings"
QT_MOC_LITERAL(21, 245, 14), // "numberofdashes"
QT_MOC_LITERAL(22, 260, 29), // "externalspeedconnectionstatus"
QT_MOC_LITERAL(23, 290, 9), // "connected"
QT_MOC_LITERAL(24, 300, 17), // "externalspeedport"
QT_MOC_LITERAL(25, 318, 4), // "port"
QT_MOC_LITERAL(26, 323, 21), // "writeWarnGearSettings"
QT_MOC_LITERAL(27, 345, 9), // "waterwarn"
QT_MOC_LITERAL(28, 355, 9), // "boostwarn"
QT_MOC_LITERAL(29, 365, 7), // "rpmwarn"
QT_MOC_LITERAL(30, 373, 9), // "knockwarn"
QT_MOC_LITERAL(31, 383, 12), // "gercalactive"
QT_MOC_LITERAL(32, 396, 14), // "lambdamultiply"
QT_MOC_LITERAL(33, 411, 8), // "valgear1"
QT_MOC_LITERAL(34, 420, 8), // "valgear2"
QT_MOC_LITERAL(35, 429, 8), // "valgear3"
QT_MOC_LITERAL(36, 438, 8), // "valgear4"
QT_MOC_LITERAL(37, 447, 8), // "valgear5"
QT_MOC_LITERAL(38, 456, 8), // "valgear6"
QT_MOC_LITERAL(39, 465, 18), // "writeSpeedSettings"
QT_MOC_LITERAL(40, 484, 15), // "Speedcorrection"
QT_MOC_LITERAL(41, 500, 13), // "Pulsespermile"
QT_MOC_LITERAL(42, 514, 19), // "writeAnalogSettings"
QT_MOC_LITERAL(43, 534, 3), // "A00"
QT_MOC_LITERAL(44, 538, 3), // "A05"
QT_MOC_LITERAL(45, 542, 3), // "A10"
QT_MOC_LITERAL(46, 546, 3), // "A15"
QT_MOC_LITERAL(47, 550, 3), // "A20"
QT_MOC_LITERAL(48, 554, 3), // "A25"
QT_MOC_LITERAL(49, 558, 3), // "A30"
QT_MOC_LITERAL(50, 562, 3), // "A35"
QT_MOC_LITERAL(51, 566, 3), // "A40"
QT_MOC_LITERAL(52, 570, 3), // "A45"
QT_MOC_LITERAL(53, 574, 3), // "A50"
QT_MOC_LITERAL(54, 578, 3), // "A55"
QT_MOC_LITERAL(55, 582, 3), // "A60"
QT_MOC_LITERAL(56, 586, 3), // "A65"
QT_MOC_LITERAL(57, 590, 3), // "A70"
QT_MOC_LITERAL(58, 594, 3), // "A75"
QT_MOC_LITERAL(59, 598, 3), // "A80"
QT_MOC_LITERAL(60, 602, 3), // "A85"
QT_MOC_LITERAL(61, 606, 3), // "A90"
QT_MOC_LITERAL(62, 610, 3), // "A95"
QT_MOC_LITERAL(63, 614, 4), // "A100"
QT_MOC_LITERAL(64, 619, 4), // "A105"
QT_MOC_LITERAL(65, 624, 16), // "writeRPMSettings"
QT_MOC_LITERAL(66, 641, 5), // "mxrpm"
QT_MOC_LITERAL(67, 647, 6), // "shift1"
QT_MOC_LITERAL(68, 654, 6), // "shift2"
QT_MOC_LITERAL(69, 661, 6), // "shift3"
QT_MOC_LITERAL(70, 668, 6), // "shift4"
QT_MOC_LITERAL(71, 675, 20), // "writeEXBoardSettings"
QT_MOC_LITERAL(72, 696, 5), // "EXA00"
QT_MOC_LITERAL(73, 702, 5), // "EXA05"
QT_MOC_LITERAL(74, 708, 5), // "EXA10"
QT_MOC_LITERAL(75, 714, 5), // "EXA15"
QT_MOC_LITERAL(76, 720, 5), // "EXA20"
QT_MOC_LITERAL(77, 726, 5), // "EXA25"
QT_MOC_LITERAL(78, 732, 5), // "EXA30"
QT_MOC_LITERAL(79, 738, 5), // "EXA35"
QT_MOC_LITERAL(80, 744, 5), // "EXA40"
QT_MOC_LITERAL(81, 750, 5), // "EXA45"
QT_MOC_LITERAL(82, 756, 5), // "EXA50"
QT_MOC_LITERAL(83, 762, 5), // "EXA55"
QT_MOC_LITERAL(84, 768, 5), // "EXA60"
QT_MOC_LITERAL(85, 774, 5), // "EXA65"
QT_MOC_LITERAL(86, 780, 5), // "EXA70"
QT_MOC_LITERAL(87, 786, 5), // "EXA75"
QT_MOC_LITERAL(88, 792, 16), // "steinhartcalc0on"
QT_MOC_LITERAL(89, 809, 16), // "steinhartcalc1on"
QT_MOC_LITERAL(90, 826, 16), // "steinhartcalc2on"
QT_MOC_LITERAL(91, 843, 16), // "steinhartcalc3on"
QT_MOC_LITERAL(92, 860, 16), // "steinhartcalc4on"
QT_MOC_LITERAL(93, 877, 16), // "steinhartcalc5on"
QT_MOC_LITERAL(94, 894, 8), // "AN0R3VAL"
QT_MOC_LITERAL(95, 903, 8), // "AN0R4VAL"
QT_MOC_LITERAL(96, 912, 8), // "AN1R3VAL"
QT_MOC_LITERAL(97, 921, 8), // "AN1R4VAL"
QT_MOC_LITERAL(98, 930, 8), // "AN2R3VAL"
QT_MOC_LITERAL(99, 939, 8), // "AN2R4VAL"
QT_MOC_LITERAL(100, 948, 8), // "AN3R3VAL"
QT_MOC_LITERAL(101, 957, 8), // "AN3R4VAL"
QT_MOC_LITERAL(102, 966, 8), // "AN4R3VAL"
QT_MOC_LITERAL(103, 975, 8), // "AN4R4VAL"
QT_MOC_LITERAL(104, 984, 8), // "AN5R3VAL"
QT_MOC_LITERAL(105, 993, 8), // "AN5R4VAL"
QT_MOC_LITERAL(106, 1002, 25), // "writeEXAN7dampingSettings"
QT_MOC_LITERAL(107, 1028, 10), // "AN7damping"
QT_MOC_LITERAL(108, 1039, 22), // "writeSteinhartSettings"
QT_MOC_LITERAL(109, 1062, 3), // "T01"
QT_MOC_LITERAL(110, 1066, 3), // "T02"
QT_MOC_LITERAL(111, 1070, 3), // "T03"
QT_MOC_LITERAL(112, 1074, 3), // "R01"
QT_MOC_LITERAL(113, 1078, 3), // "R02"
QT_MOC_LITERAL(114, 1082, 3), // "R03"
QT_MOC_LITERAL(115, 1086, 3), // "T11"
QT_MOC_LITERAL(116, 1090, 3), // "T12"
QT_MOC_LITERAL(117, 1094, 3), // "T13"
QT_MOC_LITERAL(118, 1098, 3), // "R11"
QT_MOC_LITERAL(119, 1102, 3), // "R12"
QT_MOC_LITERAL(120, 1106, 3), // "R13"
QT_MOC_LITERAL(121, 1110, 3), // "T21"
QT_MOC_LITERAL(122, 1114, 3), // "T22"
QT_MOC_LITERAL(123, 1118, 3), // "T23"
QT_MOC_LITERAL(124, 1122, 3), // "R21"
QT_MOC_LITERAL(125, 1126, 3), // "R22"
QT_MOC_LITERAL(126, 1130, 3), // "R23"
QT_MOC_LITERAL(127, 1134, 3), // "T31"
QT_MOC_LITERAL(128, 1138, 3), // "T32"
QT_MOC_LITERAL(129, 1142, 3), // "T33"
QT_MOC_LITERAL(130, 1146, 3), // "R31"
QT_MOC_LITERAL(131, 1150, 3), // "R32"
QT_MOC_LITERAL(132, 1154, 3), // "R33"
QT_MOC_LITERAL(133, 1158, 3), // "T41"
QT_MOC_LITERAL(134, 1162, 3), // "T42"
QT_MOC_LITERAL(135, 1166, 3), // "T43"
QT_MOC_LITERAL(136, 1170, 3), // "R41"
QT_MOC_LITERAL(137, 1174, 3), // "R42"
QT_MOC_LITERAL(138, 1178, 3), // "R43"
QT_MOC_LITERAL(139, 1182, 3), // "T51"
QT_MOC_LITERAL(140, 1186, 3), // "T52"
QT_MOC_LITERAL(141, 1190, 3), // "T53"
QT_MOC_LITERAL(142, 1194, 3), // "R51"
QT_MOC_LITERAL(143, 1198, 3), // "R52"
QT_MOC_LITERAL(144, 1202, 3), // "R53"
QT_MOC_LITERAL(145, 1206, 21), // "writeCylinderSettings"
QT_MOC_LITERAL(146, 1228, 9), // "Cylinders"
QT_MOC_LITERAL(147, 1238, 20), // "writeCountrySettings"
QT_MOC_LITERAL(148, 1259, 7), // "Country"
QT_MOC_LITERAL(149, 1267, 18), // "writeTrackSettings"
QT_MOC_LITERAL(150, 1286, 5), // "Track"
QT_MOC_LITERAL(151, 1292, 22), // "writebrightnessettings"
QT_MOC_LITERAL(152, 1315, 10), // "Brightness"
QT_MOC_LITERAL(153, 1326, 25), // "writeRPMFrequencySettings"
QT_MOC_LITERAL(154, 1352, 7), // "Divider"
QT_MOC_LITERAL(155, 1360, 8), // "DI1isRPM"
QT_MOC_LITERAL(156, 1369, 16), // "writeExternalrpm"
QT_MOC_LITERAL(157, 1386, 7), // "checked"
QT_MOC_LITERAL(158, 1394, 13), // "writeLanguage"
QT_MOC_LITERAL(159, 1408, 8), // "Language"
QT_MOC_LITERAL(160, 1417, 20), // "writeStartupSettings"
QT_MOC_LITERAL(161, 1438, 13), // "ExternalSpeed"
QT_MOC_LITERAL(162, 1452, 21), // "writeDaemonLicenseKey"
QT_MOC_LITERAL(163, 1474, 16), // "DaemonLicenseKey"
QT_MOC_LITERAL(164, 1491, 22), // "getDaemonActivationKey"
QT_MOC_LITERAL(165, 1514, 20) // "readandApplySettings"

    },
    "AppSettings\0getBaudRate\0\0setBaudRate\0"
    "arg\0getParity\0setParity\0getDataBits\0"
    "setDataBits\0getStopBits\0setStopBits\0"
    "getFlowControl\0setFlowControl\0getECU\0"
    "setECU\0getInterface\0setInterface\0"
    "getLogging\0setLogging\0writeMainSettings\0"
    "writeSelectedDashSettings\0numberofdashes\0"
    "externalspeedconnectionstatus\0connected\0"
    "externalspeedport\0port\0writeWarnGearSettings\0"
    "waterwarn\0boostwarn\0rpmwarn\0knockwarn\0"
    "gercalactive\0lambdamultiply\0valgear1\0"
    "valgear2\0valgear3\0valgear4\0valgear5\0"
    "valgear6\0writeSpeedSettings\0Speedcorrection\0"
    "Pulsespermile\0writeAnalogSettings\0A00\0"
    "A05\0A10\0A15\0A20\0A25\0A30\0A35\0A40\0A45\0"
    "A50\0A55\0A60\0A65\0A70\0A75\0A80\0A85\0A90\0"
    "A95\0A100\0A105\0writeRPMSettings\0mxrpm\0"
    "shift1\0shift2\0shift3\0shift4\0"
    "writeEXBoardSettings\0EXA00\0EXA05\0EXA10\0"
    "EXA15\0EXA20\0EXA25\0EXA30\0EXA35\0EXA40\0"
    "EXA45\0EXA50\0EXA55\0EXA60\0EXA65\0EXA70\0"
    "EXA75\0steinhartcalc0on\0steinhartcalc1on\0"
    "steinhartcalc2on\0steinhartcalc3on\0"
    "steinhartcalc4on\0steinhartcalc5on\0"
    "AN0R3VAL\0AN0R4VAL\0AN1R3VAL\0AN1R4VAL\0"
    "AN2R3VAL\0AN2R4VAL\0AN3R3VAL\0AN3R4VAL\0"
    "AN4R3VAL\0AN4R4VAL\0AN5R3VAL\0AN5R4VAL\0"
    "writeEXAN7dampingSettings\0AN7damping\0"
    "writeSteinhartSettings\0T01\0T02\0T03\0"
    "R01\0R02\0R03\0T11\0T12\0T13\0R11\0R12\0R13\0"
    "T21\0T22\0T23\0R21\0R22\0R23\0T31\0T32\0T33\0"
    "R31\0R32\0R33\0T41\0T42\0T43\0R41\0R42\0R43\0"
    "T51\0T52\0T53\0R51\0R52\0R53\0writeCylinderSettings\0"
    "Cylinders\0writeCountrySettings\0Country\0"
    "writeTrackSettings\0Track\0"
    "writebrightnessettings\0Brightness\0"
    "writeRPMFrequencySettings\0Divider\0"
    "DI1isRPM\0writeExternalrpm\0checked\0"
    "writeLanguage\0Language\0writeStartupSettings\0"
    "ExternalSpeed\0writeDaemonLicenseKey\0"
    "DaemonLicenseKey\0getDaemonActivationKey\0"
    "readandApplySettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,  204,    2, 0x02 /* Public */,
       3,    1,  205,    2, 0x02 /* Public */,
       5,    0,  208,    2, 0x02 /* Public */,
       6,    1,  209,    2, 0x02 /* Public */,
       7,    0,  212,    2, 0x02 /* Public */,
       8,    1,  213,    2, 0x02 /* Public */,
       9,    0,  216,    2, 0x02 /* Public */,
      10,    1,  217,    2, 0x02 /* Public */,
      11,    0,  220,    2, 0x02 /* Public */,
      12,    1,  221,    2, 0x02 /* Public */,
      13,    0,  224,    2, 0x02 /* Public */,
      14,    1,  225,    2, 0x02 /* Public */,
      15,    0,  228,    2, 0x02 /* Public */,
      16,    1,  229,    2, 0x02 /* Public */,
      17,    0,  232,    2, 0x02 /* Public */,
      18,    1,  233,    2, 0x02 /* Public */,
      19,    0,  236,    2, 0x02 /* Public */,
      20,    1,  237,    2, 0x02 /* Public */,
      22,    1,  240,    2, 0x02 /* Public */,
      24,    1,  243,    2, 0x02 /* Public */,
      26,   12,  246,    2, 0x02 /* Public */,
      39,    2,  271,    2, 0x02 /* Public */,
      42,   22,  276,    2, 0x02 /* Public */,
      65,    5,  321,    2, 0x02 /* Public */,
      71,   34,  332,    2, 0x02 /* Public */,
     106,    1,  401,    2, 0x02 /* Public */,
     108,   36,  404,    2, 0x02 /* Public */,
     145,    1,  477,    2, 0x02 /* Public */,
     147,    1,  480,    2, 0x02 /* Public */,
     149,    1,  483,    2, 0x02 /* Public */,
     151,    1,  486,    2, 0x02 /* Public */,
     153,    2,  489,    2, 0x02 /* Public */,
     156,    1,  494,    2, 0x02 /* Public */,
     158,    1,  497,    2, 0x02 /* Public */,
     160,    1,  500,    2, 0x02 /* Public */,
     162,    1,  503,    2, 0x02 /* Public */,
     164,    0,  506,    2, 0x02 /* Public */,
     165,    0,  507,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::Int, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,   27,   28,   29,   30,   31,   32,   33,   34,   35,   36,   37,   38,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,   40,   41,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,   43,   44,   45,   46,   47,   48,   49,   50,   51,   52,   53,   54,   55,   56,   57,   58,   59,   60,   61,   62,   63,   64,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   66,   67,   68,   69,   70,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   72,   73,   74,   75,   76,   77,   78,   79,   80,   81,   82,   83,   84,   85,   86,   87,   88,   89,   90,   91,   92,   93,   94,   95,   96,   97,   98,   99,  100,  101,  102,  103,  104,  105,
    QMetaType::Void, QMetaType::Int,  107,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,  109,  110,  111,  112,  113,  114,  115,  116,  117,  118,  119,  120,  121,  122,  123,  124,  125,  126,  127,  128,  129,  130,  131,  132,  133,  134,  135,  136,  137,  138,  139,  140,  141,  142,  143,  144,
    QMetaType::Void, QMetaType::QReal,  146,
    QMetaType::Void, QMetaType::QString,  148,
    QMetaType::Void, QMetaType::QString,  150,
    QMetaType::Void, QMetaType::Int,  152,
    QMetaType::Void, QMetaType::QReal, QMetaType::Int,  154,  155,
    QMetaType::Void, QMetaType::Int,  157,
    QMetaType::Void, QMetaType::Int,  159,
    QMetaType::Void, QMetaType::Int,  161,
    QMetaType::Void, QMetaType::QString,  163,
    QMetaType::QString,
    QMetaType::Void,

       0        // eod
};

void AppSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->getBaudRate();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->setBaudRate((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: { int _r = _t->getParity();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->setParity((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: { int _r = _t->getDataBits();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setDataBits((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 6: { int _r = _t->getStopBits();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->setStopBits((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 8: { int _r = _t->getFlowControl();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->setFlowControl((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 10: { int _r = _t->getECU();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->setECU((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 12: { int _r = _t->getInterface();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->setInterface((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 14: { int _r = _t->getLogging();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->setLogging((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 16: _t->writeMainSettings(); break;
        case 17: _t->writeSelectedDashSettings((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->externalspeedconnectionstatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->externalspeedport((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->writeWarnGearSettings((*reinterpret_cast< const qreal(*)>(_a[1])),(*reinterpret_cast< const qreal(*)>(_a[2])),(*reinterpret_cast< const qreal(*)>(_a[3])),(*reinterpret_cast< const qreal(*)>(_a[4])),(*reinterpret_cast< const int(*)>(_a[5])),(*reinterpret_cast< const qreal(*)>(_a[6])),(*reinterpret_cast< const qreal(*)>(_a[7])),(*reinterpret_cast< const qreal(*)>(_a[8])),(*reinterpret_cast< const qreal(*)>(_a[9])),(*reinterpret_cast< const qreal(*)>(_a[10])),(*reinterpret_cast< const qreal(*)>(_a[11])),(*reinterpret_cast< const qreal(*)>(_a[12]))); break;
        case 21: _t->writeSpeedSettings((*reinterpret_cast< const qreal(*)>(_a[1])),(*reinterpret_cast< const qreal(*)>(_a[2]))); break;
        case 22: _t->writeAnalogSettings((*reinterpret_cast< const qreal(*)>(_a[1])),(*reinterpret_cast< const qreal(*)>(_a[2])),(*reinterpret_cast< const qreal(*)>(_a[3])),(*reinterpret_cast< const qreal(*)>(_a[4])),(*reinterpret_cast< const qreal(*)>(_a[5])),(*reinterpret_cast< const qreal(*)>(_a[6])),(*reinterpret_cast< const qreal(*)>(_a[7])),(*reinterpret_cast< const qreal(*)>(_a[8])),(*reinterpret_cast< const qreal(*)>(_a[9])),(*reinterpret_cast< const qreal(*)>(_a[10])),(*reinterpret_cast< const qreal(*)>(_a[11])),(*reinterpret_cast< const qreal(*)>(_a[12])),(*reinterpret_cast< const qreal(*)>(_a[13])),(*reinterpret_cast< const qreal(*)>(_a[14])),(*reinterpret_cast< const qreal(*)>(_a[15])),(*reinterpret_cast< const qreal(*)>(_a[16])),(*reinterpret_cast< const qreal(*)>(_a[17])),(*reinterpret_cast< const qreal(*)>(_a[18])),(*reinterpret_cast< const qreal(*)>(_a[19])),(*reinterpret_cast< const qreal(*)>(_a[20])),(*reinterpret_cast< const qreal(*)>(_a[21])),(*reinterpret_cast< const qreal(*)>(_a[22]))); break;
        case 23: _t->writeRPMSettings((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const int(*)>(_a[5]))); break;
        case 24: _t->writeEXBoardSettings((*reinterpret_cast< const qreal(*)>(_a[1])),(*reinterpret_cast< const qreal(*)>(_a[2])),(*reinterpret_cast< const qreal(*)>(_a[3])),(*reinterpret_cast< const qreal(*)>(_a[4])),(*reinterpret_cast< const qreal(*)>(_a[5])),(*reinterpret_cast< const qreal(*)>(_a[6])),(*reinterpret_cast< const qreal(*)>(_a[7])),(*reinterpret_cast< const qreal(*)>(_a[8])),(*reinterpret_cast< const qreal(*)>(_a[9])),(*reinterpret_cast< const qreal(*)>(_a[10])),(*reinterpret_cast< const qreal(*)>(_a[11])),(*reinterpret_cast< const qreal(*)>(_a[12])),(*reinterpret_cast< const qreal(*)>(_a[13])),(*reinterpret_cast< const qreal(*)>(_a[14])),(*reinterpret_cast< const qreal(*)>(_a[15])),(*reinterpret_cast< const qreal(*)>(_a[16])),(*reinterpret_cast< const int(*)>(_a[17])),(*reinterpret_cast< const int(*)>(_a[18])),(*reinterpret_cast< const int(*)>(_a[19])),(*reinterpret_cast< const int(*)>(_a[20])),(*reinterpret_cast< const int(*)>(_a[21])),(*reinterpret_cast< const int(*)>(_a[22])),(*reinterpret_cast< const int(*)>(_a[23])),(*reinterpret_cast< const int(*)>(_a[24])),(*reinterpret_cast< const int(*)>(_a[25])),(*reinterpret_cast< const int(*)>(_a[26])),(*reinterpret_cast< const int(*)>(_a[27])),(*reinterpret_cast< const int(*)>(_a[28])),(*reinterpret_cast< const int(*)>(_a[29])),(*reinterpret_cast< const int(*)>(_a[30])),(*reinterpret_cast< const int(*)>(_a[31])),(*reinterpret_cast< const int(*)>(_a[32])),(*reinterpret_cast< const int(*)>(_a[33])),(*reinterpret_cast< const int(*)>(_a[34]))); break;
        case 25: _t->writeEXAN7dampingSettings((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 26: _t->writeSteinhartSettings((*reinterpret_cast< const qreal(*)>(_a[1])),(*reinterpret_cast< const qreal(*)>(_a[2])),(*reinterpret_cast< const qreal(*)>(_a[3])),(*reinterpret_cast< const qreal(*)>(_a[4])),(*reinterpret_cast< const qreal(*)>(_a[5])),(*reinterpret_cast< const qreal(*)>(_a[6])),(*reinterpret_cast< const qreal(*)>(_a[7])),(*reinterpret_cast< const qreal(*)>(_a[8])),(*reinterpret_cast< const qreal(*)>(_a[9])),(*reinterpret_cast< const qreal(*)>(_a[10])),(*reinterpret_cast< const qreal(*)>(_a[11])),(*reinterpret_cast< const qreal(*)>(_a[12])),(*reinterpret_cast< const qreal(*)>(_a[13])),(*reinterpret_cast< const qreal(*)>(_a[14])),(*reinterpret_cast< const qreal(*)>(_a[15])),(*reinterpret_cast< const qreal(*)>(_a[16])),(*reinterpret_cast< const qreal(*)>(_a[17])),(*reinterpret_cast< const qreal(*)>(_a[18])),(*reinterpret_cast< const qreal(*)>(_a[19])),(*reinterpret_cast< const qreal(*)>(_a[20])),(*reinterpret_cast< const qreal(*)>(_a[21])),(*reinterpret_cast< const qreal(*)>(_a[22])),(*reinterpret_cast< const qreal(*)>(_a[23])),(*reinterpret_cast< const qreal(*)>(_a[24])),(*reinterpret_cast< const qreal(*)>(_a[25])),(*reinterpret_cast< const qreal(*)>(_a[26])),(*reinterpret_cast< const qreal(*)>(_a[27])),(*reinterpret_cast< const qreal(*)>(_a[28])),(*reinterpret_cast< const qreal(*)>(_a[29])),(*reinterpret_cast< const qreal(*)>(_a[30])),(*reinterpret_cast< const qreal(*)>(_a[31])),(*reinterpret_cast< const qreal(*)>(_a[32])),(*reinterpret_cast< const qreal(*)>(_a[33])),(*reinterpret_cast< const qreal(*)>(_a[34])),(*reinterpret_cast< const qreal(*)>(_a[35])),(*reinterpret_cast< const qreal(*)>(_a[36]))); break;
        case 27: _t->writeCylinderSettings((*reinterpret_cast< const qreal(*)>(_a[1]))); break;
        case 28: _t->writeCountrySettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 29: _t->writeTrackSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->writebrightnessettings((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 31: _t->writeRPMFrequencySettings((*reinterpret_cast< const qreal(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 32: _t->writeExternalrpm((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 33: _t->writeLanguage((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 34: _t->writeStartupSettings((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 35: _t->writeDaemonLicenseKey((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 36: { QString _r = _t->getDaemonActivationKey();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 37: _t->readandApplySettings(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AppSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AppSettings.data,
    qt_meta_data_AppSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AppSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppSettings.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AppSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 38;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
