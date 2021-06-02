#include "libahocorasick-c.h"
struct aho_node a_node_w1[]= {
      { .f_node=0, .degree=0, .alpha=0x00, .outgoing=0, .patterns=0, .final=0, .range=0 },/* 0 */
      { .f_node=0, .degree=25, .alpha=0x00, .outgoing=1, .patterns=0, .final=0, .range=0 },/* 1 */
      { .f_node=1, .degree=8, .alpha=0x00, .outgoing=27, .patterns=0, .final=0, .range=0 },/* 2 */
      { .f_node=4708, .degree=0, .alpha=0x71/* 'q' */, .outgoing=4, .patterns=0, .final=0, .range=0 },/* 3 */
      { .f_node=4847, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5, .patterns=0, .final=0, .range=0 },/* 4 */
      { .f_node=2, .degree=0, .alpha=0x64/* 'd' */, .outgoing=6, .patterns=0, .final=0, .range=0 },/* 5 */
      { .f_node=2, .degree=0, .alpha=0x36/* '6' */, .outgoing=7, .patterns=0, .final=0, .range=0 },/* 6 */
      { .f_node=1, .degree=0, .alpha=0x68/* 'h' */, .outgoing=8, .patterns=0, .final=0, .range=0 },/* 7 */
      { .f_node=5919, .degree=0, .alpha=0x77/* 'w' */, .outgoing=9, .patterns=0, .final=0, .range=0 },/* 8 */
      { .f_node=5671, .degree=0, .alpha=0x32/* '2' */, .outgoing=10, .patterns=0, .final=0, .range=0 },/* 9 */
      { .f_node=1, .degree=0, .alpha=0x34/* '4' */, .outgoing=11, .patterns=0, .final=0, .range=0 },/* 10 */
      { .f_node=1, .degree=0, .alpha=0x75/* 'u' */, .outgoing=12, .patterns=0, .final=0, .range=0 },/* 11 */
      { .f_node=5858, .degree=0, .alpha=0x63/* 'c' */, .outgoing=13, .patterns=0, .final=0, .range=0 },/* 12 */
      { .f_node=5471, .degree=0, .alpha=0x66/* 'f' */, .outgoing=14, .patterns=0, .final=0, .range=0 },/* 13 */
      { .f_node=5332, .degree=0, .alpha=0x2e/* '.' */, .outgoing=15, .patterns=0, .final=0, .range=0 },/* 14 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=16, .patterns=0, .final=0, .range=0 },/* 15 */
      { .f_node=1545, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=17, .patterns=0, .final=0, .range=0 },/* 16 */
      { .f_node=1581, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=18, .patterns=0, .final=0, .range=0 },/* 17 */
      { .f_node=1582, .degree=0, .alpha=0x75/* 'u' */, .outgoing=19, .patterns=0, .final=0, .range=0 },/* 18 */
      { .f_node=1583, .degree=0, .alpha=0x64/* 'd' */, .outgoing=20, .patterns=0, .final=0, .range=0 },/* 19 */
      { .f_node=1584, .degree=0, .alpha=0x66/* 'f' */, .outgoing=21, .patterns=0, .final=0, .range=0 },/* 20 */
      { .f_node=1585, .degree=0, .alpha=0x72/* 'r' */, .outgoing=22, .patterns=0, .final=0, .range=0 },/* 21 */
      { .f_node=1586, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=23, .patterns=0, .final=0, .range=0 },/* 22 */
      { .f_node=1587, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=24, .patterns=0, .final=0, .range=0 },/* 23 */
      { .f_node=1588, .degree=0, .alpha=0x74/* 't' */, .outgoing=25, .patterns=0, .final=0, .range=0 },/* 24 */
      { .f_node=1589, .degree=0, .alpha=0x2e/* '.' */, .outgoing=26, .patterns=0, .final=0, .range=0 },/* 25 */
      { .f_node=1590, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=27, .patterns=0, .final=0, .range=0 },/* 26 */
      { .f_node=1591, .degree=0, .alpha=0x65/* 'e' */, .outgoing=28, .patterns=0, .final=0, .range=0 },/* 27 */
      { .f_node=1592, .degree=0, .alpha=0x74/* 't' */, .outgoing=29, .patterns=0, .final=0, .range=0 },/* 28 */
      { .f_node=1593, .degree=0, .alpha=0x00, .outgoing=0, .patterns=1, .final=1, .range=0 },/* 29 */
      { .f_node=1, .degree=4, .alpha=0x35, .outgoing=36, .patterns=0, .final=0, .range=1 },/* 30 */
      { .f_node=1, .degree=0, .alpha=0x78/* 'x' */, .outgoing=32, .patterns=0, .final=0, .range=0 },/* 31 */
      { .f_node=1, .degree=0, .alpha=0x69/* 'i' */, .outgoing=33, .patterns=0, .final=0, .range=0 },/* 32 */
      { .f_node=3324, .degree=0, .alpha=0x34/* '4' */, .outgoing=34, .patterns=0, .final=0, .range=0 },/* 33 */
      { .f_node=1, .degree=0, .alpha=0x30/* '0' */, .outgoing=35, .patterns=0, .final=0, .range=0 },/* 34 */
      { .f_node=1, .degree=0, .alpha=0x78/* 'x' */, .outgoing=36, .patterns=0, .final=0, .range=0 },/* 35 */
      { .f_node=1, .degree=0, .alpha=0x39/* '9' */, .outgoing=37, .patterns=0, .final=0, .range=0 },/* 36 */
      { .f_node=1, .degree=0, .alpha=0x37/* '7' */, .outgoing=38, .patterns=0, .final=0, .range=0 },/* 37 */
      { .f_node=1, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=39, .patterns=0, .final=0, .range=0 },/* 38 */
      { .f_node=5293, .degree=0, .alpha=0x69/* 'i' */, .outgoing=40, .patterns=0, .final=0, .range=0 },/* 39 */
      { .f_node=5294, .degree=0, .alpha=0x75/* 'u' */, .outgoing=41, .patterns=0, .final=0, .range=0 },/* 40 */
      { .f_node=5858, .degree=0, .alpha=0x63/* 'c' */, .outgoing=42, .patterns=0, .final=0, .range=0 },/* 41 */
      { .f_node=5471, .degree=0, .alpha=0x2e/* '.' */, .outgoing=43, .patterns=0, .final=0, .range=0 },/* 42 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=44, .patterns=0, .final=0, .range=0 },/* 43 */
      { .f_node=1545, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=45, .patterns=0, .final=0, .range=0 },/* 44 */
      { .f_node=1581, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=46, .patterns=0, .final=0, .range=0 },/* 45 */
      { .f_node=1582, .degree=0, .alpha=0x75/* 'u' */, .outgoing=47, .patterns=0, .final=0, .range=0 },/* 46 */
      { .f_node=1583, .degree=0, .alpha=0x64/* 'd' */, .outgoing=48, .patterns=0, .final=0, .range=0 },/* 47 */
      { .f_node=1584, .degree=0, .alpha=0x66/* 'f' */, .outgoing=49, .patterns=0, .final=0, .range=0 },/* 48 */
      { .f_node=1585, .degree=0, .alpha=0x72/* 'r' */, .outgoing=50, .patterns=0, .final=0, .range=0 },/* 49 */
      { .f_node=1586, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=51, .patterns=0, .final=0, .range=0 },/* 50 */
      { .f_node=1587, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=52, .patterns=0, .final=0, .range=0 },/* 51 */
      { .f_node=1588, .degree=0, .alpha=0x74/* 't' */, .outgoing=53, .patterns=0, .final=0, .range=0 },/* 52 */
      { .f_node=1589, .degree=0, .alpha=0x2e/* '.' */, .outgoing=54, .patterns=0, .final=0, .range=0 },/* 53 */
      { .f_node=1590, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=55, .patterns=0, .final=0, .range=0 },/* 54 */
      { .f_node=1591, .degree=0, .alpha=0x65/* 'e' */, .outgoing=56, .patterns=0, .final=0, .range=0 },/* 55 */
      { .f_node=1592, .degree=0, .alpha=0x74/* 't' */, .outgoing=57, .patterns=0, .final=0, .range=0 },/* 56 */
      { .f_node=1593, .degree=0, .alpha=0x00, .outgoing=0, .patterns=3, .final=1, .range=0 },/* 57 */
      { .f_node=1, .degree=0, .alpha=0x35/* '5' */, .outgoing=59, .patterns=0, .final=0, .range=0 },/* 58 */
      { .f_node=1, .degree=0, .alpha=0x68/* 'h' */, .outgoing=60, .patterns=0, .final=0, .range=0 },/* 59 */
      { .f_node=5919, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=61, .patterns=0, .final=0, .range=0 },/* 60 */
      { .f_node=1, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=62, .patterns=0, .final=0, .range=0 },/* 61 */
      { .f_node=1, .degree=0, .alpha=0x69/* 'i' */, .outgoing=63, .patterns=0, .final=0, .range=0 },/* 62 */
      { .f_node=3324, .degree=0, .alpha=0x76/* 'v' */, .outgoing=64, .patterns=0, .final=0, .range=0 },/* 63 */
      { .f_node=5786, .degree=0, .alpha=0x61/* 'a' */, .outgoing=65, .patterns=0, .final=0, .range=0 },/* 64 */
      { .f_node=2762, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=66, .patterns=0, .final=0, .range=0 },/* 65 */
      { .f_node=3563, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=67, .patterns=0, .final=0, .range=0 },/* 66 */
      { .f_node=1, .degree=0, .alpha=0x34/* '4' */, .outgoing=68, .patterns=0, .final=0, .range=0 },/* 67 */
      { .f_node=1, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=69, .patterns=0, .final=0, .range=0 },/* 68 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=70, .patterns=0, .final=0, .range=0 },/* 69 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=71, .patterns=0, .final=0, .range=0 },/* 70 */
      { .f_node=1545, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=72, .patterns=0, .final=0, .range=0 },/* 71 */
      { .f_node=1581, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=73, .patterns=0, .final=0, .range=0 },/* 72 */
      { .f_node=1582, .degree=0, .alpha=0x75/* 'u' */, .outgoing=74, .patterns=0, .final=0, .range=0 },/* 73 */
      { .f_node=1583, .degree=0, .alpha=0x64/* 'd' */, .outgoing=75, .patterns=0, .final=0, .range=0 },/* 74 */
      { .f_node=1584, .degree=0, .alpha=0x66/* 'f' */, .outgoing=76, .patterns=0, .final=0, .range=0 },/* 75 */
      { .f_node=1585, .degree=0, .alpha=0x72/* 'r' */, .outgoing=77, .patterns=0, .final=0, .range=0 },/* 76 */
      { .f_node=1586, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=78, .patterns=0, .final=0, .range=0 },/* 77 */
      { .f_node=1587, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=79, .patterns=0, .final=0, .range=0 },/* 78 */
      { .f_node=1588, .degree=0, .alpha=0x74/* 't' */, .outgoing=80, .patterns=0, .final=0, .range=0 },/* 79 */
      { .f_node=1589, .degree=0, .alpha=0x2e/* '.' */, .outgoing=81, .patterns=0, .final=0, .range=0 },/* 80 */
      { .f_node=1590, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=82, .patterns=0, .final=0, .range=0 },/* 81 */
      { .f_node=1591, .degree=0, .alpha=0x65/* 'e' */, .outgoing=83, .patterns=0, .final=0, .range=0 },/* 82 */
      { .f_node=1592, .degree=0, .alpha=0x74/* 't' */, .outgoing=84, .patterns=0, .final=0, .range=0 },/* 83 */
      { .f_node=1593, .degree=0, .alpha=0x00, .outgoing=0, .patterns=5, .final=1, .range=0 },/* 84 */
      { .f_node=3563, .degree=5, .alpha=0x63, .outgoing=41, .patterns=0, .final=0, .range=1 },/* 85 */
      { .f_node=3564, .degree=0, .alpha=0x73/* 's' */, .outgoing=87, .patterns=0, .final=0, .range=0 },/* 86 */
      { .f_node=3565, .degree=0, .alpha=0x2e/* '.' */, .outgoing=88, .patterns=0, .final=0, .range=0 },/* 87 */
      { .f_node=3566, .degree=0, .alpha=0x67/* 'g' */, .outgoing=89, .patterns=0, .final=0, .range=0 },/* 88 */
      { .f_node=1763, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=90, .patterns=0, .final=0, .range=0 },/* 89 */
      { .f_node=1811, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=91, .patterns=0, .final=0, .range=0 },/* 90 */
      { .f_node=1812, .degree=0, .alpha=0x67/* 'g' */, .outgoing=92, .patterns=0, .final=0, .range=0 },/* 91 */
      { .f_node=1813, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=93, .patterns=0, .final=0, .range=0 },/* 92 */
      { .f_node=1814, .degree=0, .alpha=0x65/* 'e' */, .outgoing=94, .patterns=0, .final=0, .range=0 },/* 93 */
      { .f_node=1815, .degree=1, .alpha=0x00, .outgoing=47, .patterns=0, .final=0, .range=0 },/* 94 */
      { .f_node=5208, .degree=0, .alpha=0x73/* 's' */, .outgoing=96, .patterns=0, .final=0, .range=0 },/* 95 */
      { .f_node=5209, .degree=0, .alpha=0x65/* 'e' */, .outgoing=97, .patterns=0, .final=0, .range=0 },/* 96 */
      { .f_node=5210, .degree=0, .alpha=0x72/* 'r' */, .outgoing=98, .patterns=0, .final=0, .range=0 },/* 97 */
      { .f_node=5211, .degree=0, .alpha=0x63/* 'c' */, .outgoing=99, .patterns=0, .final=0, .range=0 },/* 98 */
      { .f_node=5212, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=100, .patterns=0, .final=0, .range=0 },/* 99 */
      { .f_node=5213, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=101, .patterns=0, .final=0, .range=0 },/* 100 */
      { .f_node=5214, .degree=0, .alpha=0x74/* 't' */, .outgoing=102, .patterns=0, .final=0, .range=0 },/* 101 */
      { .f_node=5215, .degree=0, .alpha=0x65/* 'e' */, .outgoing=103, .patterns=0, .final=0, .range=0 },/* 102 */
      { .f_node=5216, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=104, .patterns=0, .final=0, .range=0 },/* 103 */
      { .f_node=5217, .degree=0, .alpha=0x74/* 't' */, .outgoing=105, .patterns=0, .final=0, .range=0 },/* 104 */
      { .f_node=5218, .degree=0, .alpha=0x2e/* '.' */, .outgoing=106, .patterns=0, .final=0, .range=0 },/* 105 */
      { .f_node=5219, .degree=0, .alpha=0x63/* 'c' */, .outgoing=107, .patterns=0, .final=0, .range=0 },/* 106 */
      { .f_node=5220, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=108, .patterns=0, .final=0, .range=0 },/* 107 */
      { .f_node=5221, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=109, .patterns=0, .final=0, .range=0 },/* 108 */
      { .f_node=5222, .degree=0, .alpha=0x00, .outgoing=0, .patterns=7, .final=1, .range=0 },/* 109 */
      { .f_node=1853, .degree=0, .alpha=0x63/* 'c' */, .outgoing=111, .patterns=9, .final=1, .range=0 },/* 110 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=112, .patterns=0, .final=0, .range=0 },/* 111 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=113, .patterns=0, .final=0, .range=0 },/* 112 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=11, .final=1, .range=0 },/* 113 */
      { .f_node=5919, .degree=1, .alpha=0x2d, .outgoing=49, .patterns=0, .final=0, .range=1 },/* 114 */
      { .f_node=5969, .degree=3, .alpha=0x00, .outgoing=51, .patterns=0, .final=0, .range=0 },/* 115 */
      { .f_node=5471, .degree=0, .alpha=0x68/* 'h' */, .outgoing=117, .patterns=0, .final=0, .range=0 },/* 116 */
      { .f_node=5919, .degree=0, .alpha=0x2e/* '.' */, .outgoing=118, .patterns=0, .final=0, .range=0 },/* 117 */
      { .f_node=877, .degree=0, .alpha=0x62/* 'b' */, .outgoing=119, .patterns=0, .final=0, .range=0 },/* 118 */
      { .f_node=1678, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=120, .patterns=0, .final=0, .range=0 },/* 119 */
      { .f_node=1679, .degree=0, .alpha=0x61/* 'a' */, .outgoing=121, .patterns=0, .final=0, .range=0 },/* 120 */
      { .f_node=2762, .degree=0, .alpha=0x68/* 'h' */, .outgoing=122, .patterns=0, .final=0, .range=0 },/* 121 */
      { .f_node=5919, .degree=0, .alpha=0x64/* 'd' */, .outgoing=123, .patterns=0, .final=0, .range=0 },/* 122 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=124, .patterns=0, .final=0, .range=0 },/* 123 */
      { .f_node=436, .degree=0, .alpha=0x73/* 's' */, .outgoing=125, .patterns=0, .final=0, .range=0 },/* 124 */
      { .f_node=437, .degree=0, .alpha=0x2e/* '.' */, .outgoing=126, .patterns=0, .final=0, .range=0 },/* 125 */
      { .f_node=438, .degree=0, .alpha=0x63/* 'c' */, .outgoing=127, .patterns=0, .final=0, .range=0 },/* 126 */
      { .f_node=466, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=128, .patterns=0, .final=0, .range=0 },/* 127 */
      { .f_node=480, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=129, .patterns=0, .final=0, .range=0 },/* 128 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=12, .final=1, .range=0 },/* 129 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=131, .patterns=0, .final=0, .range=0 },/* 130 */
      { .f_node=877, .degree=0, .alpha=0x73/* 's' */, .outgoing=132, .patterns=0, .final=0, .range=0 },/* 131 */
      { .f_node=996, .degree=0, .alpha=0x65/* 'e' */, .outgoing=133, .patterns=0, .final=0, .range=0 },/* 132 */
      { .f_node=4302, .degree=0, .alpha=0x62/* 'b' */, .outgoing=134, .patterns=0, .final=0, .range=0 },/* 133 */
      { .f_node=4204, .degree=0, .alpha=0x79/* 'y' */, .outgoing=135, .patterns=0, .final=0, .range=0 },/* 134 */
      { .f_node=4253, .degree=0, .alpha=0x2e/* '.' */, .outgoing=136, .patterns=0, .final=0, .range=0 },/* 135 */
      { .f_node=877, .degree=0, .alpha=0x69/* 'i' */, .outgoing=137, .patterns=0, .final=0, .range=0 },/* 136 */
      { .f_node=1881, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=138, .patterns=0, .final=0, .range=0 },/* 137 */
      { .f_node=3515, .degree=0, .alpha=0x00, .outgoing=0, .patterns=13, .final=1, .range=0 },/* 138 */
      { .f_node=2, .degree=0, .alpha=0x65/* 'e' */, .outgoing=140, .patterns=0, .final=0, .range=0 },/* 139 */
      { .f_node=3733, .degree=0, .alpha=0x2e/* '.' */, .outgoing=141, .patterns=0, .final=0, .range=0 },/* 140 */
      { .f_node=877, .degree=0, .alpha=0x62/* 'b' */, .outgoing=142, .patterns=0, .final=0, .range=0 },/* 141 */
      { .f_node=1678, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=143, .patterns=0, .final=0, .range=0 },/* 142 */
      { .f_node=1679, .degree=0, .alpha=0x61/* 'a' */, .outgoing=144, .patterns=0, .final=0, .range=0 },/* 143 */
      { .f_node=2762, .degree=0, .alpha=0x68/* 'h' */, .outgoing=145, .patterns=0, .final=0, .range=0 },/* 144 */
      { .f_node=5919, .degree=0, .alpha=0x64/* 'd' */, .outgoing=146, .patterns=0, .final=0, .range=0 },/* 145 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=147, .patterns=0, .final=0, .range=0 },/* 146 */
      { .f_node=436, .degree=0, .alpha=0x73/* 's' */, .outgoing=148, .patterns=0, .final=0, .range=0 },/* 147 */
      { .f_node=437, .degree=0, .alpha=0x2e/* '.' */, .outgoing=149, .patterns=0, .final=0, .range=0 },/* 148 */
      { .f_node=438, .degree=0, .alpha=0x63/* 'c' */, .outgoing=150, .patterns=0, .final=0, .range=0 },/* 149 */
      { .f_node=466, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=151, .patterns=0, .final=0, .range=0 },/* 150 */
      { .f_node=480, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=152, .patterns=0, .final=0, .range=0 },/* 151 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=14, .final=1, .range=0 },/* 152 */
      { .f_node=5546, .degree=0, .alpha=0x70/* 'p' */, .outgoing=154, .patterns=0, .final=0, .range=0 },/* 153 */
      { .f_node=5572, .degree=0, .alpha=0x2e/* '.' */, .outgoing=155, .patterns=0, .final=0, .range=0 },/* 154 */
      { .f_node=5573, .degree=0, .alpha=0x62/* 'b' */, .outgoing=156, .patterns=0, .final=0, .range=0 },/* 155 */
      { .f_node=1678, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=157, .patterns=0, .final=0, .range=0 },/* 156 */
      { .f_node=1679, .degree=0, .alpha=0x61/* 'a' */, .outgoing=158, .patterns=0, .final=0, .range=0 },/* 157 */
      { .f_node=2762, .degree=0, .alpha=0x68/* 'h' */, .outgoing=159, .patterns=0, .final=0, .range=0 },/* 158 */
      { .f_node=5919, .degree=0, .alpha=0x64/* 'd' */, .outgoing=160, .patterns=0, .final=0, .range=0 },/* 159 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=161, .patterns=0, .final=0, .range=0 },/* 160 */
      { .f_node=436, .degree=0, .alpha=0x73/* 's' */, .outgoing=162, .patterns=0, .final=0, .range=0 },/* 161 */
      { .f_node=437, .degree=0, .alpha=0x2e/* '.' */, .outgoing=163, .patterns=0, .final=0, .range=0 },/* 162 */
      { .f_node=438, .degree=0, .alpha=0x63/* 'c' */, .outgoing=164, .patterns=0, .final=0, .range=0 },/* 163 */
      { .f_node=466, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=165, .patterns=0, .final=0, .range=0 },/* 164 */
      { .f_node=480, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=166, .patterns=0, .final=0, .range=0 },/* 165 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=15, .final=1, .range=0 },/* 166 */
      { .f_node=877, .degree=11, .alpha=0x00, .outgoing=55, .patterns=0, .final=0, .range=0 },/* 167 */
      { .f_node=1700, .degree=0, .alpha=0x69/* 'i' */, .outgoing=169, .patterns=0, .final=0, .range=0 },/* 168 */
      { .f_node=1745, .degree=0, .alpha=0x62/* 'b' */, .outgoing=170, .patterns=0, .final=0, .range=0 },/* 169 */
      { .f_node=3325, .degree=0, .alpha=0x72/* 'r' */, .outgoing=171, .patterns=0, .final=0, .range=0 },/* 170 */
      { .f_node=4212, .degree=0, .alpha=0x65/* 'e' */, .outgoing=172, .patterns=0, .final=0, .range=0 },/* 171 */
      { .f_node=5611, .degree=0, .alpha=0x64/* 'd' */, .outgoing=173, .patterns=0, .final=0, .range=0 },/* 172 */
      { .f_node=3905, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=174, .patterns=0, .final=0, .range=0 },/* 173 */
      { .f_node=436, .degree=0, .alpha=0x73/* 's' */, .outgoing=175, .patterns=0, .final=0, .range=0 },/* 174 */
      { .f_node=437, .degree=0, .alpha=0x2e/* '.' */, .outgoing=176, .patterns=0, .final=0, .range=0 },/* 175 */
      { .f_node=438, .degree=0, .alpha=0x67/* 'g' */, .outgoing=177, .patterns=0, .final=0, .range=0 },/* 176 */
      { .f_node=563, .degree=0, .alpha=0x72/* 'r' */, .outgoing=178, .patterns=0, .final=0, .range=0 },/* 177 */
      { .f_node=5596, .degree=0, .alpha=0x00, .outgoing=0, .patterns=16, .final=1, .range=0 },/* 178 */
      { .f_node=2338, .degree=0, .alpha=0x70/* 'p' */, .outgoing=180, .patterns=0, .final=0, .range=0 },/* 179 */
      { .f_node=2410, .degree=0, .alpha=0x65/* 'e' */, .outgoing=181, .patterns=0, .final=0, .range=0 },/* 180 */
      { .f_node=2411, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=182, .patterns=0, .final=0, .range=0 },/* 181 */
      { .f_node=2412, .degree=0, .alpha=0x64/* 'd' */, .outgoing=183, .patterns=0, .final=0, .range=0 },/* 182 */
      { .f_node=2413, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=184, .patterns=0, .final=0, .range=0 },/* 183 */
      { .f_node=2414, .degree=0, .alpha=0x73/* 's' */, .outgoing=185, .patterns=0, .final=0, .range=0 },/* 184 */
      { .f_node=2415, .degree=0, .alpha=0x2e/* '.' */, .outgoing=186, .patterns=0, .final=0, .range=0 },/* 185 */
      { .f_node=2416, .degree=0, .alpha=0x63/* 'c' */, .outgoing=187, .patterns=0, .final=0, .range=0 },/* 186 */
      { .f_node=2417, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=188, .patterns=0, .final=0, .range=0 },/* 187 */
      { .f_node=2418, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=189, .patterns=0, .final=0, .range=0 },/* 188 */
      { .f_node=2419, .degree=0, .alpha=0x00, .outgoing=0, .patterns=17, .final=1, .range=0 },/* 189 */
      { .f_node=2151, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=191, .patterns=0, .final=0, .range=0 },/* 190 */
      { .f_node=436, .degree=0, .alpha=0x73/* 's' */, .outgoing=192, .patterns=0, .final=0, .range=0 },/* 191 */
      { .f_node=437, .degree=2, .alpha=0x00, .outgoing=67, .patterns=0, .final=0, .range=0 },/* 192 */
      { .f_node=438, .degree=0, .alpha=0x73/* 's' */, .outgoing=194, .patterns=0, .final=0, .range=0 },/* 193 */
      { .f_node=996, .degree=0, .alpha=0x62/* 'b' */, .outgoing=195, .patterns=0, .final=0, .range=0 },/* 194 */
      { .f_node=4204, .degree=0, .alpha=0x00, .outgoing=0, .patterns=19, .final=1, .range=0 },/* 195 */
      { .f_node=4693, .degree=0, .alpha=0x61/* 'a' */, .outgoing=197, .patterns=0, .final=0, .range=0 },/* 196 */
      { .f_node=5672, .degree=0, .alpha=0x72/* 'r' */, .outgoing=198, .patterns=0, .final=0, .range=0 },/* 197 */
      { .f_node=5596, .degree=0, .alpha=0x64/* 'd' */, .outgoing=199, .patterns=0, .final=0, .range=0 },/* 198 */
      { .f_node=5597, .degree=0, .alpha=0x65/* 'e' */, .outgoing=200, .patterns=0, .final=0, .range=0 },/* 199 */
      { .f_node=3733, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=201, .patterns=0, .final=0, .range=0 },/* 200 */
      { .f_node=5418, .degree=0, .alpha=0x2e/* '.' */, .outgoing=202, .patterns=0, .final=0, .range=0 },/* 201 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=203, .patterns=0, .final=0, .range=0 },/* 202 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=204, .patterns=0, .final=0, .range=0 },/* 203 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=205, .patterns=0, .final=0, .range=0 },/* 204 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=20, .final=1, .range=0 },/* 205 */
      { .f_node=4421, .degree=0, .alpha=0x69/* 'i' */, .outgoing=207, .patterns=0, .final=0, .range=0 },/* 206 */
      { .f_node=5294, .degree=0, .alpha=0x66/* 'f' */, .outgoing=208, .patterns=0, .final=0, .range=0 },/* 207 */
      { .f_node=5295, .degree=0, .alpha=0x79/* 'y' */, .outgoing=209, .patterns=0, .final=0, .range=0 },/* 208 */
      { .f_node=5800, .degree=0, .alpha=0x2e/* '.' */, .outgoing=210, .patterns=0, .final=0, .range=0 },/* 209 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=211, .patterns=0, .final=0, .range=0 },/* 210 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=212, .patterns=0, .final=0, .range=0 },/* 211 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=213, .patterns=0, .final=0, .range=0 },/* 212 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=21, .final=1, .range=0 },/* 213 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=215, .patterns=0, .final=0, .range=0 },/* 214 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=216, .patterns=0, .final=0, .range=0 },/* 215 */
      { .f_node=2561, .degree=0, .alpha=0x77/* 'w' */, .outgoing=217, .patterns=0, .final=0, .range=0 },/* 216 */
      { .f_node=5127, .degree=0, .alpha=0x65/* 'e' */, .outgoing=218, .patterns=0, .final=0, .range=0 },/* 217 */
      { .f_node=5710, .degree=0, .alpha=0x61/* 'a' */, .outgoing=219, .patterns=0, .final=0, .range=0 },/* 218 */
      { .f_node=2762, .degree=0, .alpha=0x76/* 'v' */, .outgoing=220, .patterns=0, .final=0, .range=0 },/* 219 */
      { .f_node=3030, .degree=0, .alpha=0x65/* 'e' */, .outgoing=221, .patterns=0, .final=0, .range=0 },/* 220 */
      { .f_node=3733, .degree=0, .alpha=0x72/* 'r' */, .outgoing=222, .patterns=0, .final=0, .range=0 },/* 221 */
      { .f_node=5596, .degree=0, .alpha=0x2e/* '.' */, .outgoing=223, .patterns=0, .final=0, .range=0 },/* 222 */
      { .f_node=877, .degree=0, .alpha=0x75/* 'u' */, .outgoing=224, .patterns=0, .final=0, .range=0 },/* 223 */
      { .f_node=1603, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=225, .patterns=0, .final=0, .range=0 },/* 224 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=22, .final=1, .range=0 },/* 225 */
      { .f_node=1451, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=227, .patterns=0, .final=0, .range=0 },/* 226 */
      { .f_node=3563, .degree=0, .alpha=0x77/* 'w' */, .outgoing=228, .patterns=0, .final=0, .range=0 },/* 227 */
      { .f_node=5671, .degree=0, .alpha=0x65/* 'e' */, .outgoing=229, .patterns=0, .final=0, .range=0 },/* 228 */
      { .f_node=5710, .degree=0, .alpha=0x72/* 'r' */, .outgoing=230, .patterns=0, .final=0, .range=0 },/* 229 */
      { .f_node=5596, .degree=0, .alpha=0x64/* 'd' */, .outgoing=231, .patterns=0, .final=0, .range=0 },/* 230 */
      { .f_node=5597, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=232, .patterns=0, .final=0, .range=0 },/* 231 */
      { .f_node=5598, .degree=0, .alpha=0x73/* 's' */, .outgoing=233, .patterns=0, .final=0, .range=0 },/* 232 */
      { .f_node=5599, .degree=0, .alpha=0x2e/* '.' */, .outgoing=234, .patterns=0, .final=0, .range=0 },/* 233 */
      { .f_node=5600, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=235, .patterns=0, .final=0, .range=0 },/* 234 */
      { .f_node=2338, .degree=0, .alpha=0x72/* 'r' */, .outgoing=236, .patterns=0, .final=0, .range=0 },/* 235 */
      { .f_node=3669, .degree=0, .alpha=0x67/* 'g' */, .outgoing=237, .patterns=0, .final=0, .range=0 },/* 236 */
      { .f_node=5159, .degree=0, .alpha=0x00, .outgoing=0, .patterns=23, .final=1, .range=0 },/* 237 */
      { .f_node=1545, .degree=17, .alpha=0x61, .outgoing=70, .patterns=0, .final=0, .range=1 },/* 238 */
      { .f_node=5472, .degree=0, .alpha=0x70/* 'p' */, .outgoing=240, .patterns=0, .final=0, .range=0 },/* 239 */
      { .f_node=5473, .degree=0, .alpha=0x74/* 't' */, .outgoing=241, .patterns=0, .final=0, .range=0 },/* 240 */
      { .f_node=5474, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=242, .patterns=0, .final=0, .range=0 },/* 241 */
      { .f_node=5475, .degree=0, .alpha=0x65/* 'e' */, .outgoing=243, .patterns=0, .final=0, .range=0 },/* 242 */
      { .f_node=5476, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=244, .patterns=0, .final=0, .range=0 },/* 243 */
      { .f_node=5477, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=245, .patterns=0, .final=0, .range=0 },/* 244 */
      { .f_node=5478, .degree=0, .alpha=0x2e/* '.' */, .outgoing=246, .patterns=0, .final=0, .range=0 },/* 245 */
      { .f_node=5479, .degree=0, .alpha=0x69/* 'i' */, .outgoing=247, .patterns=0, .final=0, .range=0 },/* 246 */
      { .f_node=5480, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=248, .patterns=0, .final=0, .range=0 },/* 247 */
      { .f_node=5481, .degree=0, .alpha=0x00, .outgoing=0, .patterns=24, .final=1, .range=0 },/* 248 */
      { .f_node=1581, .degree=0, .alpha=0x65/* 'e' */, .outgoing=250, .patterns=0, .final=0, .range=0 },/* 249 */
      { .f_node=3733, .degree=0, .alpha=0x61/* 'a' */, .outgoing=251, .patterns=0, .final=0, .range=0 },/* 250 */
      { .f_node=2762, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=252, .patterns=0, .final=0, .range=0 },/* 251 */
      { .f_node=2866, .degree=0, .alpha=0x62/* 'b' */, .outgoing=253, .patterns=0, .final=0, .range=0 },/* 252 */
      { .f_node=4204, .degree=0, .alpha=0x72/* 'r' */, .outgoing=254, .patterns=0, .final=0, .range=0 },/* 253 */
      { .f_node=4212, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=255, .patterns=0, .final=0, .range=0 },/* 254 */
      { .f_node=3563, .degree=0, .alpha=0x77/* 'w' */, .outgoing=256, .patterns=0, .final=0, .range=0 },/* 255 */
      { .f_node=5671, .degree=0, .alpha=0x73/* 's' */, .outgoing=257, .patterns=0, .final=0, .range=0 },/* 256 */
      { .f_node=4278, .degree=0, .alpha=0x69/* 'i' */, .outgoing=258, .patterns=0, .final=0, .range=0 },/* 257 */
      { .f_node=4366, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=259, .patterns=0, .final=0, .range=0 },/* 258 */
      { .f_node=3492, .degree=0, .alpha=0x67/* 'g' */, .outgoing=260, .patterns=0, .final=0, .range=0 },/* 259 */
      { .f_node=5159, .degree=0, .alpha=0x2e/* '.' */, .outgoing=261, .patterns=0, .final=0, .range=0 },/* 260 */
      { .f_node=5239, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=262, .patterns=0, .final=0, .range=0 },/* 261 */
      { .f_node=2338, .degree=0, .alpha=0x72/* 'r' */, .outgoing=263, .patterns=0, .final=0, .range=0 },/* 262 */
      { .f_node=3669, .degree=0, .alpha=0x67/* 'g' */, .outgoing=264, .patterns=0, .final=0, .range=0 },/* 263 */
      { .f_node=5159, .degree=0, .alpha=0x00, .outgoing=0, .patterns=26, .final=1, .range=0 },/* 264 */
      { .f_node=5530, .degree=0, .alpha=0x79/* 'y' */, .outgoing=266, .patterns=0, .final=0, .range=0 },/* 265 */
      { .f_node=5800, .degree=0, .alpha=0x70/* 'p' */, .outgoing=267, .patterns=0, .final=0, .range=0 },/* 266 */
      { .f_node=3983, .degree=0, .alpha=0x74/* 't' */, .outgoing=268, .patterns=0, .final=0, .range=0 },/* 267 */
      { .f_node=4944, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=269, .patterns=0, .final=0, .range=0 },/* 268 */
      { .f_node=5090, .degree=0, .alpha=0x2e/* '.' */, .outgoing=270, .patterns=0, .final=0, .range=0 },/* 269 */
      { .f_node=877, .degree=0, .alpha=0x73/* 's' */, .outgoing=271, .patterns=0, .final=0, .range=0 },/* 270 */
      { .f_node=996, .degree=0, .alpha=0x78/* 'x' */, .outgoing=272, .patterns=0, .final=0, .range=0 },/* 271 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=27, .final=1, .range=0 },/* 272 */
      { .f_node=1, .degree=0, .alpha=0x32/* '2' */, .outgoing=274, .patterns=0, .final=0, .range=0 },/* 273 */
      { .f_node=1, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=275, .patterns=0, .final=0, .range=0 },/* 274 */
      { .f_node=5293, .degree=0, .alpha=0x2e/* '.' */, .outgoing=276, .patterns=0, .final=0, .range=0 },/* 275 */
      { .f_node=877, .degree=0, .alpha=0x66/* 'f' */, .outgoing=277, .patterns=0, .final=0, .range=0 },/* 276 */
      { .f_node=2299, .degree=0, .alpha=0x72/* 'r' */, .outgoing=278, .patterns=0, .final=0, .range=0 },/* 277 */
      { .f_node=5596, .degree=0, .alpha=0x00, .outgoing=0, .patterns=28, .final=1, .range=0 },/* 278 */
      { .f_node=996, .degree=0, .alpha=0x65/* 'e' */, .outgoing=280, .patterns=0, .final=0, .range=0 },/* 279 */
      { .f_node=4302, .degree=1, .alpha=0x62, .outgoing=88, .patterns=0, .final=0, .range=1 },/* 280 */
      { .f_node=4204, .degree=0, .alpha=0x79/* 'y' */, .outgoing=282, .patterns=0, .final=0, .range=0 },/* 281 */
      { .f_node=4253, .degree=0, .alpha=0x2e/* '.' */, .outgoing=283, .patterns=0, .final=0, .range=0 },/* 282 */
      { .f_node=877, .degree=0, .alpha=0x69/* 'i' */, .outgoing=284, .patterns=0, .final=0, .range=0 },/* 283 */
      { .f_node=1881, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=285, .patterns=0, .final=0, .range=0 },/* 284 */
      { .f_node=3515, .degree=0, .alpha=0x00, .outgoing=0, .patterns=29, .final=1, .range=0 },/* 285 */
      { .f_node=5471, .degree=0, .alpha=0x75/* 'u' */, .outgoing=287, .patterns=0, .final=0, .range=0 },/* 286 */
      { .f_node=5858, .degree=0, .alpha=0x72/* 'r' */, .outgoing=288, .patterns=0, .final=0, .range=0 },/* 287 */
      { .f_node=5596, .degree=0, .alpha=0x65/* 'e' */, .outgoing=289, .patterns=0, .final=0, .range=0 },/* 288 */
      { .f_node=5611, .degree=0, .alpha=0x64/* 'd' */, .outgoing=290, .patterns=0, .final=0, .range=0 },/* 289 */
      { .f_node=3905, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=291, .patterns=0, .final=0, .range=0 },/* 290 */
      { .f_node=436, .degree=0, .alpha=0x73/* 's' */, .outgoing=292, .patterns=0, .final=0, .range=0 },/* 291 */
      { .f_node=437, .degree=0, .alpha=0x2e/* '.' */, .outgoing=293, .patterns=0, .final=0, .range=0 },/* 292 */
      { .f_node=438, .degree=0, .alpha=0x65/* 'e' */, .outgoing=294, .patterns=0, .final=0, .range=0 },/* 293 */
      { .f_node=2239, .degree=0, .alpha=0x75/* 'u' */, .outgoing=295, .patterns=0, .final=0, .range=0 },/* 294 */
      { .f_node=5858, .degree=0, .alpha=0x00, .outgoing=0, .patterns=30, .final=1, .range=0 },/* 295 */
      { .f_node=1634, .degree=0, .alpha=0x69/* 'i' */, .outgoing=297, .patterns=0, .final=0, .range=0 },/* 296 */
      { .f_node=5042, .degree=0, .alpha=0x61/* 'a' */, .outgoing=298, .patterns=0, .final=0, .range=0 },/* 297 */
      { .f_node=2762, .degree=0, .alpha=0x72/* 'r' */, .outgoing=299, .patterns=0, .final=0, .range=0 },/* 298 */
      { .f_node=5596, .degree=1, .alpha=0x00, .outgoing=90, .patterns=0, .final=0, .range=0 },/* 299 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=301, .patterns=0, .final=0, .range=0 },/* 300 */
      { .f_node=878, .degree=0, .alpha=0x70/* 'p' */, .outgoing=302, .patterns=0, .final=0, .range=0 },/* 301 */
      { .f_node=930, .degree=0, .alpha=0x70/* 'p' */, .outgoing=303, .patterns=0, .final=0, .range=0 },/* 302 */
      { .f_node=931, .degree=0, .alpha=0x00, .outgoing=0, .patterns=31, .final=1, .range=0 },/* 303 */
      { .f_node=2762, .degree=0, .alpha=0x70/* 'p' */, .outgoing=305, .patterns=0, .final=0, .range=0 },/* 304 */
      { .f_node=2891, .degree=0, .alpha=0x2e/* '.' */, .outgoing=306, .patterns=0, .final=0, .range=0 },/* 305 */
      { .f_node=877, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=307, .patterns=0, .final=0, .range=0 },/* 306 */
      { .f_node=2338, .degree=0, .alpha=0x72/* 'r' */, .outgoing=308, .patterns=0, .final=0, .range=0 },/* 307 */
      { .f_node=3669, .degree=0, .alpha=0x67/* 'g' */, .outgoing=309, .patterns=0, .final=0, .range=0 },/* 308 */
      { .f_node=5159, .degree=0, .alpha=0x00, .outgoing=0, .patterns=32, .final=1, .range=0 },/* 309 */
      { .f_node=878, .degree=2, .alpha=0x70, .outgoing=92, .patterns=0, .final=0, .range=1 },/* 310 */
      { .f_node=930, .degree=0, .alpha=0x70/* 'p' */, .outgoing=312, .patterns=0, .final=0, .range=0 },/* 311 */
      { .f_node=931, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=313, .patterns=0, .final=0, .range=0 },/* 312 */
      { .f_node=932, .degree=0, .alpha=0x69/* 'i' */, .outgoing=314, .patterns=0, .final=0, .range=0 },/* 313 */
      { .f_node=2894, .degree=0, .alpha=0x65/* 'e' */, .outgoing=315, .patterns=0, .final=0, .range=0 },/* 314 */
      { .f_node=2895, .degree=0, .alpha=0x64/* 'd' */, .outgoing=316, .patterns=0, .final=0, .range=0 },/* 315 */
      { .f_node=2896, .degree=0, .alpha=0x70/* 'p' */, .outgoing=317, .patterns=0, .final=0, .range=0 },/* 316 */
      { .f_node=2897, .degree=0, .alpha=0x72/* 'r' */, .outgoing=318, .patterns=0, .final=0, .range=0 },/* 317 */
      { .f_node=2898, .degree=0, .alpha=0x69/* 'i' */, .outgoing=319, .patterns=0, .final=0, .range=0 },/* 318 */
      { .f_node=2899, .degree=0, .alpha=0x76/* 'v' */, .outgoing=320, .patterns=0, .final=0, .range=0 },/* 319 */
      { .f_node=2900, .degree=0, .alpha=0x61/* 'a' */, .outgoing=321, .patterns=0, .final=0, .range=0 },/* 320 */
      { .f_node=2901, .degree=0, .alpha=0x63/* 'c' */, .outgoing=322, .patterns=0, .final=0, .range=0 },/* 321 */
      { .f_node=2902, .degree=0, .alpha=0x79/* 'y' */, .outgoing=323, .patterns=0, .final=0, .range=0 },/* 322 */
      { .f_node=2903, .degree=0, .alpha=0x2e/* '.' */, .outgoing=324, .patterns=0, .final=0, .range=0 },/* 323 */
      { .f_node=2904, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=325, .patterns=0, .final=0, .range=0 },/* 324 */
      { .f_node=2905, .degree=0, .alpha=0x65/* 'e' */, .outgoing=326, .patterns=0, .final=0, .range=0 },/* 325 */
      { .f_node=2906, .degree=0, .alpha=0x74/* 't' */, .outgoing=327, .patterns=0, .final=0, .range=0 },/* 326 */
      { .f_node=2907, .degree=0, .alpha=0x00, .outgoing=0, .patterns=33, .final=1, .range=0 },/* 327 */
      { .f_node=5596, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=329, .patterns=0, .final=0, .range=0 },/* 328 */
      { .f_node=4708, .degree=0, .alpha=0x61/* 'a' */, .outgoing=330, .patterns=0, .final=0, .range=0 },/* 329 */
      { .f_node=4709, .degree=0, .alpha=0x64/* 'd' */, .outgoing=331, .patterns=0, .final=0, .range=0 },/* 330 */
      { .f_node=2773, .degree=0, .alpha=0x69/* 'i' */, .outgoing=332, .patterns=0, .final=0, .range=0 },/* 331 */
      { .f_node=786, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=333, .patterns=0, .final=0, .range=0 },/* 332 */
      { .f_node=5293, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=334, .patterns=0, .final=0, .range=0 },/* 333 */
      { .f_node=5293, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=335, .patterns=0, .final=0, .range=0 },/* 334 */
      { .f_node=5304, .degree=0, .alpha=0x64/* 'd' */, .outgoing=336, .patterns=0, .final=0, .range=0 },/* 335 */
      { .f_node=3569, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=337, .patterns=0, .final=0, .range=0 },/* 336 */
      { .f_node=436, .degree=0, .alpha=0x73/* 's' */, .outgoing=338, .patterns=0, .final=0, .range=0 },/* 337 */
      { .f_node=437, .degree=0, .alpha=0x2e/* '.' */, .outgoing=339, .patterns=0, .final=0, .range=0 },/* 338 */
      { .f_node=438, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=340, .patterns=0, .final=0, .range=0 },/* 339 */
      { .f_node=573, .degree=0, .alpha=0x65/* 'e' */, .outgoing=341, .patterns=0, .final=0, .range=0 },/* 340 */
      { .f_node=574, .degree=0, .alpha=0x74/* 't' */, .outgoing=342, .patterns=0, .final=0, .range=0 },/* 341 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=35, .final=1, .range=0 },/* 342 */
      { .f_node=1678, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=344, .patterns=0, .final=0, .range=0 },/* 343 */
      { .f_node=3563, .degree=0, .alpha=0x72/* 'r' */, .outgoing=345, .patterns=0, .final=0, .range=0 },/* 344 */
      { .f_node=3669, .degree=0, .alpha=0x74/* 't' */, .outgoing=346, .patterns=0, .final=0, .range=0 },/* 345 */
      { .f_node=4944, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=347, .patterns=0, .final=0, .range=0 },/* 346 */
      { .f_node=1, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=348, .patterns=0, .final=0, .range=0 },/* 347 */
      { .f_node=4708, .degree=0, .alpha=0x65/* 'e' */, .outgoing=349, .patterns=0, .final=0, .range=0 },/* 348 */
      { .f_node=4751, .degree=0, .alpha=0x79/* 'y' */, .outgoing=350, .patterns=0, .final=0, .range=0 },/* 349 */
      { .f_node=5800, .degree=0, .alpha=0x65/* 'e' */, .outgoing=351, .patterns=0, .final=0, .range=0 },/* 350 */
      { .f_node=3733, .degree=0, .alpha=0x72/* 'r' */, .outgoing=352, .patterns=0, .final=0, .range=0 },/* 351 */
      { .f_node=5596, .degree=0, .alpha=0x2e/* '.' */, .outgoing=353, .patterns=0, .final=0, .range=0 },/* 352 */
      { .f_node=877, .degree=0, .alpha=0x66/* 'f' */, .outgoing=354, .patterns=0, .final=0, .range=0 },/* 353 */
      { .f_node=2299, .degree=0, .alpha=0x72/* 'r' */, .outgoing=355, .patterns=0, .final=0, .range=0 },/* 354 */
      { .f_node=5596, .degree=0, .alpha=0x00, .outgoing=0, .patterns=36, .final=1, .range=0 },/* 355 */
      { .f_node=2299, .degree=0, .alpha=0x66/* 'f' */, .outgoing=357, .patterns=0, .final=0, .range=0 },/* 356 */
      { .f_node=5332, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=358, .patterns=0, .final=0, .range=0 },/* 357 */
      { .f_node=4708, .degree=0, .alpha=0x75/* 'u' */, .outgoing=359, .patterns=0, .final=0, .range=0 },/* 358 */
      { .f_node=4899, .degree=0, .alpha=0x63/* 'c' */, .outgoing=360, .patterns=0, .final=0, .range=0 },/* 359 */
      { .f_node=5471, .degree=0, .alpha=0x2e/* '.' */, .outgoing=361, .patterns=0, .final=0, .range=0 },/* 360 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=362, .patterns=0, .final=0, .range=0 },/* 361 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=363, .patterns=0, .final=0, .range=0 },/* 362 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=364, .patterns=0, .final=0, .range=0 },/* 363 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=37, .final=1, .range=0 },/* 364 */
      { .f_node=5596, .degree=0, .alpha=0x69/* 'i' */, .outgoing=366, .patterns=0, .final=0, .range=0 },/* 365 */
      { .f_node=3324, .degree=0, .alpha=0x76/* 'v' */, .outgoing=367, .patterns=0, .final=0, .range=0 },/* 366 */
      { .f_node=5786, .degree=0, .alpha=0x65/* 'e' */, .outgoing=368, .patterns=0, .final=0, .range=0 },/* 367 */
      { .f_node=3733, .degree=1, .alpha=0x2d, .outgoing=95, .patterns=0, .final=0, .range=1 },/* 368 */
      { .f_node=5969, .degree=0, .alpha=0x74/* 't' */, .outgoing=370, .patterns=0, .final=0, .range=0 },/* 369 */
      { .f_node=5980, .degree=0, .alpha=0x68/* 'h' */, .outgoing=371, .patterns=0, .final=0, .range=0 },/* 370 */
      { .f_node=5919, .degree=0, .alpha=0x69/* 'i' */, .outgoing=372, .patterns=0, .final=0, .range=0 },/* 371 */
      { .f_node=3324, .degree=0, .alpha=0x72/* 'r' */, .outgoing=373, .patterns=0, .final=0, .range=0 },/* 372 */
      { .f_node=5596, .degree=0, .alpha=0x64/* 'd' */, .outgoing=374, .patterns=0, .final=0, .range=0 },/* 373 */
      { .f_node=5597, .degree=0, .alpha=0x70/* 'p' */, .outgoing=375, .patterns=0, .final=0, .range=0 },/* 374 */
      { .f_node=3983, .degree=0, .alpha=0x61/* 'a' */, .outgoing=376, .patterns=0, .final=0, .range=0 },/* 375 */
      { .f_node=4025, .degree=0, .alpha=0x72/* 'r' */, .outgoing=377, .patterns=0, .final=0, .range=0 },/* 376 */
      { .f_node=5596, .degree=0, .alpha=0x74/* 't' */, .outgoing=378, .patterns=0, .final=0, .range=0 },/* 377 */
      { .f_node=4944, .degree=0, .alpha=0x79/* 'y' */, .outgoing=379, .patterns=0, .final=0, .range=0 },/* 378 */
      { .f_node=5800, .degree=0, .alpha=0x2e/* '.' */, .outgoing=380, .patterns=0, .final=0, .range=0 },/* 379 */
      { .f_node=877, .degree=0, .alpha=0x67/* 'g' */, .outgoing=381, .patterns=0, .final=0, .range=0 },/* 380 */
      { .f_node=1763, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=382, .patterns=0, .final=0, .range=0 },/* 381 */
      { .f_node=1811, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=383, .patterns=0, .final=0, .range=0 },/* 382 */
      { .f_node=1812, .degree=0, .alpha=0x67/* 'g' */, .outgoing=384, .patterns=0, .final=0, .range=0 },/* 383 */
      { .f_node=1813, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=385, .patterns=0, .final=0, .range=0 },/* 384 */
      { .f_node=1814, .degree=0, .alpha=0x65/* 'e' */, .outgoing=386, .patterns=0, .final=0, .range=0 },/* 385 */
      { .f_node=1815, .degree=0, .alpha=0x75/* 'u' */, .outgoing=387, .patterns=0, .final=0, .range=0 },/* 386 */
      { .f_node=5208, .degree=0, .alpha=0x73/* 's' */, .outgoing=388, .patterns=0, .final=0, .range=0 },/* 387 */
      { .f_node=5209, .degree=0, .alpha=0x65/* 'e' */, .outgoing=389, .patterns=0, .final=0, .range=0 },/* 388 */
      { .f_node=5210, .degree=0, .alpha=0x72/* 'r' */, .outgoing=390, .patterns=0, .final=0, .range=0 },/* 389 */
      { .f_node=5211, .degree=0, .alpha=0x63/* 'c' */, .outgoing=391, .patterns=0, .final=0, .range=0 },/* 390 */
      { .f_node=5212, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=392, .patterns=0, .final=0, .range=0 },/* 391 */
      { .f_node=5213, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=393, .patterns=0, .final=0, .range=0 },/* 392 */
      { .f_node=5214, .degree=0, .alpha=0x74/* 't' */, .outgoing=394, .patterns=0, .final=0, .range=0 },/* 393 */
      { .f_node=5215, .degree=0, .alpha=0x65/* 'e' */, .outgoing=395, .patterns=0, .final=0, .range=0 },/* 394 */
      { .f_node=5216, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=396, .patterns=0, .final=0, .range=0 },/* 395 */
      { .f_node=5217, .degree=0, .alpha=0x74/* 't' */, .outgoing=397, .patterns=0, .final=0, .range=0 },/* 396 */
      { .f_node=5218, .degree=0, .alpha=0x2e/* '.' */, .outgoing=398, .patterns=0, .final=0, .range=0 },/* 397 */
      { .f_node=5219, .degree=0, .alpha=0x63/* 'c' */, .outgoing=399, .patterns=0, .final=0, .range=0 },/* 398 */
      { .f_node=5220, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=400, .patterns=0, .final=0, .range=0 },/* 399 */
      { .f_node=5221, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=401, .patterns=0, .final=0, .range=0 },/* 400 */
      { .f_node=5222, .degree=0, .alpha=0x00, .outgoing=0, .patterns=38, .final=1, .range=0 },/* 401 */
      { .f_node=877, .degree=0, .alpha=0x67/* 'g' */, .outgoing=403, .patterns=0, .final=0, .range=0 },/* 402 */
      { .f_node=1763, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=404, .patterns=0, .final=0, .range=0 },/* 403 */
      { .f_node=1811, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=405, .patterns=0, .final=0, .range=0 },/* 404 */
      { .f_node=1812, .degree=0, .alpha=0x67/* 'g' */, .outgoing=406, .patterns=0, .final=0, .range=0 },/* 405 */
      { .f_node=1813, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=407, .patterns=0, .final=0, .range=0 },/* 406 */
      { .f_node=1814, .degree=0, .alpha=0x65/* 'e' */, .outgoing=408, .patterns=0, .final=0, .range=0 },/* 407 */
      { .f_node=1815, .degree=0, .alpha=0x2e/* '.' */, .outgoing=409, .patterns=0, .final=0, .range=0 },/* 408 */
      { .f_node=1853, .degree=0, .alpha=0x63/* 'c' */, .outgoing=410, .patterns=40, .final=1, .range=0 },/* 409 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=411, .patterns=0, .final=0, .range=0 },/* 410 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=412, .patterns=0, .final=0, .range=0 },/* 411 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=42, .final=1, .range=0 },/* 412 */
      { .f_node=2762, .degree=0, .alpha=0x74/* 't' */, .outgoing=414, .patterns=0, .final=0, .range=0 },/* 413 */
      { .f_node=2937, .degree=0, .alpha=0x61/* 'a' */, .outgoing=415, .patterns=0, .final=0, .range=0 },/* 414 */
      { .f_node=2762, .degree=0, .alpha=0x73/* 's' */, .outgoing=416, .patterns=0, .final=0, .range=0 },/* 415 */
      { .f_node=2908, .degree=0, .alpha=0x61/* 'a' */, .outgoing=417, .patterns=0, .final=0, .range=0 },/* 416 */
      { .f_node=2762, .degree=0, .alpha=0x76/* 'v' */, .outgoing=418, .patterns=0, .final=0, .range=0 },/* 417 */
      { .f_node=3030, .degree=0, .alpha=0x65/* 'e' */, .outgoing=419, .patterns=0, .final=0, .range=0 },/* 418 */
      { .f_node=3733, .degree=0, .alpha=0x72/* 'r' */, .outgoing=420, .patterns=0, .final=0, .range=0 },/* 419 */
      { .f_node=5596, .degree=0, .alpha=0x2e/* '.' */, .outgoing=421, .patterns=0, .final=0, .range=0 },/* 420 */
      { .f_node=877, .degree=0, .alpha=0x67/* 'g' */, .outgoing=422, .patterns=0, .final=0, .range=0 },/* 421 */
      { .f_node=1763, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=423, .patterns=0, .final=0, .range=0 },/* 422 */
      { .f_node=1811, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=424, .patterns=0, .final=0, .range=0 },/* 423 */
      { .f_node=1812, .degree=0, .alpha=0x67/* 'g' */, .outgoing=425, .patterns=0, .final=0, .range=0 },/* 424 */
      { .f_node=1813, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=426, .patterns=0, .final=0, .range=0 },/* 425 */
      { .f_node=1814, .degree=0, .alpha=0x65/* 'e' */, .outgoing=427, .patterns=0, .final=0, .range=0 },/* 426 */
      { .f_node=1815, .degree=0, .alpha=0x61/* 'a' */, .outgoing=428, .patterns=0, .final=0, .range=0 },/* 427 */
      { .f_node=5178, .degree=0, .alpha=0x70/* 'p' */, .outgoing=429, .patterns=0, .final=0, .range=0 },/* 428 */
      { .f_node=5190, .degree=0, .alpha=0x69/* 'i' */, .outgoing=430, .patterns=0, .final=0, .range=0 },/* 429 */
      { .f_node=5191, .degree=0, .alpha=0x73/* 's' */, .outgoing=431, .patterns=0, .final=0, .range=0 },/* 430 */
      { .f_node=5192, .degree=0, .alpha=0x2e/* '.' */, .outgoing=432, .patterns=0, .final=0, .range=0 },/* 431 */
      { .f_node=5193, .degree=0, .alpha=0x63/* 'c' */, .outgoing=433, .patterns=0, .final=0, .range=0 },/* 432 */
      { .f_node=5194, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=434, .patterns=0, .final=0, .range=0 },/* 433 */
      { .f_node=5195, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=435, .patterns=0, .final=0, .range=0 },/* 434 */
      { .f_node=5196, .degree=0, .alpha=0x00, .outgoing=0, .patterns=43, .final=1, .range=0 },/* 435 */
      { .f_node=5418, .degree=0, .alpha=0x73/* 's' */, .outgoing=437, .patterns=0, .final=0, .range=0 },/* 436 */
      { .f_node=4278, .degree=8, .alpha=0x00, .outgoing=97, .patterns=0, .final=0, .range=0 },/* 437 */
      { .f_node=877, .degree=17, .alpha=0x61, .outgoing=106, .patterns=0, .final=0, .range=1 },/* 438 */
      { .f_node=878, .degree=3, .alpha=0x61, .outgoing=124, .patterns=0, .final=0, .range=1 },/* 439 */
      { .f_node=2763, .degree=1, .alpha=0x00, .outgoing=128, .patterns=0, .final=0, .range=0 },/* 440 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=442, .patterns=0, .final=0, .range=0 },/* 441 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=443, .patterns=0, .final=0, .range=0 },/* 442 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=444, .patterns=0, .final=0, .range=0 },/* 443 */
      { .f_node=2561, .degree=0, .alpha=0x2e/* '.' */, .outgoing=445, .patterns=0, .final=0, .range=0 },/* 444 */
      { .f_node=2562, .degree=0, .alpha=0x75/* 'u' */, .outgoing=446, .patterns=0, .final=0, .range=0 },/* 445 */
      { .f_node=1603, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=447, .patterns=0, .final=0, .range=0 },/* 446 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=45, .final=1, .range=0 },/* 447 */
      { .f_node=5332, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=449, .patterns=0, .final=0, .range=0 },/* 448 */
      { .f_node=5293, .degree=0, .alpha=0x61/* 'a' */, .outgoing=450, .patterns=0, .final=0, .range=0 },/* 449 */
      { .f_node=2762, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=451, .patterns=0, .final=0, .range=0 },/* 450 */
      { .f_node=2793, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=452, .patterns=0, .final=0, .range=0 },/* 451 */
      { .f_node=5304, .degree=0, .alpha=0x2e/* '.' */, .outgoing=453, .patterns=0, .final=0, .range=0 },/* 452 */
      { .f_node=877, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=454, .patterns=0, .final=0, .range=0 },/* 453 */
      { .f_node=1285, .degree=0, .alpha=0x65/* 'e' */, .outgoing=455, .patterns=0, .final=0, .range=0 },/* 454 */
      { .f_node=1286, .degree=0, .alpha=0x00, .outgoing=0, .patterns=46, .final=1, .range=0 },/* 455 */
      { .f_node=2773, .degree=0, .alpha=0x67/* 'g' */, .outgoing=457, .patterns=0, .final=0, .range=0 },/* 456 */
      { .f_node=5159, .degree=0, .alpha=0x75/* 'u' */, .outgoing=458, .patterns=0, .final=0, .range=0 },/* 457 */
      { .f_node=5160, .degree=0, .alpha=0x61/* 'a' */, .outgoing=459, .patterns=0, .final=0, .range=0 },/* 458 */
      { .f_node=2762, .degree=0, .alpha=0x72/* 'r' */, .outgoing=460, .patterns=0, .final=0, .range=0 },/* 459 */
      { .f_node=5596, .degree=0, .alpha=0x64/* 'd' */, .outgoing=461, .patterns=0, .final=0, .range=0 },/* 460 */
      { .f_node=5597, .degree=0, .alpha=0x2e/* '.' */, .outgoing=462, .patterns=0, .final=0, .range=0 },/* 461 */
      { .f_node=772, .degree=0, .alpha=0x63/* 'c' */, .outgoing=463, .patterns=0, .final=0, .range=0 },/* 462 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=464, .patterns=0, .final=0, .range=0 },/* 463 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=465, .patterns=0, .final=0, .range=0 },/* 464 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=47, .final=1, .range=0 },/* 465 */
      { .f_node=1545, .degree=3, .alpha=0x6c, .outgoing=130, .patterns=0, .final=0, .range=1 },/* 466 */
      { .f_node=1581, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=468, .patterns=0, .final=0, .range=0 },/* 467 */
      { .f_node=1582, .degree=0, .alpha=0x75/* 'u' */, .outgoing=469, .patterns=0, .final=0, .range=0 },/* 468 */
      { .f_node=1583, .degree=0, .alpha=0x64/* 'd' */, .outgoing=470, .patterns=0, .final=0, .range=0 },/* 469 */
      { .f_node=1584, .degree=0, .alpha=0x66/* 'f' */, .outgoing=471, .patterns=0, .final=0, .range=0 },/* 470 */
      { .f_node=1585, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=472, .patterns=0, .final=0, .range=0 },/* 471 */
      { .f_node=5487, .degree=0, .alpha=0x61/* 'a' */, .outgoing=473, .patterns=0, .final=0, .range=0 },/* 472 */
      { .f_node=5488, .degree=0, .alpha=0x72/* 'r' */, .outgoing=474, .patterns=0, .final=0, .range=0 },/* 473 */
      { .f_node=5489, .degree=0, .alpha=0x65/* 'e' */, .outgoing=475, .patterns=0, .final=0, .range=0 },/* 474 */
      { .f_node=5490, .degree=0, .alpha=0x2e/* '.' */, .outgoing=476, .patterns=0, .final=0, .range=0 },/* 475 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=477, .patterns=0, .final=0, .range=0 },/* 476 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=478, .patterns=0, .final=0, .range=0 },/* 477 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=479, .patterns=0, .final=0, .range=0 },/* 478 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=48, .final=1, .range=0 },/* 479 */
      { .f_node=5499, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=481, .patterns=0, .final=0, .range=0 },/* 480 */
      { .f_node=3609, .degree=0, .alpha=0x74/* 't' */, .outgoing=482, .patterns=0, .final=0, .range=0 },/* 481 */
      { .f_node=5464, .degree=0, .alpha=0x61/* 'a' */, .outgoing=483, .patterns=0, .final=0, .range=0 },/* 482 */
      { .f_node=2762, .degree=0, .alpha=0x69/* 'i' */, .outgoing=484, .patterns=0, .final=0, .range=0 },/* 483 */
      { .f_node=3324, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=485, .patterns=0, .final=0, .range=0 },/* 484 */
      { .f_node=3492, .degree=0, .alpha=0x65/* 'e' */, .outgoing=486, .patterns=0, .final=0, .range=0 },/* 485 */
      { .f_node=5419, .degree=0, .alpha=0x72/* 'r' */, .outgoing=487, .patterns=0, .final=0, .range=0 },/* 486 */
      { .f_node=5596, .degree=0, .alpha=0x70/* 'p' */, .outgoing=488, .patterns=0, .final=0, .range=0 },/* 487 */
      { .f_node=3983, .degree=0, .alpha=0x69/* 'i' */, .outgoing=489, .patterns=0, .final=0, .range=0 },/* 488 */
      { .f_node=4157, .degree=0, .alpha=0x2e/* '.' */, .outgoing=490, .patterns=0, .final=0, .range=0 },/* 489 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=491, .patterns=0, .final=0, .range=0 },/* 490 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=492, .patterns=0, .final=0, .range=0 },/* 491 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=493, .patterns=0, .final=0, .range=0 },/* 492 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=49, .final=1, .range=0 },/* 493 */
      { .f_node=2151, .degree=5, .alpha=0x69, .outgoing=134, .patterns=0, .final=0, .range=1 },/* 494 */
      { .f_node=786, .degree=0, .alpha=0x67/* 'g' */, .outgoing=496, .patterns=0, .final=0, .range=0 },/* 495 */
      { .f_node=3381, .degree=0, .alpha=0x69/* 'i' */, .outgoing=497, .patterns=0, .final=0, .range=0 },/* 496 */
      { .f_node=5252, .degree=0, .alpha=0x74/* 't' */, .outgoing=498, .patterns=0, .final=0, .range=0 },/* 497 */
      { .f_node=5253, .degree=0, .alpha=0x61/* 'a' */, .outgoing=499, .patterns=0, .final=0, .range=0 },/* 498 */
      { .f_node=2762, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=500, .patterns=0, .final=0, .range=0 },/* 499 */
      { .f_node=2793, .degree=0, .alpha=0x65/* 'e' */, .outgoing=501, .patterns=0, .final=0, .range=0 },/* 500 */
      { .f_node=2794, .degree=0, .alpha=0x2d/* '-' */, .outgoing=502, .patterns=0, .final=0, .range=0 },/* 501 */
      { .f_node=5969, .degree=0, .alpha=0x67/* 'g' */, .outgoing=503, .patterns=0, .final=0, .range=0 },/* 502 */
      { .f_node=5159, .degree=0, .alpha=0x65/* 'e' */, .outgoing=504, .patterns=0, .final=0, .range=0 },/* 503 */
      { .f_node=5278, .degree=0, .alpha=0x73/* 's' */, .outgoing=505, .patterns=0, .final=0, .range=0 },/* 504 */
      { .f_node=4278, .degree=0, .alpha=0x65/* 'e' */, .outgoing=506, .patterns=0, .final=0, .range=0 },/* 505 */
      { .f_node=4302, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=507, .patterns=0, .final=0, .range=0 },/* 506 */
      { .f_node=5293, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=508, .patterns=0, .final=0, .range=0 },/* 507 */
      { .f_node=5293, .degree=0, .alpha=0x73/* 's' */, .outgoing=509, .patterns=0, .final=0, .range=0 },/* 508 */
      { .f_node=4278, .degree=0, .alpha=0x63/* 'c' */, .outgoing=510, .patterns=0, .final=0, .range=0 },/* 509 */
      { .f_node=4279, .degree=0, .alpha=0x68/* 'h' */, .outgoing=511, .patterns=0, .final=0, .range=0 },/* 510 */
      { .f_node=5919, .degree=0, .alpha=0x61/* 'a' */, .outgoing=512, .patterns=0, .final=0, .range=0 },/* 511 */
      { .f_node=2762, .degree=0, .alpha=0x66/* 'f' */, .outgoing=513, .patterns=0, .final=0, .range=0 },/* 512 */
      { .f_node=5332, .degree=0, .alpha=0x74/* 't' */, .outgoing=514, .patterns=0, .final=0, .range=0 },/* 513 */
      { .f_node=4944, .degree=0, .alpha=0x2e/* '.' */, .outgoing=515, .patterns=0, .final=0, .range=0 },/* 514 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=516, .patterns=0, .final=0, .range=0 },/* 515 */
      { .f_node=1545, .degree=0, .alpha=0x68/* 'h' */, .outgoing=517, .patterns=0, .final=0, .range=0 },/* 516 */
      { .f_node=5919, .degree=0, .alpha=0x00, .outgoing=0, .patterns=50, .final=1, .range=0 },/* 517 */
      { .f_node=436, .degree=0, .alpha=0x73/* 's' */, .outgoing=519, .patterns=0, .final=0, .range=0 },/* 518 */
      { .f_node=437, .degree=3, .alpha=0x00, .outgoing=140, .patterns=0, .final=0, .range=0 },/* 519 */
      { .f_node=614, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=521, .patterns=0, .final=0, .range=0 },/* 520 */
      { .f_node=3563, .degree=0, .alpha=0x76/* 'v' */, .outgoing=522, .patterns=0, .final=0, .range=0 },/* 521 */
      { .f_node=5786, .degree=0, .alpha=0x65/* 'e' */, .outgoing=523, .patterns=0, .final=0, .range=0 },/* 522 */
      { .f_node=3733, .degree=0, .alpha=0x72/* 'r' */, .outgoing=524, .patterns=0, .final=0, .range=0 },/* 523 */
      { .f_node=5596, .degree=0, .alpha=0x2d/* '-' */, .outgoing=525, .patterns=0, .final=0, .range=0 },/* 524 */
      { .f_node=5969, .degree=0, .alpha=0x68/* 'h' */, .outgoing=526, .patterns=0, .final=0, .range=0 },/* 525 */
      { .f_node=5919, .degree=0, .alpha=0x74/* 't' */, .outgoing=527, .patterns=0, .final=0, .range=0 },/* 526 */
      { .f_node=4944, .degree=0, .alpha=0x74/* 't' */, .outgoing=528, .patterns=0, .final=0, .range=0 },/* 527 */
      { .f_node=5101, .degree=0, .alpha=0x70/* 'p' */, .outgoing=529, .patterns=0, .final=0, .range=0 },/* 528 */
      { .f_node=3983, .degree=0, .alpha=0x73/* 's' */, .outgoing=530, .patterns=0, .final=0, .range=0 },/* 529 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=531, .patterns=0, .final=0, .range=0 },/* 530 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=532, .patterns=0, .final=0, .range=0 },/* 531 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=533, .patterns=0, .final=0, .range=0 },/* 532 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=534, .patterns=0, .final=0, .range=0 },/* 533 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=51, .final=1, .range=0 },/* 534 */
      { .f_node=3563, .degree=0, .alpha=0x76/* 'v' */, .outgoing=536, .patterns=0, .final=0, .range=0 },/* 535 */
      { .f_node=5786, .degree=0, .alpha=0x65/* 'e' */, .outgoing=537, .patterns=0, .final=0, .range=0 },/* 536 */
      { .f_node=3733, .degree=0, .alpha=0x72/* 'r' */, .outgoing=538, .patterns=0, .final=0, .range=0 },/* 537 */
      { .f_node=5596, .degree=0, .alpha=0x68/* 'h' */, .outgoing=539, .patterns=0, .final=0, .range=0 },/* 538 */
      { .f_node=5919, .degree=0, .alpha=0x74/* 't' */, .outgoing=540, .patterns=0, .final=0, .range=0 },/* 539 */
      { .f_node=4944, .degree=0, .alpha=0x74/* 't' */, .outgoing=541, .patterns=0, .final=0, .range=0 },/* 540 */
      { .f_node=5101, .degree=0, .alpha=0x70/* 'p' */, .outgoing=542, .patterns=0, .final=0, .range=0 },/* 541 */
      { .f_node=3983, .degree=0, .alpha=0x73/* 's' */, .outgoing=543, .patterns=0, .final=0, .range=0 },/* 542 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=544, .patterns=0, .final=0, .range=0 },/* 543 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=545, .patterns=0, .final=0, .range=0 },/* 544 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=546, .patterns=0, .final=0, .range=0 },/* 545 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=547, .patterns=0, .final=0, .range=0 },/* 546 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=52, .final=1, .range=0 },/* 547 */
      { .f_node=4347, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=549, .patterns=0, .final=0, .range=0 },/* 548 */
      { .f_node=5953, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=550, .patterns=0, .final=0, .range=0 },/* 549 */
      { .f_node=4708, .degree=0, .alpha=0x65/* 'e' */, .outgoing=551, .patterns=0, .final=0, .range=0 },/* 550 */
      { .f_node=4751, .degree=0, .alpha=0x2e/* '.' */, .outgoing=552, .patterns=0, .final=0, .range=0 },/* 551 */
      { .f_node=877, .degree=0, .alpha=0x64/* 'd' */, .outgoing=553, .patterns=0, .final=0, .range=0 },/* 552 */
      { .f_node=2151, .degree=0, .alpha=0x65/* 'e' */, .outgoing=554, .patterns=0, .final=0, .range=0 },/* 553 */
      { .f_node=2152, .degree=0, .alpha=0x00, .outgoing=0, .patterns=53, .final=1, .range=0 },/* 554 */
      { .f_node=763, .degree=0, .alpha=0x72/* 'r' */, .outgoing=556, .patterns=0, .final=0, .range=0 },/* 555 */
      { .f_node=764, .degree=0, .alpha=0x79/* 'y' */, .outgoing=557, .patterns=0, .final=0, .range=0 },/* 556 */
      { .f_node=765, .degree=0, .alpha=0x70/* 'p' */, .outgoing=558, .patterns=0, .final=0, .range=0 },/* 557 */
      { .f_node=766, .degree=0, .alpha=0x74/* 't' */, .outgoing=559, .patterns=0, .final=0, .range=0 },/* 558 */
      { .f_node=767, .degree=0, .alpha=0x2e/* '.' */, .outgoing=560, .patterns=0, .final=0, .range=0 },/* 559 */
      { .f_node=768, .degree=0, .alpha=0x63/* 'c' */, .outgoing=561, .patterns=0, .final=0, .range=0 },/* 560 */
      { .f_node=1545, .degree=0, .alpha=0x61/* 'a' */, .outgoing=562, .patterns=0, .final=0, .range=0 },/* 561 */
      { .f_node=5472, .degree=0, .alpha=0x00, .outgoing=0, .patterns=54, .final=1, .range=0 },/* 562 */
      { .f_node=1763, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=564, .patterns=0, .final=0, .range=0 },/* 563 */
      { .f_node=1811, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=565, .patterns=0, .final=0, .range=0 },/* 564 */
      { .f_node=1812, .degree=0, .alpha=0x67/* 'g' */, .outgoing=566, .patterns=0, .final=0, .range=0 },/* 565 */
      { .f_node=1813, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=567, .patterns=0, .final=0, .range=0 },/* 566 */
      { .f_node=1814, .degree=0, .alpha=0x65/* 'e' */, .outgoing=568, .patterns=0, .final=0, .range=0 },/* 567 */
      { .f_node=1815, .degree=0, .alpha=0x2e/* '.' */, .outgoing=569, .patterns=55, .final=1, .range=0 },/* 568 */
      { .f_node=1853, .degree=0, .alpha=0x63/* 'c' */, .outgoing=570, .patterns=56, .final=1, .range=0 },/* 569 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=571, .patterns=0, .final=0, .range=0 },/* 570 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=572, .patterns=0, .final=0, .range=0 },/* 571 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=58, .final=1, .range=0 },/* 572 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=574, .patterns=0, .final=0, .range=0 },/* 573 */
      { .f_node=2560, .degree=0, .alpha=0x78/* 'x' */, .outgoing=575, .patterns=0, .final=0, .range=0 },/* 574 */
      { .f_node=1, .degree=0, .alpha=0x74/* 't' */, .outgoing=576, .patterns=0, .final=0, .range=0 },/* 575 */
      { .f_node=4944, .degree=0, .alpha=0x64/* 'd' */, .outgoing=577, .patterns=0, .final=0, .range=0 },/* 576 */
      { .f_node=4945, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=578, .patterns=0, .final=0, .range=0 },/* 577 */
      { .f_node=436, .degree=0, .alpha=0x73/* 's' */, .outgoing=579, .patterns=0, .final=0, .range=0 },/* 578 */
      { .f_node=437, .degree=0, .alpha=0x2e/* '.' */, .outgoing=580, .patterns=0, .final=0, .range=0 },/* 579 */
      { .f_node=438, .degree=0, .alpha=0x69/* 'i' */, .outgoing=581, .patterns=0, .final=0, .range=0 },/* 580 */
      { .f_node=1881, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=582, .patterns=0, .final=0, .range=0 },/* 581 */
      { .f_node=3515, .degree=0, .alpha=0x00, .outgoing=0, .patterns=59, .final=1, .range=0 },/* 582 */
      { .f_node=2533, .degree=0, .alpha=0x75/* 'u' */, .outgoing=584, .patterns=0, .final=0, .range=0 },/* 583 */
      { .f_node=5858, .degree=0, .alpha=0x61/* 'a' */, .outgoing=585, .patterns=0, .final=0, .range=0 },/* 584 */
      { .f_node=2762, .degree=0, .alpha=0x64/* 'd' */, .outgoing=586, .patterns=0, .final=0, .range=0 },/* 585 */
      { .f_node=2773, .degree=0, .alpha=0x39/* '9' */, .outgoing=587, .patterns=0, .final=0, .range=0 },/* 586 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=588, .patterns=0, .final=0, .range=0 },/* 587 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=589, .patterns=0, .final=0, .range=0 },/* 588 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=590, .patterns=0, .final=0, .range=0 },/* 589 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=591, .patterns=0, .final=0, .range=0 },/* 590 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=60, .final=1, .range=0 },/* 591 */
      { .f_node=2664, .degree=0, .alpha=0x75/* 'u' */, .outgoing=593, .patterns=0, .final=0, .range=0 },/* 592 */
      { .f_node=5630, .degree=0, .alpha=0x62/* 'b' */, .outgoing=594, .patterns=0, .final=0, .range=0 },/* 593 */
      { .f_node=5859, .degree=0, .alpha=0x79/* 'y' */, .outgoing=595, .patterns=0, .final=0, .range=0 },/* 594 */
      { .f_node=4253, .degree=0, .alpha=0x66/* 'f' */, .outgoing=596, .patterns=0, .final=0, .range=0 },/* 595 */
      { .f_node=5332, .degree=0, .alpha=0x69/* 'i' */, .outgoing=597, .patterns=0, .final=0, .range=0 },/* 596 */
      { .f_node=3324, .degree=0, .alpha=0x73/* 's' */, .outgoing=598, .patterns=0, .final=0, .range=0 },/* 597 */
      { .f_node=4278, .degree=0, .alpha=0x68/* 'h' */, .outgoing=599, .patterns=0, .final=0, .range=0 },/* 598 */
      { .f_node=4347, .degree=0, .alpha=0x2e/* '.' */, .outgoing=600, .patterns=0, .final=0, .range=0 },/* 599 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=601, .patterns=0, .final=0, .range=0 },/* 600 */
      { .f_node=1545, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=602, .patterns=0, .final=0, .range=0 },/* 601 */
      { .f_node=1594, .degree=0, .alpha=0x00, .outgoing=0, .patterns=61, .final=1, .range=0 },/* 602 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=604, .patterns=0, .final=0, .range=0 },/* 603 */
      { .f_node=877, .degree=0, .alpha=0x71/* 'q' */, .outgoing=605, .patterns=0, .final=0, .range=0 },/* 604 */
      { .f_node=2533, .degree=0, .alpha=0x75/* 'u' */, .outgoing=606, .patterns=0, .final=0, .range=0 },/* 605 */
      { .f_node=5858, .degree=0, .alpha=0x61/* 'a' */, .outgoing=607, .patterns=0, .final=0, .range=0 },/* 606 */
      { .f_node=2762, .degree=0, .alpha=0x64/* 'd' */, .outgoing=608, .patterns=0, .final=0, .range=0 },/* 607 */
      { .f_node=2773, .degree=0, .alpha=0x39/* '9' */, .outgoing=609, .patterns=0, .final=0, .range=0 },/* 608 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=610, .patterns=0, .final=0, .range=0 },/* 609 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=611, .patterns=0, .final=0, .range=0 },/* 610 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=612, .patterns=0, .final=0, .range=0 },/* 611 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=613, .patterns=0, .final=0, .range=0 },/* 612 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=62, .final=1, .range=0 },/* 613 */
      { .f_node=5969, .degree=8, .alpha=0x66, .outgoing=144, .patterns=0, .final=0, .range=1 },/* 614 */
      { .f_node=5332, .degree=0, .alpha=0x61/* 'a' */, .outgoing=616, .patterns=0, .final=0, .range=0 },/* 615 */
      { .f_node=5333, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=617, .patterns=0, .final=0, .range=0 },/* 616 */
      { .f_node=2808, .degree=0, .alpha=0x69/* 'i' */, .outgoing=618, .patterns=0, .final=0, .range=0 },/* 617 */
      { .f_node=4771, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=619, .patterns=0, .final=0, .range=0 },/* 618 */
      { .f_node=5293, .degree=0, .alpha=0x79/* 'y' */, .outgoing=620, .patterns=0, .final=0, .range=0 },/* 619 */
      { .f_node=5800, .degree=0, .alpha=0x2e/* '.' */, .outgoing=621, .patterns=0, .final=0, .range=0 },/* 620 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=622, .patterns=0, .final=0, .range=0 },/* 621 */
      { .f_node=878, .degree=0, .alpha=0x64/* 'd' */, .outgoing=623, .patterns=0, .final=0, .range=0 },/* 622 */
      { .f_node=2773, .degree=0, .alpha=0x67/* 'g' */, .outgoing=624, .patterns=0, .final=0, .range=0 },/* 623 */
      { .f_node=5159, .degree=0, .alpha=0x75/* 'u' */, .outgoing=625, .patterns=0, .final=0, .range=0 },/* 624 */
      { .f_node=5160, .degree=0, .alpha=0x61/* 'a' */, .outgoing=626, .patterns=0, .final=0, .range=0 },/* 625 */
      { .f_node=2762, .degree=0, .alpha=0x72/* 'r' */, .outgoing=627, .patterns=0, .final=0, .range=0 },/* 626 */
      { .f_node=5596, .degree=0, .alpha=0x64/* 'd' */, .outgoing=628, .patterns=0, .final=0, .range=0 },/* 627 */
      { .f_node=5597, .degree=0, .alpha=0x2e/* '.' */, .outgoing=629, .patterns=0, .final=0, .range=0 },/* 628 */
      { .f_node=772, .degree=0, .alpha=0x63/* 'c' */, .outgoing=630, .patterns=0, .final=0, .range=0 },/* 629 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=631, .patterns=0, .final=0, .range=0 },/* 630 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=632, .patterns=0, .final=0, .range=0 },/* 631 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=63, .final=1, .range=0 },/* 632 */
      { .f_node=5418, .degree=0, .alpha=0x79/* 'y' */, .outgoing=634, .patterns=0, .final=0, .range=0 },/* 633 */
      { .f_node=5800, .degree=0, .alpha=0x63/* 'c' */, .outgoing=635, .patterns=0, .final=0, .range=0 },/* 634 */
      { .f_node=5471, .degree=0, .alpha=0x2e/* '.' */, .outgoing=636, .patterns=0, .final=0, .range=0 },/* 635 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=637, .patterns=0, .final=0, .range=0 },/* 636 */
      { .f_node=878, .degree=0, .alpha=0x61/* 'a' */, .outgoing=638, .patterns=0, .final=0, .range=0 },/* 637 */
      { .f_node=2763, .degree=0, .alpha=0x66/* 'f' */, .outgoing=639, .patterns=0, .final=0, .range=0 },/* 638 */
      { .f_node=5332, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=640, .patterns=0, .final=0, .range=0 },/* 639 */
      { .f_node=5293, .degree=0, .alpha=0x61/* 'a' */, .outgoing=641, .patterns=0, .final=0, .range=0 },/* 640 */
      { .f_node=2762, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=642, .patterns=0, .final=0, .range=0 },/* 641 */
      { .f_node=2793, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=643, .patterns=0, .final=0, .range=0 },/* 642 */
      { .f_node=5304, .degree=0, .alpha=0x2e/* '.' */, .outgoing=644, .patterns=0, .final=0, .range=0 },/* 643 */
      { .f_node=877, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=645, .patterns=0, .final=0, .range=0 },/* 644 */
      { .f_node=1285, .degree=0, .alpha=0x65/* 'e' */, .outgoing=646, .patterns=0, .final=0, .range=0 },/* 645 */
      { .f_node=1286, .degree=0, .alpha=0x00, .outgoing=0, .patterns=64, .final=1, .range=0 },/* 646 */
      { .f_node=2710, .degree=3, .alpha=0x2e, .outgoing=153, .patterns=0, .final=0, .range=1 },/* 647 */
      { .f_node=877, .degree=0, .alpha=0x64/* 'd' */, .outgoing=649, .patterns=0, .final=0, .range=0 },/* 648 */
      { .f_node=2151, .degree=5, .alpha=0x69, .outgoing=157, .patterns=0, .final=0, .range=1 },/* 649 */
      { .f_node=786, .degree=0, .alpha=0x67/* 'g' */, .outgoing=651, .patterns=0, .final=0, .range=0 },/* 650 */
      { .f_node=3381, .degree=0, .alpha=0x69/* 'i' */, .outgoing=652, .patterns=0, .final=0, .range=0 },/* 651 */
      { .f_node=5252, .degree=0, .alpha=0x74/* 't' */, .outgoing=653, .patterns=0, .final=0, .range=0 },/* 652 */
      { .f_node=5253, .degree=0, .alpha=0x61/* 'a' */, .outgoing=654, .patterns=0, .final=0, .range=0 },/* 653 */
      { .f_node=2762, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=655, .patterns=0, .final=0, .range=0 },/* 654 */
      { .f_node=2793, .degree=0, .alpha=0x65/* 'e' */, .outgoing=656, .patterns=0, .final=0, .range=0 },/* 655 */
      { .f_node=2794, .degree=0, .alpha=0x2d/* '-' */, .outgoing=657, .patterns=0, .final=0, .range=0 },/* 656 */
      { .f_node=5969, .degree=0, .alpha=0x67/* 'g' */, .outgoing=658, .patterns=0, .final=0, .range=0 },/* 657 */
      { .f_node=5159, .degree=0, .alpha=0x65/* 'e' */, .outgoing=659, .patterns=0, .final=0, .range=0 },/* 658 */
      { .f_node=5278, .degree=0, .alpha=0x73/* 's' */, .outgoing=660, .patterns=0, .final=0, .range=0 },/* 659 */
      { .f_node=4278, .degree=0, .alpha=0x65/* 'e' */, .outgoing=661, .patterns=0, .final=0, .range=0 },/* 660 */
      { .f_node=4302, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=662, .patterns=0, .final=0, .range=0 },/* 661 */
      { .f_node=5293, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=663, .patterns=0, .final=0, .range=0 },/* 662 */
      { .f_node=5293, .degree=0, .alpha=0x73/* 's' */, .outgoing=664, .patterns=0, .final=0, .range=0 },/* 663 */
      { .f_node=4278, .degree=0, .alpha=0x63/* 'c' */, .outgoing=665, .patterns=0, .final=0, .range=0 },/* 664 */
      { .f_node=4279, .degree=0, .alpha=0x68/* 'h' */, .outgoing=666, .patterns=0, .final=0, .range=0 },/* 665 */
      { .f_node=5919, .degree=0, .alpha=0x61/* 'a' */, .outgoing=667, .patterns=0, .final=0, .range=0 },/* 666 */
      { .f_node=2762, .degree=0, .alpha=0x66/* 'f' */, .outgoing=668, .patterns=0, .final=0, .range=0 },/* 667 */
      { .f_node=5332, .degree=0, .alpha=0x74/* 't' */, .outgoing=669, .patterns=0, .final=0, .range=0 },/* 668 */
      { .f_node=4944, .degree=0, .alpha=0x2e/* '.' */, .outgoing=670, .patterns=0, .final=0, .range=0 },/* 669 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=671, .patterns=0, .final=0, .range=0 },/* 670 */
      { .f_node=1545, .degree=0, .alpha=0x68/* 'h' */, .outgoing=672, .patterns=0, .final=0, .range=0 },/* 671 */
      { .f_node=5919, .degree=0, .alpha=0x00, .outgoing=0, .patterns=65, .final=1, .range=0 },/* 672 */
      { .f_node=436, .degree=0, .alpha=0x73/* 's' */, .outgoing=674, .patterns=0, .final=0, .range=0 },/* 673 */
      { .f_node=437, .degree=0, .alpha=0x63/* 'c' */, .outgoing=675, .patterns=0, .final=0, .range=0 },/* 674 */
      { .f_node=763, .degree=0, .alpha=0x72/* 'r' */, .outgoing=676, .patterns=0, .final=0, .range=0 },/* 675 */
      { .f_node=764, .degree=0, .alpha=0x79/* 'y' */, .outgoing=677, .patterns=0, .final=0, .range=0 },/* 676 */
      { .f_node=765, .degree=0, .alpha=0x70/* 'p' */, .outgoing=678, .patterns=0, .final=0, .range=0 },/* 677 */
      { .f_node=766, .degree=0, .alpha=0x74/* 't' */, .outgoing=679, .patterns=0, .final=0, .range=0 },/* 678 */
      { .f_node=767, .degree=0, .alpha=0x2e/* '.' */, .outgoing=680, .patterns=0, .final=0, .range=0 },/* 679 */
      { .f_node=768, .degree=0, .alpha=0x63/* 'c' */, .outgoing=681, .patterns=0, .final=0, .range=0 },/* 680 */
      { .f_node=1545, .degree=0, .alpha=0x61/* 'a' */, .outgoing=682, .patterns=0, .final=0, .range=0 },/* 681 */
      { .f_node=5472, .degree=0, .alpha=0x00, .outgoing=0, .patterns=66, .final=1, .range=0 },/* 682 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=684, .patterns=0, .final=0, .range=0 },/* 683 */
      { .f_node=877, .degree=0, .alpha=0x71/* 'q' */, .outgoing=685, .patterns=0, .final=0, .range=0 },/* 684 */
      { .f_node=2533, .degree=0, .alpha=0x75/* 'u' */, .outgoing=686, .patterns=0, .final=0, .range=0 },/* 685 */
      { .f_node=5858, .degree=0, .alpha=0x61/* 'a' */, .outgoing=687, .patterns=0, .final=0, .range=0 },/* 686 */
      { .f_node=2762, .degree=0, .alpha=0x64/* 'd' */, .outgoing=688, .patterns=0, .final=0, .range=0 },/* 687 */
      { .f_node=2773, .degree=0, .alpha=0x39/* '9' */, .outgoing=689, .patterns=0, .final=0, .range=0 },/* 688 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=690, .patterns=0, .final=0, .range=0 },/* 689 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=691, .patterns=0, .final=0, .range=0 },/* 690 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=692, .patterns=0, .final=0, .range=0 },/* 691 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=693, .patterns=0, .final=0, .range=0 },/* 692 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=67, .final=1, .range=0 },/* 693 */
      { .f_node=2710, .degree=0, .alpha=0x2e/* '.' */, .outgoing=695, .patterns=0, .final=0, .range=0 },/* 694 */
      { .f_node=877, .degree=0, .alpha=0x71/* 'q' */, .outgoing=696, .patterns=0, .final=0, .range=0 },/* 695 */
      { .f_node=2533, .degree=0, .alpha=0x75/* 'u' */, .outgoing=697, .patterns=0, .final=0, .range=0 },/* 696 */
      { .f_node=5858, .degree=0, .alpha=0x61/* 'a' */, .outgoing=698, .patterns=0, .final=0, .range=0 },/* 697 */
      { .f_node=2762, .degree=0, .alpha=0x64/* 'd' */, .outgoing=699, .patterns=0, .final=0, .range=0 },/* 698 */
      { .f_node=2773, .degree=0, .alpha=0x39/* '9' */, .outgoing=700, .patterns=0, .final=0, .range=0 },/* 699 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=701, .patterns=0, .final=0, .range=0 },/* 700 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=702, .patterns=0, .final=0, .range=0 },/* 701 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=703, .patterns=0, .final=0, .range=0 },/* 702 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=704, .patterns=0, .final=0, .range=0 },/* 703 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=68, .final=1, .range=0 },/* 704 */
      { .f_node=4467, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=706, .patterns=0, .final=0, .range=0 },/* 705 */
      { .f_node=5293, .degree=0, .alpha=0x2e/* '.' */, .outgoing=707, .patterns=0, .final=0, .range=0 },/* 706 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=708, .patterns=0, .final=0, .range=0 },/* 707 */
      { .f_node=878, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=709, .patterns=0, .final=0, .range=0 },/* 708 */
      { .f_node=2793, .degree=0, .alpha=0x65/* 'e' */, .outgoing=710, .patterns=0, .final=0, .range=0 },/* 709 */
      { .f_node=2794, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=711, .patterns=0, .final=0, .range=0 },/* 710 */
      { .f_node=1, .degree=0, .alpha=0x62/* 'b' */, .outgoing=712, .patterns=0, .final=0, .range=0 },/* 711 */
      { .f_node=4204, .degree=0, .alpha=0x65/* 'e' */, .outgoing=713, .patterns=0, .final=0, .range=0 },/* 712 */
      { .f_node=3733, .degree=0, .alpha=0x72/* 'r' */, .outgoing=714, .patterns=0, .final=0, .range=0 },/* 713 */
      { .f_node=5596, .degree=0, .alpha=0x67/* 'g' */, .outgoing=715, .patterns=0, .final=0, .range=0 },/* 714 */
      { .f_node=5159, .degree=0, .alpha=0x2e/* '.' */, .outgoing=716, .patterns=0, .final=0, .range=0 },/* 715 */
      { .f_node=5239, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=717, .patterns=0, .final=0, .range=0 },/* 716 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=718, .patterns=0, .final=0, .range=0 },/* 717 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=719, .patterns=0, .final=0, .range=0 },/* 718 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=69, .final=1, .range=0 },/* 719 */
      { .f_node=4302, .degree=0, .alpha=0x73/* 's' */, .outgoing=721, .patterns=0, .final=0, .range=0 },/* 720 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=722, .patterns=0, .final=0, .range=0 },/* 721 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=723, .patterns=0, .final=0, .range=0 },/* 722 */
      { .f_node=878, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=724, .patterns=0, .final=0, .range=0 },/* 723 */
      { .f_node=2793, .degree=0, .alpha=0x65/* 'e' */, .outgoing=725, .patterns=0, .final=0, .range=0 },/* 724 */
      { .f_node=2794, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=726, .patterns=0, .final=0, .range=0 },/* 725 */
      { .f_node=1, .degree=0, .alpha=0x62/* 'b' */, .outgoing=727, .patterns=0, .final=0, .range=0 },/* 726 */
      { .f_node=4204, .degree=0, .alpha=0x65/* 'e' */, .outgoing=728, .patterns=0, .final=0, .range=0 },/* 727 */
      { .f_node=3733, .degree=0, .alpha=0x72/* 'r' */, .outgoing=729, .patterns=0, .final=0, .range=0 },/* 728 */
      { .f_node=5596, .degree=0, .alpha=0x67/* 'g' */, .outgoing=730, .patterns=0, .final=0, .range=0 },/* 729 */
      { .f_node=5159, .degree=0, .alpha=0x2e/* '.' */, .outgoing=731, .patterns=0, .final=0, .range=0 },/* 730 */
      { .f_node=5239, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=732, .patterns=0, .final=0, .range=0 },/* 731 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=733, .patterns=0, .final=0, .range=0 },/* 732 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=734, .patterns=0, .final=0, .range=0 },/* 733 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=70, .final=1, .range=0 },/* 734 */
      { .f_node=4278, .degree=0, .alpha=0x65/* 'e' */, .outgoing=736, .patterns=0, .final=0, .range=0 },/* 735 */
      { .f_node=4302, .degree=0, .alpha=0x2e/* '.' */, .outgoing=737, .patterns=0, .final=0, .range=0 },/* 736 */
      { .f_node=4303, .degree=0, .alpha=0x61/* 'a' */, .outgoing=738, .patterns=0, .final=0, .range=0 },/* 737 */
      { .f_node=878, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=739, .patterns=0, .final=0, .range=0 },/* 738 */
      { .f_node=2793, .degree=0, .alpha=0x65/* 'e' */, .outgoing=740, .patterns=0, .final=0, .range=0 },/* 739 */
      { .f_node=2794, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=741, .patterns=0, .final=0, .range=0 },/* 740 */
      { .f_node=1, .degree=0, .alpha=0x62/* 'b' */, .outgoing=742, .patterns=0, .final=0, .range=0 },/* 741 */
      { .f_node=4204, .degree=0, .alpha=0x65/* 'e' */, .outgoing=743, .patterns=0, .final=0, .range=0 },/* 742 */
      { .f_node=3733, .degree=0, .alpha=0x72/* 'r' */, .outgoing=744, .patterns=0, .final=0, .range=0 },/* 743 */
      { .f_node=5596, .degree=0, .alpha=0x67/* 'g' */, .outgoing=745, .patterns=0, .final=0, .range=0 },/* 744 */
      { .f_node=5159, .degree=0, .alpha=0x2e/* '.' */, .outgoing=746, .patterns=0, .final=0, .range=0 },/* 745 */
      { .f_node=5239, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=747, .patterns=0, .final=0, .range=0 },/* 746 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=748, .patterns=0, .final=0, .range=0 },/* 747 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=749, .patterns=0, .final=0, .range=0 },/* 748 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=71, .final=1, .range=0 },/* 749 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=751, .patterns=0, .final=0, .range=0 },/* 750 */
      { .f_node=877, .degree=0, .alpha=0x64/* 'd' */, .outgoing=752, .patterns=0, .final=0, .range=0 },/* 751 */
      { .f_node=2151, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=753, .patterns=0, .final=0, .range=0 },/* 752 */
      { .f_node=436, .degree=0, .alpha=0x73/* 's' */, .outgoing=754, .patterns=0, .final=0, .range=0 },/* 753 */
      { .f_node=437, .degree=0, .alpha=0x63/* 'c' */, .outgoing=755, .patterns=0, .final=0, .range=0 },/* 754 */
      { .f_node=763, .degree=0, .alpha=0x72/* 'r' */, .outgoing=756, .patterns=0, .final=0, .range=0 },/* 755 */
      { .f_node=764, .degree=0, .alpha=0x79/* 'y' */, .outgoing=757, .patterns=0, .final=0, .range=0 },/* 756 */
      { .f_node=765, .degree=0, .alpha=0x70/* 'p' */, .outgoing=758, .patterns=0, .final=0, .range=0 },/* 757 */
      { .f_node=766, .degree=0, .alpha=0x74/* 't' */, .outgoing=759, .patterns=0, .final=0, .range=0 },/* 758 */
      { .f_node=767, .degree=0, .alpha=0x2e/* '.' */, .outgoing=760, .patterns=0, .final=0, .range=0 },/* 759 */
      { .f_node=768, .degree=0, .alpha=0x63/* 'c' */, .outgoing=761, .patterns=0, .final=0, .range=0 },/* 760 */
      { .f_node=1545, .degree=0, .alpha=0x61/* 'a' */, .outgoing=762, .patterns=0, .final=0, .range=0 },/* 761 */
      { .f_node=5472, .degree=0, .alpha=0x00, .outgoing=0, .patterns=72, .final=1, .range=0 },/* 762 */
      { .f_node=4279, .degree=0, .alpha=0x72/* 'r' */, .outgoing=764, .patterns=0, .final=0, .range=0 },/* 763 */
      { .f_node=5530, .degree=0, .alpha=0x79/* 'y' */, .outgoing=765, .patterns=0, .final=0, .range=0 },/* 764 */
      { .f_node=5800, .degree=0, .alpha=0x70/* 'p' */, .outgoing=766, .patterns=0, .final=0, .range=0 },/* 765 */
      { .f_node=3983, .degree=0, .alpha=0x74/* 't' */, .outgoing=767, .patterns=0, .final=0, .range=0 },/* 766 */
      { .f_node=4944, .degree=0, .alpha=0x2e/* '.' */, .outgoing=768, .patterns=0, .final=0, .range=0 },/* 767 */
      { .f_node=877, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=769, .patterns=0, .final=0, .range=0 },/* 768 */
      { .f_node=2338, .degree=0, .alpha=0x72/* 'r' */, .outgoing=770, .patterns=0, .final=0, .range=0 },/* 769 */
      { .f_node=3669, .degree=0, .alpha=0x67/* 'g' */, .outgoing=771, .patterns=0, .final=0, .range=0 },/* 770 */
      { .f_node=5159, .degree=0, .alpha=0x00, .outgoing=0, .patterns=73, .final=1, .range=0 },/* 771 */
      { .f_node=877, .degree=0, .alpha=0x64/* 'd' */, .outgoing=773, .patterns=0, .final=0, .range=0 },/* 772 */
      { .f_node=2151, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=774, .patterns=0, .final=0, .range=0 },/* 773 */
      { .f_node=2169, .degree=0, .alpha=0x63/* 'c' */, .outgoing=775, .patterns=0, .final=0, .range=0 },/* 774 */
      { .f_node=86, .degree=0, .alpha=0x73/* 's' */, .outgoing=776, .patterns=0, .final=0, .range=0 },/* 775 */
      { .f_node=87, .degree=0, .alpha=0x2e/* '.' */, .outgoing=777, .patterns=0, .final=0, .range=0 },/* 776 */
      { .f_node=88, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=778, .patterns=0, .final=0, .range=0 },/* 777 */
      { .f_node=1700, .degree=0, .alpha=0x69/* 'i' */, .outgoing=779, .patterns=0, .final=0, .range=0 },/* 778 */
      { .f_node=1745, .degree=0, .alpha=0x76/* 'v' */, .outgoing=780, .patterns=0, .final=0, .range=0 },/* 779 */
      { .f_node=5786, .degree=0, .alpha=0x65/* 'e' */, .outgoing=781, .patterns=0, .final=0, .range=0 },/* 780 */
      { .f_node=3733, .degree=0, .alpha=0x2e/* '.' */, .outgoing=782, .patterns=0, .final=0, .range=0 },/* 781 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=783, .patterns=0, .final=0, .range=0 },/* 782 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=784, .patterns=0, .final=0, .range=0 },/* 783 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=785, .patterns=0, .final=0, .range=0 },/* 784 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=74, .final=1, .range=0 },/* 785 */
      { .f_node=3324, .degree=0, .alpha=0x73/* 's' */, .outgoing=787, .patterns=0, .final=0, .range=0 },/* 786 */
      { .f_node=4278, .degree=11, .alpha=0x63, .outgoing=163, .patterns=0, .final=0, .range=1 },/* 787 */
      { .f_node=4279, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=789, .patterns=0, .final=0, .range=0 },/* 788 */
      { .f_node=5499, .degree=0, .alpha=0x72/* 'r' */, .outgoing=790, .patterns=0, .final=0, .range=0 },/* 789 */
      { .f_node=3669, .degree=0, .alpha=0x64/* 'd' */, .outgoing=791, .patterns=0, .final=0, .range=0 },/* 790 */
      { .f_node=5597, .degree=1, .alpha=0x00, .outgoing=175, .patterns=0, .final=0, .range=0 },/* 791 */
      { .f_node=413, .degree=0, .alpha=0x70/* 'p' */, .outgoing=793, .patterns=0, .final=0, .range=0 },/* 792 */
      { .f_node=2891, .degree=0, .alpha=0x70/* 'p' */, .outgoing=794, .patterns=0, .final=0, .range=0 },/* 793 */
      { .f_node=2892, .degree=0, .alpha=0x2e/* '.' */, .outgoing=795, .patterns=0, .final=0, .range=0 },/* 794 */
      { .f_node=877, .degree=11, .alpha=0x63, .outgoing=177, .patterns=0, .final=0, .range=1 },/* 795 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=797, .patterns=0, .final=0, .range=0 },/* 796 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=798, .patterns=0, .final=0, .range=0 },/* 797 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=75, .final=1, .range=0 },/* 798 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=800, .patterns=0, .final=0, .range=0 },/* 799 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=801, .patterns=0, .final=0, .range=0 },/* 800 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=76, .final=1, .range=0 },/* 801 */
      { .f_node=772, .degree=10, .alpha=0x63, .outgoing=189, .patterns=0, .final=0, .range=1 },/* 802 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=804, .patterns=0, .final=0, .range=0 },/* 803 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=805, .patterns=0, .final=0, .range=0 },/* 804 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=77, .final=1, .range=0 },/* 805 */
      { .f_node=1763, .degree=0, .alpha=0x67/* 'g' */, .outgoing=807, .patterns=0, .final=0, .range=0 },/* 806 */
      { .f_node=5231, .degree=0, .alpha=0x00, .outgoing=0, .patterns=78, .final=1, .range=0 },/* 807 */
      { .f_node=1285, .degree=0, .alpha=0x65/* 'e' */, .outgoing=809, .patterns=0, .final=0, .range=0 },/* 808 */
      { .f_node=1286, .degree=0, .alpha=0x64/* 'd' */, .outgoing=810, .patterns=0, .final=0, .range=0 },/* 809 */
      { .f_node=1287, .degree=0, .alpha=0x69/* 'i' */, .outgoing=811, .patterns=0, .final=0, .range=0 },/* 810 */
      { .f_node=1288, .degree=0, .alpha=0x61/* 'a' */, .outgoing=812, .patterns=0, .final=0, .range=0 },/* 811 */
      { .f_node=1289, .degree=0, .alpha=0x00, .outgoing=0, .patterns=79, .final=1, .range=0 },/* 812 */
      { .f_node=4467, .degree=0, .alpha=0x65/* 'e' */, .outgoing=814, .patterns=0, .final=0, .range=0 },/* 813 */
      { .f_node=5419, .degree=0, .alpha=0x79/* 'y' */, .outgoing=815, .patterns=0, .final=0, .range=0 },/* 814 */
      { .f_node=5800, .degree=1, .alpha=0x00, .outgoing=200, .patterns=0, .final=0, .range=0 },/* 815 */
      { .f_node=5969, .degree=0, .alpha=0x70/* 'p' */, .outgoing=817, .patterns=0, .final=0, .range=0 },/* 816 */
      { .f_node=3983, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=818, .patterns=0, .final=0, .range=0 },/* 817 */
      { .f_node=3997, .degree=0, .alpha=0x75/* 'u' */, .outgoing=819, .patterns=0, .final=0, .range=0 },/* 818 */
      { .f_node=3998, .degree=0, .alpha=0x73/* 's' */, .outgoing=820, .patterns=0, .final=0, .range=0 },/* 819 */
      { .f_node=3999, .degree=0, .alpha=0x2e/* '.' */, .outgoing=821, .patterns=0, .final=0, .range=0 },/* 820 */
      { .f_node=4000, .degree=0, .alpha=0x63/* 'c' */, .outgoing=822, .patterns=0, .final=0, .range=0 },/* 821 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=823, .patterns=0, .final=0, .range=0 },/* 822 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=824, .patterns=0, .final=0, .range=0 },/* 823 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=80, .final=1, .range=0 },/* 824 */
      { .f_node=3983, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=826, .patterns=0, .final=0, .range=0 },/* 825 */
      { .f_node=3997, .degree=0, .alpha=0x75/* 'u' */, .outgoing=827, .patterns=0, .final=0, .range=0 },/* 826 */
      { .f_node=3998, .degree=0, .alpha=0x73/* 's' */, .outgoing=828, .patterns=0, .final=0, .range=0 },/* 827 */
      { .f_node=3999, .degree=0, .alpha=0x2e/* '.' */, .outgoing=829, .patterns=0, .final=0, .range=0 },/* 828 */
      { .f_node=4000, .degree=11, .alpha=0x63, .outgoing=202, .patterns=0, .final=0, .range=1 },/* 829 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=831, .patterns=0, .final=0, .range=0 },/* 830 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=832, .patterns=0, .final=0, .range=0 },/* 831 */
      { .f_node=5520, .degree=0, .alpha=0x2e/* '.' */, .outgoing=833, .patterns=81, .final=1, .range=0 },/* 832 */
      { .f_node=877, .degree=0, .alpha=0x73/* 's' */, .outgoing=834, .patterns=0, .final=0, .range=0 },/* 833 */
      { .f_node=996, .degree=0, .alpha=0x73/* 's' */, .outgoing=835, .patterns=0, .final=0, .range=0 },/* 834 */
      { .f_node=4278, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=836, .patterns=0, .final=0, .range=0 },/* 835 */
      { .f_node=4421, .degree=0, .alpha=0x2e/* '.' */, .outgoing=837, .patterns=0, .final=0, .range=0 },/* 836 */
      { .f_node=877, .degree=0, .alpha=0x73/* 's' */, .outgoing=838, .patterns=0, .final=0, .range=0 },/* 837 */
      { .f_node=996, .degree=0, .alpha=0x63/* 'c' */, .outgoing=839, .patterns=0, .final=0, .range=0 },/* 838 */
      { .f_node=1065, .degree=0, .alpha=0x2e/* '.' */, .outgoing=840, .patterns=0, .final=0, .range=0 },/* 839 */
      { .f_node=877, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=841, .patterns=0, .final=0, .range=0 },/* 840 */
      { .f_node=2338, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=842, .patterns=0, .final=0, .range=0 },/* 841 */
      { .f_node=2370, .degree=0, .alpha=0x74/* 't' */, .outgoing=843, .patterns=0, .final=0, .range=0 },/* 842 */
      { .f_node=4884, .degree=0, .alpha=0x72/* 'r' */, .outgoing=844, .patterns=0, .final=0, .range=0 },/* 843 */
      { .f_node=5596, .degree=0, .alpha=0x64/* 'd' */, .outgoing=845, .patterns=0, .final=0, .range=0 },/* 844 */
      { .f_node=5597, .degree=0, .alpha=0x63/* 'c' */, .outgoing=846, .patterns=0, .final=0, .range=0 },/* 845 */
      { .f_node=5471, .degree=0, .alpha=0x2e/* '.' */, .outgoing=847, .patterns=0, .final=0, .range=0 },/* 846 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=848, .patterns=0, .final=0, .range=0 },/* 847 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=849, .patterns=0, .final=0, .range=0 },/* 848 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=850, .patterns=0, .final=0, .range=0 },/* 849 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=82, .final=1, .range=0 },/* 850 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=852, .patterns=0, .final=0, .range=0 },/* 851 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=853, .patterns=0, .final=0, .range=0 },/* 852 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=83, .final=1, .range=0 },/* 853 */
      { .f_node=4278, .degree=0, .alpha=0x73/* 's' */, .outgoing=855, .patterns=0, .final=0, .range=0 },/* 854 */
      { .f_node=4278, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=856, .patterns=0, .final=0, .range=0 },/* 855 */
      { .f_node=3563, .degree=0, .alpha=0x74/* 't' */, .outgoing=857, .patterns=0, .final=0, .range=0 },/* 856 */
      { .f_node=4944, .degree=0, .alpha=0x74/* 't' */, .outgoing=858, .patterns=0, .final=0, .range=0 },/* 857 */
      { .f_node=5101, .degree=0, .alpha=0x2e/* '.' */, .outgoing=859, .patterns=0, .final=0, .range=0 },/* 858 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=860, .patterns=0, .final=0, .range=0 },/* 859 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=861, .patterns=0, .final=0, .range=0 },/* 860 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=862, .patterns=0, .final=0, .range=0 },/* 861 */
      { .f_node=5520, .degree=0, .alpha=0x2e/* '.' */, .outgoing=863, .patterns=84, .final=1, .range=0 },/* 862 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=864, .patterns=0, .final=0, .range=0 },/* 863 */
      { .f_node=878, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=865, .patterns=0, .final=0, .range=0 },/* 864 */
      { .f_node=901, .degree=0, .alpha=0x61/* 'a' */, .outgoing=866, .patterns=0, .final=0, .range=0 },/* 865 */
      { .f_node=902, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=867, .patterns=0, .final=0, .range=0 },/* 866 */
      { .f_node=2808, .degree=0, .alpha=0x61/* 'a' */, .outgoing=868, .patterns=0, .final=0, .range=0 },/* 867 */
      { .f_node=2809, .degree=0, .alpha=0x69/* 'i' */, .outgoing=869, .patterns=0, .final=0, .range=0 },/* 868 */
      { .f_node=4710, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=870, .patterns=0, .final=0, .range=0 },/* 869 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=871, .patterns=0, .final=0, .range=0 },/* 870 */
      { .f_node=3733, .degree=0, .alpha=0x64/* 'd' */, .outgoing=872, .patterns=0, .final=0, .range=0 },/* 871 */
      { .f_node=3905, .degree=0, .alpha=0x2e/* '.' */, .outgoing=873, .patterns=0, .final=0, .range=0 },/* 872 */
      { .f_node=772, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=874, .patterns=0, .final=0, .range=0 },/* 873 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=875, .patterns=0, .final=0, .range=0 },/* 874 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=876, .patterns=0, .final=0, .range=0 },/* 875 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=85, .final=1, .range=0 },/* 876 */
      { .f_node=1, .degree=27, .alpha=0x00, .outgoing=214, .patterns=0, .final=0, .range=0 },/* 877 */
      { .f_node=2762, .degree=17, .alpha=0x69, .outgoing=242, .patterns=0, .final=0, .range=1 },/* 878 */
      { .f_node=3324, .degree=0, .alpha=0x76/* 'v' */, .outgoing=880, .patterns=0, .final=0, .range=0 },/* 879 */
      { .f_node=5786, .degree=0, .alpha=0x2d/* '-' */, .outgoing=881, .patterns=0, .final=0, .range=0 },/* 880 */
      { .f_node=5969, .degree=1, .alpha=0x63, .outgoing=260, .patterns=0, .final=0, .range=1 },/* 881 */
      { .f_node=5471, .degree=0, .alpha=0x64/* 'd' */, .outgoing=883, .patterns=0, .final=0, .range=0 },/* 882 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=884, .patterns=0, .final=0, .range=0 },/* 883 */
      { .f_node=436, .degree=0, .alpha=0x2e/* '.' */, .outgoing=885, .patterns=0, .final=0, .range=0 },/* 884 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=886, .patterns=0, .final=0, .range=0 },/* 885 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=887, .patterns=0, .final=0, .range=0 },/* 886 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=888, .patterns=0, .final=0, .range=0 },/* 887 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=86, .final=1, .range=0 },/* 888 */
      { .f_node=2, .degree=0, .alpha=0x65/* 'e' */, .outgoing=890, .patterns=0, .final=0, .range=0 },/* 889 */
      { .f_node=3733, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=891, .patterns=0, .final=0, .range=0 },/* 890 */
      { .f_node=5293, .degree=0, .alpha=0x69/* 'i' */, .outgoing=892, .patterns=0, .final=0, .range=0 },/* 891 */
      { .f_node=5294, .degree=0, .alpha=0x76/* 'v' */, .outgoing=893, .patterns=0, .final=0, .range=0 },/* 892 */
      { .f_node=5786, .degree=0, .alpha=0x65/* 'e' */, .outgoing=894, .patterns=0, .final=0, .range=0 },/* 893 */
      { .f_node=3733, .degree=0, .alpha=0x72/* 'r' */, .outgoing=895, .patterns=0, .final=0, .range=0 },/* 894 */
      { .f_node=5596, .degree=0, .alpha=0x79/* 'y' */, .outgoing=896, .patterns=0, .final=0, .range=0 },/* 895 */
      { .f_node=5800, .degree=0, .alpha=0x2e/* '.' */, .outgoing=897, .patterns=0, .final=0, .range=0 },/* 896 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=898, .patterns=0, .final=0, .range=0 },/* 897 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=899, .patterns=0, .final=0, .range=0 },/* 898 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=900, .patterns=0, .final=0, .range=0 },/* 899 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=87, .final=1, .range=0 },/* 900 */
      { .f_node=1, .degree=0, .alpha=0x61/* 'a' */, .outgoing=902, .patterns=0, .final=0, .range=0 },/* 901 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=903, .patterns=0, .final=0, .range=0 },/* 902 */
      { .f_node=877, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=904, .patterns=0, .final=0, .range=0 },/* 903 */
      { .f_node=1285, .degree=0, .alpha=0x73/* 's' */, .outgoing=905, .patterns=0, .final=0, .range=0 },/* 904 */
      { .f_node=1359, .degree=0, .alpha=0x00, .outgoing=0, .patterns=88, .final=1, .range=0 },/* 905 */
      { .f_node=2808, .degree=0, .alpha=0x61/* 'a' */, .outgoing=907, .patterns=0, .final=0, .range=0 },/* 906 */
      { .f_node=2809, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=908, .patterns=0, .final=0, .range=0 },/* 907 */
      { .f_node=2831, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=909, .patterns=0, .final=0, .range=0 },/* 908 */
      { .f_node=2832, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=910, .patterns=0, .final=0, .range=0 },/* 909 */
      { .f_node=2833, .degree=0, .alpha=0x76/* 'v' */, .outgoing=911, .patterns=0, .final=0, .range=0 },/* 910 */
      { .f_node=5786, .degree=0, .alpha=0x69/* 'i' */, .outgoing=912, .patterns=0, .final=0, .range=0 },/* 911 */
      { .f_node=3324, .degree=0, .alpha=0x64/* 'd' */, .outgoing=913, .patterns=0, .final=0, .range=0 },/* 912 */
      { .f_node=2, .degree=0, .alpha=0x65/* 'e' */, .outgoing=914, .patterns=0, .final=0, .range=0 },/* 913 */
      { .f_node=3733, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=915, .patterns=0, .final=0, .range=0 },/* 914 */
      { .f_node=3563, .degree=0, .alpha=0x2e/* '.' */, .outgoing=916, .patterns=0, .final=0, .range=0 },/* 915 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=917, .patterns=0, .final=0, .range=0 },/* 916 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=918, .patterns=0, .final=0, .range=0 },/* 917 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=919, .patterns=0, .final=0, .range=0 },/* 918 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=89, .final=1, .range=0 },/* 919 */
      { .f_node=2866, .degree=0, .alpha=0x63/* 'c' */, .outgoing=921, .patterns=0, .final=0, .range=0 },/* 920 */
      { .f_node=5471, .degree=0, .alpha=0x68/* 'h' */, .outgoing=922, .patterns=0, .final=0, .range=0 },/* 921 */
      { .f_node=5919, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=923, .patterns=0, .final=0, .range=0 },/* 922 */
      { .f_node=5953, .degree=0, .alpha=0x72/* 'r' */, .outgoing=924, .patterns=0, .final=0, .range=0 },/* 923 */
      { .f_node=3669, .degree=0, .alpha=0x66/* 'f' */, .outgoing=925, .patterns=0, .final=0, .range=0 },/* 924 */
      { .f_node=5332, .degree=0, .alpha=0x72/* 'r' */, .outgoing=926, .patterns=0, .final=0, .range=0 },/* 925 */
      { .f_node=5596, .degree=0, .alpha=0x65/* 'e' */, .outgoing=927, .patterns=0, .final=0, .range=0 },/* 926 */
      { .f_node=5611, .degree=0, .alpha=0x65/* 'e' */, .outgoing=928, .patterns=0, .final=0, .range=0 },/* 927 */
      { .f_node=3733, .degree=0, .alpha=0x2e/* '.' */, .outgoing=929, .patterns=0, .final=0, .range=0 },/* 928 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=90, .final=1, .range=0 },/* 929 */
      { .f_node=2891, .degree=0, .alpha=0x70/* 'p' */, .outgoing=931, .patterns=0, .final=0, .range=0 },/* 930 */
      { .f_node=2892, .degree=2, .alpha=0x00, .outgoing=262, .patterns=0, .final=0, .range=0 },/* 931 */
      { .f_node=2893, .degree=0, .alpha=0x65/* 'e' */, .outgoing=933, .patterns=0, .final=0, .range=0 },/* 932 */
      { .f_node=3733, .degree=1, .alpha=0x2d, .outgoing=265, .patterns=0, .final=0, .range=1 },/* 933 */
      { .f_node=5969, .degree=1, .alpha=0x63, .outgoing=267, .patterns=0, .final=0, .range=1 },/* 934 */
      { .f_node=5471, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=936, .patterns=0, .final=0, .range=0 },/* 935 */
      { .f_node=5482, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=937, .patterns=0, .final=0, .range=0 },/* 936 */
      { .f_node=5483, .degree=0, .alpha=0x75/* 'u' */, .outgoing=938, .patterns=0, .final=0, .range=0 },/* 937 */
      { .f_node=5484, .degree=0, .alpha=0x64/* 'd' */, .outgoing=939, .patterns=0, .final=0, .range=0 },/* 938 */
      { .f_node=5485, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=940, .patterns=0, .final=0, .range=0 },/* 939 */
      { .f_node=1, .degree=0, .alpha=0x69/* 'i' */, .outgoing=941, .patterns=0, .final=0, .range=0 },/* 940 */
      { .f_node=3324, .degree=0, .alpha=0x74/* 't' */, .outgoing=942, .patterns=0, .final=0, .range=0 },/* 941 */
      { .f_node=3538, .degree=0, .alpha=0x2e/* '.' */, .outgoing=943, .patterns=0, .final=0, .range=0 },/* 942 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=944, .patterns=0, .final=0, .range=0 },/* 943 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=945, .patterns=0, .final=0, .range=0 },/* 944 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=946, .patterns=0, .final=0, .range=0 },/* 945 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=91, .final=1, .range=0 },/* 946 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=948, .patterns=0, .final=0, .range=0 },/* 947 */
      { .f_node=436, .degree=0, .alpha=0x73/* 's' */, .outgoing=949, .patterns=0, .final=0, .range=0 },/* 948 */
      { .f_node=437, .degree=0, .alpha=0x2e/* '.' */, .outgoing=950, .patterns=0, .final=0, .range=0 },/* 949 */
      { .f_node=438, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=951, .patterns=0, .final=0, .range=0 },/* 950 */
      { .f_node=573, .degree=0, .alpha=0x65/* 'e' */, .outgoing=952, .patterns=0, .final=0, .range=0 },/* 951 */
      { .f_node=574, .degree=0, .alpha=0x74/* 't' */, .outgoing=953, .patterns=0, .final=0, .range=0 },/* 952 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=92, .final=1, .range=0 },/* 953 */
      { .f_node=877, .degree=11, .alpha=0x63, .outgoing=269, .patterns=0, .final=0, .range=1 },/* 954 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=956, .patterns=0, .final=0, .range=0 },/* 955 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=957, .patterns=0, .final=0, .range=0 },/* 956 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=93, .final=1, .range=0 },/* 957 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=959, .patterns=0, .final=0, .range=0 },/* 958 */
      { .f_node=2560, .degree=0, .alpha=0x77/* 'w' */, .outgoing=960, .patterns=0, .final=0, .range=0 },/* 959 */
      { .f_node=5671, .degree=0, .alpha=0x73/* 's' */, .outgoing=961, .patterns=0, .final=0, .range=0 },/* 960 */
      { .f_node=4278, .degree=0, .alpha=0x00, .outgoing=0, .patterns=94, .final=1, .range=0 },/* 961 */
      { .f_node=5471, .degree=0, .alpha=0x65/* 'e' */, .outgoing=963, .patterns=0, .final=0, .range=0 },/* 962 */
      { .f_node=3733, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=964, .patterns=0, .final=0, .range=0 },/* 963 */
      { .f_node=5418, .degree=0, .alpha=0x74/* 't' */, .outgoing=965, .patterns=0, .final=0, .range=0 },/* 964 */
      { .f_node=5464, .degree=0, .alpha=0x65/* 'e' */, .outgoing=966, .patterns=0, .final=0, .range=0 },/* 965 */
      { .f_node=4956, .degree=0, .alpha=0x72/* 'r' */, .outgoing=967, .patterns=0, .final=0, .range=0 },/* 966 */
      { .f_node=5596, .degree=0, .alpha=0x2e/* '.' */, .outgoing=968, .patterns=0, .final=0, .range=0 },/* 967 */
      { .f_node=877, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=969, .patterns=0, .final=0, .range=0 },/* 968 */
      { .f_node=1285, .degree=0, .alpha=0x73/* 's' */, .outgoing=970, .patterns=0, .final=0, .range=0 },/* 969 */
      { .f_node=1359, .degree=0, .alpha=0x00, .outgoing=0, .patterns=95, .final=1, .range=0 },/* 970 */
      { .f_node=877, .degree=0, .alpha=0x69/* 'i' */, .outgoing=972, .patterns=0, .final=0, .range=0 },/* 971 */
      { .f_node=1881, .degree=0, .alpha=0x66/* 'f' */, .outgoing=973, .patterns=0, .final=0, .range=0 },/* 972 */
      { .f_node=1904, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=974, .patterns=0, .final=0, .range=0 },/* 973 */
      { .f_node=1905, .degree=0, .alpha=0x69/* 'i' */, .outgoing=975, .patterns=0, .final=0, .range=0 },/* 974 */
      { .f_node=1906, .degree=0, .alpha=0x78/* 'x' */, .outgoing=976, .patterns=0, .final=0, .range=0 },/* 975 */
      { .f_node=1907, .degree=0, .alpha=0x63/* 'c' */, .outgoing=977, .patterns=0, .final=0, .range=0 },/* 976 */
      { .f_node=5471, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=978, .patterns=0, .final=0, .range=0 },/* 977 */
      { .f_node=5499, .degree=0, .alpha=0x72/* 'r' */, .outgoing=979, .patterns=0, .final=0, .range=0 },/* 978 */
      { .f_node=3669, .degree=0, .alpha=0x70/* 'p' */, .outgoing=980, .patterns=0, .final=0, .range=0 },/* 979 */
      { .f_node=3983, .degree=0, .alpha=0x2e/* '.' */, .outgoing=981, .patterns=0, .final=0, .range=0 },/* 980 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=982, .patterns=0, .final=0, .range=0 },/* 981 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=983, .patterns=0, .final=0, .range=0 },/* 982 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=984, .patterns=0, .final=0, .range=0 },/* 983 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=96, .final=1, .range=0 },/* 984 */
      { .f_node=5671, .degree=0, .alpha=0x73/* 's' */, .outgoing=986, .patterns=0, .final=0, .range=0 },/* 985 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=987, .patterns=0, .final=0, .range=0 },/* 986 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=97, .final=1, .range=0 },/* 987 */
      { .f_node=1, .degree=0, .alpha=0x75/* 'u' */, .outgoing=989, .patterns=0, .final=0, .range=0 },/* 988 */
      { .f_node=5858, .degree=0, .alpha=0x72/* 'r' */, .outgoing=990, .patterns=0, .final=0, .range=0 },/* 989 */
      { .f_node=5596, .degree=0, .alpha=0x65/* 'e' */, .outgoing=991, .patterns=0, .final=0, .range=0 },/* 990 */
      { .f_node=5611, .degree=0, .alpha=0x2e/* '.' */, .outgoing=992, .patterns=0, .final=0, .range=0 },/* 991 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=993, .patterns=0, .final=0, .range=0 },/* 992 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=994, .patterns=0, .final=0, .range=0 },/* 993 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=995, .patterns=0, .final=0, .range=0 },/* 994 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=98, .final=1, .range=0 },/* 995 */
      { .f_node=4278, .degree=10, .alpha=0x00, .outgoing=281, .patterns=0, .final=0, .range=0 },/* 996 */
      { .f_node=877, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=998, .patterns=0, .final=0, .range=0 },/* 997 */
      { .f_node=1700, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=999, .patterns=0, .final=0, .range=0 },/* 998 */
      { .f_node=5304, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1000, .patterns=0, .final=0, .range=0 },/* 999 */
      { .f_node=3669, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1001, .patterns=0, .final=0, .range=0 },/* 1000 */
      { .f_node=3670, .degree=0, .alpha=0x73/* 's' */, .outgoing=1002, .patterns=0, .final=0, .range=0 },/* 1001 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1003, .patterns=0, .final=0, .range=0 },/* 1002 */
      { .f_node=877, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=1004, .patterns=0, .final=0, .range=0 },/* 1003 */
      { .f_node=1700, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=1005, .patterns=0, .final=0, .range=0 },/* 1004 */
      { .f_node=5293, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1006, .patterns=0, .final=0, .range=0 },/* 1005 */
      { .f_node=5418, .degree=0, .alpha=0x77/* 'w' */, .outgoing=1007, .patterns=0, .final=0, .range=0 },/* 1006 */
      { .f_node=5671, .degree=0, .alpha=0x64/* 'd' */, .outgoing=1008, .patterns=0, .final=0, .range=0 },/* 1007 */
      { .f_node=2, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1009, .patterns=0, .final=0, .range=0 },/* 1008 */
      { .f_node=772, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1010, .patterns=0, .final=0, .range=0 },/* 1009 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1011, .patterns=0, .final=0, .range=0 },/* 1010 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=1012, .patterns=0, .final=0, .range=0 },/* 1011 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=99, .final=1, .range=0 },/* 1012 */
      { .f_node=4375, .degree=0, .alpha=0x79/* 'y' */, .outgoing=1014, .patterns=0, .final=0, .range=0 },/* 1013 */
      { .f_node=4376, .degree=0, .alpha=0x70/* 'p' */, .outgoing=1015, .patterns=0, .final=0, .range=0 },/* 1014 */
      { .f_node=4389, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1016, .patterns=0, .final=0, .range=0 },/* 1015 */
      { .f_node=4390, .degree=4, .alpha=0x00, .outgoing=292, .patterns=0, .final=0, .range=0 },/* 1016 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=100, .final=1, .range=0 },/* 1017 */
      { .f_node=2762, .degree=0, .alpha=0x73/* 's' */, .outgoing=1019, .patterns=0, .final=0, .range=0 },/* 1018 */
      { .f_node=2908, .degree=0, .alpha=0x73/* 's' */, .outgoing=1020, .patterns=0, .final=0, .range=0 },/* 1019 */
      { .f_node=2909, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1021, .patterns=0, .final=0, .range=0 },/* 1020 */
      { .f_node=2910, .degree=0, .alpha=0x74/* 't' */, .outgoing=1022, .patterns=0, .final=0, .range=0 },/* 1021 */
      { .f_node=2911, .degree=0, .alpha=0x73/* 's' */, .outgoing=1023, .patterns=0, .final=0, .range=0 },/* 1022 */
      { .f_node=2912, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1024, .patterns=0, .final=0, .range=0 },/* 1023 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=101, .final=1, .range=0 },/* 1024 */
      { .f_node=3905, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1026, .patterns=0, .final=0, .range=0 },/* 1025 */
      { .f_node=413, .degree=0, .alpha=0x74/* 't' */, .outgoing=1027, .patterns=0, .final=0, .range=0 },/* 1026 */
      { .f_node=414, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1028, .patterns=0, .final=0, .range=0 },/* 1027 */
      { .f_node=415, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1029, .patterns=0, .final=0, .range=0 },/* 1028 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=102, .final=1, .range=0 },/* 1029 */
      { .f_node=3733, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1031, .patterns=0, .final=0, .range=0 },/* 1030 */
      { .f_node=5471, .degree=0, .alpha=0x73/* 's' */, .outgoing=1032, .patterns=0, .final=0, .range=0 },/* 1031 */
      { .f_node=4278, .degree=0, .alpha=0x2d/* '-' */, .outgoing=1033, .patterns=0, .final=0, .range=0 },/* 1032 */
      { .f_node=5969, .degree=0, .alpha=0x00, .outgoing=0, .patterns=103, .final=1, .range=0 },/* 1033 */
      { .f_node=5332, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1035, .patterns=0, .final=0, .range=0 },/* 1034 */
      { .f_node=3563, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1036, .patterns=0, .final=0, .range=0 },/* 1035 */
      { .f_node=3669, .degree=0, .alpha=0x62/* 'b' */, .outgoing=1037, .patterns=0, .final=0, .range=0 },/* 1036 */
      { .f_node=4204, .degree=0, .alpha=0x75/* 'u' */, .outgoing=1038, .patterns=0, .final=0, .range=0 },/* 1037 */
      { .f_node=4234, .degree=0, .alpha=0x73/* 's' */, .outgoing=1039, .patterns=0, .final=0, .range=0 },/* 1038 */
      { .f_node=4278, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1040, .patterns=0, .final=0, .range=0 },/* 1039 */
      { .f_node=4366, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1041, .patterns=0, .final=0, .range=0 },/* 1040 */
      { .f_node=3492, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1042, .patterns=0, .final=0, .range=0 },/* 1041 */
      { .f_node=5419, .degree=0, .alpha=0x73/* 's' */, .outgoing=1043, .patterns=0, .final=0, .range=0 },/* 1042 */
      { .f_node=4278, .degree=0, .alpha=0x73/* 's' */, .outgoing=1044, .patterns=0, .final=0, .range=0 },/* 1043 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1045, .patterns=0, .final=0, .range=0 },/* 1044 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=104, .final=1, .range=0 },/* 1045 */
      { .f_node=4478, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1047, .patterns=0, .final=0, .range=0 },/* 1046 */
      { .f_node=4487, .degree=0, .alpha=0x74/* 't' */, .outgoing=1048, .patterns=0, .final=0, .range=0 },/* 1047 */
      { .f_node=4488, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1049, .patterns=0, .final=0, .range=0 },/* 1048 */
      { .f_node=4489, .degree=6, .alpha=0x66, .outgoing=297, .patterns=0, .final=0, .range=1 },/* 1049 */
      { .f_node=4490, .degree=0, .alpha=0x79/* 'y' */, .outgoing=1051, .patterns=0, .final=0, .range=0 },/* 1050 */
      { .f_node=4491, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1052, .patterns=0, .final=0, .range=0 },/* 1051 */
      { .f_node=4520, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1053, .patterns=0, .final=0, .range=0 },/* 1052 */
      { .f_node=4521, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1054, .patterns=0, .final=0, .range=0 },/* 1053 */
      { .f_node=4522, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1055, .patterns=0, .final=0, .range=0 },/* 1054 */
      { .f_node=4523, .degree=0, .alpha=0x00, .outgoing=0, .patterns=105, .final=1, .range=0 },/* 1055 */
      { .f_node=5293, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1057, .patterns=0, .final=0, .range=0 },/* 1056 */
      { .f_node=5304, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1058, .patterns=0, .final=0, .range=0 },/* 1057 */
      { .f_node=3564, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1059, .patterns=0, .final=0, .range=0 },/* 1058 */
      { .f_node=5472, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=1060, .patterns=0, .final=0, .range=0 },/* 1059 */
      { .f_node=2793, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1061, .patterns=0, .final=0, .range=0 },/* 1060 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1062, .patterns=0, .final=0, .range=0 },/* 1061 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1063, .patterns=0, .final=0, .range=0 },/* 1062 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1064, .patterns=0, .final=0, .range=0 },/* 1063 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=106, .final=1, .range=0 },/* 1064 */
      { .f_node=4279, .degree=1, .alpha=0x00, .outgoing=304, .patterns=0, .final=0, .range=0 },/* 1065 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1067, .patterns=0, .final=0, .range=0 },/* 1066 */
      { .f_node=436, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1068, .patterns=0, .final=0, .range=0 },/* 1067 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1069, .patterns=0, .final=0, .range=0 },/* 1068 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1070, .patterns=0, .final=0, .range=0 },/* 1069 */
      { .f_node=5499, .degree=0, .alpha=0x00, .outgoing=0, .patterns=107, .final=1, .range=0 },/* 1070 */
      { .f_node=4280, .degree=13, .alpha=0x63, .outgoing=306, .patterns=0, .final=0, .range=1 },/* 1071 */
      { .f_node=5471, .degree=0, .alpha=0x64/* 'd' */, .outgoing=1073, .patterns=0, .final=0, .range=0 },/* 1072 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1074, .patterns=0, .final=0, .range=0 },/* 1073 */
      { .f_node=436, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1075, .patterns=0, .final=0, .range=0 },/* 1074 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1076, .patterns=0, .final=0, .range=0 },/* 1075 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1077, .patterns=0, .final=0, .range=0 },/* 1076 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=1078, .patterns=0, .final=0, .range=0 },/* 1077 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=108, .final=1, .range=0 },/* 1078 */
      { .f_node=5546, .degree=0, .alpha=0x70/* 'p' */, .outgoing=1080, .patterns=0, .final=0, .range=0 },/* 1079 */
      { .f_node=5572, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=1081, .patterns=0, .final=0, .range=0 },/* 1080 */
      { .f_node=3997, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1082, .patterns=0, .final=0, .range=0 },/* 1081 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1083, .patterns=0, .final=0, .range=0 },/* 1082 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1084, .patterns=0, .final=0, .range=0 },/* 1083 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1085, .patterns=0, .final=0, .range=0 },/* 1084 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=109, .final=1, .range=0 },/* 1085 */
      { .f_node=3983, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1087, .patterns=0, .final=0, .range=0 },/* 1086 */
      { .f_node=5596, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1088, .patterns=0, .final=0, .range=0 },/* 1087 */
      { .f_node=3563, .degree=0, .alpha=0x64/* 'd' */, .outgoing=1089, .patterns=0, .final=0, .range=0 },/* 1088 */
      { .f_node=3569, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1090, .patterns=0, .final=0, .range=0 },/* 1089 */
      { .f_node=772, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1091, .patterns=0, .final=0, .range=0 },/* 1090 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1092, .patterns=0, .final=0, .range=0 },/* 1091 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=1093, .patterns=0, .final=0, .range=0 },/* 1092 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=110, .final=1, .range=0 },/* 1093 */
      { .f_node=4366, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1095, .patterns=0, .final=0, .range=0 },/* 1094 */
      { .f_node=3492, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1096, .patterns=0, .final=0, .range=0 },/* 1095 */
      { .f_node=2762, .degree=2, .alpha=0x00, .outgoing=320, .patterns=0, .final=0, .range=0 },/* 1096 */
      { .f_node=3324, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1098, .patterns=0, .final=0, .range=0 },/* 1097 */
      { .f_node=3393, .degree=0, .alpha=0x67/* 'g' */, .outgoing=1099, .patterns=0, .final=0, .range=0 },/* 1098 */
      { .f_node=3451, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1100, .patterns=0, .final=0, .range=0 },/* 1099 */
      { .f_node=5239, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1101, .patterns=0, .final=0, .range=0 },/* 1100 */
      { .f_node=1545, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1102, .patterns=0, .final=0, .range=0 },/* 1101 */
      { .f_node=1594, .degree=0, .alpha=0x00, .outgoing=0, .patterns=111, .final=1, .range=0 },/* 1102 */
      { .f_node=5546, .degree=0, .alpha=0x73/* 's' */, .outgoing=1104, .patterns=0, .final=0, .range=0 },/* 1103 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1105, .patterns=0, .final=0, .range=0 },/* 1104 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1106, .patterns=0, .final=0, .range=0 },/* 1105 */
      { .f_node=1545, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1107, .patterns=0, .final=0, .range=0 },/* 1106 */
      { .f_node=1594, .degree=0, .alpha=0x00, .outgoing=0, .patterns=112, .final=1, .range=0 },/* 1107 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1109, .patterns=0, .final=0, .range=0 },/* 1108 */
      { .f_node=1545, .degree=1, .alpha=0x6e, .outgoing=323, .patterns=0, .final=0, .range=1 },/* 1109 */
      { .f_node=1594, .degree=0, .alpha=0x00, .outgoing=0, .patterns=113, .final=1, .range=0 },/* 1110 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1112, .patterns=0, .final=0, .range=0 },/* 1111 */
      { .f_node=5520, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1113, .patterns=0, .final=0, .range=0 },/* 1112 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1114, .patterns=0, .final=0, .range=0 },/* 1113 */
      { .f_node=1545, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1115, .patterns=0, .final=0, .range=0 },/* 1114 */
      { .f_node=1594, .degree=0, .alpha=0x00, .outgoing=0, .patterns=114, .final=1, .range=0 },/* 1115 */
      { .f_node=4467, .degree=3, .alpha=0x61, .outgoing=325, .patterns=0, .final=0, .range=1 },/* 1116 */
      { .f_node=4468, .degree=0, .alpha=0x70/* 'p' */, .outgoing=1118, .patterns=0, .final=0, .range=0 },/* 1117 */
      { .f_node=4469, .degree=2, .alpha=0x61, .outgoing=329, .patterns=0, .final=0, .range=1 },/* 1118 */
      { .f_node=4025, .degree=0, .alpha=0x64/* 'd' */, .outgoing=1120, .patterns=0, .final=0, .range=0 },/* 1119 */
      { .f_node=2773, .degree=0, .alpha=0x73/* 's' */, .outgoing=1121, .patterns=0, .final=0, .range=0 },/* 1120 */
      { .f_node=854, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1122, .patterns=0, .final=0, .range=0 },/* 1121 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=115, .final=1, .range=0 },/* 1122 */
      { .f_node=4470, .degree=0, .alpha=0x68/* 'h' */, .outgoing=1124, .patterns=0, .final=0, .range=0 },/* 1123 */
      { .f_node=5919, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1125, .patterns=0, .final=0, .range=0 },/* 1124 */
      { .f_node=2762, .degree=0, .alpha=0x74/* 't' */, .outgoing=1126, .patterns=0, .final=0, .range=0 },/* 1125 */
      { .f_node=2937, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1127, .patterns=0, .final=0, .range=0 },/* 1126 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=116, .final=1, .range=0 },/* 1127 */
      { .f_node=2, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1129, .patterns=0, .final=0, .range=0 },/* 1128 */
      { .f_node=5471, .degree=0, .alpha=0x64/* 'd' */, .outgoing=1130, .patterns=0, .final=0, .range=0 },/* 1129 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1131, .patterns=0, .final=0, .range=0 },/* 1130 */
      { .f_node=436, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1132, .patterns=0, .final=0, .range=0 },/* 1131 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1133, .patterns=0, .final=0, .range=0 },/* 1132 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1134, .patterns=0, .final=0, .range=0 },/* 1133 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1135, .patterns=0, .final=0, .range=0 },/* 1134 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=117, .final=1, .range=0 },/* 1135 */
      { .f_node=5332, .degree=0, .alpha=0x78/* 'x' */, .outgoing=1137, .patterns=0, .final=0, .range=0 },/* 1136 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1138, .patterns=0, .final=0, .range=0 },/* 1137 */
      { .f_node=877, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1139, .patterns=0, .final=0, .range=0 },/* 1138 */
      { .f_node=1285, .degree=0, .alpha=0x73/* 's' */, .outgoing=1140, .patterns=0, .final=0, .range=0 },/* 1139 */
      { .f_node=1359, .degree=0, .alpha=0x00, .outgoing=0, .patterns=118, .final=1, .range=0 },/* 1140 */
      { .f_node=5969, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1142, .patterns=0, .final=0, .range=0 },/* 1141 */
      { .f_node=5970, .degree=10, .alpha=0x69, .outgoing=332, .patterns=0, .final=0, .range=1 },/* 1142 */
      { .f_node=4771, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1144, .patterns=0, .final=0, .range=0 },/* 1143 */
      { .f_node=4772, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1145, .patterns=0, .final=0, .range=0 },/* 1144 */
      { .f_node=4773, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1146, .patterns=0, .final=0, .range=0 },/* 1145 */
      { .f_node=4774, .degree=0, .alpha=0x73/* 's' */, .outgoing=1147, .patterns=0, .final=0, .range=0 },/* 1146 */
      { .f_node=4775, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1148, .patterns=0, .final=0, .range=0 },/* 1147 */
      { .f_node=4776, .degree=0, .alpha=0x66/* 'f' */, .outgoing=1149, .patterns=0, .final=0, .range=0 },/* 1148 */
      { .f_node=4777, .degree=0, .alpha=0x74/* 't' */, .outgoing=1150, .patterns=0, .final=0, .range=0 },/* 1149 */
      { .f_node=4778, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1151, .patterns=0, .final=0, .range=0 },/* 1150 */
      { .f_node=4779, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1152, .patterns=0, .final=0, .range=0 },/* 1151 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1153, .patterns=0, .final=0, .range=0 },/* 1152 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1154, .patterns=0, .final=0, .range=0 },/* 1153 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=119, .final=1, .range=0 },/* 1154 */
      { .f_node=5971, .degree=8, .alpha=0x66, .outgoing=343, .patterns=0, .final=0, .range=1 },/* 1155 */
      { .f_node=4869, .degree=0, .alpha=0x74/* 't' */, .outgoing=1157, .patterns=0, .final=0, .range=0 },/* 1156 */
      { .f_node=4870, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1158, .patterns=0, .final=0, .range=0 },/* 1157 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1159, .patterns=0, .final=0, .range=0 },/* 1158 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1160, .patterns=0, .final=0, .range=0 },/* 1159 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1161, .patterns=0, .final=0, .range=0 },/* 1160 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=120, .final=1, .range=0 },/* 1161 */
      { .f_node=4879, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1163, .patterns=0, .final=0, .range=0 },/* 1162 */
      { .f_node=4880, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1164, .patterns=0, .final=0, .range=0 },/* 1163 */
      { .f_node=4881, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1165, .patterns=0, .final=0, .range=0 },/* 1164 */
      { .f_node=4882, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1166, .patterns=0, .final=0, .range=0 },/* 1165 */
      { .f_node=4883, .degree=0, .alpha=0x00, .outgoing=0, .patterns=121, .final=1, .range=0 },/* 1166 */
      { .f_node=4573, .degree=10, .alpha=0x65, .outgoing=352, .patterns=0, .final=0, .range=1 },/* 1167 */
      { .f_node=4644, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1169, .patterns=0, .final=0, .range=0 },/* 1168 */
      { .f_node=4645, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1170, .patterns=0, .final=0, .range=0 },/* 1169 */
      { .f_node=4646, .degree=16, .alpha=0x63, .outgoing=363, .patterns=0, .final=0, .range=1 },/* 1170 */
      { .f_node=4647, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1172, .patterns=0, .final=0, .range=0 },/* 1171 */
      { .f_node=4648, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1173, .patterns=0, .final=0, .range=0 },/* 1172 */
      { .f_node=3609, .degree=0, .alpha=0x74/* 't' */, .outgoing=1174, .patterns=0, .final=0, .range=0 },/* 1173 */
      { .f_node=5464, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1175, .patterns=0, .final=0, .range=0 },/* 1174 */
      { .f_node=4956, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1176, .patterns=0, .final=0, .range=0 },/* 1175 */
      { .f_node=5418, .degree=0, .alpha=0x74/* 't' */, .outgoing=1177, .patterns=0, .final=0, .range=0 },/* 1176 */
      { .f_node=5464, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1178, .patterns=0, .final=0, .range=0 },/* 1177 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1179, .patterns=0, .final=0, .range=0 },/* 1178 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1180, .patterns=0, .final=0, .range=0 },/* 1179 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1181, .patterns=0, .final=0, .range=0 },/* 1180 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=123, .final=1, .range=0 },/* 1181 */
      { .f_node=3983, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1183, .patterns=0, .final=0, .range=0 },/* 1182 */
      { .f_node=3563, .degree=0, .alpha=0x77/* 'w' */, .outgoing=1184, .patterns=0, .final=0, .range=0 },/* 1183 */
      { .f_node=5671, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1185, .patterns=0, .final=0, .range=0 },/* 1184 */
      { .f_node=5710, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1186, .patterns=0, .final=0, .range=0 },/* 1185 */
      { .f_node=5596, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1187, .patterns=0, .final=0, .range=0 },/* 1186 */
      { .f_node=5611, .degree=0, .alpha=0x64/* 'd' */, .outgoing=1188, .patterns=0, .final=0, .range=0 },/* 1187 */
      { .f_node=3905, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1189, .patterns=0, .final=0, .range=0 },/* 1188 */
      { .f_node=772, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1190, .patterns=0, .final=0, .range=0 },/* 1189 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1191, .patterns=0, .final=0, .range=0 },/* 1190 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1192, .patterns=0, .final=0, .range=0 },/* 1191 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=124, .final=1, .range=0 },/* 1192 */
      { .f_node=4959, .degree=0, .alpha=0x74/* 't' */, .outgoing=1194, .patterns=0, .final=0, .range=0 },/* 1193 */
      { .f_node=4573, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1195, .patterns=0, .final=0, .range=0 },/* 1194 */
      { .f_node=4574, .degree=0, .alpha=0x74/* 't' */, .outgoing=1196, .patterns=0, .final=0, .range=0 },/* 1195 */
      { .f_node=4575, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1197, .patterns=0, .final=0, .range=0 },/* 1196 */
      { .f_node=4576, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1198, .patterns=0, .final=0, .range=0 },/* 1197 */
      { .f_node=4577, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1199, .patterns=0, .final=0, .range=0 },/* 1198 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1200, .patterns=0, .final=0, .range=0 },/* 1199 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1201, .patterns=0, .final=0, .range=0 },/* 1200 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1202, .patterns=0, .final=0, .range=0 },/* 1201 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=125, .final=1, .range=0 },/* 1202 */
      { .f_node=5090, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1204, .patterns=0, .final=0, .range=0 },/* 1203 */
      { .f_node=5091, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1205, .patterns=0, .final=0, .range=0 },/* 1204 */
      { .f_node=2762, .degree=0, .alpha=0x67/* 'g' */, .outgoing=1206, .patterns=0, .final=0, .range=0 },/* 1205 */
      { .f_node=5159, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1207, .patterns=0, .final=0, .range=0 },/* 1206 */
      { .f_node=5278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1208, .patterns=0, .final=0, .range=0 },/* 1207 */
      { .f_node=877, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=1209, .patterns=0, .final=0, .range=0 },/* 1208 */
      { .f_node=1700, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1210, .patterns=0, .final=0, .range=0 },/* 1209 */
      { .f_node=1745, .degree=0, .alpha=0x76/* 'v' */, .outgoing=1211, .patterns=0, .final=0, .range=0 },/* 1210 */
      { .f_node=5786, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1212, .patterns=0, .final=0, .range=0 },/* 1211 */
      { .f_node=3733, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1213, .patterns=0, .final=0, .range=0 },/* 1212 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1214, .patterns=0, .final=0, .range=0 },/* 1213 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1215, .patterns=0, .final=0, .range=0 },/* 1214 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1216, .patterns=0, .final=0, .range=0 },/* 1215 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=126, .final=1, .range=0 },/* 1216 */
      { .f_node=4421, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1218, .patterns=0, .final=0, .range=0 },/* 1217 */
      { .f_node=4422, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1219, .patterns=0, .final=0, .range=0 },/* 1218 */
      { .f_node=4423, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=1220, .patterns=0, .final=0, .range=0 },/* 1219 */
      { .f_node=4424, .degree=0, .alpha=0x2d/* '-' */, .outgoing=1221, .patterns=0, .final=0, .range=0 },/* 1220 */
      { .f_node=4425, .degree=10, .alpha=0x63, .outgoing=380, .patterns=0, .final=0, .range=1 },/* 1221 */
      { .f_node=5471, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1223, .patterns=0, .final=0, .range=0 },/* 1222 */
      { .f_node=5499, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1224, .patterns=0, .final=0, .range=0 },/* 1223 */
      { .f_node=3669, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1225, .patterns=0, .final=0, .range=0 },/* 1224 */
      { .f_node=5611, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1226, .patterns=0, .final=0, .range=0 },/* 1225 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1227, .patterns=0, .final=0, .range=0 },/* 1226 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1228, .patterns=0, .final=0, .range=0 },/* 1227 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1229, .patterns=0, .final=0, .range=0 },/* 1228 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=127, .final=1, .range=0 },/* 1229 */
      { .f_node=3733, .degree=0, .alpha=0x64/* 'd' */, .outgoing=1231, .patterns=0, .final=0, .range=0 },/* 1230 */
      { .f_node=3905, .degree=0, .alpha=0x67/* 'g' */, .outgoing=1232, .patterns=0, .final=0, .range=0 },/* 1231 */
      { .f_node=3906, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1233, .patterns=0, .final=0, .range=0 },/* 1232 */
      { .f_node=3907, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1234, .patterns=0, .final=0, .range=0 },/* 1233 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1235, .patterns=0, .final=0, .range=0 },/* 1234 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1236, .patterns=0, .final=0, .range=0 },/* 1235 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1237, .patterns=0, .final=0, .range=0 },/* 1236 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=128, .final=1, .range=0 },/* 1237 */
      { .f_node=5970, .degree=0, .alpha=0x73/* 's' */, .outgoing=1239, .patterns=0, .final=0, .range=0 },/* 1238 */
      { .f_node=5971, .degree=0, .alpha=0x67/* 'g' */, .outgoing=1240, .patterns=0, .final=0, .range=0 },/* 1239 */
      { .f_node=5159, .degree=0, .alpha=0x73/* 's' */, .outgoing=1241, .patterns=0, .final=0, .range=0 },/* 1240 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1242, .patterns=0, .final=0, .range=0 },/* 1241 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1243, .patterns=0, .final=0, .range=0 },/* 1242 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1244, .patterns=0, .final=0, .range=0 },/* 1243 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1245, .patterns=0, .final=0, .range=0 },/* 1244 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=129, .final=1, .range=0 },/* 1245 */
      { .f_node=3563, .degree=7, .alpha=0x6e, .outgoing=391, .patterns=0, .final=0, .range=1 },/* 1246 */
      { .f_node=3609, .degree=0, .alpha=0x79/* 'y' */, .outgoing=1248, .patterns=0, .final=0, .range=0 },/* 1247 */
      { .f_node=5800, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1249, .patterns=0, .final=0, .range=0 },/* 1248 */
      { .f_node=3733, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1250, .patterns=0, .final=0, .range=0 },/* 1249 */
      { .f_node=5418, .degree=0, .alpha=0x74/* 't' */, .outgoing=1251, .patterns=0, .final=0, .range=0 },/* 1250 */
      { .f_node=5464, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1252, .patterns=0, .final=0, .range=0 },/* 1251 */
      { .f_node=4956, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1253, .patterns=0, .final=0, .range=0 },/* 1252 */
      { .f_node=5596, .degree=0, .alpha=0x74/* 't' */, .outgoing=1254, .patterns=0, .final=0, .range=0 },/* 1253 */
      { .f_node=4944, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1255, .patterns=0, .final=0, .range=0 },/* 1254 */
      { .f_node=2762, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1256, .patterns=0, .final=0, .range=0 },/* 1255 */
      { .f_node=3324, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1257, .patterns=0, .final=0, .range=0 },/* 1256 */
      { .f_node=3492, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1258, .patterns=0, .final=0, .range=0 },/* 1257 */
      { .f_node=4708, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1259, .patterns=0, .final=0, .range=0 },/* 1258 */
      { .f_node=4751, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1260, .patterns=0, .final=0, .range=0 },/* 1259 */
      { .f_node=5418, .degree=0, .alpha=0x74/* 't' */, .outgoing=1261, .patterns=0, .final=0, .range=0 },/* 1260 */
      { .f_node=5464, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1262, .patterns=0, .final=0, .range=0 },/* 1261 */
      { .f_node=5418, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1263, .patterns=0, .final=0, .range=0 },/* 1262 */
      { .f_node=5419, .degree=0, .alpha=0x74/* 't' */, .outgoing=1264, .patterns=0, .final=0, .range=0 },/* 1263 */
      { .f_node=5420, .degree=0, .alpha=0x77/* 'w' */, .outgoing=1265, .patterns=0, .final=0, .range=0 },/* 1264 */
      { .f_node=5127, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1266, .patterns=0, .final=0, .range=0 },/* 1265 */
      { .f_node=5768, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1267, .patterns=0, .final=0, .range=0 },/* 1266 */
      { .f_node=5769, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=1268, .patterns=0, .final=0, .range=0 },/* 1267 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1269, .patterns=0, .final=0, .range=0 },/* 1268 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1270, .patterns=0, .final=0, .range=0 },/* 1269 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1271, .patterns=0, .final=0, .range=0 },/* 1270 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1272, .patterns=0, .final=0, .range=0 },/* 1271 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=130, .final=1, .range=0 },/* 1272 */
      { .f_node=3718, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1274, .patterns=0, .final=0, .range=0 },/* 1273 */
      { .f_node=5418, .degree=0, .alpha=0x64/* 'd' */, .outgoing=1275, .patterns=0, .final=0, .range=0 },/* 1274 */
      { .f_node=2, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1276, .patterns=0, .final=0, .range=0 },/* 1275 */
      { .f_node=5471, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=1277, .patterns=0, .final=0, .range=0 },/* 1276 */
      { .f_node=5482, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1278, .patterns=0, .final=0, .range=0 },/* 1277 */
      { .f_node=5483, .degree=0, .alpha=0x75/* 'u' */, .outgoing=1279, .patterns=0, .final=0, .range=0 },/* 1278 */
      { .f_node=5484, .degree=0, .alpha=0x64/* 'd' */, .outgoing=1280, .patterns=0, .final=0, .range=0 },/* 1279 */
      { .f_node=5485, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1281, .patterns=0, .final=0, .range=0 },/* 1280 */
      { .f_node=772, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1282, .patterns=0, .final=0, .range=0 },/* 1281 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1283, .patterns=0, .final=0, .range=0 },/* 1282 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1284, .patterns=0, .final=0, .range=0 },/* 1283 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=131, .final=1, .range=0 },/* 1284 */
      { .f_node=4708, .degree=5, .alpha=0x00, .outgoing=399, .patterns=0, .final=0, .range=0 },/* 1285 */
      { .f_node=4751, .degree=1, .alpha=0x00, .outgoing=405, .patterns=0, .final=0, .range=0 },/* 1286 */
      { .f_node=4752, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1288, .patterns=0, .final=0, .range=0 },/* 1287 */
      { .f_node=4753, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1289, .patterns=0, .final=0, .range=0 },/* 1288 */
      { .f_node=4754, .degree=0, .alpha=0x2d/* '-' */, .outgoing=1290, .patterns=0, .final=0, .range=0 },/* 1289 */
      { .f_node=5969, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1291, .patterns=0, .final=0, .range=0 },/* 1290 */
      { .f_node=2762, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1292, .patterns=0, .final=0, .range=0 },/* 1291 */
      { .f_node=2808, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1293, .patterns=0, .final=0, .range=0 },/* 1292 */
      { .f_node=2809, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=1294, .patterns=0, .final=0, .range=0 },/* 1293 */
      { .f_node=2831, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1295, .patterns=0, .final=0, .range=0 },/* 1294 */
      { .f_node=2832, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1296, .patterns=0, .final=0, .range=0 },/* 1295 */
      { .f_node=2833, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1297, .patterns=0, .final=0, .range=0 },/* 1296 */
      { .f_node=2834, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1298, .patterns=132, .final=1, .range=0 },/* 1297 */
      { .f_node=2835, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1299, .patterns=0, .final=0, .range=0 },/* 1298 */
      { .f_node=2836, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1300, .patterns=0, .final=0, .range=0 },/* 1299 */
      { .f_node=2837, .degree=0, .alpha=0x00, .outgoing=0, .patterns=133, .final=1, .range=0 },/* 1300 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1302, .patterns=0, .final=0, .range=0 },/* 1301 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1303, .patterns=0, .final=0, .range=0 },/* 1302 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1304, .patterns=0, .final=0, .range=0 },/* 1303 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=135, .final=1, .range=0 },/* 1304 */
      { .f_node=1, .degree=0, .alpha=0x73/* 's' */, .outgoing=1306, .patterns=0, .final=0, .range=0 },/* 1305 */
      { .f_node=4278, .degree=0, .alpha=0x74/* 't' */, .outgoing=1307, .patterns=0, .final=0, .range=0 },/* 1306 */
      { .f_node=4573, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1308, .patterns=0, .final=0, .range=0 },/* 1307 */
      { .f_node=4574, .degree=0, .alpha=0x74/* 't' */, .outgoing=1309, .patterns=0, .final=0, .range=0 },/* 1308 */
      { .f_node=4575, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1310, .patterns=0, .final=0, .range=0 },/* 1309 */
      { .f_node=4576, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1311, .patterns=0, .final=0, .range=0 },/* 1310 */
      { .f_node=4577, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1312, .patterns=0, .final=0, .range=0 },/* 1311 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1313, .patterns=0, .final=0, .range=0 },/* 1312 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1314, .patterns=0, .final=0, .range=0 },/* 1313 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1315, .patterns=0, .final=0, .range=0 },/* 1314 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=136, .final=1, .range=0 },/* 1315 */
      { .f_node=877, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1317, .patterns=0, .final=0, .range=0 },/* 1316 */
      { .f_node=1285, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1318, .patterns=0, .final=0, .range=0 },/* 1317 */
      { .f_node=1286, .degree=0, .alpha=0x00, .outgoing=0, .patterns=137, .final=1, .range=0 },/* 1318 */
      { .f_node=4771, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1320, .patterns=0, .final=0, .range=0 },/* 1319 */
      { .f_node=4772, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1321, .patterns=0, .final=0, .range=0 },/* 1320 */
      { .f_node=4773, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1322, .patterns=0, .final=0, .range=0 },/* 1321 */
      { .f_node=4774, .degree=0, .alpha=0x73/* 's' */, .outgoing=1323, .patterns=0, .final=0, .range=0 },/* 1322 */
      { .f_node=4775, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1324, .patterns=0, .final=0, .range=0 },/* 1323 */
      { .f_node=4776, .degree=0, .alpha=0x66/* 'f' */, .outgoing=1325, .patterns=0, .final=0, .range=0 },/* 1324 */
      { .f_node=4777, .degree=0, .alpha=0x74/* 't' */, .outgoing=1326, .patterns=0, .final=0, .range=0 },/* 1325 */
      { .f_node=4778, .degree=2, .alpha=0x00, .outgoing=407, .patterns=0, .final=0, .range=0 },/* 1326 */
      { .f_node=4779, .degree=18, .alpha=0x63, .outgoing=410, .patterns=0, .final=0, .range=1 },/* 1327 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1329, .patterns=0, .final=0, .range=0 },/* 1328 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1330, .patterns=0, .final=0, .range=0 },/* 1329 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=138, .final=1, .range=0 },/* 1330 */
      { .f_node=1603, .degree=0, .alpha=0x73/* 's' */, .outgoing=1332, .patterns=0, .final=0, .range=0 },/* 1331 */
      { .f_node=1604, .degree=0, .alpha=0x00, .outgoing=0, .patterns=139, .final=1, .range=0 },/* 1332 */
      { .f_node=5101, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1334, .patterns=0, .final=0, .range=0 },/* 1333 */
      { .f_node=5596, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1335, .patterns=0, .final=0, .range=0 },/* 1334 */
      { .f_node=2762, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1336, .patterns=0, .final=0, .range=0 },/* 1335 */
      { .f_node=2866, .degree=0, .alpha=0x73/* 's' */, .outgoing=1337, .patterns=0, .final=0, .range=0 },/* 1336 */
      { .f_node=4278, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=1338, .patterns=0, .final=0, .range=0 },/* 1337 */
      { .f_node=4421, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1339, .patterns=0, .final=0, .range=0 },/* 1338 */
      { .f_node=4422, .degree=0, .alpha=0x74/* 't' */, .outgoing=1340, .patterns=0, .final=0, .range=0 },/* 1339 */
      { .f_node=2937, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1341, .patterns=0, .final=0, .range=0 },/* 1340 */
      { .f_node=5090, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1342, .patterns=0, .final=0, .range=0 },/* 1341 */
      { .f_node=5091, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1343, .patterns=0, .final=0, .range=0 },/* 1342 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1344, .patterns=0, .final=0, .range=0 },/* 1343 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1345, .patterns=0, .final=0, .range=0 },/* 1344 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1346, .patterns=0, .final=0, .range=0 },/* 1345 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=140, .final=1, .range=0 },/* 1346 */
      { .f_node=5090, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1348, .patterns=0, .final=0, .range=0 },/* 1347 */
      { .f_node=3609, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=1349, .patterns=0, .final=0, .range=0 },/* 1348 */
      { .f_node=5293, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1350, .patterns=0, .final=0, .range=0 },/* 1349 */
      { .f_node=5294, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1351, .patterns=0, .final=0, .range=0 },/* 1350 */
      { .f_node=3492, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1352, .patterns=0, .final=0, .range=0 },/* 1351 */
      { .f_node=5419, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1353, .patterns=0, .final=0, .range=0 },/* 1352 */
      { .f_node=877, .degree=18, .alpha=0x63, .outgoing=429, .patterns=0, .final=0, .range=1 },/* 1353 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1355, .patterns=0, .final=0, .range=0 },/* 1354 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1356, .patterns=0, .final=0, .range=0 },/* 1355 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=141, .final=1, .range=0 },/* 1356 */
      { .f_node=1603, .degree=0, .alpha=0x73/* 's' */, .outgoing=1358, .patterns=0, .final=0, .range=0 },/* 1357 */
      { .f_node=1604, .degree=0, .alpha=0x00, .outgoing=0, .patterns=142, .final=1, .range=0 },/* 1358 */
      { .f_node=4868, .degree=14, .alpha=0x61, .outgoing=448, .patterns=0, .final=0, .range=1 },/* 1359 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1361, .patterns=0, .final=0, .range=0 },/* 1360 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1362, .patterns=0, .final=0, .range=0 },/* 1361 */
      { .f_node=878, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=1363, .patterns=0, .final=0, .range=0 },/* 1362 */
      { .f_node=901, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1364, .patterns=0, .final=0, .range=0 },/* 1363 */
      { .f_node=902, .degree=0, .alpha=0x64/* 'd' */, .outgoing=1365, .patterns=0, .final=0, .range=0 },/* 1364 */
      { .f_node=2773, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1366, .patterns=0, .final=0, .range=0 },/* 1365 */
      { .f_node=436, .degree=0, .alpha=0x73/* 's' */, .outgoing=1367, .patterns=0, .final=0, .range=0 },/* 1366 */
      { .f_node=437, .degree=0, .alpha=0x36/* '6' */, .outgoing=1368, .patterns=0, .final=0, .range=0 },/* 1367 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1369, .patterns=0, .final=0, .range=0 },/* 1368 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1370, .patterns=0, .final=0, .range=0 },/* 1369 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1371, .patterns=0, .final=0, .range=0 },/* 1370 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=1372, .patterns=0, .final=0, .range=0 },/* 1371 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=143, .final=1, .range=0 },/* 1372 */
      { .f_node=4302, .degree=1, .alpha=0x63, .outgoing=463, .patterns=0, .final=0, .range=1 },/* 1373 */
      { .f_node=5471, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1375, .patterns=0, .final=0, .range=0 },/* 1374 */
      { .f_node=5418, .degree=0, .alpha=0x64/* 'd' */, .outgoing=1376, .patterns=0, .final=0, .range=0 },/* 1375 */
      { .f_node=2, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1377, .patterns=0, .final=0, .range=0 },/* 1376 */
      { .f_node=772, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1378, .patterns=0, .final=0, .range=0 },/* 1377 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1379, .patterns=0, .final=0, .range=0 },/* 1378 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=1380, .patterns=0, .final=0, .range=0 },/* 1379 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=144, .final=1, .range=0 },/* 1380 */
      { .f_node=3905, .degree=0, .alpha=0x67/* 'g' */, .outgoing=1382, .patterns=0, .final=0, .range=0 },/* 1381 */
      { .f_node=3906, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1383, .patterns=0, .final=0, .range=0 },/* 1382 */
      { .f_node=3907, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1384, .patterns=0, .final=0, .range=0 },/* 1383 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1385, .patterns=0, .final=0, .range=0 },/* 1384 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1386, .patterns=0, .final=0, .range=0 },/* 1385 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=1387, .patterns=0, .final=0, .range=0 },/* 1386 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=145, .final=1, .range=0 },/* 1387 */
      { .f_node=4869, .degree=0, .alpha=0x74/* 't' */, .outgoing=1389, .patterns=0, .final=0, .range=0 },/* 1388 */
      { .f_node=4870, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1390, .patterns=0, .final=0, .range=0 },/* 1389 */
      { .f_node=5471, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1391, .patterns=0, .final=0, .range=0 },/* 1390 */
      { .f_node=5499, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1392, .patterns=0, .final=0, .range=0 },/* 1391 */
      { .f_node=3609, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1393, .patterns=0, .final=0, .range=0 },/* 1392 */
      { .f_node=5418, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1394, .patterns=0, .final=0, .range=0 },/* 1393 */
      { .f_node=5419, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1395, .patterns=0, .final=0, .range=0 },/* 1394 */
      { .f_node=5471, .degree=0, .alpha=0x74/* 't' */, .outgoing=1396, .patterns=0, .final=0, .range=0 },/* 1395 */
      { .f_node=4944, .degree=0, .alpha=0x74/* 't' */, .outgoing=1397, .patterns=0, .final=0, .range=0 },/* 1396 */
      { .f_node=5101, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1398, .patterns=0, .final=0, .range=0 },/* 1397 */
      { .f_node=4956, .degree=0, .alpha=0x73/* 's' */, .outgoing=1399, .patterns=0, .final=0, .range=0 },/* 1398 */
      { .f_node=4278, .degree=0, .alpha=0x74/* 't' */, .outgoing=1400, .patterns=0, .final=0, .range=0 },/* 1399 */
      { .f_node=4573, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1401, .patterns=0, .final=0, .range=0 },/* 1400 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1402, .patterns=0, .final=0, .range=0 },/* 1401 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1403, .patterns=0, .final=0, .range=0 },/* 1402 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1404, .patterns=0, .final=0, .range=0 },/* 1403 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=146, .final=1, .range=0 },/* 1404 */
      { .f_node=4347, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1406, .patterns=0, .final=0, .range=0 },/* 1405 */
      { .f_node=5953, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1407, .patterns=0, .final=0, .range=0 },/* 1406 */
      { .f_node=4708, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1408, .patterns=0, .final=0, .range=0 },/* 1407 */
      { .f_node=4751, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1409, .patterns=0, .final=0, .range=0 },/* 1408 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1410, .patterns=0, .final=0, .range=0 },/* 1409 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1411, .patterns=0, .final=0, .range=0 },/* 1410 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=1412, .patterns=0, .final=0, .range=0 },/* 1411 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=147, .final=1, .range=0 },/* 1412 */
      { .f_node=4366, .degree=0, .alpha=0x64/* 'd' */, .outgoing=1414, .patterns=0, .final=0, .range=0 },/* 1413 */
      { .f_node=2, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1415, .patterns=0, .final=0, .range=0 },/* 1414 */
      { .f_node=3733, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1416, .patterns=0, .final=0, .range=0 },/* 1415 */
      { .f_node=5418, .degree=0, .alpha=0x74/* 't' */, .outgoing=1417, .patterns=0, .final=0, .range=0 },/* 1416 */
      { .f_node=5464, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1418, .patterns=0, .final=0, .range=0 },/* 1417 */
      { .f_node=5042, .degree=0, .alpha=0x74/* 't' */, .outgoing=1419, .patterns=0, .final=0, .range=0 },/* 1418 */
      { .f_node=3538, .degree=0, .alpha=0x79/* 'y' */, .outgoing=1420, .patterns=0, .final=0, .range=0 },/* 1419 */
      { .f_node=5800, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1421, .patterns=0, .final=0, .range=0 },/* 1420 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1422, .patterns=0, .final=0, .range=0 },/* 1421 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1423, .patterns=0, .final=0, .range=0 },/* 1422 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1424, .patterns=0, .final=0, .range=0 },/* 1423 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=148, .final=1, .range=0 },/* 1424 */
      { .f_node=3563, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1426, .patterns=0, .final=0, .range=0 },/* 1425 */
      { .f_node=3564, .degree=15, .alpha=0x64, .outgoing=465, .patterns=0, .final=0, .range=1 },/* 1426 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1428, .patterns=0, .final=0, .range=0 },/* 1427 */
      { .f_node=436, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1429, .patterns=0, .final=0, .range=0 },/* 1428 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1430, .patterns=0, .final=0, .range=0 },/* 1429 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1431, .patterns=0, .final=0, .range=0 },/* 1430 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1432, .patterns=0, .final=0, .range=0 },/* 1431 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=149, .final=1, .range=0 },/* 1432 */
      { .f_node=3565, .degree=0, .alpha=0x70/* 'p' */, .outgoing=1434, .patterns=0, .final=0, .range=0 },/* 1433 */
      { .f_node=4478, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1435, .patterns=0, .final=0, .range=0 },/* 1434 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1436, .patterns=0, .final=0, .range=0 },/* 1435 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1437, .patterns=0, .final=0, .range=0 },/* 1436 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1438, .patterns=0, .final=0, .range=0 },/* 1437 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=150, .final=1, .range=0 },/* 1438 */
      { .f_node=4790, .degree=0, .alpha=0x73/* 's' */, .outgoing=1440, .patterns=0, .final=0, .range=0 },/* 1439 */
      { .f_node=4868, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1441, .patterns=0, .final=0, .range=0 },/* 1440 */
      { .f_node=4879, .degree=0, .alpha=0x73/* 's' */, .outgoing=1442, .patterns=0, .final=0, .range=0 },/* 1441 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1443, .patterns=0, .final=0, .range=0 },/* 1442 */
      { .f_node=877, .degree=0, .alpha=0x71/* 'q' */, .outgoing=1444, .patterns=0, .final=0, .range=0 },/* 1443 */
      { .f_node=2533, .degree=0, .alpha=0x70/* 'p' */, .outgoing=1445, .patterns=0, .final=0, .range=0 },/* 1444 */
      { .f_node=3983, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1446, .patterns=0, .final=0, .range=0 },/* 1445 */
      { .f_node=4157, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1447, .patterns=0, .final=0, .range=0 },/* 1446 */
      { .f_node=5471, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1448, .patterns=0, .final=0, .range=0 },/* 1447 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1449, .patterns=0, .final=0, .range=0 },/* 1448 */
      { .f_node=1545, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1450, .patterns=0, .final=0, .range=0 },/* 1449 */
      { .f_node=1594, .degree=0, .alpha=0x00, .outgoing=0, .patterns=151, .final=1, .range=0 },/* 1450 */
      { .f_node=3983, .degree=20, .alpha=0x61, .outgoing=481, .patterns=0, .final=0, .range=1 },/* 1451 */
      { .f_node=4025, .degree=5, .alpha=0x6e, .outgoing=502, .patterns=0, .final=0, .range=1 },/* 1452 */
      { .f_node=2866, .degree=0, .alpha=0x64/* 'd' */, .outgoing=1454, .patterns=0, .final=0, .range=0 },/* 1453 */
      { .f_node=2867, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1455, .patterns=0, .final=0, .range=0 },/* 1454 */
      { .f_node=85, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1456, .patterns=0, .final=0, .range=0 },/* 1455 */
      { .f_node=3669, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1457, .patterns=0, .final=0, .range=0 },/* 1456 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1458, .patterns=0, .final=0, .range=0 },/* 1457 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1459, .patterns=0, .final=0, .range=0 },/* 1458 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1460, .patterns=0, .final=0, .range=0 },/* 1459 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1461, .patterns=0, .final=0, .range=0 },/* 1460 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=152, .final=1, .range=0 },/* 1461 */
      { .f_node=4026, .degree=0, .alpha=0x74/* 't' */, .outgoing=1463, .patterns=0, .final=0, .range=0 },/* 1462 */
      { .f_node=4027, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1464, .patterns=0, .final=0, .range=0 },/* 1463 */
      { .f_node=4028, .degree=0, .alpha=0x62/* 'b' */, .outgoing=1465, .patterns=0, .final=0, .range=0 },/* 1464 */
      { .f_node=4029, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1466, .patterns=0, .final=0, .range=0 },/* 1465 */
      { .f_node=4030, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1467, .patterns=0, .final=0, .range=0 },/* 1466 */
      { .f_node=4031, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1468, .patterns=0, .final=0, .range=0 },/* 1467 */
      { .f_node=4032, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1469, .patterns=0, .final=0, .range=0 },/* 1468 */
      { .f_node=4033, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1470, .patterns=0, .final=0, .range=0 },/* 1469 */
      { .f_node=4034, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1471, .patterns=0, .final=0, .range=0 },/* 1470 */
      { .f_node=4035, .degree=0, .alpha=0x00, .outgoing=0, .patterns=153, .final=1, .range=0 },/* 1471 */
      { .f_node=4157, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1473, .patterns=0, .final=0, .range=0 },/* 1472 */
      { .f_node=4158, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1474, .patterns=0, .final=0, .range=0 },/* 1473 */
      { .f_node=3324, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1475, .patterns=0, .final=0, .range=0 },/* 1474 */
      { .f_node=3393, .degree=0, .alpha=0x67/* 'g' */, .outgoing=1476, .patterns=0, .final=0, .range=0 },/* 1475 */
      { .f_node=3451, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1477, .patterns=0, .final=0, .range=0 },/* 1476 */
      { .f_node=5239, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1478, .patterns=0, .final=0, .range=0 },/* 1477 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1479, .patterns=0, .final=0, .range=0 },/* 1478 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1480, .patterns=0, .final=0, .range=0 },/* 1479 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=155, .final=1, .range=0 },/* 1480 */
      { .f_node=3997, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1482, .patterns=0, .final=0, .range=0 },/* 1481 */
      { .f_node=2762, .degree=0, .alpha=0x79/* 'y' */, .outgoing=1483, .patterns=0, .final=0, .range=0 },/* 1482 */
      { .f_node=5800, .degree=0, .alpha=0x73/* 's' */, .outgoing=1484, .patterns=0, .final=0, .range=0 },/* 1483 */
      { .f_node=4278, .degree=0, .alpha=0x74/* 't' */, .outgoing=1485, .patterns=0, .final=0, .range=0 },/* 1484 */
      { .f_node=4573, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1486, .patterns=0, .final=0, .range=0 },/* 1485 */
      { .f_node=4574, .degree=0, .alpha=0x74/* 't' */, .outgoing=1487, .patterns=0, .final=0, .range=0 },/* 1486 */
      { .f_node=4575, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1488, .patterns=0, .final=0, .range=0 },/* 1487 */
      { .f_node=4576, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1489, .patterns=0, .final=0, .range=0 },/* 1488 */
      { .f_node=3515, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1490, .patterns=0, .final=0, .range=0 },/* 1489 */
      { .f_node=3609, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1491, .patterns=0, .final=0, .range=0 },/* 1490 */
      { .f_node=877, .degree=11, .alpha=0x63, .outgoing=508, .patterns=0, .final=0, .range=1 },/* 1491 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1493, .patterns=0, .final=0, .range=0 },/* 1492 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1494, .patterns=0, .final=0, .range=0 },/* 1493 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=156, .final=1, .range=0 },/* 1494 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1496, .patterns=0, .final=0, .range=0 },/* 1495 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=1497, .patterns=0, .final=0, .range=0 },/* 1496 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=157, .final=1, .range=0 },/* 1497 */
      { .f_node=3983, .degree=0, .alpha=0x73/* 's' */, .outgoing=1499, .patterns=0, .final=0, .range=0 },/* 1498 */
      { .f_node=4278, .degree=1, .alpha=0x00, .outgoing=520, .patterns=0, .final=0, .range=0 },/* 1499 */
      { .f_node=4573, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1501, .patterns=0, .final=0, .range=0 },/* 1500 */
      { .f_node=5596, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1502, .patterns=0, .final=0, .range=0 },/* 1501 */
      { .f_node=5611, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1503, .patterns=0, .final=0, .range=0 },/* 1502 */
      { .f_node=2762, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1504, .patterns=0, .final=0, .range=0 },/* 1503 */
      { .f_node=2808, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1505, .patterns=0, .final=0, .range=0 },/* 1504 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1506, .patterns=0, .final=0, .range=0 },/* 1505 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1507, .patterns=0, .final=0, .range=0 },/* 1506 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1508, .patterns=0, .final=0, .range=0 },/* 1507 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=158, .final=1, .range=0 },/* 1508 */
      { .f_node=877, .degree=0, .alpha=0x74/* 't' */, .outgoing=1510, .patterns=0, .final=0, .range=0 },/* 1509 */
      { .f_node=1634, .degree=0, .alpha=0x76/* 'v' */, .outgoing=1511, .patterns=0, .final=0, .range=0 },/* 1510 */
      { .f_node=5786, .degree=0, .alpha=0x00, .outgoing=0, .patterns=159, .final=1, .range=0 },/* 1511 */
      { .f_node=5596, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1513, .patterns=0, .final=0, .range=0 },/* 1512 */
      { .f_node=3324, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1514, .patterns=0, .final=0, .range=0 },/* 1513 */
      { .f_node=3393, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1515, .patterns=0, .final=0, .range=0 },/* 1514 */
      { .f_node=4751, .degree=0, .alpha=0x76/* 'v' */, .outgoing=1516, .patterns=0, .final=0, .range=0 },/* 1515 */
      { .f_node=3926, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1517, .patterns=0, .final=0, .range=0 },/* 1516 */
      { .f_node=3324, .degree=0, .alpha=0x64/* 'd' */, .outgoing=1518, .patterns=0, .final=0, .range=0 },/* 1517 */
      { .f_node=2, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1519, .patterns=0, .final=0, .range=0 },/* 1518 */
      { .f_node=3733, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1520, .patterns=0, .final=0, .range=0 },/* 1519 */
      { .f_node=3563, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1521, .patterns=0, .final=0, .range=0 },/* 1520 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1522, .patterns=0, .final=0, .range=0 },/* 1521 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1523, .patterns=0, .final=0, .range=0 },/* 1522 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1524, .patterns=0, .final=0, .range=0 },/* 1523 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=160, .final=1, .range=0 },/* 1524 */
      { .f_node=4278, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1526, .patterns=0, .final=0, .range=0 },/* 1525 */
      { .f_node=4279, .degree=0, .alpha=0x64/* 'd' */, .outgoing=1527, .patterns=0, .final=0, .range=0 },/* 1526 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1528, .patterns=0, .final=0, .range=0 },/* 1527 */
      { .f_node=436, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1529, .patterns=0, .final=0, .range=0 },/* 1528 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1530, .patterns=0, .final=0, .range=0 },/* 1529 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1531, .patterns=0, .final=0, .range=0 },/* 1530 */
      { .f_node=5499, .degree=0, .alpha=0x00, .outgoing=0, .patterns=161, .final=1, .range=0 },/* 1531 */
      { .f_node=3984, .degree=0, .alpha=0x73/* 's' */, .outgoing=1533, .patterns=0, .final=0, .range=0 },/* 1532 */
      { .f_node=3985, .degree=0, .alpha=0x68/* 'h' */, .outgoing=1534, .patterns=0, .final=0, .range=0 },/* 1533 */
      { .f_node=3986, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1535, .patterns=0, .final=0, .range=0 },/* 1534 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1536, .patterns=0, .final=0, .range=0 },/* 1535 */
      { .f_node=878, .degree=0, .alpha=0x70/* 'p' */, .outgoing=1537, .patterns=0, .final=0, .range=0 },/* 1536 */
      { .f_node=930, .degree=0, .alpha=0x70/* 'p' */, .outgoing=1538, .patterns=0, .final=0, .range=0 },/* 1537 */
      { .f_node=931, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=1539, .patterns=0, .final=0, .range=0 },/* 1538 */
      { .f_node=932, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1540, .patterns=0, .final=0, .range=0 },/* 1539 */
      { .f_node=933, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1541, .patterns=0, .final=0, .range=0 },/* 1540 */
      { .f_node=954, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1542, .patterns=0, .final=0, .range=0 },/* 1541 */
      { .f_node=955, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1543, .patterns=0, .final=0, .range=0 },/* 1542 */
      { .f_node=956, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1544, .patterns=0, .final=0, .range=0 },/* 1543 */
      { .f_node=957, .degree=0, .alpha=0x00, .outgoing=0, .patterns=162, .final=1, .range=0 },/* 1544 */
      { .f_node=5471, .degree=10, .alpha=0x64, .outgoing=522, .patterns=0, .final=0, .range=1 },/* 1545 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1547, .patterns=0, .final=0, .range=0 },/* 1546 */
      { .f_node=436, .degree=2, .alpha=0x00, .outgoing=533, .patterns=0, .final=0, .range=0 },/* 1547 */
      { .f_node=5969, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1549, .patterns=0, .final=0, .range=0 },/* 1548 */
      { .f_node=2762, .degree=0, .alpha=0x70/* 'p' */, .outgoing=1550, .patterns=0, .final=0, .range=0 },/* 1549 */
      { .f_node=2891, .degree=0, .alpha=0x70/* 'p' */, .outgoing=1551, .patterns=0, .final=0, .range=0 },/* 1550 */
      { .f_node=2892, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=1552, .patterns=0, .final=0, .range=0 },/* 1551 */
      { .f_node=2893, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1553, .patterns=0, .final=0, .range=0 },/* 1552 */
      { .f_node=3733, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1554, .patterns=0, .final=0, .range=0 },/* 1553 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1555, .patterns=0, .final=0, .range=0 },/* 1554 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1556, .patterns=0, .final=0, .range=0 },/* 1555 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1557, .patterns=0, .final=0, .range=0 },/* 1556 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=164, .final=1, .range=0 },/* 1557 */
      { .f_node=3324, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1559, .patterns=0, .final=0, .range=0 },/* 1558 */
      { .f_node=3492, .degree=0, .alpha=0x73/* 's' */, .outgoing=1560, .patterns=0, .final=0, .range=0 },/* 1559 */
      { .f_node=3493, .degree=0, .alpha=0x74/* 't' */, .outgoing=1561, .patterns=0, .final=0, .range=0 },/* 1560 */
      { .f_node=3494, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1562, .patterns=0, .final=0, .range=0 },/* 1561 */
      { .f_node=3495, .degree=0, .alpha=0x67/* 'g' */, .outgoing=1563, .patterns=0, .final=0, .range=0 },/* 1562 */
      { .f_node=3496, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1564, .patterns=0, .final=0, .range=0 },/* 1563 */
      { .f_node=3497, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1565, .patterns=0, .final=0, .range=0 },/* 1564 */
      { .f_node=3498, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1566, .patterns=0, .final=0, .range=0 },/* 1565 */
      { .f_node=3499, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1567, .patterns=0, .final=0, .range=0 },/* 1566 */
      { .f_node=3500, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1568, .patterns=165, .final=1, .range=0 },/* 1567 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1569, .patterns=0, .final=0, .range=0 },/* 1568 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1570, .patterns=0, .final=0, .range=0 },/* 1569 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=166, .final=1, .range=0 },/* 1570 */
      { .f_node=877, .degree=0, .alpha=0x76/* 'v' */, .outgoing=1572, .patterns=0, .final=0, .range=0 },/* 1571 */
      { .f_node=2428, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1573, .patterns=0, .final=0, .range=0 },/* 1572 */
      { .f_node=2436, .degree=0, .alpha=0x62/* 'b' */, .outgoing=1574, .patterns=0, .final=0, .range=0 },/* 1573 */
      { .f_node=2437, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1575, .patterns=0, .final=0, .range=0 },/* 1574 */
      { .f_node=2438, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1576, .patterns=0, .final=0, .range=0 },/* 1575 */
      { .f_node=2439, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1577, .patterns=0, .final=0, .range=0 },/* 1576 */
      { .f_node=2440, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1578, .patterns=0, .final=0, .range=0 },/* 1577 */
      { .f_node=2441, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1579, .patterns=0, .final=0, .range=0 },/* 1578 */
      { .f_node=2442, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1580, .patterns=0, .final=0, .range=0 },/* 1579 */
      { .f_node=2443, .degree=0, .alpha=0x00, .outgoing=0, .patterns=167, .final=1, .range=0 },/* 1580 */
      { .f_node=5482, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1582, .patterns=0, .final=0, .range=0 },/* 1581 */
      { .f_node=5483, .degree=0, .alpha=0x75/* 'u' */, .outgoing=1583, .patterns=0, .final=0, .range=0 },/* 1582 */
      { .f_node=5484, .degree=0, .alpha=0x64/* 'd' */, .outgoing=1584, .patterns=0, .final=0, .range=0 },/* 1583 */
      { .f_node=5485, .degree=0, .alpha=0x66/* 'f' */, .outgoing=1585, .patterns=0, .final=0, .range=0 },/* 1584 */
      { .f_node=5486, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1586, .patterns=0, .final=0, .range=0 },/* 1585 */
      { .f_node=5596, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1587, .patterns=0, .final=0, .range=0 },/* 1586 */
      { .f_node=3563, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1588, .patterns=0, .final=0, .range=0 },/* 1587 */
      { .f_node=3609, .degree=0, .alpha=0x74/* 't' */, .outgoing=1589, .patterns=0, .final=0, .range=0 },/* 1588 */
      { .f_node=5464, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1590, .patterns=0, .final=0, .range=0 },/* 1589 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1591, .patterns=0, .final=0, .range=0 },/* 1590 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1592, .patterns=0, .final=0, .range=0 },/* 1591 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=1593, .patterns=0, .final=0, .range=0 },/* 1592 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=169, .final=1, .range=0 },/* 1593 */
      { .f_node=5418, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1595, .patterns=0, .final=0, .range=0 },/* 1594 */
      { .f_node=5418, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1596, .patterns=0, .final=0, .range=0 },/* 1595 */
      { .f_node=877, .degree=11, .alpha=0x63, .outgoing=536, .patterns=0, .final=0, .range=1 },/* 1596 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1598, .patterns=0, .final=0, .range=0 },/* 1597 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1599, .patterns=0, .final=0, .range=0 },/* 1598 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=170, .final=1, .range=0 },/* 1599 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1601, .patterns=0, .final=0, .range=0 },/* 1600 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=1602, .patterns=0, .final=0, .range=0 },/* 1601 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=171, .final=1, .range=0 },/* 1602 */
      { .f_node=5858, .degree=0, .alpha=0x73/* 's' */, .outgoing=1604, .patterns=0, .final=0, .range=0 },/* 1603 */
      { .f_node=4278, .degree=0, .alpha=0x2d/* '-' */, .outgoing=1605, .patterns=0, .final=0, .range=0 },/* 1604 */
      { .f_node=5969, .degree=0, .alpha=0x77/* 'w' */, .outgoing=1606, .patterns=0, .final=0, .range=0 },/* 1605 */
      { .f_node=5671, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1607, .patterns=0, .final=0, .range=0 },/* 1606 */
      { .f_node=5710, .degree=0, .alpha=0x73/* 's' */, .outgoing=1608, .patterns=0, .final=0, .range=0 },/* 1607 */
      { .f_node=4278, .degree=0, .alpha=0x74/* 't' */, .outgoing=1609, .patterns=0, .final=0, .range=0 },/* 1608 */
      { .f_node=4573, .degree=0, .alpha=0x2d/* '-' */, .outgoing=1610, .patterns=0, .final=0, .range=0 },/* 1609 */
      { .f_node=5969, .degree=0, .alpha=0x32/* '2' */, .outgoing=1611, .patterns=0, .final=0, .range=0 },/* 1610 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1612, .patterns=0, .final=0, .range=0 },/* 1611 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1613, .patterns=0, .final=0, .range=0 },/* 1612 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1614, .patterns=0, .final=0, .range=0 },/* 1613 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1615, .patterns=0, .final=0, .range=0 },/* 1614 */
      { .f_node=5520, .degree=0, .alpha=0x70/* 'p' */, .outgoing=1616, .patterns=0, .final=0, .range=0 },/* 1615 */
      { .f_node=3983, .degree=0, .alpha=0x75/* 'u' */, .outgoing=1617, .patterns=0, .final=0, .range=0 },/* 1616 */
      { .f_node=3984, .degree=0, .alpha=0x74/* 't' */, .outgoing=1618, .patterns=0, .final=0, .range=0 },/* 1617 */
      { .f_node=4944, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1619, .patterns=0, .final=0, .range=0 },/* 1618 */
      { .f_node=4956, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1620, .patterns=0, .final=0, .range=0 },/* 1619 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1621, .patterns=0, .final=0, .range=0 },/* 1620 */
      { .f_node=878, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1622, .patterns=0, .final=0, .range=0 },/* 1621 */
      { .f_node=906, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1623, .patterns=0, .final=0, .range=0 },/* 1622 */
      { .f_node=907, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=1624, .patterns=0, .final=0, .range=0 },/* 1623 */
      { .f_node=908, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1625, .patterns=0, .final=0, .range=0 },/* 1624 */
      { .f_node=909, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1626, .patterns=0, .final=0, .range=0 },/* 1625 */
      { .f_node=910, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1627, .patterns=0, .final=0, .range=0 },/* 1626 */
      { .f_node=2838, .degree=0, .alpha=0x77/* 'w' */, .outgoing=1628, .patterns=0, .final=0, .range=0 },/* 1627 */
      { .f_node=2847, .degree=0, .alpha=0x73/* 's' */, .outgoing=1629, .patterns=0, .final=0, .range=0 },/* 1628 */
      { .f_node=2848, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1630, .patterns=0, .final=0, .range=0 },/* 1629 */
      { .f_node=2849, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1631, .patterns=0, .final=0, .range=0 },/* 1630 */
      { .f_node=2850, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1632, .patterns=0, .final=0, .range=0 },/* 1631 */
      { .f_node=2851, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1633, .patterns=0, .final=0, .range=0 },/* 1632 */
      { .f_node=2852, .degree=0, .alpha=0x00, .outgoing=0, .patterns=172, .final=1, .range=0 },/* 1633 */
      { .f_node=4944, .degree=18, .alpha=0x65, .outgoing=548, .patterns=0, .final=0, .range=1 },/* 1634 */
      { .f_node=4956, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1636, .patterns=0, .final=0, .range=0 },/* 1635 */
      { .f_node=4957, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1637, .patterns=0, .final=0, .range=0 },/* 1636 */
      { .f_node=4958, .degree=0, .alpha=0x76/* 'v' */, .outgoing=1638, .patterns=0, .final=0, .range=0 },/* 1637 */
      { .f_node=5786, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1639, .patterns=0, .final=0, .range=0 },/* 1638 */
      { .f_node=3324, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1640, .patterns=0, .final=0, .range=0 },/* 1639 */
      { .f_node=3733, .degree=0, .alpha=0x77/* 'w' */, .outgoing=1641, .patterns=0, .final=0, .range=0 },/* 1640 */
      { .f_node=5671, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1642, .patterns=0, .final=0, .range=0 },/* 1641 */
      { .f_node=5710, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1643, .patterns=0, .final=0, .range=0 },/* 1642 */
      { .f_node=5596, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1644, .patterns=0, .final=0, .range=0 },/* 1643 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1645, .patterns=0, .final=0, .range=0 },/* 1644 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1646, .patterns=0, .final=0, .range=0 },/* 1645 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1647, .patterns=0, .final=0, .range=0 },/* 1646 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=174, .final=1, .range=0 },/* 1647 */
      { .f_node=5090, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1649, .patterns=0, .final=0, .range=0 },/* 1648 */
      { .f_node=5091, .degree=0, .alpha=0x70/* 'p' */, .outgoing=1650, .patterns=0, .final=0, .range=0 },/* 1649 */
      { .f_node=3983, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1651, .patterns=0, .final=0, .range=0 },/* 1650 */
      { .f_node=5596, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1652, .patterns=0, .final=0, .range=0 },/* 1651 */
      { .f_node=3563, .degree=0, .alpha=0x6a/* 'j' */, .outgoing=1653, .patterns=0, .final=0, .range=0 },/* 1652 */
      { .f_node=5546, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1654, .patterns=0, .final=0, .range=0 },/* 1653 */
      { .f_node=3733, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1655, .patterns=0, .final=0, .range=0 },/* 1654 */
      { .f_node=5471, .degree=0, .alpha=0x74/* 't' */, .outgoing=1656, .patterns=0, .final=0, .range=0 },/* 1655 */
      { .f_node=4944, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1657, .patterns=0, .final=0, .range=0 },/* 1656 */
      { .f_node=877, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1658, .patterns=0, .final=0, .range=0 },/* 1657 */
      { .f_node=2338, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1659, .patterns=0, .final=0, .range=0 },/* 1658 */
      { .f_node=3669, .degree=0, .alpha=0x67/* 'g' */, .outgoing=1660, .patterns=0, .final=0, .range=0 },/* 1659 */
      { .f_node=5159, .degree=0, .alpha=0x00, .outgoing=0, .patterns=175, .final=1, .range=0 },/* 1660 */
      { .f_node=5109, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1662, .patterns=0, .final=0, .range=0 },/* 1661 */
      { .f_node=3733, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1663, .patterns=0, .final=0, .range=0 },/* 1662 */
      { .f_node=5418, .degree=0, .alpha=0x74/* 't' */, .outgoing=1664, .patterns=0, .final=0, .range=0 },/* 1663 */
      { .f_node=5464, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1665, .patterns=0, .final=0, .range=0 },/* 1664 */
      { .f_node=5042, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1666, .patterns=0, .final=0, .range=0 },/* 1665 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1667, .patterns=0, .final=0, .range=0 },/* 1666 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1668, .patterns=0, .final=0, .range=0 },/* 1667 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1669, .patterns=0, .final=0, .range=0 },/* 1668 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=176, .final=1, .range=0 },/* 1669 */
      { .f_node=5127, .degree=0, .alpha=0x74/* 't' */, .outgoing=1671, .patterns=0, .final=0, .range=0 },/* 1670 */
      { .f_node=4944, .degree=0, .alpha=0x74/* 't' */, .outgoing=1672, .patterns=0, .final=0, .range=0 },/* 1671 */
      { .f_node=5101, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1673, .patterns=0, .final=0, .range=0 },/* 1672 */
      { .f_node=5596, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1674, .patterns=0, .final=0, .range=0 },/* 1673 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1675, .patterns=0, .final=0, .range=0 },/* 1674 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1676, .patterns=0, .final=0, .range=0 },/* 1675 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1677, .patterns=0, .final=0, .range=0 },/* 1676 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=177, .final=1, .range=0 },/* 1677 */
      { .f_node=4204, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=1679, .patterns=0, .final=0, .range=0 },/* 1678 */
      { .f_node=5293, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1680, .patterns=0, .final=0, .range=0 },/* 1679 */
      { .f_node=5304, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1681, .patterns=0, .final=0, .range=0 },/* 1680 */
      { .f_node=3563, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1682, .patterns=0, .final=0, .range=0 },/* 1681 */
      { .f_node=4708, .degree=0, .alpha=0x62/* 'b' */, .outgoing=1683, .patterns=0, .final=0, .range=0 },/* 1682 */
      { .f_node=4204, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1684, .patterns=0, .final=0, .range=0 },/* 1683 */
      { .f_node=3733, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1685, .patterns=0, .final=0, .range=0 },/* 1684 */
      { .f_node=5596, .degree=0, .alpha=0x67/* 'g' */, .outgoing=1686, .patterns=0, .final=0, .range=0 },/* 1685 */
      { .f_node=5159, .degree=1, .alpha=0x00, .outgoing=567, .patterns=0, .final=0, .range=0 },/* 1686 */
      { .f_node=5786, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1688, .patterns=0, .final=0, .range=0 },/* 1687 */
      { .f_node=2762, .degree=0, .alpha=0x75/* 'u' */, .outgoing=1689, .patterns=0, .final=0, .range=0 },/* 1688 */
      { .f_node=2967, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=1690, .patterns=0, .final=0, .range=0 },/* 1689 */
      { .f_node=5293, .degree=0, .alpha=0x74/* 't' */, .outgoing=1691, .patterns=0, .final=0, .range=0 },/* 1690 */
      { .f_node=4944, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1692, .patterns=0, .final=0, .range=0 },/* 1691 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1693, .patterns=0, .final=0, .range=0 },/* 1692 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1694, .patterns=0, .final=0, .range=0 },/* 1693 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1695, .patterns=0, .final=0, .range=0 },/* 1694 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=178, .final=1, .range=0 },/* 1695 */
      { .f_node=5239, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1697, .patterns=0, .final=0, .range=0 },/* 1696 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1698, .patterns=0, .final=0, .range=0 },/* 1697 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1699, .patterns=0, .final=0, .range=0 },/* 1698 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=179, .final=1, .range=0 },/* 1699 */
      { .f_node=5293, .degree=3, .alpha=0x00, .outgoing=569, .patterns=0, .final=0, .range=0 },/* 1700 */
      { .f_node=4278, .degree=7, .alpha=0x2d, .outgoing=573, .patterns=0, .final=0, .range=1 },/* 1701 */
      { .f_node=5969, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1703, .patterns=0, .final=0, .range=0 },/* 1702 */
      { .f_node=2762, .degree=0, .alpha=0x70/* 'p' */, .outgoing=1704, .patterns=0, .final=0, .range=0 },/* 1703 */
      { .f_node=2891, .degree=0, .alpha=0x70/* 'p' */, .outgoing=1705, .patterns=0, .final=0, .range=0 },/* 1704 */
      { .f_node=2892, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=1706, .patterns=0, .final=0, .range=0 },/* 1705 */
      { .f_node=2893, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1707, .patterns=0, .final=0, .range=0 },/* 1706 */
      { .f_node=3733, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1708, .patterns=0, .final=0, .range=0 },/* 1707 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1709, .patterns=0, .final=0, .range=0 },/* 1708 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1710, .patterns=0, .final=0, .range=0 },/* 1709 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1711, .patterns=0, .final=0, .range=0 },/* 1710 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=180, .final=1, .range=0 },/* 1711 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=1713, .patterns=0, .final=0, .range=0 },/* 1712 */
      { .f_node=5969, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1714, .patterns=0, .final=0, .range=0 },/* 1713 */
      { .f_node=2762, .degree=0, .alpha=0x70/* 'p' */, .outgoing=1715, .patterns=0, .final=0, .range=0 },/* 1714 */
      { .f_node=2891, .degree=0, .alpha=0x70/* 'p' */, .outgoing=1716, .patterns=0, .final=0, .range=0 },/* 1715 */
      { .f_node=2892, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=1717, .patterns=0, .final=0, .range=0 },/* 1716 */
      { .f_node=2893, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1718, .patterns=0, .final=0, .range=0 },/* 1717 */
      { .f_node=3733, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1719, .patterns=0, .final=0, .range=0 },/* 1718 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1720, .patterns=0, .final=0, .range=0 },/* 1719 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1721, .patterns=0, .final=0, .range=0 },/* 1720 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1722, .patterns=0, .final=0, .range=0 },/* 1721 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=181, .final=1, .range=0 },/* 1722 */
      { .f_node=2762, .degree=17, .alpha=0x62, .outgoing=581, .patterns=0, .final=0, .range=1 },/* 1723 */
      { .f_node=4204, .degree=0, .alpha=0x67/* 'g' */, .outgoing=1725, .patterns=0, .final=0, .range=0 },/* 1724 */
      { .f_node=5159, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1726, .patterns=0, .final=0, .range=0 },/* 1725 */
      { .f_node=5278, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1727, .patterns=0, .final=0, .range=0 },/* 1726 */
      { .f_node=5418, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1728, .patterns=0, .final=0, .range=0 },/* 1727 */
      { .f_node=5471, .degree=0, .alpha=0x79/* 'y' */, .outgoing=1729, .patterns=0, .final=0, .range=0 },/* 1728 */
      { .f_node=5800, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1730, .patterns=0, .final=0, .range=0 },/* 1729 */
      { .f_node=877, .degree=0, .alpha=0x77/* 'w' */, .outgoing=1731, .patterns=0, .final=0, .range=0 },/* 1730 */
      { .f_node=1942, .degree=0, .alpha=0x73/* 's' */, .outgoing=1732, .patterns=0, .final=0, .range=0 },/* 1731 */
      { .f_node=4278, .degree=0, .alpha=0x00, .outgoing=0, .patterns=182, .final=1, .range=0 },/* 1732 */
      { .f_node=2908, .degree=0, .alpha=0x74/* 't' */, .outgoing=1734, .patterns=0, .final=0, .range=0 },/* 1733 */
      { .f_node=4573, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1735, .patterns=0, .final=0, .range=0 },/* 1734 */
      { .f_node=877, .degree=0, .alpha=0x66/* 'f' */, .outgoing=1736, .patterns=0, .final=0, .range=0 },/* 1735 */
      { .f_node=2299, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1737, .patterns=0, .final=0, .range=0 },/* 1736 */
      { .f_node=4708, .degree=0, .alpha=0x00, .outgoing=0, .patterns=183, .final=1, .range=0 },/* 1737 */
      { .f_node=5800, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1739, .patterns=0, .final=0, .range=0 },/* 1738 */
      { .f_node=5418, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1740, .patterns=0, .final=0, .range=0 },/* 1739 */
      { .f_node=5471, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1741, .patterns=0, .final=0, .range=0 },/* 1740 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1742, .patterns=0, .final=0, .range=0 },/* 1741 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1743, .patterns=0, .final=0, .range=0 },/* 1742 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1744, .patterns=0, .final=0, .range=0 },/* 1743 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=184, .final=1, .range=0 },/* 1744 */
      { .f_node=5294, .degree=11, .alpha=0x63, .outgoing=599, .patterns=0, .final=0, .range=1 },/* 1745 */
      { .f_node=5471, .degree=0, .alpha=0x64/* 'd' */, .outgoing=1747, .patterns=0, .final=0, .range=0 },/* 1746 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1748, .patterns=0, .final=0, .range=0 },/* 1747 */
      { .f_node=436, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1749, .patterns=0, .final=0, .range=0 },/* 1748 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1750, .patterns=0, .final=0, .range=0 },/* 1749 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1751, .patterns=0, .final=0, .range=0 },/* 1750 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1752, .patterns=0, .final=0, .range=0 },/* 1751 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=185, .final=1, .range=0 },/* 1752 */
      { .f_node=3492, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=1754, .patterns=0, .final=0, .range=0 },/* 1753 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1755, .patterns=0, .final=0, .range=0 },/* 1754 */
      { .f_node=3733, .degree=0, .alpha=0x64/* 'd' */, .outgoing=1756, .patterns=0, .final=0, .range=0 },/* 1755 */
      { .f_node=3905, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1757, .patterns=0, .final=0, .range=0 },/* 1756 */
      { .f_node=786, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1758, .patterns=0, .final=0, .range=0 },/* 1757 */
      { .f_node=3492, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1759, .patterns=0, .final=0, .range=0 },/* 1758 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1760, .patterns=0, .final=0, .range=0 },/* 1759 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1761, .patterns=0, .final=0, .range=0 },/* 1760 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1762, .patterns=0, .final=0, .range=0 },/* 1761 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=186, .final=1, .range=0 },/* 1762 */
      { .f_node=5159, .degree=17, .alpha=0x63, .outgoing=611, .patterns=0, .final=0, .range=1 },/* 1763 */
      { .f_node=5471, .degree=0, .alpha=0x2d/* '-' */, .outgoing=1765, .patterns=0, .final=0, .range=0 },/* 1764 */
      { .f_node=5969, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1766, .patterns=0, .final=0, .range=0 },/* 1765 */
      { .f_node=2762, .degree=0, .alpha=0x70/* 'p' */, .outgoing=1767, .patterns=0, .final=0, .range=0 },/* 1766 */
      { .f_node=2891, .degree=0, .alpha=0x70/* 'p' */, .outgoing=1768, .patterns=0, .final=0, .range=0 },/* 1767 */
      { .f_node=2892, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=1769, .patterns=0, .final=0, .range=0 },/* 1768 */
      { .f_node=2893, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1770, .patterns=0, .final=0, .range=0 },/* 1769 */
      { .f_node=3733, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1771, .patterns=0, .final=0, .range=0 },/* 1770 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1772, .patterns=0, .final=0, .range=0 },/* 1771 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1773, .patterns=0, .final=0, .range=0 },/* 1772 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1774, .patterns=0, .final=0, .range=0 },/* 1773 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=187, .final=1, .range=0 },/* 1774 */
      { .f_node=5332, .degree=0, .alpha=0x78/* 'x' */, .outgoing=1776, .patterns=0, .final=0, .range=0 },/* 1775 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1777, .patterns=0, .final=0, .range=0 },/* 1776 */
      { .f_node=877, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1778, .patterns=0, .final=0, .range=0 },/* 1777 */
      { .f_node=1285, .degree=0, .alpha=0x73/* 's' */, .outgoing=1779, .patterns=0, .final=0, .range=0 },/* 1778 */
      { .f_node=1359, .degree=0, .alpha=0x00, .outgoing=0, .patterns=188, .final=1, .range=0 },/* 1779 */
      { .f_node=5252, .degree=0, .alpha=0x74/* 't' */, .outgoing=1781, .patterns=0, .final=0, .range=0 },/* 1780 */
      { .f_node=5253, .degree=0, .alpha=0x68/* 'h' */, .outgoing=1782, .patterns=0, .final=0, .range=0 },/* 1781 */
      { .f_node=5254, .degree=0, .alpha=0x75/* 'u' */, .outgoing=1783, .patterns=0, .final=0, .range=0 },/* 1782 */
      { .f_node=5255, .degree=0, .alpha=0x62/* 'b' */, .outgoing=1784, .patterns=0, .final=0, .range=0 },/* 1783 */
      { .f_node=5256, .degree=1, .alpha=0x00, .outgoing=629, .patterns=0, .final=0, .range=0 },/* 1784 */
      { .f_node=5257, .degree=6, .alpha=0x63, .outgoing=631, .patterns=0, .final=0, .range=1 },/* 1785 */
      { .f_node=5258, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1787, .patterns=0, .final=0, .range=0 },/* 1786 */
      { .f_node=5259, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1788, .patterns=0, .final=0, .range=0 },/* 1787 */
      { .f_node=5260, .degree=0, .alpha=0x00, .outgoing=0, .patterns=189, .final=1, .range=0 },/* 1788 */
      { .f_node=5261, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1790, .patterns=0, .final=0, .range=0 },/* 1789 */
      { .f_node=5262, .degree=0, .alpha=0x00, .outgoing=0, .patterns=191, .final=1, .range=0 },/* 1790 */
      { .f_node=5263, .degree=0, .alpha=0x73/* 's' */, .outgoing=1792, .patterns=0, .final=0, .range=0 },/* 1791 */
      { .f_node=5264, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1793, .patterns=0, .final=0, .range=0 },/* 1792 */
      { .f_node=5265, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1794, .patterns=0, .final=0, .range=0 },/* 1793 */
      { .f_node=5266, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1795, .patterns=0, .final=0, .range=0 },/* 1794 */
      { .f_node=5267, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1796, .patterns=0, .final=0, .range=0 },/* 1795 */
      { .f_node=5268, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1797, .patterns=0, .final=0, .range=0 },/* 1796 */
      { .f_node=5269, .degree=0, .alpha=0x74/* 't' */, .outgoing=1798, .patterns=0, .final=0, .range=0 },/* 1797 */
      { .f_node=5270, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1799, .patterns=0, .final=0, .range=0 },/* 1798 */
      { .f_node=5271, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1800, .patterns=0, .final=0, .range=0 },/* 1799 */
      { .f_node=5272, .degree=0, .alpha=0x74/* 't' */, .outgoing=1801, .patterns=0, .final=0, .range=0 },/* 1800 */
      { .f_node=5273, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1802, .patterns=0, .final=0, .range=0 },/* 1801 */
      { .f_node=5274, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1803, .patterns=0, .final=0, .range=0 },/* 1802 */
      { .f_node=5275, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1804, .patterns=0, .final=0, .range=0 },/* 1803 */
      { .f_node=5276, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1805, .patterns=0, .final=0, .range=0 },/* 1804 */
      { .f_node=5277, .degree=0, .alpha=0x00, .outgoing=0, .patterns=193, .final=1, .range=0 },/* 1805 */
      { .f_node=4708, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1807, .patterns=0, .final=0, .range=0 },/* 1806 */
      { .f_node=4709, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1808, .patterns=0, .final=0, .range=0 },/* 1807 */
      { .f_node=4710, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=1809, .patterns=0, .final=0, .range=0 },/* 1808 */
      { .f_node=4711, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1810, .patterns=0, .final=0, .range=0 },/* 1809 */
      { .f_node=4712, .degree=0, .alpha=0x00, .outgoing=0, .patterns=195, .final=1, .range=0 },/* 1810 */
      { .f_node=5173, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1812, .patterns=0, .final=0, .range=0 },/* 1811 */
      { .f_node=5174, .degree=0, .alpha=0x67/* 'g' */, .outgoing=1813, .patterns=0, .final=0, .range=0 },/* 1812 */
      { .f_node=5175, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=1814, .patterns=0, .final=0, .range=0 },/* 1813 */
      { .f_node=5176, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1815, .patterns=0, .final=0, .range=0 },/* 1814 */
      { .f_node=5177, .degree=4, .alpha=0x00, .outgoing=638, .patterns=0, .final=0, .range=0 },/* 1815 */
      { .f_node=1, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1817, .patterns=0, .final=0, .range=0 },/* 1816 */
      { .f_node=3324, .degree=0, .alpha=0x70/* 'p' */, .outgoing=1818, .patterns=0, .final=0, .range=0 },/* 1817 */
      { .f_node=3983, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1819, .patterns=0, .final=0, .range=0 },/* 1818 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1820, .patterns=0, .final=0, .range=0 },/* 1819 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1821, .patterns=0, .final=0, .range=0 },/* 1820 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=1822, .patterns=0, .final=0, .range=0 },/* 1821 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=196, .final=1, .range=0 },/* 1822 */
      { .f_node=4278, .degree=0, .alpha=0x79/* 'y' */, .outgoing=1824, .patterns=0, .final=0, .range=0 },/* 1823 */
      { .f_node=5800, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1825, .patterns=0, .final=0, .range=0 },/* 1824 */
      { .f_node=5418, .degree=0, .alpha=0x64/* 'd' */, .outgoing=1826, .patterns=0, .final=0, .range=0 },/* 1825 */
      { .f_node=2, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1827, .patterns=0, .final=0, .range=0 },/* 1826 */
      { .f_node=786, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1828, .patterns=0, .final=0, .range=0 },/* 1827 */
      { .f_node=5471, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1829, .patterns=0, .final=0, .range=0 },/* 1828 */
      { .f_node=5472, .degree=0, .alpha=0x74/* 't' */, .outgoing=1830, .patterns=0, .final=0, .range=0 },/* 1829 */
      { .f_node=2937, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1831, .patterns=0, .final=0, .range=0 },/* 1830 */
      { .f_node=5042, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1832, .patterns=0, .final=0, .range=0 },/* 1831 */
      { .f_node=3515, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1833, .patterns=0, .final=0, .range=0 },/* 1832 */
      { .f_node=3609, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1834, .patterns=0, .final=0, .range=0 },/* 1833 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1835, .patterns=0, .final=0, .range=0 },/* 1834 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1836, .patterns=0, .final=0, .range=0 },/* 1835 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1837, .patterns=0, .final=0, .range=0 },/* 1836 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=197, .final=1, .range=0 },/* 1837 */
      { .f_node=4944, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1839, .patterns=0, .final=0, .range=0 },/* 1838 */
      { .f_node=2762, .degree=0, .alpha=0x67/* 'g' */, .outgoing=1840, .patterns=0, .final=0, .range=0 },/* 1839 */
      { .f_node=5159, .degree=0, .alpha=0x73/* 's' */, .outgoing=1841, .patterns=0, .final=0, .range=0 },/* 1840 */
      { .f_node=4278, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1842, .patterns=0, .final=0, .range=0 },/* 1841 */
      { .f_node=4302, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1843, .patterns=0, .final=0, .range=0 },/* 1842 */
      { .f_node=5596, .degree=0, .alpha=0x76/* 'v' */, .outgoing=1844, .patterns=0, .final=0, .range=0 },/* 1843 */
      { .f_node=5786, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1845, .patterns=0, .final=0, .range=0 },/* 1844 */
      { .f_node=3324, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1846, .patterns=0, .final=0, .range=0 },/* 1845 */
      { .f_node=5471, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1847, .patterns=0, .final=0, .range=0 },/* 1846 */
      { .f_node=3733, .degree=0, .alpha=0x73/* 's' */, .outgoing=1848, .patterns=0, .final=0, .range=0 },/* 1847 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1849, .patterns=0, .final=0, .range=0 },/* 1848 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1850, .patterns=0, .final=0, .range=0 },/* 1849 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1851, .patterns=0, .final=0, .range=0 },/* 1850 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1852, .patterns=0, .final=0, .range=0 },/* 1851 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=198, .final=1, .range=0 },/* 1852 */
      { .f_node=5223, .degree=0, .alpha=0x00, .outgoing=0, .patterns=199, .final=1, .range=0 },/* 1853 */
      { .f_node=3926, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1855, .patterns=0, .final=0, .range=0 },/* 1854 */
      { .f_node=3324, .degree=0, .alpha=0x64/* 'd' */, .outgoing=1856, .patterns=0, .final=0, .range=0 },/* 1855 */
      { .f_node=2, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1857, .patterns=0, .final=0, .range=0 },/* 1856 */
      { .f_node=3733, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1858, .patterns=0, .final=0, .range=0 },/* 1857 */
      { .f_node=3563, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1859, .patterns=0, .final=0, .range=0 },/* 1858 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1860, .patterns=0, .final=0, .range=0 },/* 1859 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1861, .patterns=0, .final=0, .range=0 },/* 1860 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1862, .patterns=0, .final=0, .range=0 },/* 1861 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=201, .final=1, .range=0 },/* 1862 */
      { .f_node=4278, .degree=0, .alpha=0x74/* 't' */, .outgoing=1864, .patterns=0, .final=0, .range=0 },/* 1863 */
      { .f_node=4573, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1865, .patterns=0, .final=0, .range=0 },/* 1864 */
      { .f_node=4574, .degree=0, .alpha=0x74/* 't' */, .outgoing=1866, .patterns=0, .final=0, .range=0 },/* 1865 */
      { .f_node=4575, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1867, .patterns=0, .final=0, .range=0 },/* 1866 */
      { .f_node=4576, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1868, .patterns=0, .final=0, .range=0 },/* 1867 */
      { .f_node=4577, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1869, .patterns=0, .final=0, .range=0 },/* 1868 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1870, .patterns=0, .final=0, .range=0 },/* 1869 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1871, .patterns=0, .final=0, .range=0 },/* 1870 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1872, .patterns=0, .final=0, .range=0 },/* 1871 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=202, .final=1, .range=0 },/* 1872 */
      { .f_node=5224, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1874, .patterns=0, .final=0, .range=0 },/* 1873 */
      { .f_node=5042, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1875, .patterns=0, .final=0, .range=0 },/* 1874 */
      { .f_node=3393, .degree=0, .alpha=0x67/* 'g' */, .outgoing=1876, .patterns=0, .final=0, .range=0 },/* 1875 */
      { .f_node=3451, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1877, .patterns=0, .final=0, .range=0 },/* 1876 */
      { .f_node=5239, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1878, .patterns=0, .final=0, .range=0 },/* 1877 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1879, .patterns=0, .final=0, .range=0 },/* 1878 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1880, .patterns=0, .final=0, .range=0 },/* 1879 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=203, .final=1, .range=0 },/* 1880 */
      { .f_node=3324, .degree=11, .alpha=0x63, .outgoing=643, .patterns=0, .final=0, .range=1 },/* 1881 */
      { .f_node=5471, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=1883, .patterns=0, .final=0, .range=0 },/* 1882 */
      { .f_node=5482, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1884, .patterns=0, .final=0, .range=0 },/* 1883 */
      { .f_node=5483, .degree=0, .alpha=0x75/* 'u' */, .outgoing=1885, .patterns=0, .final=0, .range=0 },/* 1884 */
      { .f_node=5484, .degree=0, .alpha=0x64/* 'd' */, .outgoing=1886, .patterns=0, .final=0, .range=0 },/* 1885 */
      { .f_node=5485, .degree=1, .alpha=0x2d, .outgoing=655, .patterns=0, .final=0, .range=1 },/* 1886 */
      { .f_node=5969, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1888, .patterns=0, .final=0, .range=0 },/* 1887 */
      { .f_node=5471, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1889, .patterns=0, .final=0, .range=0 },/* 1888 */
      { .f_node=5499, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1890, .patterns=0, .final=0, .range=0 },/* 1889 */
      { .f_node=3609, .degree=0, .alpha=0x74/* 't' */, .outgoing=1891, .patterns=0, .final=0, .range=0 },/* 1890 */
      { .f_node=5464, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1892, .patterns=0, .final=0, .range=0 },/* 1891 */
      { .f_node=4956, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1893, .patterns=0, .final=0, .range=0 },/* 1892 */
      { .f_node=5418, .degree=0, .alpha=0x74/* 't' */, .outgoing=1894, .patterns=0, .final=0, .range=0 },/* 1893 */
      { .f_node=5464, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1895, .patterns=0, .final=0, .range=0 },/* 1894 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1896, .patterns=0, .final=0, .range=0 },/* 1895 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1897, .patterns=0, .final=0, .range=0 },/* 1896 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1898, .patterns=0, .final=0, .range=0 },/* 1897 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=204, .final=1, .range=0 },/* 1898 */
      { .f_node=772, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1900, .patterns=0, .final=0, .range=0 },/* 1899 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1901, .patterns=0, .final=0, .range=0 },/* 1900 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1902, .patterns=0, .final=0, .range=0 },/* 1901 */
      { .f_node=5520, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1903, .patterns=205, .final=1, .range=0 },/* 1902 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=206, .final=1, .range=0 },/* 1903 */
      { .f_node=5332, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=1905, .patterns=0, .final=0, .range=0 },/* 1904 */
      { .f_node=5293, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1906, .patterns=0, .final=0, .range=0 },/* 1905 */
      { .f_node=5294, .degree=0, .alpha=0x78/* 'x' */, .outgoing=1907, .patterns=0, .final=0, .range=0 },/* 1906 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1908, .patterns=0, .final=0, .range=0 },/* 1907 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1909, .patterns=0, .final=0, .range=0 },/* 1908 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1910, .patterns=0, .final=0, .range=0 },/* 1909 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1911, .patterns=0, .final=0, .range=0 },/* 1910 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=207, .final=1, .range=0 },/* 1911 */
      { .f_node=3393, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1913, .patterns=0, .final=0, .range=0 },/* 1912 */
      { .f_node=3394, .degree=0, .alpha=0x67/* 'g' */, .outgoing=1914, .patterns=0, .final=0, .range=0 },/* 1913 */
      { .f_node=3395, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1915, .patterns=0, .final=0, .range=0 },/* 1914 */
      { .f_node=3396, .degree=0, .alpha=0x73/* 's' */, .outgoing=1916, .patterns=0, .final=0, .range=0 },/* 1915 */
      { .f_node=3397, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1917, .patterns=0, .final=0, .range=0 },/* 1916 */
      { .f_node=877, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1918, .patterns=0, .final=0, .range=0 },/* 1917 */
      { .f_node=1881, .degree=0, .alpha=0x66/* 'f' */, .outgoing=1919, .patterns=0, .final=0, .range=0 },/* 1918 */
      { .f_node=1904, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=1920, .patterns=0, .final=0, .range=0 },/* 1919 */
      { .f_node=1905, .degree=0, .alpha=0x69/* 'i' */, .outgoing=1921, .patterns=0, .final=0, .range=0 },/* 1920 */
      { .f_node=1906, .degree=0, .alpha=0x78/* 'x' */, .outgoing=1922, .patterns=0, .final=0, .range=0 },/* 1921 */
      { .f_node=1907, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1923, .patterns=0, .final=0, .range=0 },/* 1922 */
      { .f_node=2762, .degree=0, .alpha=0x73/* 's' */, .outgoing=1924, .patterns=0, .final=0, .range=0 },/* 1923 */
      { .f_node=2908, .degree=0, .alpha=0x73/* 's' */, .outgoing=1925, .patterns=0, .final=0, .range=0 },/* 1924 */
      { .f_node=2909, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1926, .patterns=0, .final=0, .range=0 },/* 1925 */
      { .f_node=2910, .degree=0, .alpha=0x74/* 't' */, .outgoing=1927, .patterns=0, .final=0, .range=0 },/* 1926 */
      { .f_node=2911, .degree=0, .alpha=0x73/* 's' */, .outgoing=1928, .patterns=0, .final=0, .range=0 },/* 1927 */
      { .f_node=2912, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1929, .patterns=0, .final=0, .range=0 },/* 1928 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1930, .patterns=0, .final=0, .range=0 },/* 1929 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1931, .patterns=0, .final=0, .range=0 },/* 1930 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1932, .patterns=0, .final=0, .range=0 },/* 1931 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=208, .final=1, .range=0 },/* 1932 */
      { .f_node=3492, .degree=0, .alpha=0x73/* 's' */, .outgoing=1934, .patterns=0, .final=0, .range=0 },/* 1933 */
      { .f_node=3493, .degree=0, .alpha=0x74/* 't' */, .outgoing=1935, .patterns=0, .final=0, .range=0 },/* 1934 */
      { .f_node=3494, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1936, .patterns=0, .final=0, .range=0 },/* 1935 */
      { .f_node=3495, .degree=0, .alpha=0x67/* 'g' */, .outgoing=1937, .patterns=0, .final=0, .range=0 },/* 1936 */
      { .f_node=3496, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1938, .patterns=0, .final=0, .range=0 },/* 1937 */
      { .f_node=3497, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1939, .patterns=0, .final=0, .range=0 },/* 1938 */
      { .f_node=3498, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1940, .patterns=0, .final=0, .range=0 },/* 1939 */
      { .f_node=3499, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1941, .patterns=0, .final=0, .range=0 },/* 1940 */
      { .f_node=3500, .degree=0, .alpha=0x00, .outgoing=0, .patterns=209, .final=1, .range=0 },/* 1941 */
      { .f_node=5671, .degree=7, .alpha=0x00, .outgoing=657, .patterns=0, .final=0, .range=0 },/* 1942 */
      { .f_node=4204, .degree=15, .alpha=0x61, .outgoing=665, .patterns=0, .final=0, .range=1 },/* 1943 */
      { .f_node=2762, .degree=0, .alpha=0x67/* 'g' */, .outgoing=1945, .patterns=0, .final=0, .range=0 },/* 1944 */
      { .f_node=5159, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1946, .patterns=0, .final=0, .range=0 },/* 1945 */
      { .f_node=5173, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1947, .patterns=0, .final=0, .range=0 },/* 1946 */
      { .f_node=3669, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1948, .patterns=0, .final=0, .range=0 },/* 1947 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1949, .patterns=0, .final=0, .range=0 },/* 1948 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1950, .patterns=0, .final=0, .range=0 },/* 1949 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1951, .patterns=0, .final=0, .range=0 },/* 1950 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1952, .patterns=0, .final=0, .range=0 },/* 1951 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=211, .final=1, .range=0 },/* 1952 */
      { .f_node=3983, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=1954, .patterns=0, .final=0, .range=0 },/* 1953 */
      { .f_node=3997, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1955, .patterns=0, .final=0, .range=0 },/* 1954 */
      { .f_node=2762, .degree=0, .alpha=0x79/* 'y' */, .outgoing=1956, .patterns=0, .final=0, .range=0 },/* 1955 */
      { .f_node=5800, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1957, .patterns=0, .final=0, .range=0 },/* 1956 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1958, .patterns=0, .final=0, .range=0 },/* 1957 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1959, .patterns=0, .final=0, .range=0 },/* 1958 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1960, .patterns=0, .final=0, .range=0 },/* 1959 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=212, .final=1, .range=0 },/* 1960 */
      { .f_node=5725, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1962, .patterns=0, .final=0, .range=0 },/* 1961 */
      { .f_node=2762, .degree=0, .alpha=0x74/* 't' */, .outgoing=1963, .patterns=0, .final=0, .range=0 },/* 1962 */
      { .f_node=2937, .degree=0, .alpha=0x73/* 's' */, .outgoing=1964, .patterns=0, .final=0, .range=0 },/* 1963 */
      { .f_node=4278, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1965, .patterns=0, .final=0, .range=0 },/* 1964 */
      { .f_node=2762, .degree=0, .alpha=0x70/* 'p' */, .outgoing=1966, .patterns=0, .final=0, .range=0 },/* 1965 */
      { .f_node=2891, .degree=0, .alpha=0x70/* 'p' */, .outgoing=1967, .patterns=0, .final=0, .range=0 },/* 1966 */
      { .f_node=2892, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1968, .patterns=0, .final=0, .range=0 },/* 1967 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=213, .final=1, .range=0 },/* 1968 */
      { .f_node=5710, .degree=3, .alpha=0x00, .outgoing=681, .patterns=0, .final=0, .range=0 },/* 1969 */
      { .f_node=3324, .degree=0, .alpha=0x62/* 'b' */, .outgoing=1971, .patterns=0, .final=0, .range=0 },/* 1970 */
      { .f_node=3325, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1972, .patterns=0, .final=0, .range=0 },/* 1971 */
      { .f_node=3563, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1973, .patterns=0, .final=0, .range=0 },/* 1972 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1974, .patterns=0, .final=0, .range=0 },/* 1973 */
      { .f_node=1545, .degree=1, .alpha=0x6e, .outgoing=685, .patterns=0, .final=0, .range=1 },/* 1974 */
      { .f_node=1594, .degree=0, .alpha=0x00, .outgoing=0, .patterns=214, .final=1, .range=0 },/* 1975 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1977, .patterns=0, .final=0, .range=0 },/* 1976 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=215, .final=1, .range=0 },/* 1977 */
      { .f_node=5711, .degree=15, .alpha=0x65, .outgoing=687, .patterns=0, .final=0, .range=1 },/* 1978 */
      { .f_node=3733, .degree=0, .alpha=0x78/* 'x' */, .outgoing=1980, .patterns=0, .final=0, .range=0 },/* 1979 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1981, .patterns=0, .final=0, .range=0 },/* 1980 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1982, .patterns=0, .final=0, .range=0 },/* 1981 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1983, .patterns=0, .final=0, .range=0 },/* 1982 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1984, .patterns=0, .final=0, .range=0 },/* 1983 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=216, .final=1, .range=0 },/* 1984 */
      { .f_node=4944, .degree=0, .alpha=0x72/* 'r' */, .outgoing=1986, .patterns=0, .final=0, .range=0 },/* 1985 */
      { .f_node=5596, .degree=0, .alpha=0x65/* 'e' */, .outgoing=1987, .patterns=0, .final=0, .range=0 },/* 1986 */
      { .f_node=5611, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=1988, .patterns=0, .final=0, .range=0 },/* 1987 */
      { .f_node=5418, .degree=0, .alpha=0x64/* 'd' */, .outgoing=1989, .patterns=0, .final=0, .range=0 },/* 1988 */
      { .f_node=2, .degree=0, .alpha=0x73/* 's' */, .outgoing=1990, .patterns=0, .final=0, .range=0 },/* 1989 */
      { .f_node=854, .degree=0, .alpha=0x2e/* '.' */, .outgoing=1991, .patterns=0, .final=0, .range=0 },/* 1990 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=1992, .patterns=0, .final=0, .range=0 },/* 1991 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=1993, .patterns=0, .final=0, .range=0 },/* 1992 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=1994, .patterns=0, .final=0, .range=0 },/* 1993 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=217, .final=1, .range=0 },/* 1994 */
      { .f_node=5471, .degree=0, .alpha=0x68/* 'h' */, .outgoing=1996, .patterns=0, .final=0, .range=0 },/* 1995 */
      { .f_node=5919, .degree=0, .alpha=0x61/* 'a' */, .outgoing=1997, .patterns=0, .final=0, .range=0 },/* 1996 */
      { .f_node=2762, .degree=0, .alpha=0x74/* 't' */, .outgoing=1998, .patterns=0, .final=0, .range=0 },/* 1997 */
      { .f_node=2937, .degree=1, .alpha=0x00, .outgoing=703, .patterns=0, .final=0, .range=0 },/* 1998 */
      { .f_node=877, .degree=12, .alpha=0x63, .outgoing=705, .patterns=0, .final=0, .range=1 },/* 1999 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2001, .patterns=0, .final=0, .range=0 },/* 2000 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2002, .patterns=0, .final=0, .range=0 },/* 2001 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=218, .final=1, .range=0 },/* 2002 */
      { .f_node=2338, .degree=0, .alpha=0x72/* 'r' */, .outgoing=2004, .patterns=0, .final=0, .range=0 },/* 2003 */
      { .f_node=3669, .degree=0, .alpha=0x67/* 'g' */, .outgoing=2005, .patterns=0, .final=0, .range=0 },/* 2004 */
      { .f_node=5159, .degree=0, .alpha=0x00, .outgoing=0, .patterns=219, .final=1, .range=0 },/* 2005 */
      { .f_node=2762, .degree=0, .alpha=0x70/* 'p' */, .outgoing=2007, .patterns=0, .final=0, .range=0 },/* 2006 */
      { .f_node=2891, .degree=0, .alpha=0x70/* 'p' */, .outgoing=2008, .patterns=0, .final=0, .range=0 },/* 2007 */
      { .f_node=2892, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2009, .patterns=0, .final=0, .range=0 },/* 2008 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2010, .patterns=0, .final=0, .range=0 },/* 2009 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2011, .patterns=0, .final=0, .range=0 },/* 2010 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2012, .patterns=0, .final=0, .range=0 },/* 2011 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=220, .final=1, .range=0 },/* 2012 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2014, .patterns=0, .final=0, .range=0 },/* 2013 */
      { .f_node=1545, .degree=0, .alpha=0x68/* 'h' */, .outgoing=2015, .patterns=0, .final=0, .range=0 },/* 2014 */
      { .f_node=5919, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2016, .patterns=0, .final=0, .range=0 },/* 2015 */
      { .f_node=2762, .degree=0, .alpha=0x74/* 't' */, .outgoing=2017, .patterns=0, .final=0, .range=0 },/* 2016 */
      { .f_node=2937, .degree=0, .alpha=0x00, .outgoing=0, .patterns=221, .final=1, .range=0 },/* 2017 */
      { .f_node=5672, .degree=1, .alpha=0x00, .outgoing=718, .patterns=0, .final=0, .range=0 },/* 2018 */
      { .f_node=5673, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2020, .patterns=0, .final=0, .range=0 },/* 2019 */
      { .f_node=5674, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2021, .patterns=0, .final=0, .range=0 },/* 2020 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2022, .patterns=0, .final=0, .range=0 },/* 2021 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2023, .patterns=0, .final=0, .range=0 },/* 2022 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2024, .patterns=0, .final=0, .range=0 },/* 2023 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=222, .final=1, .range=0 },/* 2024 */
      { .f_node=5471, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2026, .patterns=0, .final=0, .range=0 },/* 2025 */
      { .f_node=877, .degree=0, .alpha=0x70/* 'p' */, .outgoing=2027, .patterns=0, .final=0, .range=0 },/* 2026 */
      { .f_node=1451, .degree=0, .alpha=0x68/* 'h' */, .outgoing=2028, .patterns=0, .final=0, .range=0 },/* 2027 */
      { .f_node=5919, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2029, .patterns=0, .final=0, .range=0 },/* 2028 */
      { .f_node=3324, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2030, .patterns=0, .final=0, .range=0 },/* 2029 */
      { .f_node=5471, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2031, .patterns=0, .final=0, .range=0 },/* 2030 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2032, .patterns=0, .final=0, .range=0 },/* 2031 */
      { .f_node=436, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2033, .patterns=0, .final=0, .range=0 },/* 2032 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2034, .patterns=0, .final=0, .range=0 },/* 2033 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2035, .patterns=0, .final=0, .range=0 },/* 2034 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=2036, .patterns=0, .final=0, .range=0 },/* 2035 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=223, .final=1, .range=0 },/* 2036 */
      { .f_node=3983, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2038, .patterns=0, .final=0, .range=0 },/* 2037 */
      { .f_node=5471, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2039, .patterns=0, .final=0, .range=0 },/* 2038 */
      { .f_node=877, .degree=0, .alpha=0x76/* 'v' */, .outgoing=2040, .patterns=0, .final=0, .range=0 },/* 2039 */
      { .f_node=2428, .degree=0, .alpha=0x30/* '0' */, .outgoing=2041, .patterns=0, .final=0, .range=0 },/* 2040 */
      { .f_node=1, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2042, .patterns=0, .final=0, .range=0 },/* 2041 */
      { .f_node=5471, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2043, .patterns=0, .final=0, .range=0 },/* 2042 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2044, .patterns=0, .final=0, .range=0 },/* 2043 */
      { .f_node=436, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2045, .patterns=0, .final=0, .range=0 },/* 2044 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2046, .patterns=0, .final=0, .range=0 },/* 2045 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2047, .patterns=0, .final=0, .range=0 },/* 2046 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=2048, .patterns=0, .final=0, .range=0 },/* 2047 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=224, .final=1, .range=0 },/* 2048 */
      { .f_node=5742, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2050, .patterns=0, .final=0, .range=0 },/* 2049 */
      { .f_node=3492, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2051, .patterns=0, .final=0, .range=0 },/* 2050 */
      { .f_node=2, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2052, .patterns=0, .final=0, .range=0 },/* 2051 */
      { .f_node=85, .degree=0, .alpha=0x77/* 'w' */, .outgoing=2053, .patterns=0, .final=0, .range=0 },/* 2052 */
      { .f_node=5671, .degree=0, .alpha=0x73/* 's' */, .outgoing=2054, .patterns=0, .final=0, .range=0 },/* 2053 */
      { .f_node=4278, .degree=3, .alpha=0x00, .outgoing=720, .patterns=0, .final=0, .range=0 },/* 2054 */
      { .f_node=877, .degree=11, .alpha=0x63, .outgoing=724, .patterns=0, .final=0, .range=1 },/* 2055 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2057, .patterns=0, .final=0, .range=0 },/* 2056 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2058, .patterns=0, .final=0, .range=0 },/* 2057 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=225, .final=1, .range=0 },/* 2058 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2060, .patterns=0, .final=0, .range=0 },/* 2059 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=2061, .patterns=0, .final=0, .range=0 },/* 2060 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=226, .final=1, .range=0 },/* 2061 */
      { .f_node=4708, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2063, .patterns=0, .final=0, .range=0 },/* 2062 */
      { .f_node=4751, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2064, .patterns=0, .final=0, .range=0 },/* 2063 */
      { .f_node=4752, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2065, .patterns=0, .final=0, .range=0 },/* 2064 */
      { .f_node=4753, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2066, .patterns=0, .final=0, .range=0 },/* 2065 */
      { .f_node=4754, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2067, .patterns=0, .final=0, .range=0 },/* 2066 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2068, .patterns=0, .final=0, .range=0 },/* 2067 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2069, .patterns=0, .final=0, .range=0 },/* 2068 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2070, .patterns=0, .final=0, .range=0 },/* 2069 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=227, .final=1, .range=0 },/* 2070 */
      { .f_node=4478, .degree=0, .alpha=0x68/* 'h' */, .outgoing=2072, .patterns=0, .final=0, .range=0 },/* 2071 */
      { .f_node=5919, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2073, .patterns=0, .final=0, .range=0 },/* 2072 */
      { .f_node=5953, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2074, .patterns=0, .final=0, .range=0 },/* 2073 */
      { .f_node=3609, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2075, .patterns=0, .final=0, .range=0 },/* 2074 */
      { .f_node=3610, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2076, .patterns=0, .final=0, .range=0 },/* 2075 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2077, .patterns=0, .final=0, .range=0 },/* 2076 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2078, .patterns=0, .final=0, .range=0 },/* 2077 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2079, .patterns=0, .final=0, .range=0 },/* 2078 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=228, .final=1, .range=0 },/* 2079 */
      { .f_node=4675, .degree=0, .alpha=0x70/* 'p' */, .outgoing=2081, .patterns=0, .final=0, .range=0 },/* 2080 */
      { .f_node=5868, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2082, .patterns=0, .final=0, .range=0 },/* 2081 */
      { .f_node=5869, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2083, .patterns=0, .final=0, .range=0 },/* 2082 */
      { .f_node=5870, .degree=0, .alpha=0x74/* 't' */, .outgoing=2084, .patterns=0, .final=0, .range=0 },/* 2083 */
      { .f_node=5871, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2085, .patterns=0, .final=0, .range=0 },/* 2084 */
      { .f_node=5872, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2086, .patterns=0, .final=0, .range=0 },/* 2085 */
      { .f_node=5873, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2087, .patterns=0, .final=0, .range=0 },/* 2086 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2088, .patterns=0, .final=0, .range=0 },/* 2087 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2089, .patterns=0, .final=0, .range=0 },/* 2088 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=229, .final=1, .range=0 },/* 2089 */
      { .f_node=5858, .degree=0, .alpha=0x73/* 's' */, .outgoing=2091, .patterns=0, .final=0, .range=0 },/* 2090 */
      { .f_node=4278, .degree=0, .alpha=0x74/* 't' */, .outgoing=2092, .patterns=0, .final=0, .range=0 },/* 2091 */
      { .f_node=4573, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2093, .patterns=0, .final=0, .range=0 },/* 2092 */
      { .f_node=4574, .degree=0, .alpha=0x74/* 't' */, .outgoing=2094, .patterns=0, .final=0, .range=0 },/* 2093 */
      { .f_node=4575, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2095, .patterns=0, .final=0, .range=0 },/* 2094 */
      { .f_node=877, .degree=0, .alpha=0x77/* 'w' */, .outgoing=2096, .patterns=0, .final=0, .range=0 },/* 2095 */
      { .f_node=1942, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2097, .patterns=0, .final=0, .range=0 },/* 2096 */
      { .f_node=2049, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2098, .patterns=0, .final=0, .range=0 },/* 2097 */
      { .f_node=2050, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2099, .patterns=0, .final=0, .range=0 },/* 2098 */
      { .f_node=2051, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2100, .patterns=0, .final=0, .range=0 },/* 2099 */
      { .f_node=2052, .degree=0, .alpha=0x77/* 'w' */, .outgoing=2101, .patterns=0, .final=0, .range=0 },/* 2100 */
      { .f_node=2053, .degree=0, .alpha=0x73/* 's' */, .outgoing=2102, .patterns=0, .final=0, .range=0 },/* 2101 */
      { .f_node=2054, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2103, .patterns=0, .final=0, .range=0 },/* 2102 */
      { .f_node=2055, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2104, .patterns=0, .final=0, .range=0 },/* 2103 */
      { .f_node=2056, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2105, .patterns=0, .final=0, .range=0 },/* 2104 */
      { .f_node=2057, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2106, .patterns=0, .final=0, .range=0 },/* 2105 */
      { .f_node=2058, .degree=0, .alpha=0x00, .outgoing=0, .patterns=230, .final=1, .range=0 },/* 2106 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2108, .patterns=0, .final=0, .range=0 },/* 2107 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=232, .final=1, .range=0 },/* 2108 */
      { .f_node=1, .degree=0, .alpha=0x62/* 'b' */, .outgoing=2110, .patterns=0, .final=0, .range=0 },/* 2109 */
      { .f_node=4204, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2111, .patterns=0, .final=0, .range=0 },/* 2110 */
      { .f_node=3563, .degree=0, .alpha=0x78/* 'x' */, .outgoing=2112, .patterns=0, .final=0, .range=0 },/* 2111 */
      { .f_node=1, .degree=1, .alpha=0x00, .outgoing=736, .patterns=0, .final=0, .range=0 },/* 2112 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2114, .patterns=0, .final=0, .range=0 },/* 2113 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2115, .patterns=0, .final=0, .range=0 },/* 2114 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2116, .patterns=0, .final=0, .range=0 },/* 2115 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=233, .final=1, .range=0 },/* 2116 */
      { .f_node=5293, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2118, .patterns=0, .final=0, .range=0 },/* 2117 */
      { .f_node=5294, .degree=0, .alpha=0x76/* 'v' */, .outgoing=2119, .patterns=0, .final=0, .range=0 },/* 2118 */
      { .f_node=5786, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2120, .patterns=0, .final=0, .range=0 },/* 2119 */
      { .f_node=3733, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2121, .patterns=0, .final=0, .range=0 },/* 2120 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2122, .patterns=0, .final=0, .range=0 },/* 2121 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2123, .patterns=0, .final=0, .range=0 },/* 2122 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2124, .patterns=0, .final=0, .range=0 },/* 2123 */
      { .f_node=5520, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2125, .patterns=234, .final=1, .range=0 },/* 2124 */
      { .f_node=877, .degree=2, .alpha=0x61, .outgoing=738, .patterns=0, .final=0, .range=1 },/* 2125 */
      { .f_node=878, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=2127, .patterns=0, .final=0, .range=0 },/* 2126 */
      { .f_node=901, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2128, .patterns=0, .final=0, .range=0 },/* 2127 */
      { .f_node=902, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2129, .patterns=0, .final=0, .range=0 },/* 2128 */
      { .f_node=2773, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2130, .patterns=0, .final=0, .range=0 },/* 2129 */
      { .f_node=436, .degree=0, .alpha=0x73/* 's' */, .outgoing=2131, .patterns=0, .final=0, .range=0 },/* 2130 */
      { .f_node=437, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2132, .patterns=0, .final=0, .range=0 },/* 2131 */
      { .f_node=438, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2133, .patterns=0, .final=0, .range=0 },/* 2132 */
      { .f_node=573, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2134, .patterns=0, .final=0, .range=0 },/* 2133 */
      { .f_node=574, .degree=0, .alpha=0x74/* 't' */, .outgoing=2135, .patterns=0, .final=0, .range=0 },/* 2134 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=235, .final=1, .range=0 },/* 2135 */
      { .f_node=1545, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2137, .patterns=0, .final=0, .range=0 },/* 2136 */
      { .f_node=877, .degree=0, .alpha=0x66/* 'f' */, .outgoing=2138, .patterns=0, .final=0, .range=0 },/* 2137 */
      { .f_node=2299, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2139, .patterns=0, .final=0, .range=0 },/* 2138 */
      { .f_node=3563, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2140, .patterns=0, .final=0, .range=0 },/* 2139 */
      { .f_node=3563, .degree=0, .alpha=0x74/* 't' */, .outgoing=2141, .patterns=0, .final=0, .range=0 },/* 2140 */
      { .f_node=4944, .degree=0, .alpha=0x70/* 'p' */, .outgoing=2142, .patterns=0, .final=0, .range=0 },/* 2141 */
      { .f_node=3983, .degree=0, .alpha=0x72/* 'r' */, .outgoing=2143, .patterns=0, .final=0, .range=0 },/* 2142 */
      { .f_node=5596, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2144, .patterns=0, .final=0, .range=0 },/* 2143 */
      { .f_node=3324, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2145, .patterns=0, .final=0, .range=0 },/* 2144 */
      { .f_node=3492, .degree=0, .alpha=0x74/* 't' */, .outgoing=2146, .patterns=0, .final=0, .range=0 },/* 2145 */
      { .f_node=5464, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2147, .patterns=0, .final=0, .range=0 },/* 2146 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2148, .patterns=0, .final=0, .range=0 },/* 2147 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2149, .patterns=0, .final=0, .range=0 },/* 2148 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=2150, .patterns=0, .final=0, .range=0 },/* 2149 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=236, .final=1, .range=0 },/* 2150 */
      { .f_node=2, .degree=20, .alpha=0x65, .outgoing=741, .patterns=0, .final=0, .range=1 },/* 2151 */
      { .f_node=3733, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2153, .patterns=0, .final=0, .range=0 },/* 2152 */
      { .f_node=3733, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=2154, .patterns=0, .final=0, .range=0 },/* 2153 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2155, .patterns=0, .final=0, .range=0 },/* 2154 */
      { .f_node=3733, .degree=0, .alpha=0x72/* 'r' */, .outgoing=2156, .patterns=0, .final=0, .range=0 },/* 2155 */
      { .f_node=5596, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2157, .patterns=0, .final=0, .range=0 },/* 2156 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2158, .patterns=0, .final=0, .range=0 },/* 2157 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2159, .patterns=0, .final=0, .range=0 },/* 2158 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2160, .patterns=0, .final=0, .range=0 },/* 2159 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=237, .final=1, .range=0 },/* 2160 */
      { .f_node=3, .degree=0, .alpha=0x74/* 't' */, .outgoing=2162, .patterns=0, .final=0, .range=0 },/* 2161 */
      { .f_node=4884, .degree=0, .alpha=0x72/* 'r' */, .outgoing=2163, .patterns=0, .final=0, .range=0 },/* 2162 */
      { .f_node=5596, .degree=0, .alpha=0x79/* 'y' */, .outgoing=2164, .patterns=0, .final=0, .range=0 },/* 2163 */
      { .f_node=5800, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2165, .patterns=0, .final=0, .range=0 },/* 2164 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2166, .patterns=0, .final=0, .range=0 },/* 2165 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2167, .patterns=0, .final=0, .range=0 },/* 2166 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2168, .patterns=0, .final=0, .range=0 },/* 2167 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=238, .final=1, .range=0 },/* 2168 */
      { .f_node=85, .degree=13, .alpha=0x68, .outgoing=762, .patterns=0, .final=0, .range=1 },/* 2169 */
      { .f_node=114, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2171, .patterns=0, .final=0, .range=0 },/* 2170 */
      { .f_node=167, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2172, .patterns=0, .final=0, .range=0 },/* 2171 */
      { .f_node=190, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2173, .patterns=0, .final=0, .range=0 },/* 2172 */
      { .f_node=191, .degree=0, .alpha=0x73/* 's' */, .outgoing=2174, .patterns=0, .final=0, .range=0 },/* 2173 */
      { .f_node=192, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2175, .patterns=0, .final=0, .range=0 },/* 2174 */
      { .f_node=193, .degree=0, .alpha=0x73/* 's' */, .outgoing=2176, .patterns=0, .final=0, .range=0 },/* 2175 */
      { .f_node=194, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2177, .patterns=0, .final=0, .range=0 },/* 2176 */
      { .f_node=1116, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2178, .patterns=0, .final=0, .range=0 },/* 2177 */
      { .f_node=3563, .degree=0, .alpha=0x70/* 'p' */, .outgoing=2179, .patterns=0, .final=0, .range=0 },/* 2178 */
      { .f_node=3983, .degree=0, .alpha=0x79/* 'y' */, .outgoing=2180, .patterns=0, .final=0, .range=0 },/* 2179 */
      { .f_node=5800, .degree=0, .alpha=0x74/* 't' */, .outgoing=2181, .patterns=0, .final=0, .range=0 },/* 2180 */
      { .f_node=5846, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2182, .patterns=0, .final=0, .range=0 },/* 2181 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2183, .patterns=0, .final=0, .range=0 },/* 2182 */
      { .f_node=877, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2184, .patterns=0, .final=0, .range=0 },/* 2183 */
      { .f_node=2338, .degree=0, .alpha=0x72/* 'r' */, .outgoing=2185, .patterns=0, .final=0, .range=0 },/* 2184 */
      { .f_node=3669, .degree=0, .alpha=0x67/* 'g' */, .outgoing=2186, .patterns=0, .final=0, .range=0 },/* 2185 */
      { .f_node=5159, .degree=0, .alpha=0x00, .outgoing=0, .patterns=239, .final=1, .range=0 },/* 2186 */
      { .f_node=3718, .degree=0, .alpha=0x62/* 'b' */, .outgoing=2188, .patterns=0, .final=0, .range=0 },/* 2187 */
      { .f_node=5859, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=2189, .patterns=0, .final=0, .range=0 },/* 2188 */
      { .f_node=5293, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2190, .patterns=0, .final=0, .range=0 },/* 2189 */
      { .f_node=3733, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2191, .patterns=0, .final=0, .range=0 },/* 2190 */
      { .f_node=5471, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=2192, .patterns=0, .final=0, .range=0 },/* 2191 */
      { .f_node=5482, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2193, .patterns=0, .final=0, .range=0 },/* 2192 */
      { .f_node=5294, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2194, .patterns=0, .final=0, .range=0 },/* 2193 */
      { .f_node=5471, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=2195, .patterns=0, .final=0, .range=0 },/* 2194 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2196, .patterns=0, .final=0, .range=0 },/* 2195 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2197, .patterns=0, .final=0, .range=0 },/* 2196 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2198, .patterns=0, .final=0, .range=0 },/* 2197 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=2199, .patterns=0, .final=0, .range=0 },/* 2198 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=240, .final=1, .range=0 },/* 2199 */
      { .f_node=365, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2201, .patterns=0, .final=0, .range=0 },/* 2200 */
      { .f_node=3563, .degree=0, .alpha=0x70/* 'p' */, .outgoing=2202, .patterns=0, .final=0, .range=0 },/* 2201 */
      { .f_node=3983, .degree=0, .alpha=0x62/* 'b' */, .outgoing=2203, .patterns=0, .final=0, .range=0 },/* 2202 */
      { .f_node=4204, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2204, .patterns=0, .final=0, .range=0 },/* 2203 */
      { .f_node=3563, .degree=0, .alpha=0x78/* 'x' */, .outgoing=2205, .patterns=0, .final=0, .range=0 },/* 2204 */
      { .f_node=1, .degree=2, .alpha=0x00, .outgoing=776, .patterns=0, .final=0, .range=0 },/* 2205 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2207, .patterns=0, .final=0, .range=0 },/* 2206 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2208, .patterns=0, .final=0, .range=0 },/* 2207 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2209, .patterns=0, .final=0, .range=0 },/* 2208 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=241, .final=1, .range=0 },/* 2209 */
      { .f_node=4278, .degree=0, .alpha=0x74/* 't' */, .outgoing=2211, .patterns=0, .final=0, .range=0 },/* 2210 */
      { .f_node=4573, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2212, .patterns=0, .final=0, .range=0 },/* 2211 */
      { .f_node=4574, .degree=0, .alpha=0x74/* 't' */, .outgoing=2213, .patterns=0, .final=0, .range=0 },/* 2212 */
      { .f_node=4575, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2214, .patterns=0, .final=0, .range=0 },/* 2213 */
      { .f_node=4576, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2215, .patterns=0, .final=0, .range=0 },/* 2214 */
      { .f_node=4577, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2216, .patterns=0, .final=0, .range=0 },/* 2215 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2217, .patterns=0, .final=0, .range=0 },/* 2216 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2218, .patterns=0, .final=0, .range=0 },/* 2217 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2219, .patterns=0, .final=0, .range=0 },/* 2218 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=242, .final=1, .range=0 },/* 2219 */
      { .f_node=5969, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2221, .patterns=0, .final=0, .range=0 },/* 2220 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2222, .patterns=0, .final=0, .range=0 },/* 2221 */
      { .f_node=436, .degree=0, .alpha=0x73/* 's' */, .outgoing=2223, .patterns=0, .final=0, .range=0 },/* 2222 */
      { .f_node=437, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2224, .patterns=0, .final=0, .range=0 },/* 2223 */
      { .f_node=438, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2225, .patterns=0, .final=0, .range=0 },/* 2224 */
      { .f_node=466, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2226, .patterns=0, .final=0, .range=0 },/* 2225 */
      { .f_node=480, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2227, .patterns=0, .final=0, .range=0 },/* 2226 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=243, .final=1, .range=0 },/* 2227 */
      { .f_node=5800, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2229, .patterns=0, .final=0, .range=0 },/* 2228 */
      { .f_node=5418, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2230, .patterns=0, .final=0, .range=0 },/* 2229 */
      { .f_node=2762, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2231, .patterns=0, .final=0, .range=0 },/* 2230 */
      { .f_node=2808, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2232, .patterns=0, .final=0, .range=0 },/* 2231 */
      { .f_node=4771, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2233, .patterns=0, .final=0, .range=0 },/* 2232 */
      { .f_node=4772, .degree=0, .alpha=0x73/* 's' */, .outgoing=2234, .patterns=0, .final=0, .range=0 },/* 2233 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2235, .patterns=0, .final=0, .range=0 },/* 2234 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2236, .patterns=0, .final=0, .range=0 },/* 2235 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2237, .patterns=0, .final=0, .range=0 },/* 2236 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2238, .patterns=0, .final=0, .range=0 },/* 2237 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=244, .final=1, .range=0 },/* 2238 */
      { .f_node=3733, .degree=1, .alpha=0x61, .outgoing=779, .patterns=0, .final=0, .range=1 },/* 2239 */
      { .f_node=2762, .degree=0, .alpha=0x71/* 'q' */, .outgoing=2241, .patterns=0, .final=0, .range=0 },/* 2240 */
      { .f_node=1, .degree=0, .alpha=0x62/* 'b' */, .outgoing=2242, .patterns=0, .final=0, .range=0 },/* 2241 */
      { .f_node=4204, .degree=0, .alpha=0x72/* 'r' */, .outgoing=2243, .patterns=0, .final=0, .range=0 },/* 2242 */
      { .f_node=4212, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2244, .patterns=0, .final=0, .range=0 },/* 2243 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2245, .patterns=0, .final=0, .range=0 },/* 2244 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2246, .patterns=0, .final=0, .range=0 },/* 2245 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2247, .patterns=0, .final=0, .range=0 },/* 2246 */
      { .f_node=5520, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2248, .patterns=0, .final=0, .range=0 },/* 2247 */
      { .f_node=877, .degree=0, .alpha=0x62/* 'b' */, .outgoing=2249, .patterns=0, .final=0, .range=0 },/* 2248 */
      { .f_node=1678, .degree=0, .alpha=0x72/* 'r' */, .outgoing=2250, .patterns=0, .final=0, .range=0 },/* 2249 */
      { .f_node=4212, .degree=0, .alpha=0x00, .outgoing=0, .patterns=245, .final=1, .range=0 },/* 2250 */
      { .f_node=4204, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2252, .patterns=0, .final=0, .range=0 },/* 2251 */
      { .f_node=2762, .degree=0, .alpha=0x79/* 'y' */, .outgoing=2253, .patterns=0, .final=0, .range=0 },/* 2252 */
      { .f_node=5800, .degree=4, .alpha=0x00, .outgoing=781, .patterns=0, .final=0, .range=0 },/* 2253 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2255, .patterns=246, .final=1, .range=0 },/* 2254 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2256, .patterns=0, .final=0, .range=0 },/* 2255 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2257, .patterns=0, .final=0, .range=0 },/* 2256 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=247, .final=1, .range=0 },/* 2257 */
      { .f_node=4278, .degree=0, .alpha=0x74/* 't' */, .outgoing=2259, .patterns=0, .final=0, .range=0 },/* 2258 */
      { .f_node=4573, .degree=17, .alpha=0x61, .outgoing=786, .patterns=0, .final=0, .range=1 },/* 2259 */
      { .f_node=4574, .degree=0, .alpha=0x74/* 't' */, .outgoing=2261, .patterns=0, .final=0, .range=0 },/* 2260 */
      { .f_node=4575, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2262, .patterns=0, .final=0, .range=0 },/* 2261 */
      { .f_node=4576, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2263, .patterns=0, .final=0, .range=0 },/* 2262 */
      { .f_node=4577, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2264, .patterns=0, .final=0, .range=0 },/* 2263 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2265, .patterns=0, .final=0, .range=0 },/* 2264 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2266, .patterns=0, .final=0, .range=0 },/* 2265 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2267, .patterns=0, .final=0, .range=0 },/* 2266 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=248, .final=1, .range=0 },/* 2267 */
      { .f_node=5596, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2269, .patterns=0, .final=0, .range=0 },/* 2268 */
      { .f_node=2762, .degree=0, .alpha=0x74/* 't' */, .outgoing=2270, .patterns=0, .final=0, .range=0 },/* 2269 */
      { .f_node=2937, .degree=0, .alpha=0x75/* 'u' */, .outgoing=2271, .patterns=0, .final=0, .range=0 },/* 2270 */
      { .f_node=5109, .degree=0, .alpha=0x73/* 's' */, .outgoing=2272, .patterns=0, .final=0, .range=0 },/* 2271 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2273, .patterns=0, .final=0, .range=0 },/* 2272 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2274, .patterns=0, .final=0, .range=0 },/* 2273 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2275, .patterns=0, .final=0, .range=0 },/* 2274 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2276, .patterns=0, .final=0, .range=0 },/* 2275 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=249, .final=1, .range=0 },/* 2276 */
      { .f_node=2, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2278, .patterns=0, .final=0, .range=0 },/* 2277 */
      { .f_node=3733, .degree=0, .alpha=0x73/* 's' */, .outgoing=2279, .patterns=0, .final=0, .range=0 },/* 2278 */
      { .f_node=4278, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2280, .patterns=0, .final=0, .range=0 },/* 2279 */
      { .f_node=4279, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2281, .patterns=0, .final=0, .range=0 },/* 2280 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2282, .patterns=0, .final=0, .range=0 },/* 2281 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2283, .patterns=0, .final=0, .range=0 },/* 2282 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2284, .patterns=0, .final=0, .range=0 },/* 2283 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=250, .final=1, .range=0 },/* 2284 */
      { .f_node=5596, .degree=0, .alpha=0x74/* 't' */, .outgoing=2286, .patterns=0, .final=0, .range=0 },/* 2285 */
      { .f_node=4944, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2287, .patterns=0, .final=0, .range=0 },/* 2286 */
      { .f_node=4708, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2288, .patterns=0, .final=0, .range=0 },/* 2287 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2289, .patterns=0, .final=0, .range=0 },/* 2288 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2290, .patterns=0, .final=0, .range=0 },/* 2289 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2291, .patterns=0, .final=0, .range=0 },/* 2290 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=251, .final=1, .range=0 },/* 2291 */
      { .f_node=3324, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2293, .patterns=0, .final=0, .range=0 },/* 2292 */
      { .f_node=3393, .degree=0, .alpha=0x67/* 'g' */, .outgoing=2294, .patterns=0, .final=0, .range=0 },/* 2293 */
      { .f_node=3451, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2295, .patterns=0, .final=0, .range=0 },/* 2294 */
      { .f_node=5239, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2296, .patterns=0, .final=0, .range=0 },/* 2295 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2297, .patterns=0, .final=0, .range=0 },/* 2296 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2298, .patterns=0, .final=0, .range=0 },/* 2297 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=252, .final=1, .range=0 },/* 2298 */
      { .f_node=5332, .degree=1, .alpha=0x61, .outgoing=804, .patterns=0, .final=0, .range=1 },/* 2299 */
      { .f_node=5333, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2301, .patterns=0, .final=0, .range=0 },/* 2300 */
      { .f_node=5334, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2302, .patterns=0, .final=0, .range=0 },/* 2301 */
      { .f_node=5335, .degree=0, .alpha=0x62/* 'b' */, .outgoing=2303, .patterns=0, .final=0, .range=0 },/* 2302 */
      { .f_node=5336, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2304, .patterns=0, .final=0, .range=0 },/* 2303 */
      { .f_node=5337, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2305, .patterns=0, .final=0, .range=0 },/* 2304 */
      { .f_node=5338, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=2306, .patterns=0, .final=0, .range=0 },/* 2305 */
      { .f_node=5339, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2307, .patterns=0, .final=0, .range=0 },/* 2306 */
      { .f_node=5340, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2308, .patterns=0, .final=0, .range=0 },/* 2307 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2309, .patterns=0, .final=0, .range=0 },/* 2308 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=2310, .patterns=0, .final=0, .range=0 },/* 2309 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=253, .final=1, .range=0 },/* 2310 */
      { .f_node=5350, .degree=3, .alpha=0x00, .outgoing=806, .patterns=0, .final=0, .range=0 },/* 2311 */
      { .f_node=5351, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2313, .patterns=0, .final=0, .range=0 },/* 2312 */
      { .f_node=5352, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2314, .patterns=0, .final=0, .range=0 },/* 2313 */
      { .f_node=5353, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2315, .patterns=0, .final=0, .range=0 },/* 2314 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2316, .patterns=0, .final=0, .range=0 },/* 2315 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2317, .patterns=0, .final=0, .range=0 },/* 2316 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=2318, .patterns=0, .final=0, .range=0 },/* 2317 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=254, .final=1, .range=0 },/* 2318 */
      { .f_node=5355, .degree=0, .alpha=0x62/* 'b' */, .outgoing=2320, .patterns=0, .final=0, .range=0 },/* 2319 */
      { .f_node=4204, .degree=0, .alpha=0x78/* 'x' */, .outgoing=2321, .patterns=0, .final=0, .range=0 },/* 2320 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2322, .patterns=0, .final=0, .range=0 },/* 2321 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2323, .patterns=0, .final=0, .range=0 },/* 2322 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2324, .patterns=0, .final=0, .range=0 },/* 2323 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2325, .patterns=0, .final=0, .range=0 },/* 2324 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=255, .final=1, .range=0 },/* 2325 */
      { .f_node=5671, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2327, .patterns=0, .final=0, .range=0 },/* 2326 */
      { .f_node=5672, .degree=0, .alpha=0x74/* 't' */, .outgoing=2328, .patterns=0, .final=0, .range=0 },/* 2327 */
      { .f_node=2937, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2329, .patterns=0, .final=0, .range=0 },/* 2328 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2330, .patterns=0, .final=0, .range=0 },/* 2329 */
      { .f_node=1545, .degree=0, .alpha=0x68/* 'h' */, .outgoing=2331, .patterns=0, .final=0, .range=0 },/* 2330 */
      { .f_node=5919, .degree=0, .alpha=0x00, .outgoing=0, .patterns=256, .final=1, .range=0 },/* 2331 */
      { .f_node=877, .degree=4, .alpha=0x63, .outgoing=810, .patterns=0, .final=0, .range=1 },/* 2332 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2334, .patterns=0, .final=0, .range=0 },/* 2333 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2335, .patterns=0, .final=0, .range=0 },/* 2334 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=257, .final=1, .range=0 },/* 2335 */
      { .f_node=1763, .degree=0, .alpha=0x67/* 'g' */, .outgoing=2337, .patterns=0, .final=0, .range=0 },/* 2336 */
      { .f_node=5231, .degree=0, .alpha=0x00, .outgoing=0, .patterns=258, .final=1, .range=0 },/* 2337 */
      { .f_node=3563, .degree=13, .alpha=0x63, .outgoing=815, .patterns=0, .final=0, .range=1 },/* 2338 */
      { .f_node=3564, .degree=0, .alpha=0x73/* 's' */, .outgoing=2340, .patterns=0, .final=0, .range=0 },/* 2339 */
      { .f_node=3565, .degree=1, .alpha=0x00, .outgoing=829, .patterns=0, .final=0, .range=0 },/* 2340 */
      { .f_node=2, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2342, .patterns=0, .final=0, .range=0 },/* 2341 */
      { .f_node=85, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2343, .patterns=0, .final=0, .range=0 },/* 2342 */
      { .f_node=4708, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2344, .patterns=0, .final=0, .range=0 },/* 2343 */
      { .f_node=4709, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2345, .patterns=0, .final=0, .range=0 },/* 2344 */
      { .f_node=4710, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2346, .patterns=0, .final=0, .range=0 },/* 2345 */
      { .f_node=3492, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2347, .patterns=0, .final=0, .range=0 },/* 2346 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2348, .patterns=0, .final=0, .range=0 },/* 2347 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2349, .patterns=0, .final=0, .range=0 },/* 2348 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2350, .patterns=0, .final=0, .range=0 },/* 2349 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=259, .final=1, .range=0 },/* 2350 */
      { .f_node=3566, .degree=0, .alpha=0x66/* 'f' */, .outgoing=2352, .patterns=0, .final=0, .range=0 },/* 2351 */
      { .f_node=3567, .degree=0, .alpha=0x72/* 'r' */, .outgoing=2353, .patterns=0, .final=0, .range=0 },/* 2352 */
      { .f_node=3568, .degree=0, .alpha=0x00, .outgoing=0, .patterns=260, .final=1, .range=0 },/* 2353 */
      { .f_node=3579, .degree=0, .alpha=0x66/* 'f' */, .outgoing=2355, .patterns=0, .final=0, .range=0 },/* 2354 */
      { .f_node=3580, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2356, .patterns=0, .final=0, .range=0 },/* 2355 */
      { .f_node=3581, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2357, .patterns=0, .final=0, .range=0 },/* 2356 */
      { .f_node=3582, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2358, .patterns=0, .final=0, .range=0 },/* 2357 */
      { .f_node=3583, .degree=5, .alpha=0x2e, .outgoing=831, .patterns=0, .final=0, .range=1 },/* 2358 */
      { .f_node=3584, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2360, .patterns=0, .final=0, .range=0 },/* 2359 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2361, .patterns=0, .final=0, .range=0 },/* 2360 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2362, .patterns=0, .final=0, .range=0 },/* 2361 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=262, .final=1, .range=0 },/* 2362 */
      { .f_node=1, .degree=0, .alpha=0x36/* '6' */, .outgoing=2364, .patterns=0, .final=0, .range=0 },/* 2363 */
      { .f_node=1, .degree=0, .alpha=0x35/* '5' */, .outgoing=2365, .patterns=0, .final=0, .range=0 },/* 2364 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2366, .patterns=0, .final=0, .range=0 },/* 2365 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2367, .patterns=0, .final=0, .range=0 },/* 2366 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2368, .patterns=0, .final=0, .range=0 },/* 2367 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2369, .patterns=0, .final=0, .range=0 },/* 2368 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=263, .final=1, .range=0 },/* 2369 */
      { .f_node=4708, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2371, .patterns=0, .final=0, .range=0 },/* 2370 */
      { .f_node=5418, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2372, .patterns=0, .final=0, .range=0 },/* 2371 */
      { .f_node=3324, .degree=0, .alpha=0x72/* 'r' */, .outgoing=2373, .patterns=0, .final=0, .range=0 },/* 2372 */
      { .f_node=5596, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2374, .patterns=0, .final=0, .range=0 },/* 2373 */
      { .f_node=3563, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2375, .patterns=0, .final=0, .range=0 },/* 2374 */
      { .f_node=3563, .degree=0, .alpha=0x74/* 't' */, .outgoing=2376, .patterns=0, .final=0, .range=0 },/* 2375 */
      { .f_node=4944, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2377, .patterns=0, .final=0, .range=0 },/* 2376 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2378, .patterns=0, .final=0, .range=0 },/* 2377 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2379, .patterns=0, .final=0, .range=0 },/* 2378 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2380, .patterns=0, .final=0, .range=0 },/* 2379 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=264, .final=1, .range=0 },/* 2380 */
      { .f_node=3609, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2382, .patterns=0, .final=0, .range=0 },/* 2381 */
      { .f_node=3610, .degree=5, .alpha=0x6e, .outgoing=837, .patterns=0, .final=0, .range=1 },/* 2382 */
      { .f_node=5418, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2384, .patterns=0, .final=0, .range=0 },/* 2383 */
      { .f_node=3563, .degree=0, .alpha=0x74/* 't' */, .outgoing=2385, .patterns=0, .final=0, .range=0 },/* 2384 */
      { .f_node=4944, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2386, .patterns=0, .final=0, .range=0 },/* 2385 */
      { .f_node=4956, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2387, .patterns=0, .final=0, .range=0 },/* 2386 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=265, .final=1, .range=0 },/* 2387 */
      { .f_node=4278, .degree=0, .alpha=0x74/* 't' */, .outgoing=2389, .patterns=0, .final=0, .range=0 },/* 2388 */
      { .f_node=4573, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2390, .patterns=0, .final=0, .range=0 },/* 2389 */
      { .f_node=5090, .degree=0, .alpha=0x72/* 'r' */, .outgoing=2391, .patterns=0, .final=0, .range=0 },/* 2390 */
      { .f_node=5091, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2392, .patterns=0, .final=0, .range=0 },/* 2391 */
      { .f_node=5611, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2393, .patterns=0, .final=0, .range=0 },/* 2392 */
      { .f_node=877, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2394, .patterns=0, .final=0, .range=0 },/* 2393 */
      { .f_node=1285, .degree=0, .alpha=0x73/* 's' */, .outgoing=2395, .patterns=0, .final=0, .range=0 },/* 2394 */
      { .f_node=1359, .degree=0, .alpha=0x00, .outgoing=0, .patterns=266, .final=1, .range=0 },/* 2395 */
      { .f_node=3563, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=2397, .patterns=0, .final=0, .range=0 },/* 2396 */
      { .f_node=1, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=2398, .patterns=0, .final=0, .range=0 },/* 2397 */
      { .f_node=5293, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2399, .patterns=0, .final=0, .range=0 },/* 2398 */
      { .f_node=2762, .degree=0, .alpha=0x73/* 's' */, .outgoing=2400, .patterns=0, .final=0, .range=0 },/* 2399 */
      { .f_node=2908, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2401, .patterns=0, .final=0, .range=0 },/* 2400 */
      { .f_node=4302, .degree=0, .alpha=0x72/* 'r' */, .outgoing=2402, .patterns=0, .final=0, .range=0 },/* 2401 */
      { .f_node=5596, .degree=0, .alpha=0x76/* 'v' */, .outgoing=2403, .patterns=0, .final=0, .range=0 },/* 2402 */
      { .f_node=5786, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2404, .patterns=0, .final=0, .range=0 },/* 2403 */
      { .f_node=3733, .degree=0, .alpha=0x72/* 'r' */, .outgoing=2405, .patterns=0, .final=0, .range=0 },/* 2404 */
      { .f_node=5596, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2406, .patterns=0, .final=0, .range=0 },/* 2405 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2407, .patterns=0, .final=0, .range=0 },/* 2406 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2408, .patterns=0, .final=0, .range=0 },/* 2407 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=2409, .patterns=0, .final=0, .range=0 },/* 2408 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=267, .final=1, .range=0 },/* 2409 */
      { .f_node=3983, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2411, .patterns=0, .final=0, .range=0 },/* 2410 */
      { .f_node=3733, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2412, .patterns=0, .final=0, .range=0 },/* 2411 */
      { .f_node=5418, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2413, .patterns=0, .final=0, .range=0 },/* 2412 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2414, .patterns=0, .final=0, .range=0 },/* 2413 */
      { .f_node=436, .degree=0, .alpha=0x73/* 's' */, .outgoing=2415, .patterns=0, .final=0, .range=0 },/* 2414 */
      { .f_node=437, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2416, .patterns=0, .final=0, .range=0 },/* 2415 */
      { .f_node=438, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2417, .patterns=0, .final=0, .range=0 },/* 2416 */
      { .f_node=466, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2418, .patterns=0, .final=0, .range=0 },/* 2417 */
      { .f_node=480, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2419, .patterns=0, .final=0, .range=0 },/* 2418 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=268, .final=1, .range=0 },/* 2419 */
      { .f_node=1, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2421, .patterns=0, .final=0, .range=0 },/* 2420 */
      { .f_node=4708, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2422, .patterns=0, .final=0, .range=0 },/* 2421 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2423, .patterns=0, .final=0, .range=0 },/* 2422 */
      { .f_node=436, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2424, .patterns=0, .final=0, .range=0 },/* 2423 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2425, .patterns=0, .final=0, .range=0 },/* 2424 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2426, .patterns=0, .final=0, .range=0 },/* 2425 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=2427, .patterns=0, .final=0, .range=0 },/* 2426 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=269, .final=1, .range=0 },/* 2427 */
      { .f_node=5786, .degree=4, .alpha=0x65, .outgoing=843, .patterns=0, .final=0, .range=1 },/* 2428 */
      { .f_node=3733, .degree=0, .alpha=0x76/* 'v' */, .outgoing=2430, .patterns=0, .final=0, .range=0 },/* 2429 */
      { .f_node=3926, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2431, .patterns=0, .final=0, .range=0 },/* 2430 */
      { .f_node=3563, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2432, .patterns=0, .final=0, .range=0 },/* 2431 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2433, .patterns=0, .final=0, .range=0 },/* 2432 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2434, .patterns=0, .final=0, .range=0 },/* 2433 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2435, .patterns=0, .final=0, .range=0 },/* 2434 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=270, .final=1, .range=0 },/* 2435 */
      { .f_node=3324, .degree=17, .alpha=0x62, .outgoing=848, .patterns=0, .final=0, .range=1 },/* 2436 */
      { .f_node=3325, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2438, .patterns=0, .final=0, .range=0 },/* 2437 */
      { .f_node=3733, .degree=0, .alpha=0x72/* 'r' */, .outgoing=2439, .patterns=0, .final=0, .range=0 },/* 2438 */
      { .f_node=5596, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2440, .patterns=0, .final=0, .range=0 },/* 2439 */
      { .f_node=877, .degree=6, .alpha=0x63, .outgoing=866, .patterns=0, .final=0, .range=1 },/* 2440 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2442, .patterns=0, .final=0, .range=0 },/* 2441 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2443, .patterns=0, .final=0, .range=0 },/* 2442 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=271, .final=1, .range=0 },/* 2443 */
      { .f_node=1881, .degree=0, .alpha=0x74/* 't' */, .outgoing=2445, .patterns=0, .final=0, .range=0 },/* 2444 */
      { .f_node=3538, .degree=0, .alpha=0x00, .outgoing=0, .patterns=272, .final=1, .range=0 },/* 2445 */
      { .f_node=2, .degree=0, .alpha=0x74/* 't' */, .outgoing=2447, .patterns=0, .final=0, .range=0 },/* 2446 */
      { .f_node=4944, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2448, .patterns=0, .final=0, .range=0 },/* 2447 */
      { .f_node=5090, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2449, .patterns=0, .final=0, .range=0 },/* 2448 */
      { .f_node=877, .degree=6, .alpha=0x6d, .outgoing=873, .patterns=0, .final=0, .range=1 },/* 2449 */
      { .f_node=1285, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2451, .patterns=0, .final=0, .range=0 },/* 2450 */
      { .f_node=1286, .degree=0, .alpha=0x00, .outgoing=0, .patterns=273, .final=1, .range=0 },/* 2451 */
      { .f_node=996, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2453, .patterns=0, .final=0, .range=0 },/* 2452 */
      { .f_node=4302, .degree=0, .alpha=0x00, .outgoing=0, .patterns=274, .final=1, .range=0 },/* 2453 */
      { .f_node=4278, .degree=0, .alpha=0x75/* 'u' */, .outgoing=2455, .patterns=0, .final=0, .range=0 },/* 2454 */
      { .f_node=4675, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2456, .patterns=0, .final=0, .range=0 },/* 2455 */
      { .f_node=2762, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=2457, .patterns=0, .final=0, .range=0 },/* 2456 */
      { .f_node=2793, .degree=0, .alpha=0x73/* 's' */, .outgoing=2458, .patterns=0, .final=0, .range=0 },/* 2457 */
      { .f_node=4278, .degree=0, .alpha=0x74/* 't' */, .outgoing=2459, .patterns=0, .final=0, .range=0 },/* 2458 */
      { .f_node=4573, .degree=0, .alpha=0x75/* 'u' */, .outgoing=2460, .patterns=0, .final=0, .range=0 },/* 2459 */
      { .f_node=5109, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2461, .patterns=0, .final=0, .range=0 },/* 2460 */
      { .f_node=2, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2462, .patterns=0, .final=0, .range=0 },/* 2461 */
      { .f_node=786, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2463, .patterns=0, .final=0, .range=0 },/* 2462 */
      { .f_node=3515, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2464, .patterns=0, .final=0, .range=0 },/* 2463 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2465, .patterns=0, .final=0, .range=0 },/* 2464 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2466, .patterns=0, .final=0, .range=0 },/* 2465 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2467, .patterns=0, .final=0, .range=0 },/* 2466 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=275, .final=1, .range=0 },/* 2467 */
      { .f_node=5800, .degree=19, .alpha=0x61, .outgoing=880, .patterns=0, .final=0, .range=1 },/* 2468 */
      { .f_node=5801, .degree=0, .alpha=0x68/* 'h' */, .outgoing=2470, .patterns=0, .final=0, .range=0 },/* 2469 */
      { .f_node=5802, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2471, .patterns=0, .final=0, .range=0 },/* 2470 */
      { .f_node=5803, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2472, .patterns=0, .final=0, .range=0 },/* 2471 */
      { .f_node=5804, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2473, .patterns=0, .final=0, .range=0 },/* 2472 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=276, .final=1, .range=0 },/* 2473 */
      { .f_node=3324, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2475, .patterns=0, .final=0, .range=0 },/* 2474 */
      { .f_node=3393, .degree=0, .alpha=0x67/* 'g' */, .outgoing=2476, .patterns=0, .final=0, .range=0 },/* 2475 */
      { .f_node=3451, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2477, .patterns=0, .final=0, .range=0 },/* 2476 */
      { .f_node=5239, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2478, .patterns=0, .final=0, .range=0 },/* 2477 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2479, .patterns=0, .final=0, .range=0 },/* 2478 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2480, .patterns=0, .final=0, .range=0 },/* 2479 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=277, .final=1, .range=0 },/* 2480 */
      { .f_node=5810, .degree=0, .alpha=0x75/* 'u' */, .outgoing=2482, .patterns=0, .final=0, .range=0 },/* 2481 */
      { .f_node=5811, .degree=0, .alpha=0x74/* 't' */, .outgoing=2483, .patterns=0, .final=0, .range=0 },/* 2482 */
      { .f_node=5812, .degree=0, .alpha=0x75/* 'u' */, .outgoing=2484, .patterns=0, .final=0, .range=0 },/* 2483 */
      { .f_node=5813, .degree=0, .alpha=0x62/* 'b' */, .outgoing=2485, .patterns=0, .final=0, .range=0 },/* 2484 */
      { .f_node=5814, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2486, .patterns=0, .final=0, .range=0 },/* 2485 */
      { .f_node=5815, .degree=1, .alpha=0x00, .outgoing=900, .patterns=0, .final=0, .range=0 },/* 2486 */
      { .f_node=5833, .degree=0, .alpha=0x75/* 'u' */, .outgoing=2488, .patterns=0, .final=0, .range=0 },/* 2487 */
      { .f_node=5858, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2489, .patterns=0, .final=0, .range=0 },/* 2488 */
      { .f_node=3324, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2490, .patterns=0, .final=0, .range=0 },/* 2489 */
      { .f_node=877, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=2491, .patterns=0, .final=0, .range=0 },/* 2490 */
      { .f_node=1700, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2492, .patterns=0, .final=0, .range=0 },/* 2491 */
      { .f_node=877, .degree=0, .alpha=0x67/* 'g' */, .outgoing=2493, .patterns=0, .final=0, .range=0 },/* 2492 */
      { .f_node=1763, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2494, .patterns=0, .final=0, .range=0 },/* 2493 */
      { .f_node=1811, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2495, .patterns=0, .final=0, .range=0 },/* 2494 */
      { .f_node=1812, .degree=0, .alpha=0x67/* 'g' */, .outgoing=2496, .patterns=0, .final=0, .range=0 },/* 2495 */
      { .f_node=1813, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=2497, .patterns=0, .final=0, .range=0 },/* 2496 */
      { .f_node=1814, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2498, .patterns=0, .final=0, .range=0 },/* 2497 */
      { .f_node=1815, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2499, .patterns=0, .final=0, .range=0 },/* 2498 */
      { .f_node=1853, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2500, .patterns=278, .final=1, .range=0 },/* 2499 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2501, .patterns=0, .final=0, .range=0 },/* 2500 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2502, .patterns=0, .final=0, .range=0 },/* 2501 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=280, .final=1, .range=0 },/* 2502 */
      { .f_node=3733, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2504, .patterns=0, .final=0, .range=0 },/* 2503 */
      { .f_node=3905, .degree=0, .alpha=0x75/* 'u' */, .outgoing=2505, .patterns=0, .final=0, .range=0 },/* 2504 */
      { .f_node=5858, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2506, .patterns=0, .final=0, .range=0 },/* 2505 */
      { .f_node=5471, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2507, .patterns=0, .final=0, .range=0 },/* 2506 */
      { .f_node=5472, .degree=0, .alpha=0x74/* 't' */, .outgoing=2508, .patterns=0, .final=0, .range=0 },/* 2507 */
      { .f_node=2937, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2509, .patterns=0, .final=0, .range=0 },/* 2508 */
      { .f_node=5042, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2510, .patterns=0, .final=0, .range=0 },/* 2509 */
      { .f_node=3515, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2511, .patterns=0, .final=0, .range=0 },/* 2510 */
      { .f_node=3609, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2512, .patterns=0, .final=0, .range=0 },/* 2511 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2513, .patterns=0, .final=0, .range=0 },/* 2512 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2514, .patterns=0, .final=0, .range=0 },/* 2513 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2515, .patterns=0, .final=0, .range=0 },/* 2514 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=281, .final=1, .range=0 },/* 2515 */
      { .f_node=5846, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2517, .patterns=0, .final=0, .range=0 },/* 2516 */
      { .f_node=5042, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2518, .patterns=0, .final=0, .range=0 },/* 2517 */
      { .f_node=3393, .degree=0, .alpha=0x67/* 'g' */, .outgoing=2519, .patterns=0, .final=0, .range=0 },/* 2518 */
      { .f_node=3451, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2520, .patterns=0, .final=0, .range=0 },/* 2519 */
      { .f_node=5239, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2521, .patterns=0, .final=0, .range=0 },/* 2520 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2522, .patterns=0, .final=0, .range=0 },/* 2521 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2523, .patterns=0, .final=0, .range=0 },/* 2522 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=282, .final=1, .range=0 },/* 2523 */
      { .f_node=1, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2525, .patterns=0, .final=0, .range=0 },/* 2524 */
      { .f_node=2762, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=2526, .patterns=0, .final=0, .range=0 },/* 2525 */
      { .f_node=1, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2527, .patterns=0, .final=0, .range=0 },/* 2526 */
      { .f_node=2762, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2528, .patterns=0, .final=0, .range=0 },/* 2527 */
      { .f_node=3563, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2529, .patterns=0, .final=0, .range=0 },/* 2528 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2530, .patterns=0, .final=0, .range=0 },/* 2529 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2531, .patterns=0, .final=0, .range=0 },/* 2530 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2532, .patterns=0, .final=0, .range=0 },/* 2531 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=283, .final=1, .range=0 },/* 2532 */
      { .f_node=1, .degree=0, .alpha=0x71/* 'q' */, .outgoing=2534, .patterns=0, .final=0, .range=0 },/* 2533 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2535, .patterns=0, .final=0, .range=0 },/* 2534 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2536, .patterns=0, .final=0, .range=0 },/* 2535 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2537, .patterns=0, .final=0, .range=0 },/* 2536 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2538, .patterns=0, .final=0, .range=0 },/* 2537 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=284, .final=1, .range=0 },/* 2538 */
      { .f_node=877, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2540, .patterns=0, .final=0, .range=0 },/* 2539 */
      { .f_node=1285, .degree=0, .alpha=0x73/* 's' */, .outgoing=2541, .patterns=0, .final=0, .range=0 },/* 2540 */
      { .f_node=1359, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2542, .patterns=0, .final=0, .range=0 },/* 2541 */
      { .f_node=4879, .degree=0, .alpha=0x2d/* '-' */, .outgoing=2543, .patterns=0, .final=0, .range=0 },/* 2542 */
      { .f_node=5969, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2544, .patterns=0, .final=0, .range=0 },/* 2543 */
      { .f_node=5471, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2545, .patterns=0, .final=0, .range=0 },/* 2544 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2546, .patterns=0, .final=0, .range=0 },/* 2545 */
      { .f_node=5520, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2547, .patterns=0, .final=0, .range=0 },/* 2546 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=285, .final=1, .range=0 },/* 2547 */
      { .f_node=5969, .degree=0, .alpha=0x73/* 's' */, .outgoing=2549, .patterns=0, .final=0, .range=0 },/* 2548 */
      { .f_node=4278, .degree=0, .alpha=0x2d/* '-' */, .outgoing=2550, .patterns=0, .final=0, .range=0 },/* 2549 */
      { .f_node=5969, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2551, .patterns=0, .final=0, .range=0 },/* 2550 */
      { .f_node=5970, .degree=0, .alpha=0x73/* 's' */, .outgoing=2552, .patterns=0, .final=0, .range=0 },/* 2551 */
      { .f_node=5971, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2553, .patterns=0, .final=0, .range=0 },/* 2552 */
      { .f_node=4879, .degree=0, .alpha=0x2d/* '-' */, .outgoing=2554, .patterns=0, .final=0, .range=0 },/* 2553 */
      { .f_node=5969, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2555, .patterns=0, .final=0, .range=0 },/* 2554 */
      { .f_node=5471, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2556, .patterns=0, .final=0, .range=0 },/* 2555 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2557, .patterns=0, .final=0, .range=0 },/* 2556 */
      { .f_node=5520, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2558, .patterns=0, .final=0, .range=0 },/* 2557 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=286, .final=1, .range=0 },/* 2558 */
      { .f_node=5418, .degree=15, .alpha=0x65, .outgoing=902, .patterns=0, .final=0, .range=1 },/* 2559 */
      { .f_node=5419, .degree=0, .alpha=0x74/* 't' */, .outgoing=2561, .patterns=0, .final=0, .range=0 },/* 2560 */
      { .f_node=5420, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2562, .patterns=0, .final=0, .range=0 },/* 2561 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2563, .patterns=0, .final=0, .range=0 },/* 2562 */
      { .f_node=878, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2564, .patterns=0, .final=0, .range=0 },/* 2563 */
      { .f_node=920, .degree=0, .alpha=0x79/* 'y' */, .outgoing=2565, .patterns=0, .final=0, .range=0 },/* 2564 */
      { .f_node=5800, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2566, .patterns=0, .final=0, .range=0 },/* 2565 */
      { .f_node=2, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2567, .patterns=0, .final=0, .range=0 },/* 2566 */
      { .f_node=3733, .degree=0, .alpha=0x73/* 's' */, .outgoing=2568, .patterns=0, .final=0, .range=0 },/* 2567 */
      { .f_node=4278, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=2569, .patterns=0, .final=0, .range=0 },/* 2568 */
      { .f_node=4375, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2570, .patterns=0, .final=0, .range=0 },/* 2569 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2571, .patterns=0, .final=0, .range=0 },/* 2570 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2572, .patterns=0, .final=0, .range=0 },/* 2571 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2573, .patterns=0, .final=0, .range=0 },/* 2572 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=287, .final=1, .range=0 },/* 2573 */
      { .f_node=3324, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2575, .patterns=0, .final=0, .range=0 },/* 2574 */
      { .f_node=3492, .degree=0, .alpha=0x74/* 't' */, .outgoing=2576, .patterns=0, .final=0, .range=0 },/* 2575 */
      { .f_node=5464, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2577, .patterns=0, .final=0, .range=0 },/* 2576 */
      { .f_node=4956, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2578, .patterns=0, .final=0, .range=0 },/* 2577 */
      { .f_node=5418, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2579, .patterns=0, .final=0, .range=0 },/* 2578 */
      { .f_node=2, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2580, .patterns=0, .final=0, .range=0 },/* 2579 */
      { .f_node=85, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2581, .patterns=0, .final=0, .range=0 },/* 2580 */
      { .f_node=877, .degree=11, .alpha=0x63, .outgoing=918, .patterns=0, .final=0, .range=1 },/* 2581 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2583, .patterns=0, .final=0, .range=0 },/* 2582 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2584, .patterns=0, .final=0, .range=0 },/* 2583 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=288, .final=1, .range=0 },/* 2584 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2586, .patterns=0, .final=0, .range=0 },/* 2585 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=2587, .patterns=0, .final=0, .range=0 },/* 2586 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=289, .final=1, .range=0 },/* 2587 */
      { .f_node=3563, .degree=0, .alpha=0x72/* 'r' */, .outgoing=2589, .patterns=0, .final=0, .range=0 },/* 2588 */
      { .f_node=3669, .degree=0, .alpha=0x74/* 't' */, .outgoing=2590, .patterns=0, .final=0, .range=0 },/* 2589 */
      { .f_node=4944, .degree=0, .alpha=0x68/* 'h' */, .outgoing=2591, .patterns=0, .final=0, .range=0 },/* 2590 */
      { .f_node=5919, .degree=0, .alpha=0x67/* 'g' */, .outgoing=2592, .patterns=0, .final=0, .range=0 },/* 2591 */
      { .f_node=5159, .degree=0, .alpha=0x68/* 'h' */, .outgoing=2593, .patterns=0, .final=0, .range=0 },/* 2592 */
      { .f_node=5919, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2594, .patterns=0, .final=0, .range=0 },/* 2593 */
      { .f_node=5953, .degree=0, .alpha=0x73/* 's' */, .outgoing=2595, .patterns=0, .final=0, .range=0 },/* 2594 */
      { .f_node=3695, .degree=0, .alpha=0x74/* 't' */, .outgoing=2596, .patterns=0, .final=0, .range=0 },/* 2595 */
      { .f_node=4573, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2597, .patterns=0, .final=0, .range=0 },/* 2596 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2598, .patterns=0, .final=0, .range=0 },/* 2597 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2599, .patterns=0, .final=0, .range=0 },/* 2598 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2600, .patterns=0, .final=0, .range=0 },/* 2599 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=290, .final=1, .range=0 },/* 2600 */
      { .f_node=5464, .degree=0, .alpha=0x73/* 's' */, .outgoing=2602, .patterns=0, .final=0, .range=0 },/* 2601 */
      { .f_node=4278, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2603, .patterns=0, .final=0, .range=0 },/* 2602 */
      { .f_node=4302, .degree=0, .alpha=0x72/* 'r' */, .outgoing=2604, .patterns=0, .final=0, .range=0 },/* 2603 */
      { .f_node=5596, .degree=0, .alpha=0x76/* 'v' */, .outgoing=2605, .patterns=0, .final=0, .range=0 },/* 2604 */
      { .f_node=5786, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2606, .patterns=0, .final=0, .range=0 },/* 2605 */
      { .f_node=3324, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2607, .patterns=0, .final=0, .range=0 },/* 2606 */
      { .f_node=5471, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2608, .patterns=0, .final=0, .range=0 },/* 2607 */
      { .f_node=3733, .degree=0, .alpha=0x70/* 'p' */, .outgoing=2609, .patterns=0, .final=0, .range=0 },/* 2608 */
      { .f_node=3983, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2610, .patterns=0, .final=0, .range=0 },/* 2609 */
      { .f_node=4025, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2611, .patterns=0, .final=0, .range=0 },/* 2610 */
      { .f_node=5471, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=2612, .patterns=0, .final=0, .range=0 },/* 2611 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2613, .patterns=0, .final=0, .range=0 },/* 2612 */
      { .f_node=877, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2614, .patterns=0, .final=0, .range=0 },/* 2613 */
      { .f_node=1285, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2615, .patterns=0, .final=0, .range=0 },/* 2614 */
      { .f_node=1319, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2616, .patterns=0, .final=0, .range=0 },/* 2615 */
      { .f_node=1320, .degree=0, .alpha=0x72/* 'r' */, .outgoing=2617, .patterns=0, .final=0, .range=0 },/* 2616 */
      { .f_node=1321, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2618, .patterns=0, .final=0, .range=0 },/* 2617 */
      { .f_node=1322, .degree=0, .alpha=0x73/* 's' */, .outgoing=2619, .patterns=0, .final=0, .range=0 },/* 2618 */
      { .f_node=1323, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2620, .patterns=0, .final=0, .range=0 },/* 2619 */
      { .f_node=1324, .degree=0, .alpha=0x66/* 'f' */, .outgoing=2621, .patterns=0, .final=0, .range=0 },/* 2620 */
      { .f_node=1325, .degree=0, .alpha=0x74/* 't' */, .outgoing=2622, .patterns=0, .final=0, .range=0 },/* 2621 */
      { .f_node=1326, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2623, .patterns=0, .final=0, .range=0 },/* 2622 */
      { .f_node=1327, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2624, .patterns=0, .final=0, .range=0 },/* 2623 */
      { .f_node=1328, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2625, .patterns=0, .final=0, .range=0 },/* 2624 */
      { .f_node=1329, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2626, .patterns=0, .final=0, .range=0 },/* 2625 */
      { .f_node=1330, .degree=0, .alpha=0x00, .outgoing=0, .patterns=291, .final=1, .range=0 },/* 2626 */
      { .f_node=1, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2628, .patterns=0, .final=0, .range=0 },/* 2627 */
      { .f_node=3563, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2629, .patterns=0, .final=0, .range=0 },/* 2628 */
      { .f_node=3563, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2630, .patterns=0, .final=0, .range=0 },/* 2629 */
      { .f_node=4708, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2631, .patterns=0, .final=0, .range=0 },/* 2630 */
      { .f_node=877, .degree=0, .alpha=0x75/* 'u' */, .outgoing=2632, .patterns=0, .final=0, .range=0 },/* 2631 */
      { .f_node=1603, .degree=0, .alpha=0x73/* 's' */, .outgoing=2633, .patterns=0, .final=0, .range=0 },/* 2632 */
      { .f_node=1604, .degree=0, .alpha=0x00, .outgoing=0, .patterns=293, .final=1, .range=0 },/* 2633 */
      { .f_node=5919, .degree=0, .alpha=0x75/* 'u' */, .outgoing=2635, .patterns=0, .final=0, .range=0 },/* 2634 */
      { .f_node=5858, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=2636, .patterns=0, .final=0, .range=0 },/* 2635 */
      { .f_node=5293, .degree=0, .alpha=0x75/* 'u' */, .outgoing=2637, .patterns=0, .final=0, .range=0 },/* 2636 */
      { .f_node=5858, .degree=3, .alpha=0x00, .outgoing=930, .patterns=0, .final=0, .range=0 },/* 2637 */
      { .f_node=4278, .degree=0, .alpha=0x74/* 't' */, .outgoing=2639, .patterns=0, .final=0, .range=0 },/* 2638 */
      { .f_node=4573, .degree=0, .alpha=0x72/* 'r' */, .outgoing=2640, .patterns=0, .final=0, .range=0 },/* 2639 */
      { .f_node=5596, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2641, .patterns=0, .final=0, .range=0 },/* 2640 */
      { .f_node=5611, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2642, .patterns=0, .final=0, .range=0 },/* 2641 */
      { .f_node=2762, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2643, .patterns=0, .final=0, .range=0 },/* 2642 */
      { .f_node=2808, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2644, .patterns=0, .final=0, .range=0 },/* 2643 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2645, .patterns=0, .final=0, .range=0 },/* 2644 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2646, .patterns=0, .final=0, .range=0 },/* 2645 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2647, .patterns=0, .final=0, .range=0 },/* 2646 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=294, .final=1, .range=0 },/* 2647 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2649, .patterns=0, .final=0, .range=0 },/* 2648 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2650, .patterns=0, .final=0, .range=0 },/* 2649 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2651, .patterns=0, .final=0, .range=0 },/* 2650 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=295, .final=1, .range=0 },/* 2651 */
      { .f_node=2762, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2653, .patterns=0, .final=0, .range=0 },/* 2652 */
      { .f_node=2773, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2654, .patterns=0, .final=0, .range=0 },/* 2653 */
      { .f_node=772, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2655, .patterns=0, .final=0, .range=0 },/* 2654 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2656, .patterns=0, .final=0, .range=0 },/* 2655 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2657, .patterns=0, .final=0, .range=0 },/* 2656 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=296, .final=1, .range=0 },/* 2657 */
      { .f_node=3324, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2659, .patterns=0, .final=0, .range=0 },/* 2658 */
      { .f_node=3393, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2660, .patterns=0, .final=0, .range=0 },/* 2659 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2661, .patterns=0, .final=0, .range=0 },/* 2660 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2662, .patterns=0, .final=0, .range=0 },/* 2661 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2663, .patterns=0, .final=0, .range=0 },/* 2662 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=297, .final=1, .range=0 },/* 2663 */
      { .f_node=5596, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2665, .patterns=0, .final=0, .range=0 },/* 2664 */
      { .f_node=5611, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2666, .patterns=0, .final=0, .range=0 },/* 2665 */
      { .f_node=3905, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2667, .patterns=0, .final=0, .range=0 },/* 2666 */
      { .f_node=2, .degree=1, .alpha=0x00, .outgoing=934, .patterns=0, .final=0, .range=0 },/* 2667 */
      { .f_node=772, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2669, .patterns=0, .final=0, .range=0 },/* 2668 */
      { .f_node=1881, .degree=0, .alpha=0x74/* 't' */, .outgoing=2670, .patterns=0, .final=0, .range=0 },/* 2669 */
      { .f_node=3538, .degree=0, .alpha=0x00, .outgoing=0, .patterns=298, .final=1, .range=0 },/* 2670 */
      { .f_node=786, .degree=0, .alpha=0x74/* 't' */, .outgoing=2672, .patterns=0, .final=0, .range=0 },/* 2671 */
      { .f_node=3538, .degree=2, .alpha=0x00, .outgoing=936, .patterns=0, .final=0, .range=0 },/* 2672 */
      { .f_node=877, .degree=10, .alpha=0x63, .outgoing=939, .patterns=0, .final=0, .range=1 },/* 2673 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2675, .patterns=0, .final=0, .range=0 },/* 2674 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2676, .patterns=0, .final=0, .range=0 },/* 2675 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=299, .final=1, .range=0 },/* 2676 */
      { .f_node=1285, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2678, .patterns=0, .final=0, .range=0 },/* 2677 */
      { .f_node=4709, .degree=0, .alpha=0x70/* 'p' */, .outgoing=2679, .patterns=0, .final=0, .range=0 },/* 2678 */
      { .f_node=4731, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2680, .patterns=0, .final=0, .range=0 },/* 2679 */
      { .f_node=877, .degree=0, .alpha=0x66/* 'f' */, .outgoing=2681, .patterns=0, .final=0, .range=0 },/* 2680 */
      { .f_node=2299, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2682, .patterns=0, .final=0, .range=0 },/* 2681 */
      { .f_node=2300, .degree=0, .alpha=0x73/* 's' */, .outgoing=2683, .patterns=0, .final=0, .range=0 },/* 2682 */
      { .f_node=5344, .degree=0, .alpha=0x74/* 't' */, .outgoing=2684, .patterns=0, .final=0, .range=0 },/* 2683 */
      { .f_node=5345, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=2685, .patterns=0, .final=0, .range=0 },/* 2684 */
      { .f_node=5084, .degree=0, .alpha=0x79/* 'y' */, .outgoing=2686, .patterns=0, .final=0, .range=0 },/* 2685 */
      { .f_node=5800, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2687, .patterns=0, .final=0, .range=0 },/* 2686 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2688, .patterns=0, .final=0, .range=0 },/* 2687 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2689, .patterns=0, .final=0, .range=0 },/* 2688 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=2690, .patterns=0, .final=0, .range=0 },/* 2689 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=300, .final=1, .range=0 },/* 2690 */
      { .f_node=4708, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2692, .patterns=0, .final=0, .range=0 },/* 2691 */
      { .f_node=4751, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2693, .patterns=0, .final=0, .range=0 },/* 2692 */
      { .f_node=4752, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2694, .patterns=0, .final=0, .range=0 },/* 2693 */
      { .f_node=4753, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2695, .patterns=0, .final=0, .range=0 },/* 2694 */
      { .f_node=4754, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2696, .patterns=0, .final=0, .range=0 },/* 2695 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2697, .patterns=0, .final=0, .range=0 },/* 2696 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2698, .patterns=0, .final=0, .range=0 },/* 2697 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2699, .patterns=0, .final=0, .range=0 },/* 2698 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=301, .final=1, .range=0 },/* 2699 */
      { .f_node=4278, .degree=0, .alpha=0x74/* 't' */, .outgoing=2701, .patterns=0, .final=0, .range=0 },/* 2700 */
      { .f_node=4573, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2702, .patterns=0, .final=0, .range=0 },/* 2701 */
      { .f_node=4574, .degree=0, .alpha=0x74/* 't' */, .outgoing=2703, .patterns=0, .final=0, .range=0 },/* 2702 */
      { .f_node=4575, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2704, .patterns=0, .final=0, .range=0 },/* 2703 */
      { .f_node=4576, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2705, .patterns=0, .final=0, .range=0 },/* 2704 */
      { .f_node=4577, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2706, .patterns=0, .final=0, .range=0 },/* 2705 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2707, .patterns=0, .final=0, .range=0 },/* 2706 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2708, .patterns=0, .final=0, .range=0 },/* 2707 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2709, .patterns=0, .final=0, .range=0 },/* 2708 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=302, .final=1, .range=0 },/* 2709 */
      { .f_node=1, .degree=14, .alpha=0x65, .outgoing=950, .patterns=0, .final=0, .range=1 },/* 2710 */
      { .f_node=3733, .degree=0, .alpha=0x31/* '1' */, .outgoing=2712, .patterns=0, .final=0, .range=0 },/* 2711 */
      { .f_node=3759, .degree=0, .alpha=0x30/* '0' */, .outgoing=2713, .patterns=0, .final=0, .range=0 },/* 2712 */
      { .f_node=1, .degree=0, .alpha=0x30/* '0' */, .outgoing=2714, .patterns=0, .final=0, .range=0 },/* 2713 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2715, .patterns=0, .final=0, .range=0 },/* 2714 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2716, .patterns=0, .final=0, .range=0 },/* 2715 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2717, .patterns=0, .final=0, .range=0 },/* 2716 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=2718, .patterns=0, .final=0, .range=0 },/* 2717 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=303, .final=1, .range=0 },/* 2718 */
      { .f_node=4278, .degree=0, .alpha=0x33/* '3' */, .outgoing=2720, .patterns=0, .final=0, .range=0 },/* 2719 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2721, .patterns=0, .final=0, .range=0 },/* 2720 */
      { .f_node=877, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=2722, .patterns=0, .final=0, .range=0 },/* 2721 */
      { .f_node=1700, .degree=0, .alpha=0x76/* 'v' */, .outgoing=2723, .patterns=0, .final=0, .range=0 },/* 2722 */
      { .f_node=5786, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=2724, .patterns=0, .final=0, .range=0 },/* 2723 */
      { .f_node=5293, .degree=0, .alpha=0x74/* 't' */, .outgoing=2725, .patterns=0, .final=0, .range=0 },/* 2724 */
      { .f_node=4944, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2726, .patterns=0, .final=0, .range=0 },/* 2725 */
      { .f_node=877, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2727, .patterns=0, .final=0, .range=0 },/* 2726 */
      { .f_node=2151, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2728, .patterns=0, .final=0, .range=0 },/* 2727 */
      { .f_node=413, .degree=0, .alpha=0x73/* 's' */, .outgoing=2729, .patterns=0, .final=0, .range=0 },/* 2728 */
      { .f_node=2908, .degree=0, .alpha=0x68/* 'h' */, .outgoing=2730, .patterns=0, .final=0, .range=0 },/* 2729 */
      { .f_node=4347, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2731, .patterns=0, .final=0, .range=0 },/* 2730 */
      { .f_node=877, .degree=0, .alpha=0x75/* 'u' */, .outgoing=2732, .patterns=0, .final=0, .range=0 },/* 2731 */
      { .f_node=1603, .degree=0, .alpha=0x73/* 's' */, .outgoing=2733, .patterns=0, .final=0, .range=0 },/* 2732 */
      { .f_node=1604, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2734, .patterns=0, .final=0, .range=0 },/* 2733 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2735, .patterns=0, .final=0, .range=0 },/* 2734 */
      { .f_node=878, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2736, .patterns=0, .final=0, .range=0 },/* 2735 */
      { .f_node=879, .degree=0, .alpha=0x76/* 'v' */, .outgoing=2737, .patterns=0, .final=0, .range=0 },/* 2736 */
      { .f_node=880, .degree=0, .alpha=0x2d/* '-' */, .outgoing=2738, .patterns=0, .final=0, .range=0 },/* 2737 */
      { .f_node=881, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2739, .patterns=0, .final=0, .range=0 },/* 2738 */
      { .f_node=882, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2740, .patterns=0, .final=0, .range=0 },/* 2739 */
      { .f_node=883, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2741, .patterns=0, .final=0, .range=0 },/* 2740 */
      { .f_node=884, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2742, .patterns=0, .final=0, .range=0 },/* 2741 */
      { .f_node=885, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2743, .patterns=0, .final=0, .range=0 },/* 2742 */
      { .f_node=886, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2744, .patterns=0, .final=0, .range=0 },/* 2743 */
      { .f_node=887, .degree=0, .alpha=0x74/* 't' */, .outgoing=2745, .patterns=0, .final=0, .range=0 },/* 2744 */
      { .f_node=888, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2746, .patterns=304, .final=1, .range=0 },/* 2745 */
      { .f_node=2562, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2747, .patterns=0, .final=0, .range=0 },/* 2746 */
      { .f_node=1545, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2748, .patterns=0, .final=0, .range=0 },/* 2747 */
      { .f_node=877, .degree=0, .alpha=0x66/* 'f' */, .outgoing=2749, .patterns=0, .final=0, .range=0 },/* 2748 */
      { .f_node=2299, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2750, .patterns=0, .final=0, .range=0 },/* 2749 */
      { .f_node=3563, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2751, .patterns=0, .final=0, .range=0 },/* 2750 */
      { .f_node=3563, .degree=0, .alpha=0x74/* 't' */, .outgoing=2752, .patterns=0, .final=0, .range=0 },/* 2751 */
      { .f_node=4944, .degree=0, .alpha=0x70/* 'p' */, .outgoing=2753, .patterns=0, .final=0, .range=0 },/* 2752 */
      { .f_node=3983, .degree=0, .alpha=0x72/* 'r' */, .outgoing=2754, .patterns=0, .final=0, .range=0 },/* 2753 */
      { .f_node=5596, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2755, .patterns=0, .final=0, .range=0 },/* 2754 */
      { .f_node=3324, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2756, .patterns=0, .final=0, .range=0 },/* 2755 */
      { .f_node=3492, .degree=0, .alpha=0x74/* 't' */, .outgoing=2757, .patterns=0, .final=0, .range=0 },/* 2756 */
      { .f_node=5464, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2758, .patterns=0, .final=0, .range=0 },/* 2757 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2759, .patterns=0, .final=0, .range=0 },/* 2758 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2760, .patterns=0, .final=0, .range=0 },/* 2759 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=2761, .patterns=0, .final=0, .range=0 },/* 2760 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=305, .final=1, .range=0 },/* 2761 */
      { .f_node=1, .degree=21, .alpha=0x61, .outgoing=965, .patterns=0, .final=0, .range=1 },/* 2762 */
      { .f_node=2762, .degree=0, .alpha=0x70/* 'p' */, .outgoing=2764, .patterns=0, .final=0, .range=0 },/* 2763 */
      { .f_node=2891, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=2765, .patterns=0, .final=0, .range=0 },/* 2764 */
      { .f_node=3997, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2766, .patterns=0, .final=0, .range=0 },/* 2765 */
      { .f_node=5294, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2767, .patterns=0, .final=0, .range=0 },/* 2766 */
      { .f_node=3393, .degree=0, .alpha=0x67/* 'g' */, .outgoing=2768, .patterns=0, .final=0, .range=0 },/* 2767 */
      { .f_node=3451, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2769, .patterns=0, .final=0, .range=0 },/* 2768 */
      { .f_node=5239, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2770, .patterns=0, .final=0, .range=0 },/* 2769 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2771, .patterns=0, .final=0, .range=0 },/* 2770 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2772, .patterns=0, .final=0, .range=0 },/* 2771 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=306, .final=1, .range=0 },/* 2772 */
      { .f_node=2, .degree=0, .alpha=0x62/* 'b' */, .outgoing=2774, .patterns=0, .final=0, .range=0 },/* 2773 */
      { .f_node=4204, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=2775, .patterns=0, .final=0, .range=0 },/* 2774 */
      { .f_node=5293, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2776, .patterns=0, .final=0, .range=0 },/* 2775 */
      { .f_node=5304, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2777, .patterns=0, .final=0, .range=0 },/* 2776 */
      { .f_node=3564, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=2778, .patterns=0, .final=0, .range=0 },/* 2777 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2779, .patterns=0, .final=0, .range=0 },/* 2778 */
      { .f_node=877, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2780, .patterns=0, .final=0, .range=0 },/* 2779 */
      { .f_node=1285, .degree=0, .alpha=0x79/* 'y' */, .outgoing=2781, .patterns=0, .final=0, .range=0 },/* 2780 */
      { .f_node=4923, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2782, .patterns=0, .final=0, .range=0 },/* 2781 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2783, .patterns=0, .final=0, .range=0 },/* 2782 */
      { .f_node=436, .degree=0, .alpha=0x73/* 's' */, .outgoing=2784, .patterns=0, .final=0, .range=0 },/* 2783 */
      { .f_node=437, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2785, .patterns=0, .final=0, .range=0 },/* 2784 */
      { .f_node=438, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2786, .patterns=0, .final=0, .range=0 },/* 2785 */
      { .f_node=573, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2787, .patterns=0, .final=0, .range=0 },/* 2786 */
      { .f_node=574, .degree=0, .alpha=0x74/* 't' */, .outgoing=2788, .patterns=0, .final=0, .range=0 },/* 2787 */
      { .f_node=2561, .degree=0, .alpha=0x77/* 'w' */, .outgoing=2789, .patterns=0, .final=0, .range=0 },/* 2788 */
      { .f_node=5127, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2790, .patterns=0, .final=0, .range=0 },/* 2789 */
      { .f_node=5768, .degree=0, .alpha=0x72/* 'r' */, .outgoing=2791, .patterns=0, .final=0, .range=0 },/* 2790 */
      { .f_node=5769, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=2792, .patterns=0, .final=0, .range=0 },/* 2791 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=307, .final=1, .range=0 },/* 2792 */
      { .f_node=5293, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2794, .patterns=0, .final=0, .range=0 },/* 2793 */
      { .f_node=3733, .degree=0, .alpha=0x78/* 'x' */, .outgoing=2795, .patterns=0, .final=0, .range=0 },/* 2794 */
      { .f_node=1, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2796, .patterns=0, .final=0, .range=0 },/* 2795 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2797, .patterns=0, .final=0, .range=0 },/* 2796 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2798, .patterns=0, .final=0, .range=0 },/* 2797 */
      { .f_node=878, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2799, .patterns=0, .final=0, .range=0 },/* 2798 */
      { .f_node=906, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2800, .patterns=0, .final=0, .range=0 },/* 2799 */
      { .f_node=907, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=2801, .patterns=0, .final=0, .range=0 },/* 2800 */
      { .f_node=908, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2802, .patterns=0, .final=0, .range=0 },/* 2801 */
      { .f_node=909, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2803, .patterns=0, .final=0, .range=0 },/* 2802 */
      { .f_node=910, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2804, .patterns=0, .final=0, .range=0 },/* 2803 */
      { .f_node=2834, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2805, .patterns=308, .final=1, .range=0 },/* 2804 */
      { .f_node=2835, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2806, .patterns=0, .final=0, .range=0 },/* 2805 */
      { .f_node=2836, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2807, .patterns=0, .final=0, .range=0 },/* 2806 */
      { .f_node=2837, .degree=0, .alpha=0x00, .outgoing=0, .patterns=309, .final=1, .range=0 },/* 2807 */
      { .f_node=4708, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2809, .patterns=0, .final=0, .range=0 },/* 2808 */
      { .f_node=4709, .degree=12, .alpha=0x6e, .outgoing=987, .patterns=0, .final=0, .range=1 },/* 2809 */
      { .f_node=2866, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2811, .patterns=0, .final=0, .range=0 },/* 2810 */
      { .f_node=2867, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2812, .patterns=0, .final=0, .range=0 },/* 2811 */
      { .f_node=413, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2813, .patterns=0, .final=0, .range=0 },/* 2812 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2814, .patterns=0, .final=0, .range=0 },/* 2813 */
      { .f_node=2559, .degree=0, .alpha=0x73/* 's' */, .outgoing=2815, .patterns=0, .final=0, .range=0 },/* 2814 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2816, .patterns=0, .final=0, .range=0 },/* 2815 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2817, .patterns=0, .final=0, .range=0 },/* 2816 */
      { .f_node=1545, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=2818, .patterns=0, .final=0, .range=0 },/* 2817 */
      { .f_node=1581, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2819, .patterns=0, .final=0, .range=0 },/* 2818 */
      { .f_node=1582, .degree=0, .alpha=0x75/* 'u' */, .outgoing=2820, .patterns=0, .final=0, .range=0 },/* 2819 */
      { .f_node=1583, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2821, .patterns=0, .final=0, .range=0 },/* 2820 */
      { .f_node=1584, .degree=0, .alpha=0x66/* 'f' */, .outgoing=2822, .patterns=0, .final=0, .range=0 },/* 2821 */
      { .f_node=1585, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=2823, .patterns=0, .final=0, .range=0 },/* 2822 */
      { .f_node=5487, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2824, .patterns=0, .final=0, .range=0 },/* 2823 */
      { .f_node=5488, .degree=0, .alpha=0x72/* 'r' */, .outgoing=2825, .patterns=0, .final=0, .range=0 },/* 2824 */
      { .f_node=5489, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2826, .patterns=0, .final=0, .range=0 },/* 2825 */
      { .f_node=5490, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2827, .patterns=0, .final=0, .range=0 },/* 2826 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2828, .patterns=0, .final=0, .range=0 },/* 2827 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2829, .patterns=0, .final=0, .range=0 },/* 2828 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2830, .patterns=0, .final=0, .range=0 },/* 2829 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=311, .final=1, .range=0 },/* 2830 */
      { .f_node=1, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2832, .patterns=0, .final=0, .range=0 },/* 2831 */
      { .f_node=3563, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2833, .patterns=0, .final=0, .range=0 },/* 2832 */
      { .f_node=3609, .degree=2, .alpha=0x00, .outgoing=1000, .patterns=0, .final=0, .range=0 },/* 2833 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2835, .patterns=312, .final=1, .range=0 },/* 2834 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2836, .patterns=0, .final=0, .range=0 },/* 2835 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2837, .patterns=0, .final=0, .range=0 },/* 2836 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=313, .final=1, .range=0 },/* 2837 */
      { .f_node=2762, .degree=11, .alpha=0x6c, .outgoing=1003, .patterns=0, .final=0, .range=1 },/* 2838 */
      { .f_node=2793, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2840, .patterns=0, .final=0, .range=0 },/* 2839 */
      { .f_node=2794, .degree=0, .alpha=0x78/* 'x' */, .outgoing=2841, .patterns=0, .final=0, .range=0 },/* 2840 */
      { .f_node=2795, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2842, .patterns=0, .final=0, .range=0 },/* 2841 */
      { .f_node=2796, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2843, .patterns=0, .final=0, .range=0 },/* 2842 */
      { .f_node=2797, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2844, .patterns=0, .final=0, .range=0 },/* 2843 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2845, .patterns=0, .final=0, .range=0 },/* 2844 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2846, .patterns=0, .final=0, .range=0 },/* 2845 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=314, .final=1, .range=0 },/* 2846 */
      { .f_node=5671, .degree=0, .alpha=0x73/* 's' */, .outgoing=2848, .patterns=0, .final=0, .range=0 },/* 2847 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2849, .patterns=0, .final=0, .range=0 },/* 2848 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2850, .patterns=0, .final=0, .range=0 },/* 2849 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2851, .patterns=0, .final=0, .range=0 },/* 2850 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2852, .patterns=0, .final=0, .range=0 },/* 2851 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=315, .final=1, .range=0 },/* 2852 */
      { .f_node=5969, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2854, .patterns=0, .final=0, .range=0 },/* 2853 */
      { .f_node=2762, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2855, .patterns=0, .final=0, .range=0 },/* 2854 */
      { .f_node=2773, .degree=0, .alpha=0x73/* 's' */, .outgoing=2856, .patterns=0, .final=0, .range=0 },/* 2855 */
      { .f_node=854, .degree=0, .alpha=0x79/* 'y' */, .outgoing=2857, .patterns=0, .final=0, .range=0 },/* 2856 */
      { .f_node=5800, .degree=0, .alpha=0x73/* 's' */, .outgoing=2858, .patterns=0, .final=0, .range=0 },/* 2857 */
      { .f_node=4278, .degree=0, .alpha=0x74/* 't' */, .outgoing=2859, .patterns=0, .final=0, .range=0 },/* 2858 */
      { .f_node=4573, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2860, .patterns=0, .final=0, .range=0 },/* 2859 */
      { .f_node=4644, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2861, .patterns=0, .final=0, .range=0 },/* 2860 */
      { .f_node=4708, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2862, .patterns=0, .final=0, .range=0 },/* 2861 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2863, .patterns=0, .final=0, .range=0 },/* 2862 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2864, .patterns=0, .final=0, .range=0 },/* 2863 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2865, .patterns=0, .final=0, .range=0 },/* 2864 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=316, .final=1, .range=0 },/* 2865 */
      { .f_node=5418, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2867, .patterns=0, .final=0, .range=0 },/* 2866 */
      { .f_node=2, .degree=0, .alpha=0x72/* 'r' */, .outgoing=2868, .patterns=0, .final=0, .range=0 },/* 2867 */
      { .f_node=365, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2869, .patterns=0, .final=0, .range=0 },/* 2868 */
      { .f_node=3563, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2870, .patterns=0, .final=0, .range=0 },/* 2869 */
      { .f_node=3324, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2871, .patterns=0, .final=0, .range=0 },/* 2870 */
      { .f_node=2, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2872, .patterns=0, .final=0, .range=0 },/* 2871 */
      { .f_node=772, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2873, .patterns=0, .final=0, .range=0 },/* 2872 */
      { .f_node=1545, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=2874, .patterns=0, .final=0, .range=0 },/* 2873 */
      { .f_node=1581, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2875, .patterns=0, .final=0, .range=0 },/* 2874 */
      { .f_node=5294, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2876, .patterns=0, .final=0, .range=0 },/* 2875 */
      { .f_node=3733, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2877, .patterns=0, .final=0, .range=0 },/* 2876 */
      { .f_node=5418, .degree=0, .alpha=0x74/* 't' */, .outgoing=2878, .patterns=0, .final=0, .range=0 },/* 2877 */
      { .f_node=5464, .degree=0, .alpha=0x73/* 's' */, .outgoing=2879, .patterns=0, .final=0, .range=0 },/* 2878 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2880, .patterns=0, .final=0, .range=0 },/* 2879 */
      { .f_node=877, .degree=0, .alpha=0x67/* 'g' */, .outgoing=2881, .patterns=0, .final=0, .range=0 },/* 2880 */
      { .f_node=1763, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2882, .patterns=0, .final=0, .range=0 },/* 2881 */
      { .f_node=1811, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2883, .patterns=0, .final=0, .range=0 },/* 2882 */
      { .f_node=1812, .degree=0, .alpha=0x67/* 'g' */, .outgoing=2884, .patterns=0, .final=0, .range=0 },/* 2883 */
      { .f_node=1813, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=2885, .patterns=0, .final=0, .range=0 },/* 2884 */
      { .f_node=1814, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2886, .patterns=0, .final=0, .range=0 },/* 2885 */
      { .f_node=1815, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2887, .patterns=0, .final=0, .range=0 },/* 2886 */
      { .f_node=1853, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2888, .patterns=317, .final=1, .range=0 },/* 2887 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2889, .patterns=0, .final=0, .range=0 },/* 2888 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2890, .patterns=0, .final=0, .range=0 },/* 2889 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=319, .final=1, .range=0 },/* 2890 */
      { .f_node=3983, .degree=0, .alpha=0x70/* 'p' */, .outgoing=2892, .patterns=0, .final=0, .range=0 },/* 2891 */
      { .f_node=3983, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=2893, .patterns=0, .final=0, .range=0 },/* 2892 */
      { .f_node=3997, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2894, .patterns=0, .final=0, .range=0 },/* 2893 */
      { .f_node=5294, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2895, .patterns=0, .final=0, .range=0 },/* 2894 */
      { .f_node=3733, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2896, .patterns=0, .final=0, .range=0 },/* 2895 */
      { .f_node=3905, .degree=0, .alpha=0x70/* 'p' */, .outgoing=2897, .patterns=0, .final=0, .range=0 },/* 2896 */
      { .f_node=3983, .degree=0, .alpha=0x72/* 'r' */, .outgoing=2898, .patterns=0, .final=0, .range=0 },/* 2897 */
      { .f_node=5596, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2899, .patterns=0, .final=0, .range=0 },/* 2898 */
      { .f_node=3324, .degree=0, .alpha=0x76/* 'v' */, .outgoing=2900, .patterns=0, .final=0, .range=0 },/* 2899 */
      { .f_node=5786, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2901, .patterns=0, .final=0, .range=0 },/* 2900 */
      { .f_node=2762, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2902, .patterns=0, .final=0, .range=0 },/* 2901 */
      { .f_node=5471, .degree=0, .alpha=0x79/* 'y' */, .outgoing=2903, .patterns=0, .final=0, .range=0 },/* 2902 */
      { .f_node=5800, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2904, .patterns=0, .final=0, .range=0 },/* 2903 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2905, .patterns=0, .final=0, .range=0 },/* 2904 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2906, .patterns=0, .final=0, .range=0 },/* 2905 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=2907, .patterns=0, .final=0, .range=0 },/* 2906 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=320, .final=1, .range=0 },/* 2907 */
      { .f_node=4278, .degree=0, .alpha=0x73/* 's' */, .outgoing=2909, .patterns=0, .final=0, .range=0 },/* 2908 */
      { .f_node=4278, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2910, .patterns=0, .final=0, .range=0 },/* 2909 */
      { .f_node=4302, .degree=0, .alpha=0x74/* 't' */, .outgoing=2911, .patterns=0, .final=0, .range=0 },/* 2910 */
      { .f_node=4944, .degree=0, .alpha=0x73/* 's' */, .outgoing=2912, .patterns=0, .final=0, .range=0 },/* 2911 */
      { .f_node=4278, .degree=0, .alpha=0x68/* 'h' */, .outgoing=2913, .patterns=0, .final=0, .range=0 },/* 2912 */
      { .f_node=4347, .degree=0, .alpha=0x75/* 'u' */, .outgoing=2914, .patterns=0, .final=0, .range=0 },/* 2913 */
      { .f_node=5858, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=2915, .patterns=0, .final=0, .range=0 },/* 2914 */
      { .f_node=5293, .degree=0, .alpha=0x75/* 'u' */, .outgoing=2916, .patterns=0, .final=0, .range=0 },/* 2915 */
      { .f_node=5858, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2917, .patterns=0, .final=0, .range=0 },/* 2916 */
      { .f_node=3324, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2918, .patterns=0, .final=0, .range=0 },/* 2917 */
      { .f_node=3393, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2919, .patterns=0, .final=0, .range=0 },/* 2918 */
      { .f_node=5471, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2920, .patterns=0, .final=0, .range=0 },/* 2919 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2921, .patterns=0, .final=0, .range=0 },/* 2920 */
      { .f_node=5520, .degree=0, .alpha=0x2d/* '-' */, .outgoing=2922, .patterns=0, .final=0, .range=0 },/* 2921 */
      { .f_node=5969, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2923, .patterns=0, .final=0, .range=0 },/* 2922 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2924, .patterns=0, .final=0, .range=0 },/* 2923 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2925, .patterns=0, .final=0, .range=0 },/* 2924 */
      { .f_node=878, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=2926, .patterns=0, .final=0, .range=0 },/* 2925 */
      { .f_node=901, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2927, .patterns=0, .final=0, .range=0 },/* 2926 */
      { .f_node=902, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2928, .patterns=0, .final=0, .range=0 },/* 2927 */
      { .f_node=2808, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2929, .patterns=0, .final=0, .range=0 },/* 2928 */
      { .f_node=2809, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2930, .patterns=0, .final=0, .range=0 },/* 2929 */
      { .f_node=4710, .degree=0, .alpha=0x68/* 'h' */, .outgoing=2931, .patterns=0, .final=0, .range=0 },/* 2930 */
      { .f_node=5919, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2932, .patterns=0, .final=0, .range=0 },/* 2931 */
      { .f_node=2, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2933, .patterns=0, .final=0, .range=0 },/* 2932 */
      { .f_node=772, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2934, .patterns=0, .final=0, .range=0 },/* 2933 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2935, .patterns=0, .final=0, .range=0 },/* 2934 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=2936, .patterns=0, .final=0, .range=0 },/* 2935 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=321, .final=1, .range=0 },/* 2936 */
      { .f_node=4944, .degree=0, .alpha=0x76/* 'v' */, .outgoing=2938, .patterns=0, .final=0, .range=0 },/* 2937 */
      { .f_node=5786, .degree=0, .alpha=0x2d/* '-' */, .outgoing=2939, .patterns=0, .final=0, .range=0 },/* 2938 */
      { .f_node=5969, .degree=11, .alpha=0x65, .outgoing=1015, .patterns=0, .final=0, .range=1 },/* 2939 */
      { .f_node=3733, .degree=0, .alpha=0x78/* 'x' */, .outgoing=2941, .patterns=0, .final=0, .range=0 },/* 2940 */
      { .f_node=1, .degree=0, .alpha=0x74/* 't' */, .outgoing=2942, .patterns=0, .final=0, .range=0 },/* 2941 */
      { .f_node=4944, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2943, .patterns=0, .final=0, .range=0 },/* 2942 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2944, .patterns=0, .final=0, .range=0 },/* 2943 */
      { .f_node=878, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2945, .patterns=0, .final=0, .range=0 },/* 2944 */
      { .f_node=906, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2946, .patterns=0, .final=0, .range=0 },/* 2945 */
      { .f_node=907, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=2947, .patterns=0, .final=0, .range=0 },/* 2946 */
      { .f_node=908, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2948, .patterns=0, .final=0, .range=0 },/* 2947 */
      { .f_node=909, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2949, .patterns=0, .final=0, .range=0 },/* 2948 */
      { .f_node=910, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2950, .patterns=0, .final=0, .range=0 },/* 2949 */
      { .f_node=2834, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2951, .patterns=322, .final=1, .range=0 },/* 2950 */
      { .f_node=2835, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2952, .patterns=0, .final=0, .range=0 },/* 2951 */
      { .f_node=2836, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2953, .patterns=0, .final=0, .range=0 },/* 2952 */
      { .f_node=2837, .degree=0, .alpha=0x00, .outgoing=0, .patterns=323, .final=1, .range=0 },/* 2953 */
      { .f_node=3983, .degree=0, .alpha=0x73/* 's' */, .outgoing=2955, .patterns=0, .final=0, .range=0 },/* 2954 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2956, .patterns=0, .final=0, .range=0 },/* 2955 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2957, .patterns=0, .final=0, .range=0 },/* 2956 */
      { .f_node=878, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2958, .patterns=0, .final=0, .range=0 },/* 2957 */
      { .f_node=906, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2959, .patterns=0, .final=0, .range=0 },/* 2958 */
      { .f_node=907, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=2960, .patterns=0, .final=0, .range=0 },/* 2959 */
      { .f_node=908, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2961, .patterns=0, .final=0, .range=0 },/* 2960 */
      { .f_node=909, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2962, .patterns=0, .final=0, .range=0 },/* 2961 */
      { .f_node=910, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2963, .patterns=0, .final=0, .range=0 },/* 2962 */
      { .f_node=2834, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2964, .patterns=325, .final=1, .range=0 },/* 2963 */
      { .f_node=2835, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2965, .patterns=0, .final=0, .range=0 },/* 2964 */
      { .f_node=2836, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2966, .patterns=0, .final=0, .range=0 },/* 2965 */
      { .f_node=2837, .degree=0, .alpha=0x00, .outgoing=0, .patterns=326, .final=1, .range=0 },/* 2966 */
      { .f_node=5858, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2968, .patterns=0, .final=0, .range=0 },/* 2967 */
      { .f_node=2, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2969, .patterns=0, .final=0, .range=0 },/* 2968 */
      { .f_node=786, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2970, .patterns=0, .final=0, .range=0 },/* 2969 */
      { .f_node=3515, .degree=7, .alpha=0x2d, .outgoing=1027, .patterns=0, .final=0, .range=1 },/* 2970 */
      { .f_node=5969, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2972, .patterns=0, .final=0, .range=0 },/* 2971 */
      { .f_node=2762, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=2973, .patterns=0, .final=0, .range=0 },/* 2972 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=2974, .patterns=0, .final=0, .range=0 },/* 2973 */
      { .f_node=5969, .degree=0, .alpha=0x73/* 's' */, .outgoing=2975, .patterns=0, .final=0, .range=0 },/* 2974 */
      { .f_node=4278, .degree=0, .alpha=0x70/* 'p' */, .outgoing=2976, .patterns=0, .final=0, .range=0 },/* 2975 */
      { .f_node=4478, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2977, .patterns=0, .final=0, .range=0 },/* 2976 */
      { .f_node=4487, .degree=0, .alpha=0x74/* 't' */, .outgoing=2978, .patterns=0, .final=0, .range=0 },/* 2977 */
      { .f_node=4488, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2979, .patterns=0, .final=0, .range=0 },/* 2978 */
      { .f_node=4489, .degree=0, .alpha=0x66/* 'f' */, .outgoing=2980, .patterns=0, .final=0, .range=0 },/* 2979 */
      { .f_node=4490, .degree=0, .alpha=0x79/* 'y' */, .outgoing=2981, .patterns=0, .final=0, .range=0 },/* 2980 */
      { .f_node=4491, .degree=0, .alpha=0x2d/* '-' */, .outgoing=2982, .patterns=0, .final=0, .range=0 },/* 2981 */
      { .f_node=4502, .degree=0, .alpha=0x63/* 'c' */, .outgoing=2983, .patterns=0, .final=0, .range=0 },/* 2982 */
      { .f_node=4503, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=2984, .patterns=0, .final=0, .range=0 },/* 2983 */
      { .f_node=4504, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2985, .patterns=0, .final=0, .range=0 },/* 2984 */
      { .f_node=4505, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2986, .patterns=0, .final=0, .range=0 },/* 2985 */
      { .f_node=4506, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2987, .patterns=0, .final=0, .range=0 },/* 2986 */
      { .f_node=4507, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=2988, .patterns=0, .final=0, .range=0 },/* 2987 */
      { .f_node=4508, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2989, .patterns=0, .final=0, .range=0 },/* 2988 */
      { .f_node=4509, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=2990, .patterns=0, .final=0, .range=0 },/* 2989 */
      { .f_node=4510, .degree=0, .alpha=0x61/* 'a' */, .outgoing=2991, .patterns=0, .final=0, .range=0 },/* 2990 */
      { .f_node=4511, .degree=0, .alpha=0x69/* 'i' */, .outgoing=2992, .patterns=0, .final=0, .range=0 },/* 2991 */
      { .f_node=4512, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=2993, .patterns=0, .final=0, .range=0 },/* 2992 */
      { .f_node=4513, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2994, .patterns=0, .final=0, .range=0 },/* 2993 */
      { .f_node=4514, .degree=0, .alpha=0x64/* 'd' */, .outgoing=2995, .patterns=0, .final=0, .range=0 },/* 2994 */
      { .f_node=4515, .degree=0, .alpha=0x2e/* '.' */, .outgoing=2996, .patterns=0, .final=0, .range=0 },/* 2995 */
      { .f_node=4516, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=2997, .patterns=0, .final=0, .range=0 },/* 2996 */
      { .f_node=4517, .degree=0, .alpha=0x65/* 'e' */, .outgoing=2998, .patterns=0, .final=0, .range=0 },/* 2997 */
      { .f_node=4518, .degree=0, .alpha=0x74/* 't' */, .outgoing=2999, .patterns=0, .final=0, .range=0 },/* 2998 */
      { .f_node=4519, .degree=0, .alpha=0x00, .outgoing=0, .patterns=328, .final=1, .range=0 },/* 2999 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3001, .patterns=0, .final=0, .range=0 },/* 3000 */
      { .f_node=5969, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3002, .patterns=0, .final=0, .range=0 },/* 3001 */
      { .f_node=2762, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=3003, .patterns=0, .final=0, .range=0 },/* 3002 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3004, .patterns=0, .final=0, .range=0 },/* 3003 */
      { .f_node=5969, .degree=0, .alpha=0x73/* 's' */, .outgoing=3005, .patterns=0, .final=0, .range=0 },/* 3004 */
      { .f_node=4278, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3006, .patterns=0, .final=0, .range=0 },/* 3005 */
      { .f_node=4478, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3007, .patterns=0, .final=0, .range=0 },/* 3006 */
      { .f_node=4487, .degree=0, .alpha=0x74/* 't' */, .outgoing=3008, .patterns=0, .final=0, .range=0 },/* 3007 */
      { .f_node=4488, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3009, .patterns=0, .final=0, .range=0 },/* 3008 */
      { .f_node=4489, .degree=0, .alpha=0x66/* 'f' */, .outgoing=3010, .patterns=0, .final=0, .range=0 },/* 3009 */
      { .f_node=4490, .degree=0, .alpha=0x79/* 'y' */, .outgoing=3011, .patterns=0, .final=0, .range=0 },/* 3010 */
      { .f_node=4491, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3012, .patterns=0, .final=0, .range=0 },/* 3011 */
      { .f_node=4502, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3013, .patterns=0, .final=0, .range=0 },/* 3012 */
      { .f_node=4503, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3014, .patterns=0, .final=0, .range=0 },/* 3013 */
      { .f_node=4504, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3015, .patterns=0, .final=0, .range=0 },/* 3014 */
      { .f_node=4505, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3016, .patterns=0, .final=0, .range=0 },/* 3015 */
      { .f_node=4506, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3017, .patterns=0, .final=0, .range=0 },/* 3016 */
      { .f_node=4507, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=3018, .patterns=0, .final=0, .range=0 },/* 3017 */
      { .f_node=4508, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3019, .patterns=0, .final=0, .range=0 },/* 3018 */
      { .f_node=4509, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3020, .patterns=0, .final=0, .range=0 },/* 3019 */
      { .f_node=4510, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3021, .patterns=0, .final=0, .range=0 },/* 3020 */
      { .f_node=4511, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3022, .patterns=0, .final=0, .range=0 },/* 3021 */
      { .f_node=4512, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=3023, .patterns=0, .final=0, .range=0 },/* 3022 */
      { .f_node=4513, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3024, .patterns=0, .final=0, .range=0 },/* 3023 */
      { .f_node=4514, .degree=0, .alpha=0x64/* 'd' */, .outgoing=3025, .patterns=0, .final=0, .range=0 },/* 3024 */
      { .f_node=4515, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3026, .patterns=0, .final=0, .range=0 },/* 3025 */
      { .f_node=4516, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3027, .patterns=0, .final=0, .range=0 },/* 3026 */
      { .f_node=4517, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3028, .patterns=0, .final=0, .range=0 },/* 3027 */
      { .f_node=4518, .degree=0, .alpha=0x74/* 't' */, .outgoing=3029, .patterns=0, .final=0, .range=0 },/* 3028 */
      { .f_node=4519, .degree=0, .alpha=0x00, .outgoing=0, .patterns=330, .final=1, .range=0 },/* 3029 */
      { .f_node=5786, .degree=0, .alpha=0x73/* 's' */, .outgoing=3031, .patterns=0, .final=0, .range=0 },/* 3030 */
      { .f_node=4278, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3032, .patterns=0, .final=0, .range=0 },/* 3031 */
      { .f_node=5969, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3033, .patterns=0, .final=0, .range=0 },/* 3032 */
      { .f_node=2762, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=3034, .patterns=0, .final=0, .range=0 },/* 3033 */
      { .f_node=2793, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3035, .patterns=0, .final=0, .range=0 },/* 3034 */
      { .f_node=2794, .degree=0, .alpha=0x78/* 'x' */, .outgoing=3036, .patterns=0, .final=0, .range=0 },/* 3035 */
      { .f_node=2795, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3037, .patterns=0, .final=0, .range=0 },/* 3036 */
      { .f_node=2796, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3038, .patterns=0, .final=0, .range=0 },/* 3037 */
      { .f_node=5969, .degree=8, .alpha=0x31, .outgoing=1035, .patterns=0, .final=0, .range=1 },/* 3038 */
      { .f_node=2710, .degree=12, .alpha=0x2d, .outgoing=1044, .patterns=0, .final=0, .range=1 },/* 3039 */
      { .f_node=5969, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3041, .patterns=0, .final=0, .range=0 },/* 3040 */
      { .f_node=5418, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3042, .patterns=0, .final=0, .range=0 },/* 3041 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3043, .patterns=0, .final=0, .range=0 },/* 3042 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3044, .patterns=0, .final=0, .range=0 },/* 3043 */
      { .f_node=878, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3045, .patterns=0, .final=0, .range=0 },/* 3044 */
      { .f_node=906, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3046, .patterns=0, .final=0, .range=0 },/* 3045 */
      { .f_node=907, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=3047, .patterns=0, .final=0, .range=0 },/* 3046 */
      { .f_node=908, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3048, .patterns=0, .final=0, .range=0 },/* 3047 */
      { .f_node=909, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3049, .patterns=0, .final=0, .range=0 },/* 3048 */
      { .f_node=910, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3050, .patterns=0, .final=0, .range=0 },/* 3049 */
      { .f_node=2834, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3051, .patterns=332, .final=1, .range=0 },/* 3050 */
      { .f_node=2835, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3052, .patterns=0, .final=0, .range=0 },/* 3051 */
      { .f_node=2836, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3053, .patterns=0, .final=0, .range=0 },/* 3052 */
      { .f_node=2837, .degree=0, .alpha=0x00, .outgoing=0, .patterns=333, .final=1, .range=0 },/* 3053 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3055, .patterns=0, .final=0, .range=0 },/* 3054 */
      { .f_node=5969, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3056, .patterns=0, .final=0, .range=0 },/* 3055 */
      { .f_node=5418, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3057, .patterns=0, .final=0, .range=0 },/* 3056 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3058, .patterns=0, .final=0, .range=0 },/* 3057 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3059, .patterns=0, .final=0, .range=0 },/* 3058 */
      { .f_node=878, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3060, .patterns=0, .final=0, .range=0 },/* 3059 */
      { .f_node=906, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3061, .patterns=0, .final=0, .range=0 },/* 3060 */
      { .f_node=907, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=3062, .patterns=0, .final=0, .range=0 },/* 3061 */
      { .f_node=908, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3063, .patterns=0, .final=0, .range=0 },/* 3062 */
      { .f_node=909, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3064, .patterns=0, .final=0, .range=0 },/* 3063 */
      { .f_node=910, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3065, .patterns=0, .final=0, .range=0 },/* 3064 */
      { .f_node=2834, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3066, .patterns=335, .final=1, .range=0 },/* 3065 */
      { .f_node=2835, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3067, .patterns=0, .final=0, .range=0 },/* 3066 */
      { .f_node=2836, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3068, .patterns=0, .final=0, .range=0 },/* 3067 */
      { .f_node=2837, .degree=0, .alpha=0x00, .outgoing=0, .patterns=336, .final=1, .range=0 },/* 3068 */
      { .f_node=2710, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3070, .patterns=0, .final=0, .range=0 },/* 3069 */
      { .f_node=5969, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3071, .patterns=0, .final=0, .range=0 },/* 3070 */
      { .f_node=5418, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3072, .patterns=0, .final=0, .range=0 },/* 3071 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3073, .patterns=0, .final=0, .range=0 },/* 3072 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3074, .patterns=0, .final=0, .range=0 },/* 3073 */
      { .f_node=878, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3075, .patterns=0, .final=0, .range=0 },/* 3074 */
      { .f_node=906, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3076, .patterns=0, .final=0, .range=0 },/* 3075 */
      { .f_node=907, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=3077, .patterns=0, .final=0, .range=0 },/* 3076 */
      { .f_node=908, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3078, .patterns=0, .final=0, .range=0 },/* 3077 */
      { .f_node=909, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3079, .patterns=0, .final=0, .range=0 },/* 3078 */
      { .f_node=910, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3080, .patterns=0, .final=0, .range=0 },/* 3079 */
      { .f_node=2834, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3081, .patterns=338, .final=1, .range=0 },/* 3080 */
      { .f_node=2835, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3082, .patterns=0, .final=0, .range=0 },/* 3081 */
      { .f_node=2836, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3083, .patterns=0, .final=0, .range=0 },/* 3082 */
      { .f_node=2837, .degree=0, .alpha=0x00, .outgoing=0, .patterns=339, .final=1, .range=0 },/* 3083 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3085, .patterns=0, .final=0, .range=0 },/* 3084 */
      { .f_node=5969, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3086, .patterns=0, .final=0, .range=0 },/* 3085 */
      { .f_node=5418, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3087, .patterns=0, .final=0, .range=0 },/* 3086 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3088, .patterns=0, .final=0, .range=0 },/* 3087 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3089, .patterns=0, .final=0, .range=0 },/* 3088 */
      { .f_node=878, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3090, .patterns=0, .final=0, .range=0 },/* 3089 */
      { .f_node=906, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3091, .patterns=0, .final=0, .range=0 },/* 3090 */
      { .f_node=907, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=3092, .patterns=0, .final=0, .range=0 },/* 3091 */
      { .f_node=908, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3093, .patterns=0, .final=0, .range=0 },/* 3092 */
      { .f_node=909, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3094, .patterns=0, .final=0, .range=0 },/* 3093 */
      { .f_node=910, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3095, .patterns=0, .final=0, .range=0 },/* 3094 */
      { .f_node=2834, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3096, .patterns=341, .final=1, .range=0 },/* 3095 */
      { .f_node=2835, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3097, .patterns=0, .final=0, .range=0 },/* 3096 */
      { .f_node=2836, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3098, .patterns=0, .final=0, .range=0 },/* 3097 */
      { .f_node=2837, .degree=0, .alpha=0x00, .outgoing=0, .patterns=342, .final=1, .range=0 },/* 3098 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3100, .patterns=0, .final=0, .range=0 },/* 3099 */
      { .f_node=5969, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3101, .patterns=0, .final=0, .range=0 },/* 3100 */
      { .f_node=5418, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3102, .patterns=0, .final=0, .range=0 },/* 3101 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3103, .patterns=0, .final=0, .range=0 },/* 3102 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3104, .patterns=0, .final=0, .range=0 },/* 3103 */
      { .f_node=878, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3105, .patterns=0, .final=0, .range=0 },/* 3104 */
      { .f_node=906, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3106, .patterns=0, .final=0, .range=0 },/* 3105 */
      { .f_node=907, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=3107, .patterns=0, .final=0, .range=0 },/* 3106 */
      { .f_node=908, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3108, .patterns=0, .final=0, .range=0 },/* 3107 */
      { .f_node=909, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3109, .patterns=0, .final=0, .range=0 },/* 3108 */
      { .f_node=910, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3110, .patterns=0, .final=0, .range=0 },/* 3109 */
      { .f_node=2834, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3111, .patterns=344, .final=1, .range=0 },/* 3110 */
      { .f_node=2835, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3112, .patterns=0, .final=0, .range=0 },/* 3111 */
      { .f_node=2836, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3113, .patterns=0, .final=0, .range=0 },/* 3112 */
      { .f_node=2837, .degree=0, .alpha=0x00, .outgoing=0, .patterns=345, .final=1, .range=0 },/* 3113 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3115, .patterns=0, .final=0, .range=0 },/* 3114 */
      { .f_node=5969, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3116, .patterns=0, .final=0, .range=0 },/* 3115 */
      { .f_node=5418, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3117, .patterns=0, .final=0, .range=0 },/* 3116 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3118, .patterns=0, .final=0, .range=0 },/* 3117 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3119, .patterns=0, .final=0, .range=0 },/* 3118 */
      { .f_node=878, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3120, .patterns=0, .final=0, .range=0 },/* 3119 */
      { .f_node=906, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3121, .patterns=0, .final=0, .range=0 },/* 3120 */
      { .f_node=907, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=3122, .patterns=0, .final=0, .range=0 },/* 3121 */
      { .f_node=908, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3123, .patterns=0, .final=0, .range=0 },/* 3122 */
      { .f_node=909, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3124, .patterns=0, .final=0, .range=0 },/* 3123 */
      { .f_node=910, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3125, .patterns=0, .final=0, .range=0 },/* 3124 */
      { .f_node=2834, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3126, .patterns=347, .final=1, .range=0 },/* 3125 */
      { .f_node=2835, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3127, .patterns=0, .final=0, .range=0 },/* 3126 */
      { .f_node=2836, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3128, .patterns=0, .final=0, .range=0 },/* 3127 */
      { .f_node=2837, .degree=0, .alpha=0x00, .outgoing=0, .patterns=348, .final=1, .range=0 },/* 3128 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3130, .patterns=0, .final=0, .range=0 },/* 3129 */
      { .f_node=5969, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3131, .patterns=0, .final=0, .range=0 },/* 3130 */
      { .f_node=5418, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3132, .patterns=0, .final=0, .range=0 },/* 3131 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3133, .patterns=0, .final=0, .range=0 },/* 3132 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3134, .patterns=0, .final=0, .range=0 },/* 3133 */
      { .f_node=878, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3135, .patterns=0, .final=0, .range=0 },/* 3134 */
      { .f_node=906, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3136, .patterns=0, .final=0, .range=0 },/* 3135 */
      { .f_node=907, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=3137, .patterns=0, .final=0, .range=0 },/* 3136 */
      { .f_node=908, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3138, .patterns=0, .final=0, .range=0 },/* 3137 */
      { .f_node=909, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3139, .patterns=0, .final=0, .range=0 },/* 3138 */
      { .f_node=910, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3140, .patterns=0, .final=0, .range=0 },/* 3139 */
      { .f_node=2834, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3141, .patterns=350, .final=1, .range=0 },/* 3140 */
      { .f_node=2835, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3142, .patterns=0, .final=0, .range=0 },/* 3141 */
      { .f_node=2836, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3143, .patterns=0, .final=0, .range=0 },/* 3142 */
      { .f_node=2837, .degree=0, .alpha=0x00, .outgoing=0, .patterns=351, .final=1, .range=0 },/* 3143 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3145, .patterns=0, .final=0, .range=0 },/* 3144 */
      { .f_node=5969, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3146, .patterns=0, .final=0, .range=0 },/* 3145 */
      { .f_node=5418, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3147, .patterns=0, .final=0, .range=0 },/* 3146 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3148, .patterns=0, .final=0, .range=0 },/* 3147 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3149, .patterns=0, .final=0, .range=0 },/* 3148 */
      { .f_node=878, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3150, .patterns=0, .final=0, .range=0 },/* 3149 */
      { .f_node=906, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3151, .patterns=0, .final=0, .range=0 },/* 3150 */
      { .f_node=907, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=3152, .patterns=0, .final=0, .range=0 },/* 3151 */
      { .f_node=908, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3153, .patterns=0, .final=0, .range=0 },/* 3152 */
      { .f_node=909, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3154, .patterns=0, .final=0, .range=0 },/* 3153 */
      { .f_node=910, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3155, .patterns=0, .final=0, .range=0 },/* 3154 */
      { .f_node=2834, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3156, .patterns=353, .final=1, .range=0 },/* 3155 */
      { .f_node=2835, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3157, .patterns=0, .final=0, .range=0 },/* 3156 */
      { .f_node=2836, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3158, .patterns=0, .final=0, .range=0 },/* 3157 */
      { .f_node=2837, .degree=0, .alpha=0x00, .outgoing=0, .patterns=354, .final=1, .range=0 },/* 3158 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3160, .patterns=0, .final=0, .range=0 },/* 3159 */
      { .f_node=5969, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3161, .patterns=0, .final=0, .range=0 },/* 3160 */
      { .f_node=5418, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3162, .patterns=0, .final=0, .range=0 },/* 3161 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3163, .patterns=0, .final=0, .range=0 },/* 3162 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3164, .patterns=0, .final=0, .range=0 },/* 3163 */
      { .f_node=878, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3165, .patterns=0, .final=0, .range=0 },/* 3164 */
      { .f_node=906, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3166, .patterns=0, .final=0, .range=0 },/* 3165 */
      { .f_node=907, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=3167, .patterns=0, .final=0, .range=0 },/* 3166 */
      { .f_node=908, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3168, .patterns=0, .final=0, .range=0 },/* 3167 */
      { .f_node=909, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3169, .patterns=0, .final=0, .range=0 },/* 3168 */
      { .f_node=910, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3170, .patterns=0, .final=0, .range=0 },/* 3169 */
      { .f_node=2834, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3171, .patterns=356, .final=1, .range=0 },/* 3170 */
      { .f_node=2835, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3172, .patterns=0, .final=0, .range=0 },/* 3171 */
      { .f_node=2836, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3173, .patterns=0, .final=0, .range=0 },/* 3172 */
      { .f_node=2837, .degree=0, .alpha=0x00, .outgoing=0, .patterns=357, .final=1, .range=0 },/* 3173 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3175, .patterns=0, .final=0, .range=0 },/* 3174 */
      { .f_node=5969, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3176, .patterns=0, .final=0, .range=0 },/* 3175 */
      { .f_node=5418, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3177, .patterns=0, .final=0, .range=0 },/* 3176 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3178, .patterns=0, .final=0, .range=0 },/* 3177 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3179, .patterns=0, .final=0, .range=0 },/* 3178 */
      { .f_node=878, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3180, .patterns=0, .final=0, .range=0 },/* 3179 */
      { .f_node=906, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3181, .patterns=0, .final=0, .range=0 },/* 3180 */
      { .f_node=907, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=3182, .patterns=0, .final=0, .range=0 },/* 3181 */
      { .f_node=908, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3183, .patterns=0, .final=0, .range=0 },/* 3182 */
      { .f_node=909, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3184, .patterns=0, .final=0, .range=0 },/* 3183 */
      { .f_node=910, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3185, .patterns=0, .final=0, .range=0 },/* 3184 */
      { .f_node=2834, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3186, .patterns=359, .final=1, .range=0 },/* 3185 */
      { .f_node=2835, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3187, .patterns=0, .final=0, .range=0 },/* 3186 */
      { .f_node=2836, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3188, .patterns=0, .final=0, .range=0 },/* 3187 */
      { .f_node=2837, .degree=0, .alpha=0x00, .outgoing=0, .patterns=360, .final=1, .range=0 },/* 3188 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3190, .patterns=0, .final=0, .range=0 },/* 3189 */
      { .f_node=5969, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3191, .patterns=0, .final=0, .range=0 },/* 3190 */
      { .f_node=5418, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3192, .patterns=0, .final=0, .range=0 },/* 3191 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3193, .patterns=0, .final=0, .range=0 },/* 3192 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3194, .patterns=0, .final=0, .range=0 },/* 3193 */
      { .f_node=878, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3195, .patterns=0, .final=0, .range=0 },/* 3194 */
      { .f_node=906, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3196, .patterns=0, .final=0, .range=0 },/* 3195 */
      { .f_node=907, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=3197, .patterns=0, .final=0, .range=0 },/* 3196 */
      { .f_node=908, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3198, .patterns=0, .final=0, .range=0 },/* 3197 */
      { .f_node=909, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3199, .patterns=0, .final=0, .range=0 },/* 3198 */
      { .f_node=910, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3200, .patterns=0, .final=0, .range=0 },/* 3199 */
      { .f_node=2834, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3201, .patterns=362, .final=1, .range=0 },/* 3200 */
      { .f_node=2835, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3202, .patterns=0, .final=0, .range=0 },/* 3201 */
      { .f_node=2836, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3203, .patterns=0, .final=0, .range=0 },/* 3202 */
      { .f_node=2837, .degree=0, .alpha=0x00, .outgoing=0, .patterns=363, .final=1, .range=0 },/* 3203 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3205, .patterns=0, .final=0, .range=0 },/* 3204 */
      { .f_node=5969, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3206, .patterns=0, .final=0, .range=0 },/* 3205 */
      { .f_node=5418, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3207, .patterns=0, .final=0, .range=0 },/* 3206 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3208, .patterns=0, .final=0, .range=0 },/* 3207 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3209, .patterns=0, .final=0, .range=0 },/* 3208 */
      { .f_node=878, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3210, .patterns=0, .final=0, .range=0 },/* 3209 */
      { .f_node=906, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3211, .patterns=0, .final=0, .range=0 },/* 3210 */
      { .f_node=907, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=3212, .patterns=0, .final=0, .range=0 },/* 3211 */
      { .f_node=908, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3213, .patterns=0, .final=0, .range=0 },/* 3212 */
      { .f_node=909, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3214, .patterns=0, .final=0, .range=0 },/* 3213 */
      { .f_node=910, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3215, .patterns=0, .final=0, .range=0 },/* 3214 */
      { .f_node=2834, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3216, .patterns=365, .final=1, .range=0 },/* 3215 */
      { .f_node=2835, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3217, .patterns=0, .final=0, .range=0 },/* 3216 */
      { .f_node=2836, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3218, .patterns=0, .final=0, .range=0 },/* 3217 */
      { .f_node=2837, .degree=0, .alpha=0x00, .outgoing=0, .patterns=366, .final=1, .range=0 },/* 3218 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3220, .patterns=0, .final=0, .range=0 },/* 3219 */
      { .f_node=5969, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3221, .patterns=0, .final=0, .range=0 },/* 3220 */
      { .f_node=5418, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3222, .patterns=0, .final=0, .range=0 },/* 3221 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3223, .patterns=0, .final=0, .range=0 },/* 3222 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3224, .patterns=0, .final=0, .range=0 },/* 3223 */
      { .f_node=878, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3225, .patterns=0, .final=0, .range=0 },/* 3224 */
      { .f_node=906, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3226, .patterns=0, .final=0, .range=0 },/* 3225 */
      { .f_node=907, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=3227, .patterns=0, .final=0, .range=0 },/* 3226 */
      { .f_node=908, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3228, .patterns=0, .final=0, .range=0 },/* 3227 */
      { .f_node=909, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3229, .patterns=0, .final=0, .range=0 },/* 3228 */
      { .f_node=910, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3230, .patterns=0, .final=0, .range=0 },/* 3229 */
      { .f_node=2834, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3231, .patterns=368, .final=1, .range=0 },/* 3230 */
      { .f_node=2835, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3232, .patterns=0, .final=0, .range=0 },/* 3231 */
      { .f_node=2836, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3233, .patterns=0, .final=0, .range=0 },/* 3232 */
      { .f_node=2837, .degree=0, .alpha=0x00, .outgoing=0, .patterns=369, .final=1, .range=0 },/* 3233 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3235, .patterns=0, .final=0, .range=0 },/* 3234 */
      { .f_node=5969, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3236, .patterns=0, .final=0, .range=0 },/* 3235 */
      { .f_node=5418, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3237, .patterns=0, .final=0, .range=0 },/* 3236 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3238, .patterns=0, .final=0, .range=0 },/* 3237 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3239, .patterns=0, .final=0, .range=0 },/* 3238 */
      { .f_node=878, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3240, .patterns=0, .final=0, .range=0 },/* 3239 */
      { .f_node=906, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3241, .patterns=0, .final=0, .range=0 },/* 3240 */
      { .f_node=907, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=3242, .patterns=0, .final=0, .range=0 },/* 3241 */
      { .f_node=908, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3243, .patterns=0, .final=0, .range=0 },/* 3242 */
      { .f_node=909, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3244, .patterns=0, .final=0, .range=0 },/* 3243 */
      { .f_node=910, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3245, .patterns=0, .final=0, .range=0 },/* 3244 */
      { .f_node=2834, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3246, .patterns=371, .final=1, .range=0 },/* 3245 */
      { .f_node=2835, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3247, .patterns=0, .final=0, .range=0 },/* 3246 */
      { .f_node=2836, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3248, .patterns=0, .final=0, .range=0 },/* 3247 */
      { .f_node=2837, .degree=0, .alpha=0x00, .outgoing=0, .patterns=372, .final=1, .range=0 },/* 3248 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3250, .patterns=0, .final=0, .range=0 },/* 3249 */
      { .f_node=5969, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3251, .patterns=0, .final=0, .range=0 },/* 3250 */
      { .f_node=5418, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3252, .patterns=0, .final=0, .range=0 },/* 3251 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3253, .patterns=0, .final=0, .range=0 },/* 3252 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3254, .patterns=0, .final=0, .range=0 },/* 3253 */
      { .f_node=878, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3255, .patterns=0, .final=0, .range=0 },/* 3254 */
      { .f_node=906, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3256, .patterns=0, .final=0, .range=0 },/* 3255 */
      { .f_node=907, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=3257, .patterns=0, .final=0, .range=0 },/* 3256 */
      { .f_node=908, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3258, .patterns=0, .final=0, .range=0 },/* 3257 */
      { .f_node=909, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3259, .patterns=0, .final=0, .range=0 },/* 3258 */
      { .f_node=910, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3260, .patterns=0, .final=0, .range=0 },/* 3259 */
      { .f_node=2834, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3261, .patterns=374, .final=1, .range=0 },/* 3260 */
      { .f_node=2835, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3262, .patterns=0, .final=0, .range=0 },/* 3261 */
      { .f_node=2836, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3263, .patterns=0, .final=0, .range=0 },/* 3262 */
      { .f_node=2837, .degree=0, .alpha=0x00, .outgoing=0, .patterns=375, .final=1, .range=0 },/* 3263 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3265, .patterns=0, .final=0, .range=0 },/* 3264 */
      { .f_node=5969, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3266, .patterns=0, .final=0, .range=0 },/* 3265 */
      { .f_node=5418, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3267, .patterns=0, .final=0, .range=0 },/* 3266 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3268, .patterns=0, .final=0, .range=0 },/* 3267 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3269, .patterns=0, .final=0, .range=0 },/* 3268 */
      { .f_node=878, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3270, .patterns=0, .final=0, .range=0 },/* 3269 */
      { .f_node=906, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3271, .patterns=0, .final=0, .range=0 },/* 3270 */
      { .f_node=907, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=3272, .patterns=0, .final=0, .range=0 },/* 3271 */
      { .f_node=908, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3273, .patterns=0, .final=0, .range=0 },/* 3272 */
      { .f_node=909, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3274, .patterns=0, .final=0, .range=0 },/* 3273 */
      { .f_node=910, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3275, .patterns=0, .final=0, .range=0 },/* 3274 */
      { .f_node=2834, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3276, .patterns=377, .final=1, .range=0 },/* 3275 */
      { .f_node=2835, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3277, .patterns=0, .final=0, .range=0 },/* 3276 */
      { .f_node=2836, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3278, .patterns=0, .final=0, .range=0 },/* 3277 */
      { .f_node=2837, .degree=0, .alpha=0x00, .outgoing=0, .patterns=378, .final=1, .range=0 },/* 3278 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3280, .patterns=0, .final=0, .range=0 },/* 3279 */
      { .f_node=5969, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3281, .patterns=0, .final=0, .range=0 },/* 3280 */
      { .f_node=5418, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3282, .patterns=0, .final=0, .range=0 },/* 3281 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3283, .patterns=0, .final=0, .range=0 },/* 3282 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3284, .patterns=0, .final=0, .range=0 },/* 3283 */
      { .f_node=878, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3285, .patterns=0, .final=0, .range=0 },/* 3284 */
      { .f_node=906, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3286, .patterns=0, .final=0, .range=0 },/* 3285 */
      { .f_node=907, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=3287, .patterns=0, .final=0, .range=0 },/* 3286 */
      { .f_node=908, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3288, .patterns=0, .final=0, .range=0 },/* 3287 */
      { .f_node=909, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3289, .patterns=0, .final=0, .range=0 },/* 3288 */
      { .f_node=910, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3290, .patterns=0, .final=0, .range=0 },/* 3289 */
      { .f_node=2834, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3291, .patterns=380, .final=1, .range=0 },/* 3290 */
      { .f_node=2835, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3292, .patterns=0, .final=0, .range=0 },/* 3291 */
      { .f_node=2836, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3293, .patterns=0, .final=0, .range=0 },/* 3292 */
      { .f_node=2837, .degree=0, .alpha=0x00, .outgoing=0, .patterns=381, .final=1, .range=0 },/* 3293 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3295, .patterns=0, .final=0, .range=0 },/* 3294 */
      { .f_node=5969, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3296, .patterns=0, .final=0, .range=0 },/* 3295 */
      { .f_node=5418, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3297, .patterns=0, .final=0, .range=0 },/* 3296 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3298, .patterns=0, .final=0, .range=0 },/* 3297 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3299, .patterns=0, .final=0, .range=0 },/* 3298 */
      { .f_node=878, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3300, .patterns=0, .final=0, .range=0 },/* 3299 */
      { .f_node=906, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3301, .patterns=0, .final=0, .range=0 },/* 3300 */
      { .f_node=907, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=3302, .patterns=0, .final=0, .range=0 },/* 3301 */
      { .f_node=908, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3303, .patterns=0, .final=0, .range=0 },/* 3302 */
      { .f_node=909, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3304, .patterns=0, .final=0, .range=0 },/* 3303 */
      { .f_node=910, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3305, .patterns=0, .final=0, .range=0 },/* 3304 */
      { .f_node=2834, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3306, .patterns=383, .final=1, .range=0 },/* 3305 */
      { .f_node=2835, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3307, .patterns=0, .final=0, .range=0 },/* 3306 */
      { .f_node=2836, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3308, .patterns=0, .final=0, .range=0 },/* 3307 */
      { .f_node=2837, .degree=0, .alpha=0x00, .outgoing=0, .patterns=384, .final=1, .range=0 },/* 3308 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3310, .patterns=0, .final=0, .range=0 },/* 3309 */
      { .f_node=5969, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3311, .patterns=0, .final=0, .range=0 },/* 3310 */
      { .f_node=5418, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3312, .patterns=0, .final=0, .range=0 },/* 3311 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3313, .patterns=0, .final=0, .range=0 },/* 3312 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3314, .patterns=0, .final=0, .range=0 },/* 3313 */
      { .f_node=878, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3315, .patterns=0, .final=0, .range=0 },/* 3314 */
      { .f_node=906, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3316, .patterns=0, .final=0, .range=0 },/* 3315 */
      { .f_node=907, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=3317, .patterns=0, .final=0, .range=0 },/* 3316 */
      { .f_node=908, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3318, .patterns=0, .final=0, .range=0 },/* 3317 */
      { .f_node=909, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3319, .patterns=0, .final=0, .range=0 },/* 3318 */
      { .f_node=910, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3320, .patterns=0, .final=0, .range=0 },/* 3319 */
      { .f_node=2834, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3321, .patterns=386, .final=1, .range=0 },/* 3320 */
      { .f_node=2835, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3322, .patterns=0, .final=0, .range=0 },/* 3321 */
      { .f_node=2836, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3323, .patterns=0, .final=0, .range=0 },/* 3322 */
      { .f_node=2837, .degree=0, .alpha=0x00, .outgoing=0, .patterns=387, .final=1, .range=0 },/* 3323 */
      { .f_node=1, .degree=18, .alpha=0x62, .outgoing=1057, .patterns=0, .final=0, .range=1 },/* 3324 */
      { .f_node=4204, .degree=13, .alpha=0x68, .outgoing=1076, .patterns=0, .final=0, .range=1 },/* 3325 */
      { .f_node=5919, .degree=0, .alpha=0x75/* 'u' */, .outgoing=3327, .patterns=0, .final=0, .range=0 },/* 3326 */
      { .f_node=5858, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=3328, .patterns=0, .final=0, .range=0 },/* 3327 */
      { .f_node=5293, .degree=0, .alpha=0x75/* 'u' */, .outgoing=3329, .patterns=0, .final=0, .range=0 },/* 3328 */
      { .f_node=5858, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3330, .patterns=0, .final=0, .range=0 },/* 3329 */
      { .f_node=3324, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3331, .patterns=0, .final=0, .range=0 },/* 3330 */
      { .f_node=3393, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3332, .patterns=0, .final=0, .range=0 },/* 3331 */
      { .f_node=5471, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3333, .patterns=0, .final=0, .range=0 },/* 3332 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3334, .patterns=0, .final=0, .range=0 },/* 3333 */
      { .f_node=5520, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3335, .patterns=0, .final=0, .range=0 },/* 3334 */
      { .f_node=5969, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3336, .patterns=0, .final=0, .range=0 },/* 3335 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3337, .patterns=0, .final=0, .range=0 },/* 3336 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3338, .patterns=0, .final=0, .range=0 },/* 3337 */
      { .f_node=878, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=3339, .patterns=0, .final=0, .range=0 },/* 3338 */
      { .f_node=901, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3340, .patterns=0, .final=0, .range=0 },/* 3339 */
      { .f_node=902, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3341, .patterns=0, .final=0, .range=0 },/* 3340 */
      { .f_node=2808, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3342, .patterns=0, .final=0, .range=0 },/* 3341 */
      { .f_node=2809, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3343, .patterns=0, .final=0, .range=0 },/* 3342 */
      { .f_node=4710, .degree=0, .alpha=0x68/* 'h' */, .outgoing=3344, .patterns=0, .final=0, .range=0 },/* 3343 */
      { .f_node=5919, .degree=0, .alpha=0x64/* 'd' */, .outgoing=3345, .patterns=0, .final=0, .range=0 },/* 3344 */
      { .f_node=2, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3346, .patterns=0, .final=0, .range=0 },/* 3345 */
      { .f_node=772, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3347, .patterns=0, .final=0, .range=0 },/* 3346 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3348, .patterns=0, .final=0, .range=0 },/* 3347 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=3349, .patterns=0, .final=0, .range=0 },/* 3348 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=389, .final=1, .range=0 },/* 3349 */
      { .f_node=1, .degree=0, .alpha=0x73/* 's' */, .outgoing=3351, .patterns=0, .final=0, .range=0 },/* 3350 */
      { .f_node=4278, .degree=0, .alpha=0x74/* 't' */, .outgoing=3352, .patterns=0, .final=0, .range=0 },/* 3351 */
      { .f_node=4573, .degree=0, .alpha=0x75/* 'u' */, .outgoing=3353, .patterns=0, .final=0, .range=0 },/* 3352 */
      { .f_node=5109, .degree=0, .alpha=0x72/* 'r' */, .outgoing=3354, .patterns=0, .final=0, .range=0 },/* 3353 */
      { .f_node=5596, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3355, .patterns=0, .final=0, .range=0 },/* 3354 */
      { .f_node=4708, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3356, .patterns=0, .final=0, .range=0 },/* 3355 */
      { .f_node=877, .degree=0, .alpha=0x73/* 's' */, .outgoing=3357, .patterns=0, .final=0, .range=0 },/* 3356 */
      { .f_node=996, .degree=0, .alpha=0x79/* 'y' */, .outgoing=3358, .patterns=0, .final=0, .range=0 },/* 3357 */
      { .f_node=5800, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3359, .patterns=0, .final=0, .range=0 },/* 3358 */
      { .f_node=5418, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3360, .patterns=0, .final=0, .range=0 },/* 3359 */
      { .f_node=3563, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=3361, .patterns=0, .final=0, .range=0 },/* 3360 */
      { .f_node=5293, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3362, .patterns=0, .final=0, .range=0 },/* 3361 */
      { .f_node=5304, .degree=0, .alpha=0x67/* 'g' */, .outgoing=3363, .patterns=0, .final=0, .range=0 },/* 3362 */
      { .f_node=5305, .degree=0, .alpha=0x79/* 'y' */, .outgoing=3364, .patterns=0, .final=0, .range=0 },/* 3363 */
      { .f_node=5800, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3365, .patterns=0, .final=0, .range=0 },/* 3364 */
      { .f_node=877, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3366, .patterns=0, .final=0, .range=0 },/* 3365 */
      { .f_node=1285, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3367, .patterns=0, .final=0, .range=0 },/* 3366 */
      { .f_node=1286, .degree=0, .alpha=0x00, .outgoing=0, .patterns=390, .final=1, .range=0 },/* 3367 */
      { .f_node=4234, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=3369, .patterns=0, .final=0, .range=0 },/* 3368 */
      { .f_node=1, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3370, .patterns=0, .final=0, .range=0 },/* 3369 */
      { .f_node=3324, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3371, .patterns=0, .final=0, .range=0 },/* 3370 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3372, .patterns=0, .final=0, .range=0 },/* 3371 */
      { .f_node=1545, .degree=0, .alpha=0x67/* 'g' */, .outgoing=3373, .patterns=0, .final=0, .range=0 },/* 3372 */
      { .f_node=5159, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3374, .patterns=0, .final=0, .range=0 },/* 3373 */
      { .f_node=5418, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3375, .patterns=0, .final=0, .range=0 },/* 3374 */
      { .f_node=2762, .degree=0, .alpha=0x74/* 't' */, .outgoing=3376, .patterns=0, .final=0, .range=0 },/* 3375 */
      { .f_node=2937, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3377, .patterns=0, .final=0, .range=0 },/* 3376 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3378, .patterns=0, .final=0, .range=0 },/* 3377 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3379, .patterns=0, .final=0, .range=0 },/* 3378 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=3380, .patterns=0, .final=0, .range=0 },/* 3379 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=391, .final=1, .range=0 },/* 3380 */
      { .f_node=5159, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3382, .patterns=0, .final=0, .range=0 },/* 3381 */
      { .f_node=5471, .degree=0, .alpha=0x64/* 'd' */, .outgoing=3383, .patterns=0, .final=0, .range=0 },/* 3382 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3384, .patterns=0, .final=0, .range=0 },/* 3383 */
      { .f_node=436, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3385, .patterns=0, .final=0, .range=0 },/* 3384 */
      { .f_node=5969, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3386, .patterns=0, .final=0, .range=0 },/* 3385 */
      { .f_node=3983, .degree=0, .alpha=0x68/* 'h' */, .outgoing=3387, .patterns=0, .final=0, .range=0 },/* 3386 */
      { .f_node=5919, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3388, .patterns=0, .final=0, .range=0 },/* 3387 */
      { .f_node=5953, .degree=0, .alpha=0x74/* 't' */, .outgoing=3389, .patterns=0, .final=0, .range=0 },/* 3388 */
      { .f_node=5954, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3390, .patterns=0, .final=0, .range=0 },/* 3389 */
      { .f_node=5090, .degree=0, .alpha=0x73/* 's' */, .outgoing=3391, .patterns=0, .final=0, .range=0 },/* 3390 */
      { .f_node=3695, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3392, .patterns=0, .final=0, .range=0 },/* 3391 */
      { .f_node=5969, .degree=0, .alpha=0x00, .outgoing=0, .patterns=392, .final=1, .range=0 },/* 3392 */
      { .f_node=4708, .degree=6, .alpha=0x61, .outgoing=1090, .patterns=0, .final=0, .range=1 },/* 3393 */
      { .f_node=4709, .degree=0, .alpha=0x67/* 'g' */, .outgoing=3395, .patterns=0, .final=0, .range=0 },/* 3394 */
      { .f_node=5159, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3396, .patterns=0, .final=0, .range=0 },/* 3395 */
      { .f_node=5278, .degree=0, .alpha=0x73/* 's' */, .outgoing=3397, .patterns=0, .final=0, .range=0 },/* 3396 */
      { .f_node=4278, .degree=5, .alpha=0x2d, .outgoing=1097, .patterns=0, .final=0, .range=1 },/* 3397 */
      { .f_node=5969, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3399, .patterns=0, .final=0, .range=0 },/* 3398 */
      { .f_node=2762, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3400, .patterns=0, .final=0, .range=0 },/* 3399 */
      { .f_node=2808, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3401, .patterns=0, .final=0, .range=0 },/* 3400 */
      { .f_node=2809, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=3402, .patterns=0, .final=0, .range=0 },/* 3401 */
      { .f_node=2831, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3403, .patterns=0, .final=0, .range=0 },/* 3402 */
      { .f_node=2832, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3404, .patterns=0, .final=0, .range=0 },/* 3403 */
      { .f_node=2833, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3405, .patterns=0, .final=0, .range=0 },/* 3404 */
      { .f_node=2834, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3406, .patterns=393, .final=1, .range=0 },/* 3405 */
      { .f_node=2835, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3407, .patterns=0, .final=0, .range=0 },/* 3406 */
      { .f_node=2836, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3408, .patterns=0, .final=0, .range=0 },/* 3407 */
      { .f_node=2837, .degree=0, .alpha=0x00, .outgoing=0, .patterns=394, .final=1, .range=0 },/* 3408 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3410, .patterns=0, .final=0, .range=0 },/* 3409 */
      { .f_node=5969, .degree=0, .alpha=0x68/* 'h' */, .outgoing=3411, .patterns=0, .final=0, .range=0 },/* 3410 */
      { .f_node=5919, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3412, .patterns=0, .final=0, .range=0 },/* 3411 */
      { .f_node=2762, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3413, .patterns=0, .final=0, .range=0 },/* 3412 */
      { .f_node=2866, .degree=0, .alpha=0x67/* 'g' */, .outgoing=3414, .patterns=0, .final=0, .range=0 },/* 3413 */
      { .f_node=5159, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3415, .patterns=0, .final=0, .range=0 },/* 3414 */
      { .f_node=5173, .degree=0, .alpha=0x75/* 'u' */, .outgoing=3416, .patterns=0, .final=0, .range=0 },/* 3415 */
      { .f_node=3718, .degree=0, .alpha=0x74/* 't' */, .outgoing=3417, .patterns=0, .final=0, .range=0 },/* 3416 */
      { .f_node=3719, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3418, .patterns=0, .final=0, .range=0 },/* 3417 */
      { .f_node=5969, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3419, .patterns=0, .final=0, .range=0 },/* 3418 */
      { .f_node=3563, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3420, .patterns=0, .final=0, .range=0 },/* 3419 */
      { .f_node=3983, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3421, .patterns=0, .final=0, .range=0 },/* 3420 */
      { .f_node=3733, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3422, .patterns=0, .final=0, .range=0 },/* 3421 */
      { .f_node=5418, .degree=0, .alpha=0x73/* 's' */, .outgoing=3423, .patterns=0, .final=0, .range=0 },/* 3422 */
      { .f_node=4278, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3424, .patterns=0, .final=0, .range=0 },/* 3423 */
      { .f_node=3563, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3425, .patterns=0, .final=0, .range=0 },/* 3424 */
      { .f_node=3564, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3426, .patterns=0, .final=0, .range=0 },/* 3425 */
      { .f_node=3324, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3427, .patterns=0, .final=0, .range=0 },/* 3426 */
      { .f_node=2762, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=3428, .patterns=0, .final=0, .range=0 },/* 3427 */
      { .f_node=2793, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3429, .patterns=0, .final=0, .range=0 },/* 3428 */
      { .f_node=877, .degree=0, .alpha=0x67/* 'g' */, .outgoing=3430, .patterns=0, .final=0, .range=0 },/* 3429 */
      { .f_node=1763, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3431, .patterns=0, .final=0, .range=0 },/* 3430 */
      { .f_node=1811, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3432, .patterns=0, .final=0, .range=0 },/* 3431 */
      { .f_node=1812, .degree=0, .alpha=0x67/* 'g' */, .outgoing=3433, .patterns=0, .final=0, .range=0 },/* 3432 */
      { .f_node=1813, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=3434, .patterns=0, .final=0, .range=0 },/* 3433 */
      { .f_node=1814, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3435, .patterns=0, .final=0, .range=0 },/* 3434 */
      { .f_node=1815, .degree=0, .alpha=0x75/* 'u' */, .outgoing=3436, .patterns=0, .final=0, .range=0 },/* 3435 */
      { .f_node=5208, .degree=0, .alpha=0x73/* 's' */, .outgoing=3437, .patterns=0, .final=0, .range=0 },/* 3436 */
      { .f_node=5209, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3438, .patterns=0, .final=0, .range=0 },/* 3437 */
      { .f_node=5210, .degree=0, .alpha=0x72/* 'r' */, .outgoing=3439, .patterns=0, .final=0, .range=0 },/* 3438 */
      { .f_node=5211, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3440, .patterns=0, .final=0, .range=0 },/* 3439 */
      { .f_node=5212, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3441, .patterns=0, .final=0, .range=0 },/* 3440 */
      { .f_node=5213, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3442, .patterns=0, .final=0, .range=0 },/* 3441 */
      { .f_node=5214, .degree=0, .alpha=0x74/* 't' */, .outgoing=3443, .patterns=0, .final=0, .range=0 },/* 3442 */
      { .f_node=5215, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3444, .patterns=0, .final=0, .range=0 },/* 3443 */
      { .f_node=5216, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3445, .patterns=0, .final=0, .range=0 },/* 3444 */
      { .f_node=5217, .degree=0, .alpha=0x74/* 't' */, .outgoing=3446, .patterns=0, .final=0, .range=0 },/* 3445 */
      { .f_node=5218, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3447, .patterns=0, .final=0, .range=0 },/* 3446 */
      { .f_node=5219, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3448, .patterns=0, .final=0, .range=0 },/* 3447 */
      { .f_node=5220, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3449, .patterns=0, .final=0, .range=0 },/* 3448 */
      { .f_node=5221, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3450, .patterns=0, .final=0, .range=0 },/* 3449 */
      { .f_node=5222, .degree=0, .alpha=0x00, .outgoing=0, .patterns=396, .final=1, .range=0 },/* 3450 */
      { .f_node=5159, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3452, .patterns=0, .final=0, .range=0 },/* 3451 */
      { .f_node=5969, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3453, .patterns=0, .final=0, .range=0 },/* 3452 */
      { .f_node=3983, .degree=0, .alpha=0x72/* 'r' */, .outgoing=3454, .patterns=0, .final=0, .range=0 },/* 3453 */
      { .f_node=5596, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3455, .patterns=0, .final=0, .range=0 },/* 3454 */
      { .f_node=3563, .degree=0, .alpha=0x64/* 'd' */, .outgoing=3456, .patterns=0, .final=0, .range=0 },/* 3455 */
      { .f_node=3569, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3457, .patterns=0, .final=0, .range=0 },/* 3456 */
      { .f_node=5969, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3458, .patterns=0, .final=0, .range=0 },/* 3457 */
      { .f_node=5471, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3459, .patterns=0, .final=0, .range=0 },/* 3458 */
      { .f_node=4708, .degree=0, .alpha=0x73/* 's' */, .outgoing=3460, .patterns=0, .final=0, .range=0 },/* 3459 */
      { .f_node=4868, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3461, .patterns=0, .final=0, .range=0 },/* 3460 */
      { .f_node=5969, .degree=0, .alpha=0x72/* 'r' */, .outgoing=3462, .patterns=0, .final=0, .range=0 },/* 3461 */
      { .f_node=5596, .degree=0, .alpha=0x74/* 't' */, .outgoing=3463, .patterns=0, .final=0, .range=0 },/* 3462 */
      { .f_node=4944, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3464, .patterns=0, .final=0, .range=0 },/* 3463 */
      { .f_node=5969, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3465, .patterns=0, .final=0, .range=0 },/* 3464 */
      { .f_node=5970, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3466, .patterns=0, .final=0, .range=0 },/* 3465 */
      { .f_node=4771, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3467, .patterns=0, .final=0, .range=0 },/* 3466 */
      { .f_node=4772, .degree=0, .alpha=0x72/* 'r' */, .outgoing=3468, .patterns=0, .final=0, .range=0 },/* 3467 */
      { .f_node=4773, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3469, .patterns=0, .final=0, .range=0 },/* 3468 */
      { .f_node=4774, .degree=0, .alpha=0x73/* 's' */, .outgoing=3470, .patterns=0, .final=0, .range=0 },/* 3469 */
      { .f_node=4775, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3471, .patterns=0, .final=0, .range=0 },/* 3470 */
      { .f_node=4776, .degree=0, .alpha=0x66/* 'f' */, .outgoing=3472, .patterns=0, .final=0, .range=0 },/* 3471 */
      { .f_node=4777, .degree=0, .alpha=0x74/* 't' */, .outgoing=3473, .patterns=0, .final=0, .range=0 },/* 3472 */
      { .f_node=4778, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3474, .patterns=0, .final=0, .range=0 },/* 3473 */
      { .f_node=5969, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3475, .patterns=0, .final=0, .range=0 },/* 3474 */
      { .f_node=5471, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3476, .patterns=0, .final=0, .range=0 },/* 3475 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3477, .patterns=0, .final=0, .range=0 },/* 3476 */
      { .f_node=5520, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3478, .patterns=0, .final=0, .range=0 },/* 3477 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3479, .patterns=0, .final=0, .range=0 },/* 3478 */
      { .f_node=878, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=3480, .patterns=0, .final=0, .range=0 },/* 3479 */
      { .f_node=901, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3481, .patterns=0, .final=0, .range=0 },/* 3480 */
      { .f_node=902, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3482, .patterns=0, .final=0, .range=0 },/* 3481 */
      { .f_node=2808, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3483, .patterns=0, .final=0, .range=0 },/* 3482 */
      { .f_node=2809, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3484, .patterns=0, .final=0, .range=0 },/* 3483 */
      { .f_node=4710, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=3485, .patterns=0, .final=0, .range=0 },/* 3484 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3486, .patterns=0, .final=0, .range=0 },/* 3485 */
      { .f_node=3733, .degree=0, .alpha=0x64/* 'd' */, .outgoing=3487, .patterns=0, .final=0, .range=0 },/* 3486 */
      { .f_node=3905, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3488, .patterns=0, .final=0, .range=0 },/* 3487 */
      { .f_node=772, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3489, .patterns=0, .final=0, .range=0 },/* 3488 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3490, .patterns=0, .final=0, .range=0 },/* 3489 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=3491, .patterns=0, .final=0, .range=0 },/* 3490 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=398, .final=1, .range=0 },/* 3491 */
      { .f_node=5418, .degree=0, .alpha=0x73/* 's' */, .outgoing=3493, .patterns=0, .final=0, .range=0 },/* 3492 */
      { .f_node=4278, .degree=0, .alpha=0x74/* 't' */, .outgoing=3494, .patterns=0, .final=0, .range=0 },/* 3493 */
      { .f_node=4573, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3495, .patterns=0, .final=0, .range=0 },/* 3494 */
      { .f_node=4574, .degree=0, .alpha=0x67/* 'g' */, .outgoing=3496, .patterns=0, .final=0, .range=0 },/* 3495 */
      { .f_node=5159, .degree=0, .alpha=0x72/* 'r' */, .outgoing=3497, .patterns=0, .final=0, .range=0 },/* 3496 */
      { .f_node=5596, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3498, .patterns=0, .final=0, .range=0 },/* 3497 */
      { .f_node=2762, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3499, .patterns=0, .final=0, .range=0 },/* 3498 */
      { .f_node=2808, .degree=2, .alpha=0x00, .outgoing=1103, .patterns=0, .final=0, .range=0 },/* 3499 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=399, .final=1, .range=0 },/* 3500 */
      { .f_node=4771, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3502, .patterns=0, .final=0, .range=0 },/* 3501 */
      { .f_node=3393, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3503, .patterns=0, .final=0, .range=0 },/* 3502 */
      { .f_node=3394, .degree=0, .alpha=0x67/* 'g' */, .outgoing=3504, .patterns=0, .final=0, .range=0 },/* 3503 */
      { .f_node=3395, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3505, .patterns=0, .final=0, .range=0 },/* 3504 */
      { .f_node=3396, .degree=0, .alpha=0x73/* 's' */, .outgoing=3506, .patterns=0, .final=0, .range=0 },/* 3505 */
      { .f_node=3397, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3507, .patterns=0, .final=0, .range=0 },/* 3506 */
      { .f_node=3398, .degree=0, .alpha=0x00, .outgoing=0, .patterns=400, .final=1, .range=0 },/* 3507 */
      { .f_node=4868, .degree=0, .alpha=0x74/* 't' */, .outgoing=3509, .patterns=0, .final=0, .range=0 },/* 3508 */
      { .f_node=4573, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3510, .patterns=0, .final=0, .range=0 },/* 3509 */
      { .f_node=4574, .degree=0, .alpha=0x74/* 't' */, .outgoing=3511, .patterns=0, .final=0, .range=0 },/* 3510 */
      { .f_node=4575, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3512, .patterns=0, .final=0, .range=0 },/* 3511 */
      { .f_node=4576, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3513, .patterns=0, .final=0, .range=0 },/* 3512 */
      { .f_node=4577, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3514, .patterns=0, .final=0, .range=0 },/* 3513 */
      { .f_node=5969, .degree=0, .alpha=0x00, .outgoing=0, .patterns=401, .final=1, .range=0 },/* 3514 */
      { .f_node=3563, .degree=0, .alpha=0x73/* 's' */, .outgoing=3516, .patterns=0, .final=0, .range=0 },/* 3515 */
      { .f_node=3695, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3517, .patterns=0, .final=0, .range=0 },/* 3516 */
      { .f_node=2762, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3518, .patterns=0, .final=0, .range=0 },/* 3517 */
      { .f_node=2891, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3519, .patterns=0, .final=0, .range=0 },/* 3518 */
      { .f_node=2892, .degree=0, .alpha=0x73/* 's' */, .outgoing=3520, .patterns=0, .final=0, .range=0 },/* 3519 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3521, .patterns=0, .final=0, .range=0 },/* 3520 */
      { .f_node=877, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3522, .patterns=0, .final=0, .range=0 },/* 3521 */
      { .f_node=1881, .degree=0, .alpha=0x74/* 't' */, .outgoing=3523, .patterns=0, .final=0, .range=0 },/* 3522 */
      { .f_node=3538, .degree=0, .alpha=0x75/* 'u' */, .outgoing=3524, .patterns=0, .final=0, .range=0 },/* 3523 */
      { .f_node=3539, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3525, .patterns=0, .final=0, .range=0 },/* 3524 */
      { .f_node=3540, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3526, .patterns=0, .final=0, .range=0 },/* 3525 */
      { .f_node=3541, .degree=0, .alpha=0x73/* 's' */, .outgoing=3527, .patterns=0, .final=0, .range=0 },/* 3526 */
      { .f_node=3542, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3528, .patterns=0, .final=0, .range=0 },/* 3527 */
      { .f_node=3553, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3529, .patterns=0, .final=0, .range=0 },/* 3528 */
      { .f_node=3554, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3530, .patterns=0, .final=0, .range=0 },/* 3529 */
      { .f_node=3555, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3531, .patterns=0, .final=0, .range=0 },/* 3530 */
      { .f_node=3556, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=3532, .patterns=0, .final=0, .range=0 },/* 3531 */
      { .f_node=3557, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3533, .patterns=0, .final=0, .range=0 },/* 3532 */
      { .f_node=3558, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3534, .patterns=0, .final=0, .range=0 },/* 3533 */
      { .f_node=3559, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3535, .patterns=0, .final=0, .range=0 },/* 3534 */
      { .f_node=3560, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3536, .patterns=0, .final=0, .range=0 },/* 3535 */
      { .f_node=3561, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3537, .patterns=0, .final=0, .range=0 },/* 3536 */
      { .f_node=3562, .degree=0, .alpha=0x00, .outgoing=0, .patterns=402, .final=1, .range=0 },/* 3537 */
      { .f_node=4944, .degree=0, .alpha=0x75/* 'u' */, .outgoing=3539, .patterns=0, .final=0, .range=0 },/* 3538 */
      { .f_node=5109, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3540, .patterns=0, .final=0, .range=0 },/* 3539 */
      { .f_node=5418, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3541, .patterns=0, .final=0, .range=0 },/* 3540 */
      { .f_node=5419, .degree=0, .alpha=0x73/* 's' */, .outgoing=3542, .patterns=0, .final=0, .range=0 },/* 3541 */
      { .f_node=4278, .degree=1, .alpha=0x2d, .outgoing=1106, .patterns=0, .final=0, .range=1 },/* 3542 */
      { .f_node=5969, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3544, .patterns=0, .final=0, .range=0 },/* 3543 */
      { .f_node=2762, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3545, .patterns=0, .final=0, .range=0 },/* 3544 */
      { .f_node=2891, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3546, .patterns=0, .final=0, .range=0 },/* 3545 */
      { .f_node=2892, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=3547, .patterns=0, .final=0, .range=0 },/* 3546 */
      { .f_node=2893, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3548, .patterns=0, .final=0, .range=0 },/* 3547 */
      { .f_node=3733, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3549, .patterns=0, .final=0, .range=0 },/* 3548 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3550, .patterns=0, .final=0, .range=0 },/* 3549 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3551, .patterns=0, .final=0, .range=0 },/* 3550 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3552, .patterns=0, .final=0, .range=0 },/* 3551 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=405, .final=1, .range=0 },/* 3552 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3554, .patterns=0, .final=0, .range=0 },/* 3553 */
      { .f_node=878, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3555, .patterns=0, .final=0, .range=0 },/* 3554 */
      { .f_node=930, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3556, .patterns=0, .final=0, .range=0 },/* 3555 */
      { .f_node=931, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=3557, .patterns=0, .final=0, .range=0 },/* 3556 */
      { .f_node=932, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3558, .patterns=0, .final=0, .range=0 },/* 3557 */
      { .f_node=933, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3559, .patterns=0, .final=0, .range=0 },/* 3558 */
      { .f_node=954, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3560, .patterns=0, .final=0, .range=0 },/* 3559 */
      { .f_node=955, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3561, .patterns=0, .final=0, .range=0 },/* 3560 */
      { .f_node=956, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3562, .patterns=0, .final=0, .range=0 },/* 3561 */
      { .f_node=957, .degree=0, .alpha=0x00, .outgoing=0, .patterns=406, .final=1, .range=0 },/* 3562 */
      { .f_node=1, .degree=18, .alpha=0x63, .outgoing=1108, .patterns=0, .final=0, .range=1 },/* 3563 */
      { .f_node=5471, .degree=0, .alpha=0x73/* 's' */, .outgoing=3565, .patterns=0, .final=0, .range=0 },/* 3564 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3566, .patterns=0, .final=0, .range=0 },/* 3565 */
      { .f_node=877, .degree=0, .alpha=0x66/* 'f' */, .outgoing=3567, .patterns=0, .final=0, .range=0 },/* 3566 */
      { .f_node=2299, .degree=0, .alpha=0x72/* 'r' */, .outgoing=3568, .patterns=0, .final=0, .range=0 },/* 3567 */
      { .f_node=5596, .degree=0, .alpha=0x00, .outgoing=0, .patterns=408, .final=1, .range=0 },/* 3568 */
      { .f_node=2, .degree=0, .alpha=0x76/* 'v' */, .outgoing=3570, .patterns=0, .final=0, .range=0 },/* 3569 */
      { .f_node=5786, .degree=0, .alpha=0x72/* 'r' */, .outgoing=3571, .patterns=0, .final=0, .range=0 },/* 3570 */
      { .f_node=5596, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3572, .patterns=0, .final=0, .range=0 },/* 3571 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3573, .patterns=0, .final=0, .range=0 },/* 3572 */
      { .f_node=2559, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3574, .patterns=0, .final=0, .range=0 },/* 3573 */
      { .f_node=2574, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3575, .patterns=0, .final=0, .range=0 },/* 3574 */
      { .f_node=5471, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3576, .patterns=0, .final=0, .range=0 },/* 3575 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3577, .patterns=0, .final=0, .range=0 },/* 3576 */
      { .f_node=1545, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=3578, .patterns=0, .final=0, .range=0 },/* 3577 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=409, .final=1, .range=0 },/* 3578 */
      { .f_node=5332, .degree=0, .alpha=0x66/* 'f' */, .outgoing=3580, .patterns=0, .final=0, .range=0 },/* 3579 */
      { .f_node=5332, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3581, .patterns=0, .final=0, .range=0 },/* 3580 */
      { .f_node=3324, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3582, .patterns=0, .final=0, .range=0 },/* 3581 */
      { .f_node=5471, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3583, .patterns=0, .final=0, .range=0 },/* 3582 */
      { .f_node=3733, .degree=1, .alpha=0x00, .outgoing=1127, .patterns=0, .final=0, .range=0 },/* 3583 */
      { .f_node=877, .degree=2, .alpha=0x6c, .outgoing=1129, .patterns=0, .final=0, .range=1 },/* 3584 */
      { .f_node=1700, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3586, .patterns=0, .final=0, .range=0 },/* 3585 */
      { .f_node=1745, .degree=0, .alpha=0x76/* 'v' */, .outgoing=3587, .patterns=0, .final=0, .range=0 },/* 3586 */
      { .f_node=5786, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3588, .patterns=0, .final=0, .range=0 },/* 3587 */
      { .f_node=3733, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3589, .patterns=0, .final=0, .range=0 },/* 3588 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3590, .patterns=0, .final=0, .range=0 },/* 3589 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3591, .patterns=0, .final=0, .range=0 },/* 3590 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3592, .patterns=0, .final=0, .range=0 },/* 3591 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=410, .final=1, .range=0 },/* 3592 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3594, .patterns=0, .final=0, .range=0 },/* 3593 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=3595, .patterns=0, .final=0, .range=0 },/* 3594 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=411, .final=1, .range=0 },/* 3595 */
      { .f_node=2762, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3597, .patterns=0, .final=0, .range=0 },/* 3596 */
      { .f_node=2891, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3598, .patterns=0, .final=0, .range=0 },/* 3597 */
      { .f_node=2892, .degree=0, .alpha=0x73/* 's' */, .outgoing=3599, .patterns=0, .final=0, .range=0 },/* 3598 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3600, .patterns=0, .final=0, .range=0 },/* 3599 */
      { .f_node=877, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=3601, .patterns=0, .final=0, .range=0 },/* 3600 */
      { .f_node=1700, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3602, .patterns=0, .final=0, .range=0 },/* 3601 */
      { .f_node=1745, .degree=0, .alpha=0x76/* 'v' */, .outgoing=3603, .patterns=0, .final=0, .range=0 },/* 3602 */
      { .f_node=5786, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3604, .patterns=0, .final=0, .range=0 },/* 3603 */
      { .f_node=3733, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3605, .patterns=0, .final=0, .range=0 },/* 3604 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3606, .patterns=0, .final=0, .range=0 },/* 3605 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3607, .patterns=0, .final=0, .range=0 },/* 3606 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3608, .patterns=0, .final=0, .range=0 },/* 3607 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=412, .final=1, .range=0 },/* 3608 */
      { .f_node=5418, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3610, .patterns=0, .final=0, .range=0 },/* 3609 */
      { .f_node=5419, .degree=1, .alpha=0x63, .outgoing=1132, .patterns=0, .final=0, .range=1 },/* 3610 */
      { .f_node=5471, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3612, .patterns=0, .final=0, .range=0 },/* 3611 */
      { .f_node=5499, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=3613, .patterns=0, .final=0, .range=0 },/* 3612 */
      { .f_node=5293, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=3614, .patterns=0, .final=0, .range=0 },/* 3613 */
      { .f_node=5293, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3615, .patterns=0, .final=0, .range=0 },/* 3614 */
      { .f_node=3733, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3616, .patterns=0, .final=0, .range=0 },/* 3615 */
      { .f_node=5471, .degree=0, .alpha=0x74/* 't' */, .outgoing=3617, .patterns=0, .final=0, .range=0 },/* 3616 */
      { .f_node=4944, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3618, .patterns=0, .final=0, .range=0 },/* 3617 */
      { .f_node=5090, .degree=0, .alpha=0x72/* 'r' */, .outgoing=3619, .patterns=0, .final=0, .range=0 },/* 3618 */
      { .f_node=5091, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3620, .patterns=0, .final=0, .range=0 },/* 3619 */
      { .f_node=877, .degree=2, .alpha=0x61, .outgoing=1134, .patterns=0, .final=0, .range=1 },/* 3620 */
      { .f_node=878, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=3622, .patterns=0, .final=0, .range=0 },/* 3621 */
      { .f_node=901, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3623, .patterns=0, .final=0, .range=0 },/* 3622 */
      { .f_node=902, .degree=0, .alpha=0x64/* 'd' */, .outgoing=3624, .patterns=0, .final=0, .range=0 },/* 3623 */
      { .f_node=2773, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3625, .patterns=0, .final=0, .range=0 },/* 3624 */
      { .f_node=436, .degree=0, .alpha=0x73/* 's' */, .outgoing=3626, .patterns=0, .final=0, .range=0 },/* 3625 */
      { .f_node=437, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3627, .patterns=0, .final=0, .range=0 },/* 3626 */
      { .f_node=438, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3628, .patterns=0, .final=0, .range=0 },/* 3627 */
      { .f_node=573, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3629, .patterns=0, .final=0, .range=0 },/* 3628 */
      { .f_node=574, .degree=0, .alpha=0x74/* 't' */, .outgoing=3630, .patterns=0, .final=0, .range=0 },/* 3629 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=413, .final=1, .range=0 },/* 3630 */
      { .f_node=1545, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=3632, .patterns=0, .final=0, .range=0 },/* 3631 */
      { .f_node=1581, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3633, .patterns=0, .final=0, .range=0 },/* 3632 */
      { .f_node=1582, .degree=0, .alpha=0x75/* 'u' */, .outgoing=3634, .patterns=0, .final=0, .range=0 },/* 3633 */
      { .f_node=1583, .degree=0, .alpha=0x64/* 'd' */, .outgoing=3635, .patterns=0, .final=0, .range=0 },/* 3634 */
      { .f_node=1584, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3636, .patterns=0, .final=0, .range=0 },/* 3635 */
      { .f_node=413, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3637, .patterns=0, .final=0, .range=0 },/* 3636 */
      { .f_node=2891, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3638, .patterns=0, .final=0, .range=0 },/* 3637 */
      { .f_node=2892, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3639, .patterns=0, .final=0, .range=0 },/* 3638 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3640, .patterns=0, .final=0, .range=0 },/* 3639 */
      { .f_node=878, .degree=0, .alpha=0x72/* 'r' */, .outgoing=3641, .patterns=0, .final=0, .range=0 },/* 3640 */
      { .f_node=5596, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3642, .patterns=0, .final=0, .range=0 },/* 3641 */
      { .f_node=3324, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3643, .patterns=0, .final=0, .range=0 },/* 3642 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3644, .patterns=0, .final=0, .range=0 },/* 3643 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3645, .patterns=0, .final=0, .range=0 },/* 3644 */
      { .f_node=878, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=3646, .patterns=0, .final=0, .range=0 },/* 3645 */
      { .f_node=901, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3647, .patterns=0, .final=0, .range=0 },/* 3646 */
      { .f_node=902, .degree=0, .alpha=0x64/* 'd' */, .outgoing=3648, .patterns=0, .final=0, .range=0 },/* 3647 */
      { .f_node=2773, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3649, .patterns=0, .final=0, .range=0 },/* 3648 */
      { .f_node=436, .degree=0, .alpha=0x73/* 's' */, .outgoing=3650, .patterns=0, .final=0, .range=0 },/* 3649 */
      { .f_node=437, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3651, .patterns=0, .final=0, .range=0 },/* 3650 */
      { .f_node=438, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3652, .patterns=0, .final=0, .range=0 },/* 3651 */
      { .f_node=573, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3653, .patterns=0, .final=0, .range=0 },/* 3652 */
      { .f_node=574, .degree=0, .alpha=0x74/* 't' */, .outgoing=3654, .patterns=0, .final=0, .range=0 },/* 3653 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=414, .final=1, .range=0 },/* 3654 */
      { .f_node=3905, .degree=0, .alpha=0x72/* 'r' */, .outgoing=3656, .patterns=0, .final=0, .range=0 },/* 3655 */
      { .f_node=365, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3657, .patterns=0, .final=0, .range=0 },/* 3656 */
      { .f_node=366, .degree=0, .alpha=0x76/* 'v' */, .outgoing=3658, .patterns=0, .final=0, .range=0 },/* 3657 */
      { .f_node=367, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3659, .patterns=0, .final=0, .range=0 },/* 3658 */
      { .f_node=368, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3660, .patterns=0, .final=0, .range=0 },/* 3659 */
      { .f_node=402, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=3661, .patterns=0, .final=0, .range=0 },/* 3660 */
      { .f_node=1700, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3662, .patterns=0, .final=0, .range=0 },/* 3661 */
      { .f_node=1745, .degree=0, .alpha=0x76/* 'v' */, .outgoing=3663, .patterns=0, .final=0, .range=0 },/* 3662 */
      { .f_node=5786, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3664, .patterns=0, .final=0, .range=0 },/* 3663 */
      { .f_node=3733, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3665, .patterns=0, .final=0, .range=0 },/* 3664 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3666, .patterns=0, .final=0, .range=0 },/* 3665 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3667, .patterns=0, .final=0, .range=0 },/* 3666 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3668, .patterns=0, .final=0, .range=0 },/* 3667 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=415, .final=1, .range=0 },/* 3668 */
      { .f_node=5596, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3670, .patterns=0, .final=0, .range=0 },/* 3669 */
      { .f_node=3324, .degree=0, .alpha=0x67/* 'g' */, .outgoing=3671, .patterns=0, .final=0, .range=0 },/* 3670 */
      { .f_node=3381, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3672, .patterns=0, .final=0, .range=0 },/* 3671 */
      { .f_node=5252, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3673, .patterns=0, .final=0, .range=0 },/* 3672 */
      { .f_node=3492, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3674, .patterns=0, .final=0, .range=0 },/* 3673 */
      { .f_node=5969, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3675, .patterns=0, .final=0, .range=0 },/* 3674 */
      { .f_node=2762, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3676, .patterns=0, .final=0, .range=0 },/* 3675 */
      { .f_node=2891, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3677, .patterns=0, .final=0, .range=0 },/* 3676 */
      { .f_node=2892, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=3678, .patterns=0, .final=0, .range=0 },/* 3677 */
      { .f_node=2893, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3679, .patterns=0, .final=0, .range=0 },/* 3678 */
      { .f_node=3733, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3680, .patterns=0, .final=0, .range=0 },/* 3679 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3681, .patterns=0, .final=0, .range=0 },/* 3680 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3682, .patterns=0, .final=0, .range=0 },/* 3681 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3683, .patterns=0, .final=0, .range=0 },/* 3682 */
      { .f_node=5520, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3684, .patterns=0, .final=0, .range=0 },/* 3683 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3685, .patterns=0, .final=0, .range=0 },/* 3684 */
      { .f_node=878, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=3686, .patterns=0, .final=0, .range=0 },/* 3685 */
      { .f_node=901, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3687, .patterns=0, .final=0, .range=0 },/* 3686 */
      { .f_node=902, .degree=0, .alpha=0x64/* 'd' */, .outgoing=3688, .patterns=0, .final=0, .range=0 },/* 3687 */
      { .f_node=2773, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3689, .patterns=0, .final=0, .range=0 },/* 3688 */
      { .f_node=436, .degree=0, .alpha=0x73/* 's' */, .outgoing=3690, .patterns=0, .final=0, .range=0 },/* 3689 */
      { .f_node=437, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3691, .patterns=0, .final=0, .range=0 },/* 3690 */
      { .f_node=438, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3692, .patterns=0, .final=0, .range=0 },/* 3691 */
      { .f_node=573, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3693, .patterns=0, .final=0, .range=0 },/* 3692 */
      { .f_node=574, .degree=0, .alpha=0x74/* 't' */, .outgoing=3694, .patterns=0, .final=0, .range=0 },/* 3693 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=416, .final=1, .range=0 },/* 3694 */
      { .f_node=4278, .degree=0, .alpha=0x78/* 'x' */, .outgoing=3696, .patterns=0, .final=0, .range=0 },/* 3695 */
      { .f_node=1, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3697, .patterns=0, .final=0, .range=0 },/* 3696 */
      { .f_node=2762, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3698, .patterns=0, .final=0, .range=0 },/* 3697 */
      { .f_node=2891, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3699, .patterns=0, .final=0, .range=0 },/* 3698 */
      { .f_node=2892, .degree=0, .alpha=0x73/* 's' */, .outgoing=3700, .patterns=0, .final=0, .range=0 },/* 3699 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3701, .patterns=0, .final=0, .range=0 },/* 3700 */
      { .f_node=877, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3702, .patterns=0, .final=0, .range=0 },/* 3701 */
      { .f_node=1881, .degree=0, .alpha=0x74/* 't' */, .outgoing=3703, .patterns=0, .final=0, .range=0 },/* 3702 */
      { .f_node=3538, .degree=0, .alpha=0x75/* 'u' */, .outgoing=3704, .patterns=0, .final=0, .range=0 },/* 3703 */
      { .f_node=3539, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3705, .patterns=0, .final=0, .range=0 },/* 3704 */
      { .f_node=3540, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3706, .patterns=0, .final=0, .range=0 },/* 3705 */
      { .f_node=3541, .degree=0, .alpha=0x73/* 's' */, .outgoing=3707, .patterns=0, .final=0, .range=0 },/* 3706 */
      { .f_node=3542, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3708, .patterns=0, .final=0, .range=0 },/* 3707 */
      { .f_node=3553, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3709, .patterns=0, .final=0, .range=0 },/* 3708 */
      { .f_node=3554, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3710, .patterns=0, .final=0, .range=0 },/* 3709 */
      { .f_node=3555, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3711, .patterns=0, .final=0, .range=0 },/* 3710 */
      { .f_node=3556, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=3712, .patterns=0, .final=0, .range=0 },/* 3711 */
      { .f_node=3557, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3713, .patterns=0, .final=0, .range=0 },/* 3712 */
      { .f_node=3558, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3714, .patterns=0, .final=0, .range=0 },/* 3713 */
      { .f_node=3559, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3715, .patterns=0, .final=0, .range=0 },/* 3714 */
      { .f_node=3560, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3716, .patterns=0, .final=0, .range=0 },/* 3715 */
      { .f_node=3561, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3717, .patterns=0, .final=0, .range=0 },/* 3716 */
      { .f_node=3562, .degree=0, .alpha=0x00, .outgoing=0, .patterns=417, .final=1, .range=0 },/* 3717 */
      { .f_node=5858, .degree=0, .alpha=0x74/* 't' */, .outgoing=3719, .patterns=0, .final=0, .range=0 },/* 3718 */
      { .f_node=4944, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=3720, .patterns=0, .final=0, .range=0 },/* 3719 */
      { .f_node=5084, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3721, .patterns=0, .final=0, .range=0 },/* 3720 */
      { .f_node=5304, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3722, .patterns=0, .final=0, .range=0 },/* 3721 */
      { .f_node=3563, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=3723, .patterns=0, .final=0, .range=0 },/* 3722 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3724, .patterns=0, .final=0, .range=0 },/* 3723 */
      { .f_node=877, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=3725, .patterns=0, .final=0, .range=0 },/* 3724 */
      { .f_node=1700, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3726, .patterns=0, .final=0, .range=0 },/* 3725 */
      { .f_node=1745, .degree=0, .alpha=0x76/* 'v' */, .outgoing=3727, .patterns=0, .final=0, .range=0 },/* 3726 */
      { .f_node=5786, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3728, .patterns=0, .final=0, .range=0 },/* 3727 */
      { .f_node=3733, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3729, .patterns=0, .final=0, .range=0 },/* 3728 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3730, .patterns=0, .final=0, .range=0 },/* 3729 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3731, .patterns=0, .final=0, .range=0 },/* 3730 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3732, .patterns=0, .final=0, .range=0 },/* 3731 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=420, .final=1, .range=0 },/* 3732 */
      { .f_node=1, .degree=5, .alpha=0x00, .outgoing=1137, .patterns=0, .final=0, .range=0 },/* 3733 */
      { .f_node=1, .degree=0, .alpha=0x38/* '8' */, .outgoing=3735, .patterns=0, .final=0, .range=0 },/* 3734 */
      { .f_node=1, .degree=0, .alpha=0x35/* '5' */, .outgoing=3736, .patterns=0, .final=0, .range=0 },/* 3735 */
      { .f_node=1, .degree=0, .alpha=0x38/* '8' */, .outgoing=3737, .patterns=0, .final=0, .range=0 },/* 3736 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3738, .patterns=0, .final=0, .range=0 },/* 3737 */
      { .f_node=877, .degree=0, .alpha=0x64/* 'd' */, .outgoing=3739, .patterns=0, .final=0, .range=0 },/* 3738 */
      { .f_node=2151, .degree=0, .alpha=0x73/* 's' */, .outgoing=3740, .patterns=0, .final=0, .range=0 },/* 3739 */
      { .f_node=854, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3741, .patterns=0, .final=0, .range=0 },/* 3740 */
      { .f_node=4279, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3742, .patterns=0, .final=0, .range=0 },/* 3741 */
      { .f_node=3733, .degree=0, .alpha=0x39/* '9' */, .outgoing=3743, .patterns=0, .final=0, .range=0 },/* 3742 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3744, .patterns=0, .final=0, .range=0 },/* 3743 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3745, .patterns=0, .final=0, .range=0 },/* 3744 */
      { .f_node=878, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=3746, .patterns=0, .final=0, .range=0 },/* 3745 */
      { .f_node=901, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3747, .patterns=0, .final=0, .range=0 },/* 3746 */
      { .f_node=902, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3748, .patterns=0, .final=0, .range=0 },/* 3747 */
      { .f_node=2808, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3749, .patterns=0, .final=0, .range=0 },/* 3748 */
      { .f_node=2809, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3750, .patterns=0, .final=0, .range=0 },/* 3749 */
      { .f_node=4710, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3751, .patterns=0, .final=0, .range=0 },/* 3750 */
      { .f_node=3733, .degree=0, .alpha=0x64/* 'd' */, .outgoing=3752, .patterns=0, .final=0, .range=0 },/* 3751 */
      { .f_node=3905, .degree=0, .alpha=0x67/* 'g' */, .outgoing=3753, .patterns=0, .final=0, .range=0 },/* 3752 */
      { .f_node=3906, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3754, .patterns=0, .final=0, .range=0 },/* 3753 */
      { .f_node=3907, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3755, .patterns=0, .final=0, .range=0 },/* 3754 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3756, .patterns=0, .final=0, .range=0 },/* 3755 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3757, .patterns=0, .final=0, .range=0 },/* 3756 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=3758, .patterns=0, .final=0, .range=0 },/* 3757 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=421, .final=1, .range=0 },/* 3758 */
      { .f_node=2710, .degree=5, .alpha=0x33, .outgoing=1143, .patterns=0, .final=0, .range=1 },/* 3759 */
      { .f_node=1, .degree=0, .alpha=0x35/* '5' */, .outgoing=3761, .patterns=0, .final=0, .range=0 },/* 3760 */
      { .f_node=1, .degree=0, .alpha=0x35/* '5' */, .outgoing=3762, .patterns=0, .final=0, .range=0 },/* 3761 */
      { .f_node=1, .degree=0, .alpha=0x35/* '5' */, .outgoing=3763, .patterns=0, .final=0, .range=0 },/* 3762 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3764, .patterns=0, .final=0, .range=0 },/* 3763 */
      { .f_node=877, .degree=0, .alpha=0x62/* 'b' */, .outgoing=3765, .patterns=0, .final=0, .range=0 },/* 3764 */
      { .f_node=1678, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3766, .patterns=0, .final=0, .range=0 },/* 3765 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3767, .patterns=0, .final=0, .range=0 },/* 3766 */
      { .f_node=878, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=3768, .patterns=0, .final=0, .range=0 },/* 3767 */
      { .f_node=901, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3769, .patterns=0, .final=0, .range=0 },/* 3768 */
      { .f_node=902, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3770, .patterns=0, .final=0, .range=0 },/* 3769 */
      { .f_node=2808, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3771, .patterns=0, .final=0, .range=0 },/* 3770 */
      { .f_node=2809, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3772, .patterns=0, .final=0, .range=0 },/* 3771 */
      { .f_node=4710, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3773, .patterns=0, .final=0, .range=0 },/* 3772 */
      { .f_node=3733, .degree=0, .alpha=0x64/* 'd' */, .outgoing=3774, .patterns=0, .final=0, .range=0 },/* 3773 */
      { .f_node=3905, .degree=0, .alpha=0x67/* 'g' */, .outgoing=3775, .patterns=0, .final=0, .range=0 },/* 3774 */
      { .f_node=3906, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3776, .patterns=0, .final=0, .range=0 },/* 3775 */
      { .f_node=3907, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3777, .patterns=0, .final=0, .range=0 },/* 3776 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3778, .patterns=0, .final=0, .range=0 },/* 3777 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3779, .patterns=0, .final=0, .range=0 },/* 3778 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=3780, .patterns=0, .final=0, .range=0 },/* 3779 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=422, .final=1, .range=0 },/* 3780 */
      { .f_node=1, .degree=0, .alpha=0x32/* '2' */, .outgoing=3782, .patterns=0, .final=0, .range=0 },/* 3781 */
      { .f_node=1, .degree=0, .alpha=0x33/* '3' */, .outgoing=3783, .patterns=0, .final=0, .range=0 },/* 3782 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3784, .patterns=0, .final=0, .range=0 },/* 3783 */
      { .f_node=877, .degree=0, .alpha=0x64/* 'd' */, .outgoing=3785, .patterns=0, .final=0, .range=0 },/* 3784 */
      { .f_node=2151, .degree=0, .alpha=0x73/* 's' */, .outgoing=3786, .patterns=0, .final=0, .range=0 },/* 3785 */
      { .f_node=854, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3787, .patterns=0, .final=0, .range=0 },/* 3786 */
      { .f_node=4279, .degree=0, .alpha=0x64/* 'd' */, .outgoing=3788, .patterns=0, .final=0, .range=0 },/* 3787 */
      { .f_node=2, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3789, .patterns=0, .final=0, .range=0 },/* 3788 */
      { .f_node=772, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3790, .patterns=0, .final=0, .range=0 },/* 3789 */
      { .f_node=878, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=3791, .patterns=0, .final=0, .range=0 },/* 3790 */
      { .f_node=901, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3792, .patterns=0, .final=0, .range=0 },/* 3791 */
      { .f_node=902, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3793, .patterns=0, .final=0, .range=0 },/* 3792 */
      { .f_node=2808, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3794, .patterns=0, .final=0, .range=0 },/* 3793 */
      { .f_node=2809, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3795, .patterns=0, .final=0, .range=0 },/* 3794 */
      { .f_node=4710, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3796, .patterns=0, .final=0, .range=0 },/* 3795 */
      { .f_node=3733, .degree=0, .alpha=0x64/* 'd' */, .outgoing=3797, .patterns=0, .final=0, .range=0 },/* 3796 */
      { .f_node=3905, .degree=0, .alpha=0x67/* 'g' */, .outgoing=3798, .patterns=0, .final=0, .range=0 },/* 3797 */
      { .f_node=3906, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3799, .patterns=0, .final=0, .range=0 },/* 3798 */
      { .f_node=3907, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3800, .patterns=0, .final=0, .range=0 },/* 3799 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3801, .patterns=0, .final=0, .range=0 },/* 3800 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3802, .patterns=0, .final=0, .range=0 },/* 3801 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=3803, .patterns=0, .final=0, .range=0 },/* 3802 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=423, .final=1, .range=0 },/* 3803 */
      { .f_node=1, .degree=7, .alpha=0x30, .outgoing=1149, .patterns=0, .final=0, .range=1 },/* 3804 */
      { .f_node=1, .degree=0, .alpha=0x30/* '0' */, .outgoing=3806, .patterns=0, .final=0, .range=0 },/* 3805 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3807, .patterns=0, .final=0, .range=0 },/* 3806 */
      { .f_node=877, .degree=0, .alpha=0x64/* 'd' */, .outgoing=3808, .patterns=0, .final=0, .range=0 },/* 3807 */
      { .f_node=2151, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3809, .patterns=0, .final=0, .range=0 },/* 3808 */
      { .f_node=772, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3810, .patterns=0, .final=0, .range=0 },/* 3809 */
      { .f_node=878, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=3811, .patterns=0, .final=0, .range=0 },/* 3810 */
      { .f_node=901, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3812, .patterns=0, .final=0, .range=0 },/* 3811 */
      { .f_node=902, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3813, .patterns=0, .final=0, .range=0 },/* 3812 */
      { .f_node=2808, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3814, .patterns=0, .final=0, .range=0 },/* 3813 */
      { .f_node=2809, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3815, .patterns=0, .final=0, .range=0 },/* 3814 */
      { .f_node=4710, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3816, .patterns=0, .final=0, .range=0 },/* 3815 */
      { .f_node=3733, .degree=0, .alpha=0x64/* 'd' */, .outgoing=3817, .patterns=0, .final=0, .range=0 },/* 3816 */
      { .f_node=3905, .degree=0, .alpha=0x67/* 'g' */, .outgoing=3818, .patterns=0, .final=0, .range=0 },/* 3817 */
      { .f_node=3906, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3819, .patterns=0, .final=0, .range=0 },/* 3818 */
      { .f_node=3907, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3820, .patterns=0, .final=0, .range=0 },/* 3819 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3821, .patterns=0, .final=0, .range=0 },/* 3820 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3822, .patterns=0, .final=0, .range=0 },/* 3821 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=3823, .patterns=0, .final=0, .range=0 },/* 3822 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=424, .final=1, .range=0 },/* 3823 */
      { .f_node=1, .degree=0, .alpha=0x39/* '9' */, .outgoing=3825, .patterns=0, .final=0, .range=0 },/* 3824 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3826, .patterns=0, .final=0, .range=0 },/* 3825 */
      { .f_node=877, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3827, .patterns=0, .final=0, .range=0 },/* 3826 */
      { .f_node=2239, .degree=0, .alpha=0x37/* '7' */, .outgoing=3828, .patterns=0, .final=0, .range=0 },/* 3827 */
      { .f_node=3844, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3829, .patterns=0, .final=0, .range=0 },/* 3828 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3830, .patterns=0, .final=0, .range=0 },/* 3829 */
      { .f_node=878, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=3831, .patterns=0, .final=0, .range=0 },/* 3830 */
      { .f_node=901, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3832, .patterns=0, .final=0, .range=0 },/* 3831 */
      { .f_node=902, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3833, .patterns=0, .final=0, .range=0 },/* 3832 */
      { .f_node=2808, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3834, .patterns=0, .final=0, .range=0 },/* 3833 */
      { .f_node=2809, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3835, .patterns=0, .final=0, .range=0 },/* 3834 */
      { .f_node=4710, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3836, .patterns=0, .final=0, .range=0 },/* 3835 */
      { .f_node=3733, .degree=0, .alpha=0x64/* 'd' */, .outgoing=3837, .patterns=0, .final=0, .range=0 },/* 3836 */
      { .f_node=3905, .degree=0, .alpha=0x67/* 'g' */, .outgoing=3838, .patterns=0, .final=0, .range=0 },/* 3837 */
      { .f_node=3906, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3839, .patterns=0, .final=0, .range=0 },/* 3838 */
      { .f_node=3907, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3840, .patterns=0, .final=0, .range=0 },/* 3839 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3841, .patterns=0, .final=0, .range=0 },/* 3840 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3842, .patterns=0, .final=0, .range=0 },/* 3841 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=3843, .patterns=0, .final=0, .range=0 },/* 3842 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=425, .final=1, .range=0 },/* 3843 */
      { .f_node=1, .degree=0, .alpha=0x37/* '7' */, .outgoing=3845, .patterns=0, .final=0, .range=0 },/* 3844 */
      { .f_node=1, .degree=0, .alpha=0x36/* '6' */, .outgoing=3846, .patterns=0, .final=0, .range=0 },/* 3845 */
      { .f_node=1, .degree=0, .alpha=0x38/* '8' */, .outgoing=3847, .patterns=0, .final=0, .range=0 },/* 3846 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3848, .patterns=0, .final=0, .range=0 },/* 3847 */
      { .f_node=877, .degree=0, .alpha=0x62/* 'b' */, .outgoing=3849, .patterns=0, .final=0, .range=0 },/* 3848 */
      { .f_node=1678, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3850, .patterns=0, .final=0, .range=0 },/* 3849 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3851, .patterns=0, .final=0, .range=0 },/* 3850 */
      { .f_node=878, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=3852, .patterns=0, .final=0, .range=0 },/* 3851 */
      { .f_node=901, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3853, .patterns=0, .final=0, .range=0 },/* 3852 */
      { .f_node=902, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3854, .patterns=0, .final=0, .range=0 },/* 3853 */
      { .f_node=2808, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3855, .patterns=0, .final=0, .range=0 },/* 3854 */
      { .f_node=2809, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3856, .patterns=0, .final=0, .range=0 },/* 3855 */
      { .f_node=4710, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3857, .patterns=0, .final=0, .range=0 },/* 3856 */
      { .f_node=3733, .degree=0, .alpha=0x64/* 'd' */, .outgoing=3858, .patterns=0, .final=0, .range=0 },/* 3857 */
      { .f_node=3905, .degree=0, .alpha=0x67/* 'g' */, .outgoing=3859, .patterns=0, .final=0, .range=0 },/* 3858 */
      { .f_node=3906, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3860, .patterns=0, .final=0, .range=0 },/* 3859 */
      { .f_node=3907, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3861, .patterns=0, .final=0, .range=0 },/* 3860 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3862, .patterns=0, .final=0, .range=0 },/* 3861 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3863, .patterns=0, .final=0, .range=0 },/* 3862 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=3864, .patterns=0, .final=0, .range=0 },/* 3863 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=426, .final=1, .range=0 },/* 3864 */
      { .f_node=1, .degree=0, .alpha=0x35/* '5' */, .outgoing=3866, .patterns=0, .final=0, .range=0 },/* 3865 */
      { .f_node=1, .degree=0, .alpha=0x39/* '9' */, .outgoing=3867, .patterns=0, .final=0, .range=0 },/* 3866 */
      { .f_node=1, .degree=0, .alpha=0x33/* '3' */, .outgoing=3868, .patterns=0, .final=0, .range=0 },/* 3867 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3869, .patterns=0, .final=0, .range=0 },/* 3868 */
      { .f_node=877, .degree=3, .alpha=0x64, .outgoing=1157, .patterns=0, .final=0, .range=1 },/* 3869 */
      { .f_node=2151, .degree=0, .alpha=0x73/* 's' */, .outgoing=3871, .patterns=0, .final=0, .range=0 },/* 3870 */
      { .f_node=854, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3872, .patterns=0, .final=0, .range=0 },/* 3871 */
      { .f_node=4478, .degree=0, .alpha=0x67/* 'g' */, .outgoing=3873, .patterns=0, .final=0, .range=0 },/* 3872 */
      { .f_node=5159, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3874, .patterns=0, .final=0, .range=0 },/* 3873 */
      { .f_node=5239, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3875, .patterns=0, .final=0, .range=0 },/* 3874 */
      { .f_node=878, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=3876, .patterns=0, .final=0, .range=0 },/* 3875 */
      { .f_node=901, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3877, .patterns=0, .final=0, .range=0 },/* 3876 */
      { .f_node=902, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3878, .patterns=0, .final=0, .range=0 },/* 3877 */
      { .f_node=2808, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3879, .patterns=0, .final=0, .range=0 },/* 3878 */
      { .f_node=2809, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3880, .patterns=0, .final=0, .range=0 },/* 3879 */
      { .f_node=4710, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3881, .patterns=0, .final=0, .range=0 },/* 3880 */
      { .f_node=3733, .degree=0, .alpha=0x64/* 'd' */, .outgoing=3882, .patterns=0, .final=0, .range=0 },/* 3881 */
      { .f_node=3905, .degree=0, .alpha=0x67/* 'g' */, .outgoing=3883, .patterns=0, .final=0, .range=0 },/* 3882 */
      { .f_node=3906, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3884, .patterns=0, .final=0, .range=0 },/* 3883 */
      { .f_node=3907, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3885, .patterns=0, .final=0, .range=0 },/* 3884 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3886, .patterns=0, .final=0, .range=0 },/* 3885 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3887, .patterns=0, .final=0, .range=0 },/* 3886 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=3888, .patterns=0, .final=0, .range=0 },/* 3887 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=427, .final=1, .range=0 },/* 3888 */
      { .f_node=1763, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3890, .patterns=0, .final=0, .range=0 },/* 3889 */
      { .f_node=5239, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3891, .patterns=0, .final=0, .range=0 },/* 3890 */
      { .f_node=878, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=3892, .patterns=0, .final=0, .range=0 },/* 3891 */
      { .f_node=901, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3893, .patterns=0, .final=0, .range=0 },/* 3892 */
      { .f_node=902, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3894, .patterns=0, .final=0, .range=0 },/* 3893 */
      { .f_node=2808, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3895, .patterns=0, .final=0, .range=0 },/* 3894 */
      { .f_node=2809, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3896, .patterns=0, .final=0, .range=0 },/* 3895 */
      { .f_node=4710, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3897, .patterns=0, .final=0, .range=0 },/* 3896 */
      { .f_node=3733, .degree=0, .alpha=0x64/* 'd' */, .outgoing=3898, .patterns=0, .final=0, .range=0 },/* 3897 */
      { .f_node=3905, .degree=0, .alpha=0x67/* 'g' */, .outgoing=3899, .patterns=0, .final=0, .range=0 },/* 3898 */
      { .f_node=3906, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3900, .patterns=0, .final=0, .range=0 },/* 3899 */
      { .f_node=3907, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3901, .patterns=0, .final=0, .range=0 },/* 3900 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3902, .patterns=0, .final=0, .range=0 },/* 3901 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3903, .patterns=0, .final=0, .range=0 },/* 3902 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=3904, .patterns=0, .final=0, .range=0 },/* 3903 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=428, .final=1, .range=0 },/* 3904 */
      { .f_node=2, .degree=0, .alpha=0x67/* 'g' */, .outgoing=3906, .patterns=0, .final=0, .range=0 },/* 3905 */
      { .f_node=5159, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3907, .patterns=0, .final=0, .range=0 },/* 3906 */
      { .f_node=5278, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3908, .patterns=0, .final=0, .range=0 },/* 3907 */
      { .f_node=5969, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3909, .patterns=0, .final=0, .range=0 },/* 3908 */
      { .f_node=5970, .degree=0, .alpha=0x71/* 'q' */, .outgoing=3910, .patterns=0, .final=0, .range=0 },/* 3909 */
      { .f_node=4847, .degree=0, .alpha=0x74/* 't' */, .outgoing=3911, .patterns=0, .final=0, .range=0 },/* 3910 */
      { .f_node=4848, .degree=0, .alpha=0x74/* 't' */, .outgoing=3912, .patterns=0, .final=0, .range=0 },/* 3911 */
      { .f_node=4849, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3913, .patterns=0, .final=0, .range=0 },/* 3912 */
      { .f_node=877, .degree=0, .alpha=0x66/* 'f' */, .outgoing=3914, .patterns=0, .final=0, .range=0 },/* 3913 */
      { .f_node=2299, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3915, .patterns=0, .final=0, .range=0 },/* 3914 */
      { .f_node=2300, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3916, .patterns=0, .final=0, .range=0 },/* 3915 */
      { .f_node=2301, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3917, .patterns=0, .final=0, .range=0 },/* 3916 */
      { .f_node=2302, .degree=0, .alpha=0x62/* 'b' */, .outgoing=3918, .patterns=0, .final=0, .range=0 },/* 3917 */
      { .f_node=2303, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3919, .patterns=0, .final=0, .range=0 },/* 3918 */
      { .f_node=2304, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3920, .patterns=0, .final=0, .range=0 },/* 3919 */
      { .f_node=2305, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=3921, .patterns=0, .final=0, .range=0 },/* 3920 */
      { .f_node=2306, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3922, .patterns=0, .final=0, .range=0 },/* 3921 */
      { .f_node=2307, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3923, .patterns=0, .final=0, .range=0 },/* 3922 */
      { .f_node=5341, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3924, .patterns=0, .final=0, .range=0 },/* 3923 */
      { .f_node=5342, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3925, .patterns=0, .final=0, .range=0 },/* 3924 */
      { .f_node=5343, .degree=0, .alpha=0x00, .outgoing=0, .patterns=429, .final=1, .range=0 },/* 3925 */
      { .f_node=5786, .degree=0, .alpha=0x73/* 's' */, .outgoing=3927, .patterns=0, .final=0, .range=0 },/* 3926 */
      { .f_node=4278, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3928, .patterns=0, .final=0, .range=0 },/* 3927 */
      { .f_node=4302, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3929, .patterns=0, .final=0, .range=0 },/* 3928 */
      { .f_node=5471, .degree=0, .alpha=0x75/* 'u' */, .outgoing=3930, .patterns=0, .final=0, .range=0 },/* 3929 */
      { .f_node=5858, .degree=0, .alpha=0x72/* 'r' */, .outgoing=3931, .patterns=0, .final=0, .range=0 },/* 3930 */
      { .f_node=5596, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3932, .patterns=0, .final=0, .range=0 },/* 3931 */
      { .f_node=5611, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3933, .patterns=0, .final=0, .range=0 },/* 3932 */
      { .f_node=5969, .degree=14, .alpha=0x61, .outgoing=1161, .patterns=0, .final=0, .range=1 },/* 3933 */
      { .f_node=2762, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3935, .patterns=0, .final=0, .range=0 },/* 3934 */
      { .f_node=3324, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3936, .patterns=0, .final=0, .range=0 },/* 3935 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3937, .patterns=0, .final=0, .range=0 },/* 3936 */
      { .f_node=877, .degree=0, .alpha=0x76/* 'v' */, .outgoing=3938, .patterns=0, .final=0, .range=0 },/* 3937 */
      { .f_node=2428, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3939, .patterns=0, .final=0, .range=0 },/* 3938 */
      { .f_node=2429, .degree=0, .alpha=0x72/* 'r' */, .outgoing=3940, .patterns=0, .final=0, .range=0 },/* 3939 */
      { .f_node=5596, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3941, .patterns=0, .final=0, .range=0 },/* 3940 */
      { .f_node=3324, .degree=0, .alpha=0x73/* 's' */, .outgoing=3942, .patterns=0, .final=0, .range=0 },/* 3941 */
      { .f_node=4278, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3943, .patterns=0, .final=0, .range=0 },/* 3942 */
      { .f_node=4366, .degree=0, .alpha=0x67/* 'g' */, .outgoing=3944, .patterns=0, .final=0, .range=0 },/* 3943 */
      { .f_node=4367, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3945, .patterns=0, .final=0, .range=0 },/* 3944 */
      { .f_node=4368, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3946, .patterns=0, .final=0, .range=0 },/* 3945 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3947, .patterns=0, .final=0, .range=0 },/* 3946 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3948, .patterns=0, .final=0, .range=0 },/* 3947 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3949, .patterns=0, .final=0, .range=0 },/* 3948 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=431, .final=1, .range=0 },/* 3949 */
      { .f_node=5471, .degree=0, .alpha=0x72/* 'r' */, .outgoing=3951, .patterns=0, .final=0, .range=0 },/* 3950 */
      { .f_node=5530, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=3952, .patterns=0, .final=0, .range=0 },/* 3951 */
      { .f_node=5531, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3953, .patterns=0, .final=0, .range=0 },/* 3952 */
      { .f_node=5532, .degree=0, .alpha=0x76/* 'v' */, .outgoing=3954, .patterns=0, .final=0, .range=0 },/* 3953 */
      { .f_node=2428, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3955, .patterns=0, .final=0, .range=0 },/* 3954 */
      { .f_node=2429, .degree=0, .alpha=0x72/* 'r' */, .outgoing=3956, .patterns=0, .final=0, .range=0 },/* 3955 */
      { .f_node=5596, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3957, .patterns=0, .final=0, .range=0 },/* 3956 */
      { .f_node=3324, .degree=0, .alpha=0x73/* 's' */, .outgoing=3958, .patterns=0, .final=0, .range=0 },/* 3957 */
      { .f_node=4278, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3959, .patterns=0, .final=0, .range=0 },/* 3958 */
      { .f_node=4366, .degree=0, .alpha=0x67/* 'g' */, .outgoing=3960, .patterns=0, .final=0, .range=0 },/* 3959 */
      { .f_node=4367, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3961, .patterns=0, .final=0, .range=0 },/* 3960 */
      { .f_node=4368, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3962, .patterns=0, .final=0, .range=0 },/* 3961 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3963, .patterns=0, .final=0, .range=0 },/* 3962 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3964, .patterns=0, .final=0, .range=0 },/* 3963 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3965, .patterns=0, .final=0, .range=0 },/* 3964 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=432, .final=1, .range=0 },/* 3965 */
      { .f_node=3563, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3967, .patterns=0, .final=0, .range=0 },/* 3966 */
      { .f_node=3564, .degree=0, .alpha=0x73/* 's' */, .outgoing=3968, .patterns=0, .final=0, .range=0 },/* 3967 */
      { .f_node=3565, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3969, .patterns=0, .final=0, .range=0 },/* 3968 */
      { .f_node=4478, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3970, .patterns=0, .final=0, .range=0 },/* 3969 */
      { .f_node=877, .degree=0, .alpha=0x76/* 'v' */, .outgoing=3971, .patterns=0, .final=0, .range=0 },/* 3970 */
      { .f_node=2428, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3972, .patterns=0, .final=0, .range=0 },/* 3971 */
      { .f_node=2429, .degree=0, .alpha=0x72/* 'r' */, .outgoing=3973, .patterns=0, .final=0, .range=0 },/* 3972 */
      { .f_node=5596, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3974, .patterns=0, .final=0, .range=0 },/* 3973 */
      { .f_node=3324, .degree=0, .alpha=0x73/* 's' */, .outgoing=3975, .patterns=0, .final=0, .range=0 },/* 3974 */
      { .f_node=4278, .degree=0, .alpha=0x69/* 'i' */, .outgoing=3976, .patterns=0, .final=0, .range=0 },/* 3975 */
      { .f_node=4366, .degree=0, .alpha=0x67/* 'g' */, .outgoing=3977, .patterns=0, .final=0, .range=0 },/* 3976 */
      { .f_node=4367, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=3978, .patterns=0, .final=0, .range=0 },/* 3977 */
      { .f_node=4368, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3979, .patterns=0, .final=0, .range=0 },/* 3978 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3980, .patterns=0, .final=0, .range=0 },/* 3979 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3981, .patterns=0, .final=0, .range=0 },/* 3980 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3982, .patterns=0, .final=0, .range=0 },/* 3981 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=433, .final=1, .range=0 },/* 3982 */
      { .f_node=1, .degree=4, .alpha=0x00, .outgoing=1176, .patterns=0, .final=0, .range=0 },/* 3983 */
      { .f_node=5858, .degree=0, .alpha=0x73/* 's' */, .outgoing=3985, .patterns=0, .final=0, .range=0 },/* 3984 */
      { .f_node=4278, .degree=0, .alpha=0x68/* 'h' */, .outgoing=3986, .patterns=0, .final=0, .range=0 },/* 3985 */
      { .f_node=4347, .degree=0, .alpha=0x2d/* '-' */, .outgoing=3987, .patterns=0, .final=0, .range=0 },/* 3986 */
      { .f_node=5969, .degree=0, .alpha=0x61/* 'a' */, .outgoing=3988, .patterns=0, .final=0, .range=0 },/* 3987 */
      { .f_node=2762, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3989, .patterns=0, .final=0, .range=0 },/* 3988 */
      { .f_node=2891, .degree=0, .alpha=0x70/* 'p' */, .outgoing=3990, .patterns=0, .final=0, .range=0 },/* 3989 */
      { .f_node=2892, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=3991, .patterns=0, .final=0, .range=0 },/* 3990 */
      { .f_node=2893, .degree=0, .alpha=0x65/* 'e' */, .outgoing=3992, .patterns=0, .final=0, .range=0 },/* 3991 */
      { .f_node=3733, .degree=0, .alpha=0x2e/* '.' */, .outgoing=3993, .patterns=0, .final=0, .range=0 },/* 3992 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3994, .patterns=0, .final=0, .range=0 },/* 3993 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3995, .patterns=0, .final=0, .range=0 },/* 3994 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=3996, .patterns=0, .final=0, .range=0 },/* 3995 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=434, .final=1, .range=0 },/* 3996 */
      { .f_node=5293, .degree=0, .alpha=0x75/* 'u' */, .outgoing=3998, .patterns=0, .final=0, .range=0 },/* 3997 */
      { .f_node=5858, .degree=0, .alpha=0x73/* 's' */, .outgoing=3999, .patterns=0, .final=0, .range=0 },/* 3998 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4000, .patterns=0, .final=0, .range=0 },/* 3999 */
      { .f_node=877, .degree=14, .alpha=0x67, .outgoing=1181, .patterns=0, .final=0, .range=1 },/* 4000 */
      { .f_node=1763, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4002, .patterns=0, .final=0, .range=0 },/* 4001 */
      { .f_node=1811, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4003, .patterns=0, .final=0, .range=0 },/* 4002 */
      { .f_node=1812, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4004, .patterns=0, .final=0, .range=0 },/* 4003 */
      { .f_node=1813, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4005, .patterns=0, .final=0, .range=0 },/* 4004 */
      { .f_node=1814, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4006, .patterns=0, .final=0, .range=0 },/* 4005 */
      { .f_node=1815, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4007, .patterns=0, .final=0, .range=0 },/* 4006 */
      { .f_node=1853, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4008, .patterns=435, .final=1, .range=0 },/* 4007 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4009, .patterns=0, .final=0, .range=0 },/* 4008 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4010, .patterns=0, .final=0, .range=0 },/* 4009 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=437, .final=1, .range=0 },/* 4010 */
      { .f_node=1603, .degree=0, .alpha=0x72/* 'r' */, .outgoing=4012, .patterns=0, .final=0, .range=0 },/* 4011 */
      { .f_node=5596, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4013, .patterns=0, .final=0, .range=0 },/* 4012 */
      { .f_node=5293, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4014, .patterns=0, .final=0, .range=0 },/* 4013 */
      { .f_node=877, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4015, .patterns=0, .final=0, .range=0 },/* 4014 */
      { .f_node=1763, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4016, .patterns=0, .final=0, .range=0 },/* 4015 */
      { .f_node=1811, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4017, .patterns=0, .final=0, .range=0 },/* 4016 */
      { .f_node=1812, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4018, .patterns=0, .final=0, .range=0 },/* 4017 */
      { .f_node=1813, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4019, .patterns=0, .final=0, .range=0 },/* 4018 */
      { .f_node=1814, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4020, .patterns=0, .final=0, .range=0 },/* 4019 */
      { .f_node=1815, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4021, .patterns=0, .final=0, .range=0 },/* 4020 */
      { .f_node=1853, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4022, .patterns=438, .final=1, .range=0 },/* 4021 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4023, .patterns=0, .final=0, .range=0 },/* 4022 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4024, .patterns=0, .final=0, .range=0 },/* 4023 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=440, .final=1, .range=0 },/* 4024 */
      { .f_node=2762, .degree=0, .alpha=0x73/* 's' */, .outgoing=4026, .patterns=0, .final=0, .range=0 },/* 4025 */
      { .f_node=2908, .degree=0, .alpha=0x74/* 't' */, .outgoing=4027, .patterns=0, .final=0, .range=0 },/* 4026 */
      { .f_node=4573, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4028, .patterns=0, .final=0, .range=0 },/* 4027 */
      { .f_node=4644, .degree=0, .alpha=0x62/* 'b' */, .outgoing=4029, .patterns=0, .final=0, .range=0 },/* 4028 */
      { .f_node=4204, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4030, .patterns=0, .final=0, .range=0 },/* 4029 */
      { .f_node=4205, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4031, .patterns=0, .final=0, .range=0 },/* 4030 */
      { .f_node=4206, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4032, .patterns=0, .final=0, .range=0 },/* 4031 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4033, .patterns=0, .final=0, .range=0 },/* 4032 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4034, .patterns=0, .final=0, .range=0 },/* 4033 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4035, .patterns=0, .final=0, .range=0 },/* 4034 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=441, .final=1, .range=0 },/* 4035 */
      { .f_node=2710, .degree=0, .alpha=0x36/* '6' */, .outgoing=4037, .patterns=0, .final=0, .range=0 },/* 4036 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=4038, .patterns=0, .final=0, .range=0 },/* 4037 */
      { .f_node=5969, .degree=2, .alpha=0x74, .outgoing=1196, .patterns=0, .final=0, .range=1 },/* 4038 */
      { .f_node=5980, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4040, .patterns=0, .final=0, .range=0 },/* 4039 */
      { .f_node=5042, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=4041, .patterns=0, .final=0, .range=0 },/* 4040 */
      { .f_node=5043, .degree=0, .alpha=0x74/* 't' */, .outgoing=4042, .patterns=0, .final=0, .range=0 },/* 4041 */
      { .f_node=5044, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4043, .patterns=0, .final=0, .range=0 },/* 4042 */
      { .f_node=5045, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=4044, .patterns=0, .final=0, .range=0 },/* 4043 */
      { .f_node=5046, .degree=1, .alpha=0x00, .outgoing=1199, .patterns=0, .final=0, .range=0 },/* 4044 */
      { .f_node=5969, .degree=3, .alpha=0x73, .outgoing=1201, .patterns=0, .final=0, .range=1 },/* 4045 */
      { .f_node=4278, .degree=2, .alpha=0x67, .outgoing=1205, .patterns=0, .final=0, .range=1 },/* 4046 */
      { .f_node=5159, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4048, .patterns=0, .final=0, .range=0 },/* 4047 */
      { .f_node=5239, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4049, .patterns=0, .final=0, .range=0 },/* 4048 */
      { .f_node=1881, .degree=0, .alpha=0x62/* 'b' */, .outgoing=4050, .patterns=0, .final=0, .range=0 },/* 4049 */
      { .f_node=3325, .degree=0, .alpha=0x79/* 'y' */, .outgoing=4051, .patterns=0, .final=0, .range=0 },/* 4050 */
      { .f_node=4253, .degree=0, .alpha=0x74/* 't' */, .outgoing=4052, .patterns=0, .final=0, .range=0 },/* 4051 */
      { .f_node=4254, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4053, .patterns=0, .final=0, .range=0 },/* 4052 */
      { .f_node=4255, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4054, .patterns=0, .final=0, .range=0 },/* 4053 */
      { .f_node=3324, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4055, .patterns=0, .final=0, .range=0 },/* 4054 */
      { .f_node=3393, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4056, .patterns=0, .final=0, .range=0 },/* 4055 */
      { .f_node=3451, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4057, .patterns=0, .final=0, .range=0 },/* 4056 */
      { .f_node=5239, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4058, .patterns=0, .final=0, .range=0 },/* 4057 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4059, .patterns=0, .final=0, .range=0 },/* 4058 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4060, .patterns=0, .final=0, .range=0 },/* 4059 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=442, .final=1, .range=0 },/* 4060 */
      { .f_node=4366, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4062, .patterns=0, .final=0, .range=0 },/* 4061 */
      { .f_node=4367, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4063, .patterns=0, .final=0, .range=0 },/* 4062 */
      { .f_node=4368, .degree=0, .alpha=0x2d/* '-' */, .outgoing=4064, .patterns=0, .final=0, .range=0 },/* 4063 */
      { .f_node=5969, .degree=0, .alpha=0x76/* 'v' */, .outgoing=4065, .patterns=0, .final=0, .range=0 },/* 4064 */
      { .f_node=5786, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4066, .patterns=0, .final=0, .range=0 },/* 4065 */
      { .f_node=2762, .degree=0, .alpha=0x2d/* '-' */, .outgoing=4067, .patterns=0, .final=0, .range=0 },/* 4066 */
      { .f_node=5969, .degree=0, .alpha=0x68/* 'h' */, .outgoing=4068, .patterns=0, .final=0, .range=0 },/* 4067 */
      { .f_node=5919, .degree=0, .alpha=0x32/* '2' */, .outgoing=4069, .patterns=0, .final=0, .range=0 },/* 4068 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4070, .patterns=0, .final=0, .range=0 },/* 4069 */
      { .f_node=877, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4071, .patterns=0, .final=0, .range=0 },/* 4070 */
      { .f_node=1881, .degree=0, .alpha=0x62/* 'b' */, .outgoing=4072, .patterns=0, .final=0, .range=0 },/* 4071 */
      { .f_node=3325, .degree=0, .alpha=0x79/* 'y' */, .outgoing=4073, .patterns=0, .final=0, .range=0 },/* 4072 */
      { .f_node=4253, .degree=0, .alpha=0x74/* 't' */, .outgoing=4074, .patterns=0, .final=0, .range=0 },/* 4073 */
      { .f_node=4254, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4075, .patterns=0, .final=0, .range=0 },/* 4074 */
      { .f_node=4255, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4076, .patterns=0, .final=0, .range=0 },/* 4075 */
      { .f_node=3324, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4077, .patterns=0, .final=0, .range=0 },/* 4076 */
      { .f_node=3393, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4078, .patterns=0, .final=0, .range=0 },/* 4077 */
      { .f_node=3451, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4079, .patterns=0, .final=0, .range=0 },/* 4078 */
      { .f_node=5239, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4080, .patterns=0, .final=0, .range=0 },/* 4079 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4081, .patterns=0, .final=0, .range=0 },/* 4080 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4082, .patterns=0, .final=0, .range=0 },/* 4081 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=443, .final=1, .range=0 },/* 4082 */
      { .f_node=5786, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4084, .patterns=0, .final=0, .range=0 },/* 4083 */
      { .f_node=2762, .degree=1, .alpha=0x2d, .outgoing=1208, .patterns=0, .final=0, .range=1 },/* 4084 */
      { .f_node=5969, .degree=0, .alpha=0x68/* 'h' */, .outgoing=4086, .patterns=0, .final=0, .range=0 },/* 4085 */
      { .f_node=5919, .degree=0, .alpha=0x32/* '2' */, .outgoing=4087, .patterns=0, .final=0, .range=0 },/* 4086 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4088, .patterns=0, .final=0, .range=0 },/* 4087 */
      { .f_node=877, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4089, .patterns=0, .final=0, .range=0 },/* 4088 */
      { .f_node=1881, .degree=0, .alpha=0x62/* 'b' */, .outgoing=4090, .patterns=0, .final=0, .range=0 },/* 4089 */
      { .f_node=3325, .degree=0, .alpha=0x79/* 'y' */, .outgoing=4091, .patterns=0, .final=0, .range=0 },/* 4090 */
      { .f_node=4253, .degree=0, .alpha=0x74/* 't' */, .outgoing=4092, .patterns=0, .final=0, .range=0 },/* 4091 */
      { .f_node=4254, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4093, .patterns=0, .final=0, .range=0 },/* 4092 */
      { .f_node=4255, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4094, .patterns=0, .final=0, .range=0 },/* 4093 */
      { .f_node=3324, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4095, .patterns=0, .final=0, .range=0 },/* 4094 */
      { .f_node=3393, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4096, .patterns=0, .final=0, .range=0 },/* 4095 */
      { .f_node=3451, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4097, .patterns=0, .final=0, .range=0 },/* 4096 */
      { .f_node=5239, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4098, .patterns=0, .final=0, .range=0 },/* 4097 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4099, .patterns=0, .final=0, .range=0 },/* 4098 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4100, .patterns=0, .final=0, .range=0 },/* 4099 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=444, .final=1, .range=0 },/* 4100 */
      { .f_node=877, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4102, .patterns=0, .final=0, .range=0 },/* 4101 */
      { .f_node=1881, .degree=0, .alpha=0x62/* 'b' */, .outgoing=4103, .patterns=0, .final=0, .range=0 },/* 4102 */
      { .f_node=3325, .degree=0, .alpha=0x79/* 'y' */, .outgoing=4104, .patterns=0, .final=0, .range=0 },/* 4103 */
      { .f_node=4253, .degree=0, .alpha=0x74/* 't' */, .outgoing=4105, .patterns=0, .final=0, .range=0 },/* 4104 */
      { .f_node=4254, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4106, .patterns=0, .final=0, .range=0 },/* 4105 */
      { .f_node=4255, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4107, .patterns=0, .final=0, .range=0 },/* 4106 */
      { .f_node=3324, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4108, .patterns=0, .final=0, .range=0 },/* 4107 */
      { .f_node=3393, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4109, .patterns=0, .final=0, .range=0 },/* 4108 */
      { .f_node=3451, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4110, .patterns=0, .final=0, .range=0 },/* 4109 */
      { .f_node=5239, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4111, .patterns=0, .final=0, .range=0 },/* 4110 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4112, .patterns=0, .final=0, .range=0 },/* 4111 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4113, .patterns=0, .final=0, .range=0 },/* 4112 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=445, .final=1, .range=0 },/* 4113 */
      { .f_node=5047, .degree=0, .alpha=0x64/* 'd' */, .outgoing=4115, .patterns=0, .final=0, .range=0 },/* 4114 */
      { .f_node=5048, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4116, .patterns=0, .final=0, .range=0 },/* 4115 */
      { .f_node=5049, .degree=0, .alpha=0x2d/* '-' */, .outgoing=4117, .patterns=0, .final=0, .range=0 },/* 4116 */
      { .f_node=5969, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4118, .patterns=0, .final=0, .range=0 },/* 4117 */
      { .f_node=5471, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4119, .patterns=0, .final=0, .range=0 },/* 4118 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4120, .patterns=0, .final=0, .range=0 },/* 4119 */
      { .f_node=5520, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4121, .patterns=0, .final=0, .range=0 },/* 4120 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4122, .patterns=0, .final=0, .range=0 },/* 4121 */
      { .f_node=878, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=4123, .patterns=0, .final=0, .range=0 },/* 4122 */
      { .f_node=901, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4124, .patterns=0, .final=0, .range=0 },/* 4123 */
      { .f_node=902, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4125, .patterns=0, .final=0, .range=0 },/* 4124 */
      { .f_node=2808, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4126, .patterns=0, .final=0, .range=0 },/* 4125 */
      { .f_node=2809, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4127, .patterns=0, .final=0, .range=0 },/* 4126 */
      { .f_node=4710, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=4128, .patterns=0, .final=0, .range=0 },/* 4127 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4129, .patterns=0, .final=0, .range=0 },/* 4128 */
      { .f_node=3733, .degree=0, .alpha=0x64/* 'd' */, .outgoing=4130, .patterns=0, .final=0, .range=0 },/* 4129 */
      { .f_node=3905, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4131, .patterns=0, .final=0, .range=0 },/* 4130 */
      { .f_node=772, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4132, .patterns=0, .final=0, .range=0 },/* 4131 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4133, .patterns=0, .final=0, .range=0 },/* 4132 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=4134, .patterns=0, .final=0, .range=0 },/* 4133 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=446, .final=1, .range=0 },/* 4134 */
      { .f_node=5786, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4136, .patterns=0, .final=0, .range=0 },/* 4135 */
      { .f_node=2762, .degree=0, .alpha=0x2d/* '-' */, .outgoing=4137, .patterns=0, .final=0, .range=0 },/* 4136 */
      { .f_node=5969, .degree=0, .alpha=0x74/* 't' */, .outgoing=4138, .patterns=0, .final=0, .range=0 },/* 4137 */
      { .f_node=5980, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4139, .patterns=0, .final=0, .range=0 },/* 4138 */
      { .f_node=5042, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=4140, .patterns=0, .final=0, .range=0 },/* 4139 */
      { .f_node=5043, .degree=0, .alpha=0x74/* 't' */, .outgoing=4141, .patterns=0, .final=0, .range=0 },/* 4140 */
      { .f_node=5044, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4142, .patterns=0, .final=0, .range=0 },/* 4141 */
      { .f_node=5045, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=4143, .patterns=0, .final=0, .range=0 },/* 4142 */
      { .f_node=5046, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4144, .patterns=0, .final=0, .range=0 },/* 4143 */
      { .f_node=5080, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4145, .patterns=0, .final=0, .range=0 },/* 4144 */
      { .f_node=1881, .degree=0, .alpha=0x62/* 'b' */, .outgoing=4146, .patterns=0, .final=0, .range=0 },/* 4145 */
      { .f_node=3325, .degree=0, .alpha=0x79/* 'y' */, .outgoing=4147, .patterns=0, .final=0, .range=0 },/* 4146 */
      { .f_node=4253, .degree=0, .alpha=0x74/* 't' */, .outgoing=4148, .patterns=0, .final=0, .range=0 },/* 4147 */
      { .f_node=4254, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4149, .patterns=0, .final=0, .range=0 },/* 4148 */
      { .f_node=4255, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4150, .patterns=0, .final=0, .range=0 },/* 4149 */
      { .f_node=3324, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4151, .patterns=0, .final=0, .range=0 },/* 4150 */
      { .f_node=3393, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4152, .patterns=0, .final=0, .range=0 },/* 4151 */
      { .f_node=3451, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4153, .patterns=0, .final=0, .range=0 },/* 4152 */
      { .f_node=5239, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4154, .patterns=0, .final=0, .range=0 },/* 4153 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4155, .patterns=0, .final=0, .range=0 },/* 4154 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4156, .patterns=0, .final=0, .range=0 },/* 4155 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=447, .final=1, .range=0 },/* 4156 */
      { .f_node=3324, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4158, .patterns=0, .final=0, .range=0 },/* 4157 */
      { .f_node=3492, .degree=0, .alpha=0x74/* 't' */, .outgoing=4159, .patterns=0, .final=0, .range=0 },/* 4158 */
      { .f_node=5464, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4160, .patterns=0, .final=0, .range=0 },/* 4159 */
      { .f_node=4956, .degree=0, .alpha=0x72/* 'r' */, .outgoing=4161, .patterns=0, .final=0, .range=0 },/* 4160 */
      { .f_node=5596, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4162, .patterns=0, .final=0, .range=0 },/* 4161 */
      { .f_node=5611, .degree=0, .alpha=0x73/* 's' */, .outgoing=4163, .patterns=0, .final=0, .range=0 },/* 4162 */
      { .f_node=5612, .degree=0, .alpha=0x74/* 't' */, .outgoing=4164, .patterns=0, .final=0, .range=0 },/* 4163 */
      { .f_node=4573, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4165, .patterns=0, .final=0, .range=0 },/* 4164 */
      { .f_node=877, .degree=10, .alpha=0x63, .outgoing=1210, .patterns=448, .final=1, .range=1 },/* 4165 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4167, .patterns=0, .final=0, .range=0 },/* 4166 */
      { .f_node=5499, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4168, .patterns=0, .final=0, .range=0 },/* 4167 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=449, .final=1, .range=0 },/* 4168 */
      { .f_node=1763, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4170, .patterns=0, .final=0, .range=0 },/* 4169 */
      { .f_node=5293, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4171, .patterns=0, .final=0, .range=0 },/* 4170 */
      { .f_node=5304, .degree=0, .alpha=0x62/* 'b' */, .outgoing=4172, .patterns=0, .final=0, .range=0 },/* 4171 */
      { .f_node=4204, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4173, .patterns=0, .final=0, .range=0 },/* 4172 */
      { .f_node=2762, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4174, .patterns=0, .final=0, .range=0 },/* 4173 */
      { .f_node=2793, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4175, .patterns=0, .final=0, .range=0 },/* 4174 */
      { .f_node=877, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4176, .patterns=0, .final=0, .range=0 },/* 4175 */
      { .f_node=1285, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4177, .patterns=0, .final=0, .range=0 },/* 4176 */
      { .f_node=4709, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4178, .patterns=0, .final=0, .range=0 },/* 4177 */
      { .f_node=4731, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4179, .patterns=0, .final=0, .range=0 },/* 4178 */
      { .f_node=877, .degree=0, .alpha=0x66/* 'f' */, .outgoing=4180, .patterns=0, .final=0, .range=0 },/* 4179 */
      { .f_node=2299, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4181, .patterns=0, .final=0, .range=0 },/* 4180 */
      { .f_node=2300, .degree=0, .alpha=0x73/* 's' */, .outgoing=4182, .patterns=0, .final=0, .range=0 },/* 4181 */
      { .f_node=5344, .degree=0, .alpha=0x74/* 't' */, .outgoing=4183, .patterns=0, .final=0, .range=0 },/* 4182 */
      { .f_node=5345, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4184, .patterns=0, .final=0, .range=0 },/* 4183 */
      { .f_node=5084, .degree=0, .alpha=0x79/* 'y' */, .outgoing=4185, .patterns=0, .final=0, .range=0 },/* 4184 */
      { .f_node=5800, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4186, .patterns=0, .final=0, .range=0 },/* 4185 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4187, .patterns=0, .final=0, .range=0 },/* 4186 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4188, .patterns=0, .final=0, .range=0 },/* 4187 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=4189, .patterns=0, .final=0, .range=0 },/* 4188 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=450, .final=1, .range=0 },/* 4189 */
      { .f_node=1285, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4191, .patterns=0, .final=0, .range=0 },/* 4190 */
      { .f_node=4709, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4192, .patterns=0, .final=0, .range=0 },/* 4191 */
      { .f_node=4731, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4193, .patterns=0, .final=0, .range=0 },/* 4192 */
      { .f_node=877, .degree=0, .alpha=0x66/* 'f' */, .outgoing=4194, .patterns=0, .final=0, .range=0 },/* 4193 */
      { .f_node=2299, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4195, .patterns=0, .final=0, .range=0 },/* 4194 */
      { .f_node=2300, .degree=0, .alpha=0x73/* 's' */, .outgoing=4196, .patterns=0, .final=0, .range=0 },/* 4195 */
      { .f_node=5344, .degree=0, .alpha=0x74/* 't' */, .outgoing=4197, .patterns=0, .final=0, .range=0 },/* 4196 */
      { .f_node=5345, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4198, .patterns=0, .final=0, .range=0 },/* 4197 */
      { .f_node=5084, .degree=0, .alpha=0x79/* 'y' */, .outgoing=4199, .patterns=0, .final=0, .range=0 },/* 4198 */
      { .f_node=5800, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4200, .patterns=0, .final=0, .range=0 },/* 4199 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4201, .patterns=0, .final=0, .range=0 },/* 4200 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4202, .patterns=0, .final=0, .range=0 },/* 4201 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=4203, .patterns=0, .final=0, .range=0 },/* 4202 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=451, .final=1, .range=0 },/* 4203 */
      { .f_node=1, .degree=16, .alpha=0x69, .outgoing=1221, .patterns=0, .final=0, .range=1 },/* 4204 */
      { .f_node=3324, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4206, .patterns=0, .final=0, .range=0 },/* 4205 */
      { .f_node=3492, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4207, .patterns=0, .final=0, .range=0 },/* 4206 */
      { .f_node=5159, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4208, .patterns=0, .final=0, .range=0 },/* 4207 */
      { .f_node=5239, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4209, .patterns=0, .final=0, .range=0 },/* 4208 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4210, .patterns=0, .final=0, .range=0 },/* 4209 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4211, .patterns=0, .final=0, .range=0 },/* 4210 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=452, .final=1, .range=0 },/* 4211 */
      { .f_node=5596, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4213, .patterns=0, .final=0, .range=0 },/* 4212 */
      { .f_node=2762, .degree=0, .alpha=0x73/* 's' */, .outgoing=4214, .patterns=0, .final=0, .range=0 },/* 4213 */
      { .f_node=2908, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4215, .patterns=0, .final=0, .range=0 },/* 4214 */
      { .f_node=4366, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4216, .patterns=0, .final=0, .range=0 },/* 4215 */
      { .f_node=5293, .degree=0, .alpha=0x62/* 'b' */, .outgoing=4217, .patterns=0, .final=0, .range=0 },/* 4216 */
      { .f_node=4204, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4218, .patterns=0, .final=0, .range=0 },/* 4217 */
      { .f_node=2762, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4219, .patterns=0, .final=0, .range=0 },/* 4218 */
      { .f_node=2866, .degree=0, .alpha=0x64/* 'd' */, .outgoing=4220, .patterns=0, .final=0, .range=0 },/* 4219 */
      { .f_node=2867, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4221, .patterns=0, .final=0, .range=0 },/* 4220 */
      { .f_node=413, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4222, .patterns=0, .final=0, .range=0 },/* 4221 */
      { .f_node=2793, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4223, .patterns=0, .final=0, .range=0 },/* 4222 */
      { .f_node=2762, .degree=0, .alpha=0x72/* 'r' */, .outgoing=4224, .patterns=0, .final=0, .range=0 },/* 4223 */
      { .f_node=5596, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4225, .patterns=0, .final=0, .range=0 },/* 4224 */
      { .f_node=5159, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4226, .patterns=0, .final=0, .range=0 },/* 4225 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4227, .patterns=0, .final=0, .range=0 },/* 4226 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4228, .patterns=0, .final=0, .range=0 },/* 4227 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4229, .patterns=0, .final=0, .range=0 },/* 4228 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4230, .patterns=0, .final=0, .range=0 },/* 4229 */
      { .f_node=5520, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4231, .patterns=0, .final=0, .range=0 },/* 4230 */
      { .f_node=877, .degree=0, .alpha=0x62/* 'b' */, .outgoing=4232, .patterns=0, .final=0, .range=0 },/* 4231 */
      { .f_node=1678, .degree=0, .alpha=0x72/* 'r' */, .outgoing=4233, .patterns=0, .final=0, .range=0 },/* 4232 */
      { .f_node=4212, .degree=0, .alpha=0x00, .outgoing=0, .patterns=453, .final=1, .range=0 },/* 4233 */
      { .f_node=5858, .degree=0, .alpha=0x79/* 'y' */, .outgoing=4235, .patterns=0, .final=0, .range=0 },/* 4234 */
      { .f_node=5800, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4236, .patterns=0, .final=0, .range=0 },/* 4235 */
      { .f_node=877, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4237, .patterns=0, .final=0, .range=0 },/* 4236 */
      { .f_node=1881, .degree=0, .alpha=0x74/* 't' */, .outgoing=4238, .patterns=0, .final=0, .range=0 },/* 4237 */
      { .f_node=3538, .degree=0, .alpha=0x75/* 'u' */, .outgoing=4239, .patterns=0, .final=0, .range=0 },/* 4238 */
      { .f_node=3539, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4240, .patterns=0, .final=0, .range=0 },/* 4239 */
      { .f_node=3540, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4241, .patterns=0, .final=0, .range=0 },/* 4240 */
      { .f_node=3541, .degree=0, .alpha=0x73/* 's' */, .outgoing=4242, .patterns=0, .final=0, .range=0 },/* 4241 */
      { .f_node=3542, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4243, .patterns=0, .final=0, .range=0 },/* 4242 */
      { .f_node=3553, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4244, .patterns=0, .final=0, .range=0 },/* 4243 */
      { .f_node=3554, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4245, .patterns=0, .final=0, .range=0 },/* 4244 */
      { .f_node=3555, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4246, .patterns=0, .final=0, .range=0 },/* 4245 */
      { .f_node=3556, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4247, .patterns=0, .final=0, .range=0 },/* 4246 */
      { .f_node=3557, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4248, .patterns=0, .final=0, .range=0 },/* 4247 */
      { .f_node=3558, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4249, .patterns=0, .final=0, .range=0 },/* 4248 */
      { .f_node=3559, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4250, .patterns=0, .final=0, .range=0 },/* 4249 */
      { .f_node=3560, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4251, .patterns=0, .final=0, .range=0 },/* 4250 */
      { .f_node=3561, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4252, .patterns=0, .final=0, .range=0 },/* 4251 */
      { .f_node=3562, .degree=0, .alpha=0x00, .outgoing=0, .patterns=454, .final=1, .range=0 },/* 4252 */
      { .f_node=5800, .degree=0, .alpha=0x74/* 't' */, .outgoing=4254, .patterns=0, .final=0, .range=0 },/* 4253 */
      { .f_node=5846, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4255, .patterns=0, .final=0, .range=0 },/* 4254 */
      { .f_node=4956, .degree=12, .alpha=0x63, .outgoing=1238, .patterns=0, .final=0, .range=1 },/* 4255 */
      { .f_node=5471, .degree=0, .alpha=0x64/* 'd' */, .outgoing=4257, .patterns=0, .final=0, .range=0 },/* 4256 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4258, .patterns=0, .final=0, .range=0 },/* 4257 */
      { .f_node=436, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4259, .patterns=0, .final=0, .range=0 },/* 4258 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4260, .patterns=0, .final=0, .range=0 },/* 4259 */
      { .f_node=1545, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4261, .patterns=0, .final=0, .range=0 },/* 4260 */
      { .f_node=1594, .degree=0, .alpha=0x00, .outgoing=0, .patterns=457, .final=1, .range=0 },/* 4261 */
      { .f_node=3905, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4263, .patterns=0, .final=0, .range=0 },/* 4262 */
      { .f_node=772, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4264, .patterns=0, .final=0, .range=0 },/* 4263 */
      { .f_node=2338, .degree=0, .alpha=0x72/* 'r' */, .outgoing=4265, .patterns=0, .final=0, .range=0 },/* 4264 */
      { .f_node=3669, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4266, .patterns=0, .final=0, .range=0 },/* 4265 */
      { .f_node=5159, .degree=0, .alpha=0x00, .outgoing=0, .patterns=458, .final=1, .range=0 },/* 4266 */
      { .f_node=3563, .degree=0, .alpha=0x76/* 'v' */, .outgoing=4268, .patterns=0, .final=0, .range=0 },/* 4267 */
      { .f_node=5786, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4269, .patterns=0, .final=0, .range=0 },/* 4268 */
      { .f_node=3733, .degree=0, .alpha=0x72/* 'r' */, .outgoing=4270, .patterns=0, .final=0, .range=0 },/* 4269 */
      { .f_node=5596, .degree=0, .alpha=0x73/* 's' */, .outgoing=4271, .patterns=0, .final=0, .range=0 },/* 4270 */
      { .f_node=4278, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4272, .patterns=0, .final=0, .range=0 },/* 4271 */
      { .f_node=4302, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4273, .patterns=0, .final=0, .range=0 },/* 4272 */
      { .f_node=4320, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4274, .patterns=0, .final=0, .range=0 },/* 4273 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4275, .patterns=0, .final=0, .range=0 },/* 4274 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4276, .patterns=0, .final=0, .range=0 },/* 4275 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4277, .patterns=0, .final=0, .range=0 },/* 4276 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=459, .final=1, .range=0 },/* 4277 */
      { .f_node=1, .degree=20, .alpha=0x63, .outgoing=1251, .patterns=0, .final=0, .range=1 },/* 4278 */
      { .f_node=5471, .degree=0, .alpha=0x2d/* '-' */, .outgoing=4280, .patterns=0, .final=0, .range=0 },/* 4279 */
      { .f_node=5969, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4281, .patterns=0, .final=0, .range=0 },/* 4280 */
      { .f_node=2762, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4282, .patterns=0, .final=0, .range=0 },/* 4281 */
      { .f_node=2866, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4283, .patterns=0, .final=0, .range=0 },/* 4282 */
      { .f_node=2762, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4284, .patterns=0, .final=0, .range=0 },/* 4283 */
      { .f_node=2793, .degree=0, .alpha=0x79/* 'y' */, .outgoing=4285, .patterns=0, .final=0, .range=0 },/* 4284 */
      { .f_node=5800, .degree=0, .alpha=0x74/* 't' */, .outgoing=4286, .patterns=0, .final=0, .range=0 },/* 4285 */
      { .f_node=5846, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4287, .patterns=0, .final=0, .range=0 },/* 4286 */
      { .f_node=5042, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4288, .patterns=0, .final=0, .range=0 },/* 4287 */
      { .f_node=5471, .degree=0, .alpha=0x73/* 's' */, .outgoing=4289, .patterns=0, .final=0, .range=0 },/* 4288 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4290, .patterns=0, .final=0, .range=0 },/* 4289 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4291, .patterns=0, .final=0, .range=0 },/* 4290 */
      { .f_node=878, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4292, .patterns=0, .final=0, .range=0 },/* 4291 */
      { .f_node=930, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4293, .patterns=0, .final=0, .range=0 },/* 4292 */
      { .f_node=931, .degree=0, .alpha=0x73/* 's' */, .outgoing=4294, .patterns=0, .final=0, .range=0 },/* 4293 */
      { .f_node=4278, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4295, .patterns=0, .final=0, .range=0 },/* 4294 */
      { .f_node=4478, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4296, .patterns=0, .final=0, .range=0 },/* 4295 */
      { .f_node=4487, .degree=0, .alpha=0x74/* 't' */, .outgoing=4297, .patterns=0, .final=0, .range=0 },/* 4296 */
      { .f_node=4488, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4298, .patterns=0, .final=0, .range=0 },/* 4297 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4299, .patterns=0, .final=0, .range=0 },/* 4298 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4300, .patterns=0, .final=0, .range=0 },/* 4299 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4301, .patterns=0, .final=0, .range=0 },/* 4300 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=460, .final=1, .range=0 },/* 4301 */
      { .f_node=3733, .degree=1, .alpha=0x00, .outgoing=1272, .patterns=0, .final=0, .range=0 },/* 4302 */
      { .f_node=877, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4304, .patterns=0, .final=0, .range=0 },/* 4303 */
      { .f_node=1881, .degree=0, .alpha=0x74/* 't' */, .outgoing=4305, .patterns=0, .final=0, .range=0 },/* 4304 */
      { .f_node=3538, .degree=0, .alpha=0x75/* 'u' */, .outgoing=4306, .patterns=0, .final=0, .range=0 },/* 4305 */
      { .f_node=3539, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4307, .patterns=0, .final=0, .range=0 },/* 4306 */
      { .f_node=3540, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4308, .patterns=0, .final=0, .range=0 },/* 4307 */
      { .f_node=3541, .degree=0, .alpha=0x73/* 's' */, .outgoing=4309, .patterns=0, .final=0, .range=0 },/* 4308 */
      { .f_node=3542, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4310, .patterns=0, .final=0, .range=0 },/* 4309 */
      { .f_node=3553, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4311, .patterns=0, .final=0, .range=0 },/* 4310 */
      { .f_node=3554, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4312, .patterns=0, .final=0, .range=0 },/* 4311 */
      { .f_node=3555, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4313, .patterns=0, .final=0, .range=0 },/* 4312 */
      { .f_node=3556, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4314, .patterns=0, .final=0, .range=0 },/* 4313 */
      { .f_node=3557, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4315, .patterns=0, .final=0, .range=0 },/* 4314 */
      { .f_node=3558, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4316, .patterns=0, .final=0, .range=0 },/* 4315 */
      { .f_node=3559, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4317, .patterns=0, .final=0, .range=0 },/* 4316 */
      { .f_node=3560, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4318, .patterns=0, .final=0, .range=0 },/* 4317 */
      { .f_node=3561, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4319, .patterns=0, .final=0, .range=0 },/* 4318 */
      { .f_node=3562, .degree=0, .alpha=0x00, .outgoing=0, .patterns=461, .final=1, .range=0 },/* 4319 */
      { .f_node=2762, .degree=0, .alpha=0x72/* 'r' */, .outgoing=4321, .patterns=0, .final=0, .range=0 },/* 4320 */
      { .f_node=5596, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4322, .patterns=0, .final=0, .range=0 },/* 4321 */
      { .f_node=5471, .degree=0, .alpha=0x68/* 'h' */, .outgoing=4323, .patterns=0, .final=0, .range=0 },/* 4322 */
      { .f_node=5919, .degree=0, .alpha=0x2d/* '-' */, .outgoing=4324, .patterns=0, .final=0, .range=0 },/* 4323 */
      { .f_node=5969, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4325, .patterns=0, .final=0, .range=0 },/* 4324 */
      { .f_node=2762, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4326, .patterns=0, .final=0, .range=0 },/* 4325 */
      { .f_node=2891, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4327, .patterns=0, .final=0, .range=0 },/* 4326 */
      { .f_node=4157, .degree=0, .alpha=0x2d/* '-' */, .outgoing=4328, .patterns=0, .final=0, .range=0 },/* 4327 */
      { .f_node=5969, .degree=0, .alpha=0x64/* 'd' */, .outgoing=4329, .patterns=0, .final=0, .range=0 },/* 4328 */
      { .f_node=2, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4330, .patterns=0, .final=0, .range=0 },/* 4329 */
      { .f_node=786, .degree=0, .alpha=0x73/* 's' */, .outgoing=4331, .patterns=0, .final=0, .range=0 },/* 4330 */
      { .f_node=787, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4332, .patterns=0, .final=0, .range=0 },/* 4331 */
      { .f_node=813, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4333, .patterns=0, .final=0, .range=0 },/* 4332 */
      { .f_node=814, .degree=0, .alpha=0x79/* 'y' */, .outgoing=4334, .patterns=0, .final=0, .range=0 },/* 4333 */
      { .f_node=815, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4335, .patterns=0, .final=0, .range=0 },/* 4334 */
      { .f_node=877, .degree=0, .alpha=0x62/* 'b' */, .outgoing=4336, .patterns=0, .final=0, .range=0 },/* 4335 */
      { .f_node=1678, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4337, .patterns=0, .final=0, .range=0 },/* 4336 */
      { .f_node=2762, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4338, .patterns=0, .final=0, .range=0 },/* 4337 */
      { .f_node=2808, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4339, .patterns=0, .final=0, .range=0 },/* 4338 */
      { .f_node=5159, .degree=0, .alpha=0x72/* 'r' */, .outgoing=4340, .patterns=0, .final=0, .range=0 },/* 4339 */
      { .f_node=5596, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4341, .patterns=0, .final=0, .range=0 },/* 4340 */
      { .f_node=3324, .degree=0, .alpha=0x64/* 'd' */, .outgoing=4342, .patterns=0, .final=0, .range=0 },/* 4341 */
      { .f_node=2, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4343, .patterns=0, .final=0, .range=0 },/* 4342 */
      { .f_node=772, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4344, .patterns=0, .final=0, .range=0 },/* 4343 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4345, .patterns=0, .final=0, .range=0 },/* 4344 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4346, .patterns=0, .final=0, .range=0 },/* 4345 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=464, .final=1, .range=0 },/* 4346 */
      { .f_node=5919, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4348, .patterns=0, .final=0, .range=0 },/* 4347 */
      { .f_node=2762, .degree=0, .alpha=0x72/* 'r' */, .outgoing=4349, .patterns=0, .final=0, .range=0 },/* 4348 */
      { .f_node=5596, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4350, .patterns=0, .final=0, .range=0 },/* 4349 */
      { .f_node=5611, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4351, .patterns=0, .final=0, .range=0 },/* 4350 */
      { .f_node=3983, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4352, .patterns=0, .final=0, .range=0 },/* 4351 */
      { .f_node=3563, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4353, .patterns=0, .final=0, .range=0 },/* 4352 */
      { .f_node=3324, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4354, .patterns=0, .final=0, .range=0 },/* 4353 */
      { .f_node=3492, .degree=0, .alpha=0x74/* 't' */, .outgoing=4355, .patterns=0, .final=0, .range=0 },/* 4354 */
      { .f_node=5464, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4356, .patterns=0, .final=0, .range=0 },/* 4355 */
      { .f_node=5465, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4357, .patterns=0, .final=0, .range=0 },/* 4356 */
      { .f_node=3609, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4358, .patterns=0, .final=0, .range=0 },/* 4357 */
      { .f_node=5293, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4359, .patterns=0, .final=0, .range=0 },/* 4358 */
      { .f_node=5294, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4360, .patterns=0, .final=0, .range=0 },/* 4359 */
      { .f_node=3492, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4361, .patterns=0, .final=0, .range=0 },/* 4360 */
      { .f_node=5419, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4362, .patterns=0, .final=0, .range=0 },/* 4361 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4363, .patterns=0, .final=0, .range=0 },/* 4362 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4364, .patterns=0, .final=0, .range=0 },/* 4363 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4365, .patterns=0, .final=0, .range=0 },/* 4364 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=465, .final=1, .range=0 },/* 4365 */
      { .f_node=3324, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4367, .patterns=0, .final=0, .range=0 },/* 4366 */
      { .f_node=3381, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4368, .patterns=0, .final=0, .range=0 },/* 4367 */
      { .f_node=5418, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4369, .patterns=0, .final=0, .range=0 },/* 4368 */
      { .f_node=2762, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4370, .patterns=0, .final=0, .range=0 },/* 4369 */
      { .f_node=2793, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4371, .patterns=0, .final=0, .range=0 },/* 4370 */
      { .f_node=877, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4372, .patterns=0, .final=0, .range=0 },/* 4371 */
      { .f_node=2338, .degree=0, .alpha=0x72/* 'r' */, .outgoing=4373, .patterns=0, .final=0, .range=0 },/* 4372 */
      { .f_node=3669, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4374, .patterns=0, .final=0, .range=0 },/* 4373 */
      { .f_node=5159, .degree=0, .alpha=0x00, .outgoing=0, .patterns=466, .final=1, .range=0 },/* 4374 */
      { .f_node=1, .degree=0, .alpha=0x79/* 'y' */, .outgoing=4376, .patterns=0, .final=0, .range=0 },/* 4375 */
      { .f_node=5800, .degree=15, .alpha=0x61, .outgoing=1274, .patterns=0, .final=0, .range=1 },/* 4376 */
      { .f_node=5801, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4378, .patterns=0, .final=0, .range=0 },/* 4377 */
      { .f_node=2891, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4379, .patterns=0, .final=0, .range=0 },/* 4378 */
      { .f_node=4157, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4380, .patterns=0, .final=0, .range=0 },/* 4379 */
      { .f_node=877, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4381, .patterns=0, .final=0, .range=0 },/* 4380 */
      { .f_node=1700, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4382, .patterns=0, .final=0, .range=0 },/* 4381 */
      { .f_node=1745, .degree=0, .alpha=0x76/* 'v' */, .outgoing=4383, .patterns=0, .final=0, .range=0 },/* 4382 */
      { .f_node=5786, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4384, .patterns=0, .final=0, .range=0 },/* 4383 */
      { .f_node=3733, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4385, .patterns=0, .final=0, .range=0 },/* 4384 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4386, .patterns=0, .final=0, .range=0 },/* 4385 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4387, .patterns=0, .final=0, .range=0 },/* 4386 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=4388, .patterns=0, .final=0, .range=0 },/* 4387 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=467, .final=1, .range=0 },/* 4388 */
      { .f_node=3983, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4390, .patterns=0, .final=0, .range=0 },/* 4389 */
      { .f_node=3733, .degree=0, .alpha=0x2d/* '-' */, .outgoing=4391, .patterns=0, .final=0, .range=0 },/* 4390 */
      { .f_node=5969, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4392, .patterns=0, .final=0, .range=0 },/* 4391 */
      { .f_node=5471, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4393, .patterns=0, .final=0, .range=0 },/* 4392 */
      { .f_node=5472, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4394, .patterns=0, .final=0, .range=0 },/* 4393 */
      { .f_node=2793, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4395, .patterns=0, .final=0, .range=0 },/* 4394 */
      { .f_node=5293, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4396, .patterns=0, .final=0, .range=0 },/* 4395 */
      { .f_node=5294, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4397, .patterns=0, .final=0, .range=0 },/* 4396 */
      { .f_node=3492, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4398, .patterns=0, .final=0, .range=0 },/* 4397 */
      { .f_node=5159, .degree=0, .alpha=0x2d/* '-' */, .outgoing=4399, .patterns=0, .final=0, .range=0 },/* 4398 */
      { .f_node=5969, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4400, .patterns=0, .final=0, .range=0 },/* 4399 */
      { .f_node=5970, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4401, .patterns=0, .final=0, .range=0 },/* 4400 */
      { .f_node=4771, .degree=0, .alpha=0x73/* 's' */, .outgoing=4402, .patterns=0, .final=0, .range=0 },/* 4401 */
      { .f_node=4278, .degree=0, .alpha=0x73/* 's' */, .outgoing=4403, .patterns=0, .final=0, .range=0 },/* 4402 */
      { .f_node=4278, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4404, .patterns=0, .final=0, .range=0 },/* 4403 */
      { .f_node=4302, .degree=0, .alpha=0x64/* 'd' */, .outgoing=4405, .patterns=0, .final=0, .range=0 },/* 4404 */
      { .f_node=3905, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4406, .patterns=0, .final=0, .range=0 },/* 4405 */
      { .f_node=5471, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4407, .patterns=0, .final=0, .range=0 },/* 4406 */
      { .f_node=5472, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4408, .patterns=0, .final=0, .range=0 },/* 4407 */
      { .f_node=2793, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4409, .patterns=0, .final=0, .range=0 },/* 4408 */
      { .f_node=5293, .degree=0, .alpha=0x73/* 's' */, .outgoing=4410, .patterns=0, .final=0, .range=0 },/* 4409 */
      { .f_node=4278, .degree=0, .alpha=0x72/* 'r' */, .outgoing=4411, .patterns=0, .final=0, .range=0 },/* 4410 */
      { .f_node=5596, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4412, .patterns=0, .final=0, .range=0 },/* 4411 */
      { .f_node=5611, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4413, .patterns=0, .final=0, .range=0 },/* 4412 */
      { .f_node=5159, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4414, .patterns=0, .final=0, .range=0 },/* 4413 */
      { .f_node=5252, .degree=0, .alpha=0x73/* 's' */, .outgoing=4415, .patterns=0, .final=0, .range=0 },/* 4414 */
      { .f_node=4278, .degree=0, .alpha=0x74/* 't' */, .outgoing=4416, .patterns=0, .final=0, .range=0 },/* 4415 */
      { .f_node=4573, .degree=0, .alpha=0x72/* 'r' */, .outgoing=4417, .patterns=0, .final=0, .range=0 },/* 4416 */
      { .f_node=5596, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4418, .patterns=0, .final=0, .range=0 },/* 4417 */
      { .f_node=2762, .degree=0, .alpha=0x72/* 'r' */, .outgoing=4419, .patterns=0, .final=0, .range=0 },/* 4418 */
      { .f_node=5596, .degree=0, .alpha=0x2d/* '-' */, .outgoing=4420, .patterns=0, .final=0, .range=0 },/* 4419 */
      { .f_node=5969, .degree=0, .alpha=0x00, .outgoing=0, .patterns=468, .final=1, .range=0 },/* 4420 */
      { .f_node=5293, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4422, .patterns=0, .final=0, .range=0 },/* 4421 */
      { .f_node=2762, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4423, .patterns=0, .final=0, .range=0 },/* 4422 */
      { .f_node=5471, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=4424, .patterns=0, .final=0, .range=0 },/* 4423 */
      { .f_node=1, .degree=1, .alpha=0x2d, .outgoing=1290, .patterns=0, .final=0, .range=1 },/* 4424 */
      { .f_node=5969, .degree=17, .alpha=0x61, .outgoing=1292, .patterns=0, .final=0, .range=1 },/* 4425 */
      { .f_node=2762, .degree=0, .alpha=0x73/* 's' */, .outgoing=4427, .patterns=0, .final=0, .range=0 },/* 4426 */
      { .f_node=2908, .degree=0, .alpha=0x73/* 's' */, .outgoing=4428, .patterns=0, .final=0, .range=0 },/* 4427 */
      { .f_node=2909, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4429, .patterns=0, .final=0, .range=0 },/* 4428 */
      { .f_node=2910, .degree=0, .alpha=0x74/* 't' */, .outgoing=4430, .patterns=0, .final=0, .range=0 },/* 4429 */
      { .f_node=2911, .degree=0, .alpha=0x73/* 's' */, .outgoing=4431, .patterns=0, .final=0, .range=0 },/* 4430 */
      { .f_node=2912, .degree=0, .alpha=0x32/* '2' */, .outgoing=4432, .patterns=0, .final=0, .range=0 },/* 4431 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4433, .patterns=0, .final=0, .range=0 },/* 4432 */
      { .f_node=877, .degree=0, .alpha=0x73/* 's' */, .outgoing=4434, .patterns=0, .final=0, .range=0 },/* 4433 */
      { .f_node=996, .degree=0, .alpha=0x33/* '3' */, .outgoing=4435, .patterns=0, .final=0, .range=0 },/* 4434 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=4436, .patterns=0, .final=0, .range=0 },/* 4435 */
      { .f_node=5969, .degree=0, .alpha=0x00, .outgoing=0, .patterns=469, .final=1, .range=0 },/* 4436 */
      { .f_node=5332, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4438, .patterns=0, .final=0, .range=0 },/* 4437 */
      { .f_node=3324, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4439, .patterns=0, .final=0, .range=0 },/* 4438 */
      { .f_node=5293, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4440, .patterns=0, .final=0, .range=0 },/* 4439 */
      { .f_node=3733, .degree=0, .alpha=0x73/* 's' */, .outgoing=4441, .patterns=0, .final=0, .range=0 },/* 4440 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4442, .patterns=0, .final=0, .range=0 },/* 4441 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4443, .patterns=0, .final=0, .range=0 },/* 4442 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4444, .patterns=0, .final=0, .range=0 },/* 4443 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4445, .patterns=0, .final=0, .range=0 },/* 4444 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=470, .final=1, .range=0 },/* 4445 */
      { .f_node=3324, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4447, .patterns=0, .final=0, .range=0 },/* 4446 */
      { .f_node=3393, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4448, .patterns=0, .final=0, .range=0 },/* 4447 */
      { .f_node=3451, .degree=0, .alpha=0x73/* 's' */, .outgoing=4449, .patterns=0, .final=0, .range=0 },/* 4448 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4450, .patterns=0, .final=0, .range=0 },/* 4449 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4451, .patterns=0, .final=0, .range=0 },/* 4450 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4452, .patterns=0, .final=0, .range=0 },/* 4451 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4453, .patterns=0, .final=0, .range=0 },/* 4452 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=471, .final=1, .range=0 },/* 4453 */
      { .f_node=5596, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4455, .patterns=0, .final=0, .range=0 },/* 4454 */
      { .f_node=5611, .degree=0, .alpha=0x64/* 'd' */, .outgoing=4456, .patterns=0, .final=0, .range=0 },/* 4455 */
      { .f_node=3905, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4457, .patterns=0, .final=0, .range=0 },/* 4456 */
      { .f_node=786, .degree=0, .alpha=0x72/* 'r' */, .outgoing=4458, .patterns=0, .final=0, .range=0 },/* 4457 */
      { .f_node=5596, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4459, .patterns=0, .final=0, .range=0 },/* 4458 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4460, .patterns=0, .final=0, .range=0 },/* 4459 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4461, .patterns=0, .final=0, .range=0 },/* 4460 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=4462, .patterns=0, .final=0, .range=0 },/* 4461 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=472, .final=1, .range=0 },/* 4462 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4464, .patterns=0, .final=0, .range=0 },/* 4463 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4465, .patterns=0, .final=0, .range=0 },/* 4464 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4466, .patterns=0, .final=0, .range=0 },/* 4465 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=473, .final=1, .range=0 },/* 4466 */
      { .f_node=5418, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4468, .patterns=0, .final=0, .range=0 },/* 4467 */
      { .f_node=2762, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4469, .patterns=0, .final=0, .range=0 },/* 4468 */
      { .f_node=2891, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4470, .patterns=0, .final=0, .range=0 },/* 4469 */
      { .f_node=5471, .degree=0, .alpha=0x72/* 'r' */, .outgoing=4471, .patterns=0, .final=0, .range=0 },/* 4470 */
      { .f_node=5530, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4472, .patterns=0, .final=0, .range=0 },/* 4471 */
      { .f_node=2762, .degree=0, .alpha=0x66/* 'f' */, .outgoing=4473, .patterns=0, .final=0, .range=0 },/* 4472 */
      { .f_node=5332, .degree=0, .alpha=0x74/* 't' */, .outgoing=4474, .patterns=0, .final=0, .range=0 },/* 4473 */
      { .f_node=4944, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4475, .patterns=0, .final=0, .range=0 },/* 4474 */
      { .f_node=877, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4476, .patterns=0, .final=0, .range=0 },/* 4475 */
      { .f_node=1881, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4477, .patterns=0, .final=0, .range=0 },/* 4476 */
      { .f_node=3515, .degree=0, .alpha=0x00, .outgoing=0, .patterns=474, .final=1, .range=0 },/* 4477 */
      { .f_node=3983, .degree=10, .alpha=0x65, .outgoing=1310, .patterns=0, .final=0, .range=1 },/* 4478 */
      { .f_node=3733, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4480, .patterns=0, .final=0, .range=0 },/* 4479 */
      { .f_node=3733, .degree=0, .alpha=0x64/* 'd' */, .outgoing=4481, .patterns=0, .final=0, .range=0 },/* 4480 */
      { .f_node=3905, .degree=0, .alpha=0x74/* 't' */, .outgoing=4482, .patterns=0, .final=0, .range=0 },/* 4481 */
      { .f_node=4944, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4483, .patterns=0, .final=0, .range=0 },/* 4482 */
      { .f_node=4956, .degree=0, .alpha=0x73/* 's' */, .outgoing=4484, .patterns=0, .final=0, .range=0 },/* 4483 */
      { .f_node=4278, .degree=0, .alpha=0x74/* 't' */, .outgoing=4485, .patterns=0, .final=0, .range=0 },/* 4484 */
      { .f_node=4573, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4486, .patterns=0, .final=0, .range=0 },/* 4485 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=475, .final=1, .range=0 },/* 4486 */
      { .f_node=3563, .degree=0, .alpha=0x74/* 't' */, .outgoing=4488, .patterns=0, .final=0, .range=0 },/* 4487 */
      { .f_node=4944, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4489, .patterns=0, .final=0, .range=0 },/* 4488 */
      { .f_node=5042, .degree=0, .alpha=0x66/* 'f' */, .outgoing=4490, .patterns=0, .final=0, .range=0 },/* 4489 */
      { .f_node=5332, .degree=0, .alpha=0x79/* 'y' */, .outgoing=4491, .patterns=0, .final=0, .range=0 },/* 4490 */
      { .f_node=5800, .degree=2, .alpha=0x00, .outgoing=1321, .patterns=0, .final=0, .range=0 },/* 4491 */
      { .f_node=5471, .degree=0, .alpha=0x64/* 'd' */, .outgoing=4493, .patterns=0, .final=0, .range=0 },/* 4492 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4494, .patterns=0, .final=0, .range=0 },/* 4493 */
      { .f_node=436, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4495, .patterns=0, .final=0, .range=0 },/* 4494 */
      { .f_node=877, .degree=11, .alpha=0x63, .outgoing=1324, .patterns=0, .final=0, .range=1 },/* 4495 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4497, .patterns=0, .final=0, .range=0 },/* 4496 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4498, .patterns=0, .final=0, .range=0 },/* 4497 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=476, .final=1, .range=0 },/* 4498 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4500, .patterns=0, .final=0, .range=0 },/* 4499 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=4501, .patterns=0, .final=0, .range=0 },/* 4500 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=477, .final=1, .range=0 },/* 4501 */
      { .f_node=5969, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4503, .patterns=0, .final=0, .range=0 },/* 4502 */
      { .f_node=5471, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4504, .patterns=0, .final=0, .range=0 },/* 4503 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4505, .patterns=0, .final=0, .range=0 },/* 4504 */
      { .f_node=5520, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4506, .patterns=0, .final=0, .range=0 },/* 4505 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4507, .patterns=0, .final=0, .range=0 },/* 4506 */
      { .f_node=878, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=4508, .patterns=0, .final=0, .range=0 },/* 4507 */
      { .f_node=901, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4509, .patterns=0, .final=0, .range=0 },/* 4508 */
      { .f_node=902, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4510, .patterns=0, .final=0, .range=0 },/* 4509 */
      { .f_node=2808, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4511, .patterns=0, .final=0, .range=0 },/* 4510 */
      { .f_node=2809, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4512, .patterns=0, .final=0, .range=0 },/* 4511 */
      { .f_node=4710, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=4513, .patterns=0, .final=0, .range=0 },/* 4512 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4514, .patterns=0, .final=0, .range=0 },/* 4513 */
      { .f_node=3733, .degree=0, .alpha=0x64/* 'd' */, .outgoing=4515, .patterns=0, .final=0, .range=0 },/* 4514 */
      { .f_node=3905, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4516, .patterns=0, .final=0, .range=0 },/* 4515 */
      { .f_node=772, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4517, .patterns=0, .final=0, .range=0 },/* 4516 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4518, .patterns=0, .final=0, .range=0 },/* 4517 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=4519, .patterns=0, .final=0, .range=0 },/* 4518 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=478, .final=1, .range=0 },/* 4519 */
      { .f_node=877, .degree=10, .alpha=0x63, .outgoing=1336, .patterns=0, .final=0, .range=1 },/* 4520 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4522, .patterns=0, .final=0, .range=0 },/* 4521 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4523, .patterns=0, .final=0, .range=0 },/* 4522 */
      { .f_node=5520, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4524, .patterns=0, .final=0, .range=0 },/* 4523 */
      { .f_node=877, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4525, .patterns=0, .final=0, .range=0 },/* 4524 */
      { .f_node=2239, .degree=0, .alpha=0x64/* 'd' */, .outgoing=4526, .patterns=0, .final=0, .range=0 },/* 4525 */
      { .f_node=3905, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4527, .patterns=0, .final=0, .range=0 },/* 4526 */
      { .f_node=3906, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4528, .patterns=0, .final=0, .range=0 },/* 4527 */
      { .f_node=3907, .degree=0, .alpha=0x73/* 's' */, .outgoing=4529, .patterns=0, .final=0, .range=0 },/* 4528 */
      { .f_node=4278, .degree=0, .alpha=0x75/* 'u' */, .outgoing=4530, .patterns=0, .final=0, .range=0 },/* 4529 */
      { .f_node=4675, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4531, .patterns=0, .final=0, .range=0 },/* 4530 */
      { .f_node=3324, .degree=0, .alpha=0x74/* 't' */, .outgoing=4532, .patterns=0, .final=0, .range=0 },/* 4531 */
      { .f_node=3538, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4533, .patterns=0, .final=0, .range=0 },/* 4532 */
      { .f_node=4956, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4534, .patterns=0, .final=0, .range=0 },/* 4533 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4535, .patterns=0, .final=0, .range=0 },/* 4534 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4536, .patterns=0, .final=0, .range=0 },/* 4535 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=4537, .patterns=0, .final=0, .range=0 },/* 4536 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=479, .final=1, .range=0 },/* 4537 */
      { .f_node=2151, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4539, .patterns=0, .final=0, .range=0 },/* 4538 */
      { .f_node=2152, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4540, .patterns=0, .final=0, .range=0 },/* 4539 */
      { .f_node=4708, .degree=0, .alpha=0x64/* 'd' */, .outgoing=4541, .patterns=0, .final=0, .range=0 },/* 4540 */
      { .f_node=2, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4542, .patterns=0, .final=0, .range=0 },/* 4541 */
      { .f_node=3733, .degree=0, .alpha=0x78/* 'x' */, .outgoing=4543, .patterns=0, .final=0, .range=0 },/* 4542 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4544, .patterns=0, .final=0, .range=0 },/* 4543 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4545, .patterns=0, .final=0, .range=0 },/* 4544 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4546, .patterns=0, .final=0, .range=0 },/* 4545 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=4547, .patterns=0, .final=0, .range=0 },/* 4546 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=480, .final=1, .range=0 },/* 4547 */
      { .f_node=2239, .degree=0, .alpha=0x64/* 'd' */, .outgoing=4549, .patterns=0, .final=0, .range=0 },/* 4548 */
      { .f_node=3905, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4550, .patterns=0, .final=0, .range=0 },/* 4549 */
      { .f_node=3906, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4551, .patterns=0, .final=0, .range=0 },/* 4550 */
      { .f_node=3907, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=4552, .patterns=0, .final=0, .range=0 },/* 4551 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4553, .patterns=0, .final=0, .range=0 },/* 4552 */
      { .f_node=3733, .degree=0, .alpha=0x79/* 'y' */, .outgoing=4554, .patterns=0, .final=0, .range=0 },/* 4553 */
      { .f_node=5800, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4555, .patterns=0, .final=0, .range=0 },/* 4554 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4556, .patterns=0, .final=0, .range=0 },/* 4555 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4557, .patterns=0, .final=0, .range=0 },/* 4556 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=4558, .patterns=0, .final=0, .range=0 },/* 4557 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=481, .final=1, .range=0 },/* 4558 */
      { .f_node=1285, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4560, .patterns=0, .final=0, .range=0 },/* 4559 */
      { .f_node=4709, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4561, .patterns=0, .final=0, .range=0 },/* 4560 */
      { .f_node=4731, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4562, .patterns=0, .final=0, .range=0 },/* 4561 */
      { .f_node=877, .degree=0, .alpha=0x66/* 'f' */, .outgoing=4563, .patterns=0, .final=0, .range=0 },/* 4562 */
      { .f_node=2299, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4564, .patterns=0, .final=0, .range=0 },/* 4563 */
      { .f_node=2300, .degree=0, .alpha=0x73/* 's' */, .outgoing=4565, .patterns=0, .final=0, .range=0 },/* 4564 */
      { .f_node=5344, .degree=0, .alpha=0x74/* 't' */, .outgoing=4566, .patterns=0, .final=0, .range=0 },/* 4565 */
      { .f_node=5345, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4567, .patterns=0, .final=0, .range=0 },/* 4566 */
      { .f_node=5084, .degree=0, .alpha=0x79/* 'y' */, .outgoing=4568, .patterns=0, .final=0, .range=0 },/* 4567 */
      { .f_node=5800, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4569, .patterns=0, .final=0, .range=0 },/* 4568 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4570, .patterns=0, .final=0, .range=0 },/* 4569 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4571, .patterns=0, .final=0, .range=0 },/* 4570 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=4572, .patterns=0, .final=0, .range=0 },/* 4571 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=482, .final=1, .range=0 },/* 4572 */
      { .f_node=4944, .degree=4, .alpha=0x61, .outgoing=1347, .patterns=0, .final=0, .range=1 },/* 4573 */
      { .f_node=2762, .degree=0, .alpha=0x74/* 't' */, .outgoing=4575, .patterns=0, .final=0, .range=0 },/* 4574 */
      { .f_node=2937, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4576, .patterns=0, .final=0, .range=0 },/* 4575 */
      { .f_node=5042, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4577, .patterns=0, .final=0, .range=0 },/* 4576 */
      { .f_node=5471, .degree=0, .alpha=0x73/* 's' */, .outgoing=4578, .patterns=0, .final=0, .range=0 },/* 4577 */
      { .f_node=4278, .degree=0, .alpha=0x2d/* '-' */, .outgoing=4579, .patterns=0, .final=0, .range=0 },/* 4578 */
      { .f_node=5969, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4580, .patterns=0, .final=0, .range=0 },/* 4579 */
      { .f_node=5970, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4581, .patterns=0, .final=0, .range=0 },/* 4580 */
      { .f_node=4709, .degree=0, .alpha=0x72/* 'r' */, .outgoing=4582, .patterns=0, .final=0, .range=0 },/* 4581 */
      { .f_node=5596, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=4583, .patterns=0, .final=0, .range=0 },/* 4582 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4584, .patterns=0, .final=0, .range=0 },/* 4583 */
      { .f_node=3733, .degree=0, .alpha=0x74/* 't' */, .outgoing=4585, .patterns=0, .final=0, .range=0 },/* 4584 */
      { .f_node=4944, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4586, .patterns=0, .final=0, .range=0 },/* 4585 */
      { .f_node=5042, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4587, .patterns=0, .final=0, .range=0 },/* 4586 */
      { .f_node=3492, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4588, .patterns=0, .final=0, .range=0 },/* 4587 */
      { .f_node=5159, .degree=0, .alpha=0x73/* 's' */, .outgoing=4589, .patterns=0, .final=0, .range=0 },/* 4588 */
      { .f_node=4278, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4590, .patterns=0, .final=0, .range=0 },/* 4589 */
      { .f_node=4366, .degree=0, .alpha=0x74/* 't' */, .outgoing=4591, .patterns=0, .final=0, .range=0 },/* 4590 */
      { .f_node=3538, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4592, .patterns=0, .final=0, .range=0 },/* 4591 */
      { .f_node=4956, .degree=0, .alpha=0x73/* 's' */, .outgoing=4593, .patterns=0, .final=0, .range=0 },/* 4592 */
      { .f_node=4278, .degree=0, .alpha=0x2d/* '-' */, .outgoing=4594, .patterns=0, .final=0, .range=0 },/* 4593 */
      { .f_node=5969, .degree=18, .alpha=0x65, .outgoing=1352, .patterns=0, .final=0, .range=1 },/* 4594 */
      { .f_node=3733, .degree=0, .alpha=0x75/* 'u' */, .outgoing=4596, .patterns=0, .final=0, .range=0 },/* 4595 */
      { .f_node=5858, .degree=0, .alpha=0x73/* 's' */, .outgoing=4597, .patterns=0, .final=0, .range=0 },/* 4596 */
      { .f_node=4278, .degree=0, .alpha=0x2d/* '-' */, .outgoing=4598, .patterns=0, .final=0, .range=0 },/* 4597 */
      { .f_node=5969, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4599, .patterns=0, .final=0, .range=0 },/* 4598 */
      { .f_node=5970, .degree=0, .alpha=0x73/* 's' */, .outgoing=4600, .patterns=0, .final=0, .range=0 },/* 4599 */
      { .f_node=5971, .degree=0, .alpha=0x2d/* '-' */, .outgoing=4601, .patterns=0, .final=0, .range=0 },/* 4600 */
      { .f_node=5969, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4602, .patterns=0, .final=0, .range=0 },/* 4601 */
      { .f_node=5471, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4603, .patterns=0, .final=0, .range=0 },/* 4602 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4604, .patterns=0, .final=0, .range=0 },/* 4603 */
      { .f_node=5520, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4605, .patterns=0, .final=0, .range=0 },/* 4604 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4606, .patterns=0, .final=0, .range=0 },/* 4605 */
      { .f_node=878, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=4607, .patterns=0, .final=0, .range=0 },/* 4606 */
      { .f_node=901, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4608, .patterns=0, .final=0, .range=0 },/* 4607 */
      { .f_node=902, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4609, .patterns=0, .final=0, .range=0 },/* 4608 */
      { .f_node=2808, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4610, .patterns=0, .final=0, .range=0 },/* 4609 */
      { .f_node=2809, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4611, .patterns=0, .final=0, .range=0 },/* 4610 */
      { .f_node=4710, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=4612, .patterns=0, .final=0, .range=0 },/* 4611 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4613, .patterns=0, .final=0, .range=0 },/* 4612 */
      { .f_node=3733, .degree=0, .alpha=0x64/* 'd' */, .outgoing=4614, .patterns=0, .final=0, .range=0 },/* 4613 */
      { .f_node=3905, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4615, .patterns=0, .final=0, .range=0 },/* 4614 */
      { .f_node=772, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4616, .patterns=0, .final=0, .range=0 },/* 4615 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4617, .patterns=0, .final=0, .range=0 },/* 4616 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=4618, .patterns=0, .final=0, .range=0 },/* 4617 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=483, .final=1, .range=0 },/* 4618 */
      { .f_node=5671, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4620, .patterns=0, .final=0, .range=0 },/* 4619 */
      { .f_node=5471, .degree=0, .alpha=0x75/* 'u' */, .outgoing=4621, .patterns=0, .final=0, .range=0 },/* 4620 */
      { .f_node=5858, .degree=0, .alpha=0x73/* 's' */, .outgoing=4622, .patterns=0, .final=0, .range=0 },/* 4621 */
      { .f_node=4278, .degree=0, .alpha=0x2d/* '-' */, .outgoing=4623, .patterns=0, .final=0, .range=0 },/* 4622 */
      { .f_node=5969, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4624, .patterns=0, .final=0, .range=0 },/* 4623 */
      { .f_node=5970, .degree=0, .alpha=0x73/* 's' */, .outgoing=4625, .patterns=0, .final=0, .range=0 },/* 4624 */
      { .f_node=5971, .degree=0, .alpha=0x2d/* '-' */, .outgoing=4626, .patterns=0, .final=0, .range=0 },/* 4625 */
      { .f_node=5969, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4627, .patterns=0, .final=0, .range=0 },/* 4626 */
      { .f_node=5471, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4628, .patterns=0, .final=0, .range=0 },/* 4627 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4629, .patterns=0, .final=0, .range=0 },/* 4628 */
      { .f_node=5520, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4630, .patterns=0, .final=0, .range=0 },/* 4629 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4631, .patterns=0, .final=0, .range=0 },/* 4630 */
      { .f_node=878, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=4632, .patterns=0, .final=0, .range=0 },/* 4631 */
      { .f_node=901, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4633, .patterns=0, .final=0, .range=0 },/* 4632 */
      { .f_node=902, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4634, .patterns=0, .final=0, .range=0 },/* 4633 */
      { .f_node=2808, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4635, .patterns=0, .final=0, .range=0 },/* 4634 */
      { .f_node=2809, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4636, .patterns=0, .final=0, .range=0 },/* 4635 */
      { .f_node=4710, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=4637, .patterns=0, .final=0, .range=0 },/* 4636 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4638, .patterns=0, .final=0, .range=0 },/* 4637 */
      { .f_node=3733, .degree=0, .alpha=0x64/* 'd' */, .outgoing=4639, .patterns=0, .final=0, .range=0 },/* 4638 */
      { .f_node=3905, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4640, .patterns=0, .final=0, .range=0 },/* 4639 */
      { .f_node=772, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4641, .patterns=0, .final=0, .range=0 },/* 4640 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4642, .patterns=0, .final=0, .range=0 },/* 4641 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=4643, .patterns=0, .final=0, .range=0 },/* 4642 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=484, .final=1, .range=0 },/* 4643 */
      { .f_node=4956, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4645, .patterns=0, .final=0, .range=0 },/* 4644 */
      { .f_node=4957, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4646, .patterns=0, .final=0, .range=0 },/* 4645 */
      { .f_node=4958, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4647, .patterns=0, .final=0, .range=0 },/* 4646 */
      { .f_node=5471, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4648, .patterns=0, .final=0, .range=0 },/* 4647 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4649, .patterns=0, .final=0, .range=0 },/* 4648 */
      { .f_node=5520, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4650, .patterns=0, .final=0, .range=0 },/* 4649 */
      { .f_node=5521, .degree=0, .alpha=0x75/* 'u' */, .outgoing=4651, .patterns=0, .final=0, .range=0 },/* 4650 */
      { .f_node=4899, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4652, .patterns=0, .final=0, .range=0 },/* 4651 */
      { .f_node=5418, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4653, .patterns=0, .final=0, .range=0 },/* 4652 */
      { .f_node=3324, .degree=0, .alpha=0x74/* 't' */, .outgoing=4654, .patterns=0, .final=0, .range=0 },/* 4653 */
      { .f_node=3538, .degree=0, .alpha=0x79/* 'y' */, .outgoing=4655, .patterns=0, .final=0, .range=0 },/* 4654 */
      { .f_node=5800, .degree=1, .alpha=0x2d, .outgoing=1371, .patterns=0, .final=0, .range=1 },/* 4655 */
      { .f_node=5969, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4657, .patterns=0, .final=0, .range=0 },/* 4656 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4658, .patterns=0, .final=0, .range=0 },/* 4657 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4659, .patterns=0, .final=0, .range=0 },/* 4658 */
      { .f_node=878, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=4660, .patterns=0, .final=0, .range=0 },/* 4659 */
      { .f_node=901, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4661, .patterns=0, .final=0, .range=0 },/* 4660 */
      { .f_node=902, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4662, .patterns=0, .final=0, .range=0 },/* 4661 */
      { .f_node=2808, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4663, .patterns=0, .final=0, .range=0 },/* 4662 */
      { .f_node=2809, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4664, .patterns=0, .final=0, .range=0 },/* 4663 */
      { .f_node=4710, .degree=0, .alpha=0x68/* 'h' */, .outgoing=4665, .patterns=0, .final=0, .range=0 },/* 4664 */
      { .f_node=5919, .degree=0, .alpha=0x64/* 'd' */, .outgoing=4666, .patterns=0, .final=0, .range=0 },/* 4665 */
      { .f_node=2, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4667, .patterns=0, .final=0, .range=0 },/* 4666 */
      { .f_node=772, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4668, .patterns=0, .final=0, .range=0 },/* 4667 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4669, .patterns=0, .final=0, .range=0 },/* 4668 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=4670, .patterns=0, .final=0, .range=0 },/* 4669 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=485, .final=1, .range=0 },/* 4670 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4672, .patterns=0, .final=0, .range=0 },/* 4671 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4673, .patterns=0, .final=0, .range=0 },/* 4672 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4674, .patterns=0, .final=0, .range=0 },/* 4673 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=486, .final=1, .range=0 },/* 4674 */
      { .f_node=5858, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4676, .patterns=0, .final=0, .range=0 },/* 4675 */
      { .f_node=877, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4677, .patterns=0, .final=0, .range=0 },/* 4676 */
      { .f_node=1881, .degree=0, .alpha=0x74/* 't' */, .outgoing=4678, .patterns=0, .final=0, .range=0 },/* 4677 */
      { .f_node=3538, .degree=0, .alpha=0x75/* 'u' */, .outgoing=4679, .patterns=0, .final=0, .range=0 },/* 4678 */
      { .f_node=3539, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4680, .patterns=0, .final=0, .range=0 },/* 4679 */
      { .f_node=3540, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4681, .patterns=0, .final=0, .range=0 },/* 4680 */
      { .f_node=3541, .degree=0, .alpha=0x73/* 's' */, .outgoing=4682, .patterns=0, .final=0, .range=0 },/* 4681 */
      { .f_node=3542, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4683, .patterns=0, .final=0, .range=0 },/* 4682 */
      { .f_node=3553, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4684, .patterns=0, .final=0, .range=0 },/* 4683 */
      { .f_node=3554, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4685, .patterns=0, .final=0, .range=0 },/* 4684 */
      { .f_node=3555, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4686, .patterns=0, .final=0, .range=0 },/* 4685 */
      { .f_node=3556, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4687, .patterns=0, .final=0, .range=0 },/* 4686 */
      { .f_node=3557, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4688, .patterns=0, .final=0, .range=0 },/* 4687 */
      { .f_node=3558, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4689, .patterns=0, .final=0, .range=0 },/* 4688 */
      { .f_node=3559, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4690, .patterns=0, .final=0, .range=0 },/* 4689 */
      { .f_node=3560, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4691, .patterns=0, .final=0, .range=0 },/* 4690 */
      { .f_node=3561, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4692, .patterns=0, .final=0, .range=0 },/* 4691 */
      { .f_node=3562, .degree=0, .alpha=0x00, .outgoing=0, .patterns=487, .final=1, .range=0 },/* 4692 */
      { .f_node=5671, .degree=0, .alpha=0x73/* 's' */, .outgoing=4694, .patterns=0, .final=0, .range=0 },/* 4693 */
      { .f_node=4278, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4695, .patterns=0, .final=0, .range=0 },/* 4694 */
      { .f_node=4279, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4696, .patterns=0, .final=0, .range=0 },/* 4695 */
      { .f_node=5472, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4697, .patterns=0, .final=0, .range=0 },/* 4696 */
      { .f_node=2866, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4698, .patterns=0, .final=0, .range=0 },/* 4697 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4699, .patterns=0, .final=0, .range=0 },/* 4698 */
      { .f_node=878, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4700, .patterns=0, .final=0, .range=0 },/* 4699 */
      { .f_node=930, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4701, .patterns=0, .final=0, .range=0 },/* 4700 */
      { .f_node=931, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4702, .patterns=0, .final=0, .range=0 },/* 4701 */
      { .f_node=932, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4703, .patterns=0, .final=0, .range=0 },/* 4702 */
      { .f_node=933, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4704, .patterns=0, .final=0, .range=0 },/* 4703 */
      { .f_node=954, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4705, .patterns=0, .final=0, .range=0 },/* 4704 */
      { .f_node=955, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4706, .patterns=0, .final=0, .range=0 },/* 4705 */
      { .f_node=956, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4707, .patterns=0, .final=0, .range=0 },/* 4706 */
      { .f_node=957, .degree=0, .alpha=0x00, .outgoing=0, .patterns=490, .final=1, .range=0 },/* 4707 */
      { .f_node=1, .degree=24, .alpha=0x61, .outgoing=1373, .patterns=0, .final=0, .range=1 },/* 4708 */
      { .f_node=2762, .degree=7, .alpha=0x69, .outgoing=1398, .patterns=0, .final=0, .range=1 },/* 4709 */
      { .f_node=3324, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4711, .patterns=0, .final=0, .range=0 },/* 4710 */
      { .f_node=5293, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4712, .patterns=0, .final=0, .range=0 },/* 4711 */
      { .f_node=877, .degree=8, .alpha=0x67, .outgoing=1406, .patterns=0, .final=0, .range=1 },/* 4712 */
      { .f_node=1763, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4714, .patterns=0, .final=0, .range=0 },/* 4713 */
      { .f_node=1811, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4715, .patterns=0, .final=0, .range=0 },/* 4714 */
      { .f_node=1812, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4716, .patterns=0, .final=0, .range=0 },/* 4715 */
      { .f_node=1813, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4717, .patterns=0, .final=0, .range=0 },/* 4716 */
      { .f_node=1814, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4718, .patterns=0, .final=0, .range=0 },/* 4717 */
      { .f_node=1815, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4719, .patterns=0, .final=0, .range=0 },/* 4718 */
      { .f_node=1853, .degree=0, .alpha=0x00, .outgoing=0, .patterns=492, .final=1, .range=0 },/* 4719 */
      { .f_node=2338, .degree=0, .alpha=0x75/* 'u' */, .outgoing=4721, .patterns=0, .final=0, .range=0 },/* 4720 */
      { .f_node=3718, .degree=0, .alpha=0x74/* 't' */, .outgoing=4722, .patterns=0, .final=0, .range=0 },/* 4721 */
      { .f_node=3719, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4723, .patterns=0, .final=0, .range=0 },/* 4722 */
      { .f_node=3720, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4724, .patterns=0, .final=0, .range=0 },/* 4723 */
      { .f_node=3721, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4725, .patterns=0, .final=0, .range=0 },/* 4724 */
      { .f_node=3722, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=4726, .patterns=0, .final=0, .range=0 },/* 4725 */
      { .f_node=3723, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4727, .patterns=0, .final=0, .range=0 },/* 4726 */
      { .f_node=3724, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4728, .patterns=0, .final=0, .range=0 },/* 4727 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4729, .patterns=0, .final=0, .range=0 },/* 4728 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4730, .patterns=0, .final=0, .range=0 },/* 4729 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=495, .final=1, .range=0 },/* 4730 */
      { .f_node=2891, .degree=0, .alpha=0x73/* 's' */, .outgoing=4732, .patterns=0, .final=0, .range=0 },/* 4731 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4733, .patterns=0, .final=0, .range=0 },/* 4732 */
      { .f_node=877, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4734, .patterns=0, .final=0, .range=0 },/* 4733 */
      { .f_node=1763, .degree=4, .alpha=0x6f, .outgoing=1415, .patterns=0, .final=0, .range=1 },/* 4734 */
      { .f_node=1811, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4736, .patterns=0, .final=0, .range=0 },/* 4735 */
      { .f_node=1812, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4737, .patterns=0, .final=0, .range=0 },/* 4736 */
      { .f_node=1813, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4738, .patterns=0, .final=0, .range=0 },/* 4737 */
      { .f_node=1814, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4739, .patterns=0, .final=0, .range=0 },/* 4738 */
      { .f_node=1815, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4740, .patterns=0, .final=0, .range=0 },/* 4739 */
      { .f_node=1853, .degree=0, .alpha=0x00, .outgoing=0, .patterns=496, .final=1, .range=0 },/* 4740 */
      { .f_node=1863, .degree=0, .alpha=0x74/* 't' */, .outgoing=4742, .patterns=0, .final=0, .range=0 },/* 4741 */
      { .f_node=1864, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4743, .patterns=0, .final=0, .range=0 },/* 4742 */
      { .f_node=1865, .degree=0, .alpha=0x74/* 't' */, .outgoing=4744, .patterns=0, .final=0, .range=0 },/* 4743 */
      { .f_node=1866, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4745, .patterns=0, .final=0, .range=0 },/* 4744 */
      { .f_node=1867, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4746, .patterns=0, .final=0, .range=0 },/* 4745 */
      { .f_node=1868, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4747, .patterns=0, .final=0, .range=0 },/* 4746 */
      { .f_node=1869, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4748, .patterns=0, .final=0, .range=0 },/* 4747 */
      { .f_node=1870, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4749, .patterns=0, .final=0, .range=0 },/* 4748 */
      { .f_node=1871, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4750, .patterns=0, .final=0, .range=0 },/* 4749 */
      { .f_node=1872, .degree=0, .alpha=0x00, .outgoing=0, .patterns=499, .final=1, .range=0 },/* 4750 */
      { .f_node=3733, .degree=15, .alpha=0x64, .outgoing=1420, .patterns=0, .final=0, .range=1 },/* 4751 */
      { .f_node=3905, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4753, .patterns=0, .final=0, .range=0 },/* 4752 */
      { .f_node=786, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4754, .patterns=0, .final=0, .range=0 },/* 4753 */
      { .f_node=2762, .degree=0, .alpha=0x77/* 'w' */, .outgoing=4755, .patterns=0, .final=0, .range=0 },/* 4754 */
      { .f_node=5671, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4756, .patterns=0, .final=0, .range=0 },/* 4755 */
      { .f_node=5742, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=4757, .patterns=0, .final=0, .range=0 },/* 4756 */
      { .f_node=5743, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4758, .patterns=0, .final=0, .range=0 },/* 4757 */
      { .f_node=5744, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4759, .patterns=0, .final=0, .range=0 },/* 4758 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=501, .final=1, .range=0 },/* 4759 */
      { .f_node=4278, .degree=0, .alpha=0x73/* 's' */, .outgoing=4761, .patterns=0, .final=0, .range=0 },/* 4760 */
      { .f_node=4278, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4762, .patterns=0, .final=0, .range=0 },/* 4761 */
      { .f_node=4302, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4763, .patterns=0, .final=0, .range=0 },/* 4762 */
      { .f_node=5418, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4764, .patterns=0, .final=0, .range=0 },/* 4763 */
      { .f_node=5159, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4765, .patterns=0, .final=0, .range=0 },/* 4764 */
      { .f_node=5278, .degree=0, .alpha=0x72/* 'r' */, .outgoing=4766, .patterns=0, .final=0, .range=0 },/* 4765 */
      { .f_node=5596, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4767, .patterns=0, .final=0, .range=0 },/* 4766 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4768, .patterns=0, .final=0, .range=0 },/* 4767 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4769, .patterns=0, .final=0, .range=0 },/* 4768 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4770, .patterns=0, .final=0, .range=0 },/* 4769 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=502, .final=1, .range=0 },/* 4770 */
      { .f_node=3324, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4772, .patterns=0, .final=0, .range=0 },/* 4771 */
      { .f_node=5471, .degree=0, .alpha=0x72/* 'r' */, .outgoing=4773, .patterns=0, .final=0, .range=0 },/* 4772 */
      { .f_node=5530, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4774, .patterns=0, .final=0, .range=0 },/* 4773 */
      { .f_node=3563, .degree=0, .alpha=0x73/* 's' */, .outgoing=4775, .patterns=0, .final=0, .range=0 },/* 4774 */
      { .f_node=3695, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4776, .patterns=0, .final=0, .range=0 },/* 4775 */
      { .f_node=3563, .degree=0, .alpha=0x66/* 'f' */, .outgoing=4777, .patterns=0, .final=0, .range=0 },/* 4776 */
      { .f_node=3579, .degree=0, .alpha=0x74/* 't' */, .outgoing=4778, .patterns=0, .final=0, .range=0 },/* 4777 */
      { .f_node=4944, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4779, .patterns=0, .final=0, .range=0 },/* 4778 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4780, .patterns=0, .final=0, .range=0 },/* 4779 */
      { .f_node=878, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=4781, .patterns=0, .final=0, .range=0 },/* 4780 */
      { .f_node=901, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4782, .patterns=0, .final=0, .range=0 },/* 4781 */
      { .f_node=902, .degree=0, .alpha=0x64/* 'd' */, .outgoing=4783, .patterns=0, .final=0, .range=0 },/* 4782 */
      { .f_node=2773, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4784, .patterns=0, .final=0, .range=0 },/* 4783 */
      { .f_node=436, .degree=0, .alpha=0x73/* 's' */, .outgoing=4785, .patterns=0, .final=0, .range=0 },/* 4784 */
      { .f_node=437, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4786, .patterns=0, .final=0, .range=0 },/* 4785 */
      { .f_node=438, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4787, .patterns=0, .final=0, .range=0 },/* 4786 */
      { .f_node=573, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4788, .patterns=0, .final=0, .range=0 },/* 4787 */
      { .f_node=574, .degree=0, .alpha=0x74/* 't' */, .outgoing=4789, .patterns=0, .final=0, .range=0 },/* 4788 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=503, .final=1, .range=0 },/* 4789 */
      { .f_node=4708, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4791, .patterns=0, .final=0, .range=0 },/* 4790 */
      { .f_node=5159, .degree=1, .alpha=0x2d, .outgoing=1436, .patterns=0, .final=0, .range=1 },/* 4791 */
      { .f_node=5969, .degree=0, .alpha=0x66/* 'f' */, .outgoing=4793, .patterns=0, .final=0, .range=0 },/* 4792 */
      { .f_node=5332, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4794, .patterns=0, .final=0, .range=0 },/* 4793 */
      { .f_node=5418, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4795, .patterns=0, .final=0, .range=0 },/* 4794 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4796, .patterns=0, .final=0, .range=0 },/* 4795 */
      { .f_node=877, .degree=0, .alpha=0x77/* 'w' */, .outgoing=4797, .patterns=0, .final=0, .range=0 },/* 4796 */
      { .f_node=1942, .degree=0, .alpha=0x68/* 'h' */, .outgoing=4798, .patterns=0, .final=0, .range=0 },/* 4797 */
      { .f_node=1961, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4799, .patterns=0, .final=0, .range=0 },/* 4798 */
      { .f_node=1962, .degree=0, .alpha=0x74/* 't' */, .outgoing=4800, .patterns=0, .final=0, .range=0 },/* 4799 */
      { .f_node=1963, .degree=0, .alpha=0x73/* 's' */, .outgoing=4801, .patterns=0, .final=0, .range=0 },/* 4800 */
      { .f_node=1964, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4802, .patterns=0, .final=0, .range=0 },/* 4801 */
      { .f_node=1965, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4803, .patterns=0, .final=0, .range=0 },/* 4802 */
      { .f_node=1966, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4804, .patterns=0, .final=0, .range=0 },/* 4803 */
      { .f_node=1967, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4805, .patterns=0, .final=0, .range=0 },/* 4804 */
      { .f_node=1968, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4806, .patterns=504, .final=1, .range=0 },/* 4805 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4807, .patterns=0, .final=0, .range=0 },/* 4806 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=4808, .patterns=0, .final=0, .range=0 },/* 4807 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=505, .final=1, .range=0 },/* 4808 */
      { .f_node=5239, .degree=0, .alpha=0x77/* 'w' */, .outgoing=4810, .patterns=0, .final=0, .range=0 },/* 4809 */
      { .f_node=5240, .degree=0, .alpha=0x68/* 'h' */, .outgoing=4811, .patterns=0, .final=0, .range=0 },/* 4810 */
      { .f_node=5241, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4812, .patterns=0, .final=0, .range=0 },/* 4811 */
      { .f_node=5242, .degree=0, .alpha=0x74/* 't' */, .outgoing=4813, .patterns=0, .final=0, .range=0 },/* 4812 */
      { .f_node=5243, .degree=0, .alpha=0x73/* 's' */, .outgoing=4814, .patterns=0, .final=0, .range=0 },/* 4813 */
      { .f_node=5244, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4815, .patterns=0, .final=0, .range=0 },/* 4814 */
      { .f_node=5245, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4816, .patterns=0, .final=0, .range=0 },/* 4815 */
      { .f_node=5246, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4817, .patterns=0, .final=0, .range=0 },/* 4816 */
      { .f_node=5247, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4818, .patterns=0, .final=0, .range=0 },/* 4817 */
      { .f_node=5248, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4819, .patterns=506, .final=1, .range=0 },/* 4818 */
      { .f_node=5249, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4820, .patterns=0, .final=0, .range=0 },/* 4819 */
      { .f_node=5250, .degree=0, .alpha=0x74/* 't' */, .outgoing=4821, .patterns=0, .final=0, .range=0 },/* 4820 */
      { .f_node=5251, .degree=0, .alpha=0x00, .outgoing=0, .patterns=507, .final=1, .range=0 },/* 4821 */
      { .f_node=3563, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=4823, .patterns=0, .final=0, .range=0 },/* 4822 */
      { .f_node=1, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4824, .patterns=0, .final=0, .range=0 },/* 4823 */
      { .f_node=3324, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4825, .patterns=0, .final=0, .range=0 },/* 4824 */
      { .f_node=5293, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4826, .patterns=0, .final=0, .range=0 },/* 4825 */
      { .f_node=5293, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4827, .patterns=0, .final=0, .range=0 },/* 4826 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4828, .patterns=0, .final=0, .range=0 },/* 4827 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4829, .patterns=0, .final=0, .range=0 },/* 4828 */
      { .f_node=1545, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4830, .patterns=0, .final=0, .range=0 },/* 4829 */
      { .f_node=1581, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4831, .patterns=0, .final=0, .range=0 },/* 4830 */
      { .f_node=1582, .degree=0, .alpha=0x75/* 'u' */, .outgoing=4832, .patterns=0, .final=0, .range=0 },/* 4831 */
      { .f_node=1583, .degree=0, .alpha=0x64/* 'd' */, .outgoing=4833, .patterns=0, .final=0, .range=0 },/* 4832 */
      { .f_node=1584, .degree=0, .alpha=0x66/* 'f' */, .outgoing=4834, .patterns=0, .final=0, .range=0 },/* 4833 */
      { .f_node=1585, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4835, .patterns=0, .final=0, .range=0 },/* 4834 */
      { .f_node=5487, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4836, .patterns=0, .final=0, .range=0 },/* 4835 */
      { .f_node=5488, .degree=0, .alpha=0x72/* 'r' */, .outgoing=4837, .patterns=0, .final=0, .range=0 },/* 4836 */
      { .f_node=5489, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4838, .patterns=0, .final=0, .range=0 },/* 4837 */
      { .f_node=5490, .degree=0, .alpha=0x2d/* '-' */, .outgoing=4839, .patterns=0, .final=0, .range=0 },/* 4838 */
      { .f_node=5491, .degree=0, .alpha=0x64/* 'd' */, .outgoing=4840, .patterns=0, .final=0, .range=0 },/* 4839 */
      { .f_node=5492, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4841, .patterns=0, .final=0, .range=0 },/* 4840 */
      { .f_node=5493, .degree=0, .alpha=0x73/* 's' */, .outgoing=4842, .patterns=0, .final=0, .range=0 },/* 4841 */
      { .f_node=5494, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4843, .patterns=0, .final=0, .range=0 },/* 4842 */
      { .f_node=5495, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4844, .patterns=0, .final=0, .range=0 },/* 4843 */
      { .f_node=5496, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4845, .patterns=0, .final=0, .range=0 },/* 4844 */
      { .f_node=5497, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4846, .patterns=0, .final=0, .range=0 },/* 4845 */
      { .f_node=5498, .degree=0, .alpha=0x00, .outgoing=0, .patterns=509, .final=1, .range=0 },/* 4846 */
      { .f_node=1, .degree=0, .alpha=0x74/* 't' */, .outgoing=4848, .patterns=0, .final=0, .range=0 },/* 4847 */
      { .f_node=4944, .degree=0, .alpha=0x74/* 't' */, .outgoing=4849, .patterns=0, .final=0, .range=0 },/* 4848 */
      { .f_node=5101, .degree=0, .alpha=0x2d/* '-' */, .outgoing=4850, .patterns=0, .final=0, .range=0 },/* 4849 */
      { .f_node=5969, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4851, .patterns=0, .final=0, .range=0 },/* 4850 */
      { .f_node=5970, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4852, .patterns=0, .final=0, .range=0 },/* 4851 */
      { .f_node=4771, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4853, .patterns=0, .final=0, .range=0 },/* 4852 */
      { .f_node=3492, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4854, .patterns=0, .final=0, .range=0 },/* 4853 */
      { .f_node=3324, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4855, .patterns=0, .final=0, .range=0 },/* 4854 */
      { .f_node=877, .degree=0, .alpha=0x66/* 'f' */, .outgoing=4856, .patterns=0, .final=0, .range=0 },/* 4855 */
      { .f_node=2299, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4857, .patterns=0, .final=0, .range=0 },/* 4856 */
      { .f_node=2300, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4858, .patterns=0, .final=0, .range=0 },/* 4857 */
      { .f_node=2301, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4859, .patterns=0, .final=0, .range=0 },/* 4858 */
      { .f_node=2302, .degree=0, .alpha=0x62/* 'b' */, .outgoing=4860, .patterns=0, .final=0, .range=0 },/* 4859 */
      { .f_node=2303, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4861, .patterns=0, .final=0, .range=0 },/* 4860 */
      { .f_node=2304, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4862, .patterns=0, .final=0, .range=0 },/* 4861 */
      { .f_node=2305, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=4863, .patterns=0, .final=0, .range=0 },/* 4862 */
      { .f_node=2306, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4864, .patterns=0, .final=0, .range=0 },/* 4863 */
      { .f_node=2307, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4865, .patterns=0, .final=0, .range=0 },/* 4864 */
      { .f_node=5341, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4866, .patterns=0, .final=0, .range=0 },/* 4865 */
      { .f_node=5342, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4867, .patterns=0, .final=0, .range=0 },/* 4866 */
      { .f_node=5343, .degree=0, .alpha=0x00, .outgoing=0, .patterns=511, .final=1, .range=0 },/* 4867 */
      { .f_node=4278, .degree=8, .alpha=0x66, .outgoing=1438, .patterns=0, .final=0, .range=1 },/* 4868 */
      { .f_node=5332, .degree=0, .alpha=0x74/* 't' */, .outgoing=4870, .patterns=0, .final=0, .range=0 },/* 4869 */
      { .f_node=4944, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4871, .patterns=0, .final=0, .range=0 },/* 4870 */
      { .f_node=5418, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4872, .patterns=0, .final=0, .range=0 },/* 4871 */
      { .f_node=5471, .degree=0, .alpha=0x73/* 's' */, .outgoing=4873, .patterns=0, .final=0, .range=0 },/* 4872 */
      { .f_node=4278, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4874, .patterns=0, .final=0, .range=0 },/* 4873 */
      { .f_node=4366, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4875, .patterns=0, .final=0, .range=0 },/* 4874 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4876, .patterns=0, .final=0, .range=0 },/* 4875 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4877, .patterns=0, .final=0, .range=0 },/* 4876 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4878, .patterns=0, .final=0, .range=0 },/* 4877 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=513, .final=1, .range=0 },/* 4878 */
      { .f_node=4467, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4880, .patterns=0, .final=0, .range=0 },/* 4879 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4881, .patterns=0, .final=0, .range=0 },/* 4880 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4882, .patterns=0, .final=0, .range=0 },/* 4881 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4883, .patterns=0, .final=0, .range=0 },/* 4882 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=514, .final=1, .range=0 },/* 4883 */
      { .f_node=4944, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4885, .patterns=0, .final=0, .range=0 },/* 4884 */
      { .f_node=2762, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4886, .patterns=0, .final=0, .range=0 },/* 4885 */
      { .f_node=2793, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=4887, .patterns=0, .final=0, .range=0 },/* 4886 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4888, .patterns=0, .final=0, .range=0 },/* 4887 */
      { .f_node=877, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4889, .patterns=0, .final=0, .range=0 },/* 4888 */
      { .f_node=1763, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4890, .patterns=0, .final=0, .range=0 },/* 4889 */
      { .f_node=1811, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4891, .patterns=0, .final=0, .range=0 },/* 4890 */
      { .f_node=1812, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4892, .patterns=0, .final=0, .range=0 },/* 4891 */
      { .f_node=1813, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4893, .patterns=0, .final=0, .range=0 },/* 4892 */
      { .f_node=1814, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4894, .patterns=0, .final=0, .range=0 },/* 4893 */
      { .f_node=1815, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4895, .patterns=0, .final=0, .range=0 },/* 4894 */
      { .f_node=1853, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4896, .patterns=515, .final=1, .range=0 },/* 4895 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4897, .patterns=0, .final=0, .range=0 },/* 4896 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4898, .patterns=0, .final=0, .range=0 },/* 4897 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=517, .final=1, .range=0 },/* 4898 */
      { .f_node=5858, .degree=0, .alpha=0x73/* 's' */, .outgoing=4900, .patterns=0, .final=0, .range=0 },/* 4899 */
      { .f_node=4278, .degree=6, .alpha=0x63, .outgoing=1447, .patterns=0, .final=0, .range=1 },/* 4900 */
      { .f_node=4279, .degree=0, .alpha=0x64/* 'd' */, .outgoing=4902, .patterns=0, .final=0, .range=0 },/* 4901 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4903, .patterns=0, .final=0, .range=0 },/* 4902 */
      { .f_node=436, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4904, .patterns=0, .final=0, .range=0 },/* 4903 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4905, .patterns=0, .final=0, .range=0 },/* 4904 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4906, .patterns=0, .final=0, .range=0 },/* 4905 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4907, .patterns=0, .final=0, .range=0 },/* 4906 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=518, .final=1, .range=0 },/* 4907 */
      { .f_node=4302, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4909, .patterns=0, .final=0, .range=0 },/* 4908 */
      { .f_node=4708, .degree=0, .alpha=0x75/* 'u' */, .outgoing=4910, .patterns=0, .final=0, .range=0 },/* 4909 */
      { .f_node=4899, .degree=0, .alpha=0x73/* 's' */, .outgoing=4911, .patterns=0, .final=0, .range=0 },/* 4910 */
      { .f_node=4900, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4912, .patterns=0, .final=0, .range=0 },/* 4911 */
      { .f_node=4908, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4913, .patterns=0, .final=0, .range=0 },/* 4912 */
      { .f_node=4303, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4914, .patterns=0, .final=0, .range=0 },/* 4913 */
      { .f_node=1545, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4915, .patterns=0, .final=0, .range=0 },/* 4914 */
      { .f_node=1594, .degree=0, .alpha=0x00, .outgoing=0, .patterns=519, .final=1, .range=0 },/* 4915 */
      { .f_node=4366, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4917, .patterns=0, .final=0, .range=0 },/* 4916 */
      { .f_node=5471, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4918, .patterns=0, .final=0, .range=0 },/* 4917 */
      { .f_node=5472, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4919, .patterns=0, .final=0, .range=0 },/* 4918 */
      { .f_node=2793, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4920, .patterns=0, .final=0, .range=0 },/* 4919 */
      { .f_node=877, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4921, .patterns=0, .final=0, .range=0 },/* 4920 */
      { .f_node=1700, .degree=0, .alpha=0x79/* 'y' */, .outgoing=4922, .patterns=0, .final=0, .range=0 },/* 4921 */
      { .f_node=1738, .degree=0, .alpha=0x00, .outgoing=0, .patterns=520, .final=1, .range=0 },/* 4922 */
      { .f_node=5800, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4924, .patterns=0, .final=0, .range=0 },/* 4923 */
      { .f_node=5801, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4925, .patterns=0, .final=0, .range=0 },/* 4924 */
      { .f_node=2891, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4926, .patterns=0, .final=0, .range=0 },/* 4925 */
      { .f_node=2892, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4927, .patterns=0, .final=0, .range=0 },/* 4926 */
      { .f_node=877, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4928, .patterns=0, .final=0, .range=0 },/* 4927 */
      { .f_node=1881, .degree=0, .alpha=0x74/* 't' */, .outgoing=4929, .patterns=0, .final=0, .range=0 },/* 4928 */
      { .f_node=3538, .degree=0, .alpha=0x75/* 'u' */, .outgoing=4930, .patterns=0, .final=0, .range=0 },/* 4929 */
      { .f_node=3539, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4931, .patterns=0, .final=0, .range=0 },/* 4930 */
      { .f_node=3540, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4932, .patterns=0, .final=0, .range=0 },/* 4931 */
      { .f_node=3541, .degree=0, .alpha=0x73/* 's' */, .outgoing=4933, .patterns=0, .final=0, .range=0 },/* 4932 */
      { .f_node=3542, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4934, .patterns=0, .final=0, .range=0 },/* 4933 */
      { .f_node=3553, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4935, .patterns=0, .final=0, .range=0 },/* 4934 */
      { .f_node=3554, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4936, .patterns=0, .final=0, .range=0 },/* 4935 */
      { .f_node=3555, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4937, .patterns=0, .final=0, .range=0 },/* 4936 */
      { .f_node=3556, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=4938, .patterns=0, .final=0, .range=0 },/* 4937 */
      { .f_node=3557, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4939, .patterns=0, .final=0, .range=0 },/* 4938 */
      { .f_node=3558, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4940, .patterns=0, .final=0, .range=0 },/* 4939 */
      { .f_node=3559, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4941, .patterns=0, .final=0, .range=0 },/* 4940 */
      { .f_node=3560, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4942, .patterns=0, .final=0, .range=0 },/* 4941 */
      { .f_node=3561, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4943, .patterns=0, .final=0, .range=0 },/* 4942 */
      { .f_node=3562, .degree=0, .alpha=0x00, .outgoing=0, .patterns=521, .final=1, .range=0 },/* 4943 */
      { .f_node=1, .degree=19, .alpha=0x64, .outgoing=1454, .patterns=0, .final=0, .range=1 },/* 4944 */
      { .f_node=2, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4946, .patterns=0, .final=0, .range=0 },/* 4945 */
      { .f_node=3733, .degree=0, .alpha=0x73/* 's' */, .outgoing=4947, .patterns=0, .final=0, .range=0 },/* 4946 */
      { .f_node=4278, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=4948, .patterns=0, .final=0, .range=0 },/* 4947 */
      { .f_node=4375, .degree=0, .alpha=0x74/* 't' */, .outgoing=4949, .patterns=0, .final=0, .range=0 },/* 4948 */
      { .f_node=4944, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4950, .patterns=0, .final=0, .range=0 },/* 4949 */
      { .f_node=5090, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4951, .patterns=0, .final=0, .range=0 },/* 4950 */
      { .f_node=3983, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4952, .patterns=0, .final=0, .range=0 },/* 4951 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4953, .patterns=0, .final=0, .range=0 },/* 4952 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4954, .patterns=0, .final=0, .range=0 },/* 4953 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4955, .patterns=0, .final=0, .range=0 },/* 4954 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=524, .final=1, .range=0 },/* 4955 */
      { .f_node=3733, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4957, .patterns=0, .final=0, .range=0 },/* 4956 */
      { .f_node=2762, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4958, .patterns=0, .final=0, .range=0 },/* 4957 */
      { .f_node=2808, .degree=0, .alpha=0x73/* 's' */, .outgoing=4959, .patterns=0, .final=0, .range=0 },/* 4958 */
      { .f_node=4868, .degree=1, .alpha=0x2d, .outgoing=1474, .patterns=0, .final=0, .range=1 },/* 4959 */
      { .f_node=5969, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4961, .patterns=0, .final=0, .range=0 },/* 4960 */
      { .f_node=5970, .degree=0, .alpha=0x73/* 's' */, .outgoing=4962, .patterns=0, .final=0, .range=0 },/* 4961 */
      { .f_node=5971, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4963, .patterns=0, .final=0, .range=0 },/* 4962 */
      { .f_node=5159, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4964, .patterns=0, .final=0, .range=0 },/* 4963 */
      { .f_node=2762, .degree=0, .alpha=0x70/* 'p' */, .outgoing=4965, .patterns=0, .final=0, .range=0 },/* 4964 */
      { .f_node=2891, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4966, .patterns=0, .final=0, .range=0 },/* 4965 */
      { .f_node=4157, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4967, .patterns=0, .final=0, .range=0 },/* 4966 */
      { .f_node=877, .degree=0, .alpha=0x74/* 't' */, .outgoing=4968, .patterns=0, .final=0, .range=0 },/* 4967 */
      { .f_node=1634, .degree=0, .alpha=0x72/* 'r' */, .outgoing=4969, .patterns=0, .final=0, .range=0 },/* 4968 */
      { .f_node=5596, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4970, .patterns=0, .final=0, .range=0 },/* 4969 */
      { .f_node=2762, .degree=0, .alpha=0x66/* 'f' */, .outgoing=4971, .patterns=0, .final=0, .range=0 },/* 4970 */
      { .f_node=5332, .degree=0, .alpha=0x66/* 'f' */, .outgoing=4972, .patterns=0, .final=0, .range=0 },/* 4971 */
      { .f_node=5332, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4973, .patterns=0, .final=0, .range=0 },/* 4972 */
      { .f_node=3324, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4974, .patterns=0, .final=0, .range=0 },/* 4973 */
      { .f_node=5471, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4975, .patterns=0, .final=0, .range=0 },/* 4974 */
      { .f_node=4708, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4976, .patterns=0, .final=0, .range=0 },/* 4975 */
      { .f_node=4709, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4977, .patterns=0, .final=0, .range=0 },/* 4976 */
      { .f_node=2866, .degree=0, .alpha=0x61/* 'a' */, .outgoing=4978, .patterns=0, .final=0, .range=0 },/* 4977 */
      { .f_node=2762, .degree=0, .alpha=0x67/* 'g' */, .outgoing=4979, .patterns=0, .final=0, .range=0 },/* 4978 */
      { .f_node=5159, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4980, .patterns=0, .final=0, .range=0 },/* 4979 */
      { .f_node=5278, .degree=0, .alpha=0x72/* 'r' */, .outgoing=4981, .patterns=0, .final=0, .range=0 },/* 4980 */
      { .f_node=5596, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4982, .patterns=0, .final=0, .range=0 },/* 4981 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4983, .patterns=0, .final=0, .range=0 },/* 4982 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=4984, .patterns=0, .final=0, .range=0 },/* 4983 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=4985, .patterns=0, .final=0, .range=0 },/* 4984 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=525, .final=1, .range=0 },/* 4985 */
      { .f_node=877, .degree=7, .alpha=0x6d, .outgoing=1476, .patterns=0, .final=0, .range=1 },/* 4986 */
      { .f_node=1285, .degree=0, .alpha=0x69/* 'i' */, .outgoing=4988, .patterns=0, .final=0, .range=0 },/* 4987 */
      { .f_node=1319, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4989, .patterns=0, .final=0, .range=0 },/* 4988 */
      { .f_node=1320, .degree=0, .alpha=0x72/* 'r' */, .outgoing=4990, .patterns=0, .final=0, .range=0 },/* 4989 */
      { .f_node=1321, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4991, .patterns=0, .final=0, .range=0 },/* 4990 */
      { .f_node=1322, .degree=0, .alpha=0x73/* 's' */, .outgoing=4992, .patterns=0, .final=0, .range=0 },/* 4991 */
      { .f_node=1323, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4993, .patterns=0, .final=0, .range=0 },/* 4992 */
      { .f_node=1324, .degree=0, .alpha=0x66/* 'f' */, .outgoing=4994, .patterns=0, .final=0, .range=0 },/* 4993 */
      { .f_node=1325, .degree=0, .alpha=0x74/* 't' */, .outgoing=4995, .patterns=0, .final=0, .range=0 },/* 4994 */
      { .f_node=1326, .degree=0, .alpha=0x2e/* '.' */, .outgoing=4996, .patterns=0, .final=0, .range=0 },/* 4995 */
      { .f_node=1327, .degree=18, .alpha=0x63, .outgoing=1484, .patterns=0, .final=0, .range=1 },/* 4996 */
      { .f_node=1328, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=4998, .patterns=0, .final=0, .range=0 },/* 4997 */
      { .f_node=1329, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=4999, .patterns=0, .final=0, .range=0 },/* 4998 */
      { .f_node=1330, .degree=0, .alpha=0x00, .outgoing=0, .patterns=526, .final=1, .range=0 },/* 4999 */
      { .f_node=1331, .degree=0, .alpha=0x73/* 's' */, .outgoing=5001, .patterns=0, .final=0, .range=0 },/* 5000 */
      { .f_node=1332, .degree=0, .alpha=0x00, .outgoing=0, .patterns=528, .final=1, .range=0 },/* 5001 */
      { .f_node=2338, .degree=0, .alpha=0x66/* 'f' */, .outgoing=5003, .patterns=0, .final=0, .range=0 },/* 5002 */
      { .f_node=2354, .degree=0, .alpha=0x66/* 'f' */, .outgoing=5004, .patterns=0, .final=0, .range=0 },/* 5003 */
      { .f_node=2355, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5005, .patterns=0, .final=0, .range=0 },/* 5004 */
      { .f_node=2356, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5006, .patterns=0, .final=0, .range=0 },/* 5005 */
      { .f_node=2357, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5007, .patterns=0, .final=0, .range=0 },/* 5006 */
      { .f_node=2358, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5008, .patterns=0, .final=0, .range=0 },/* 5007 */
      { .f_node=2359, .degree=11, .alpha=0x63, .outgoing=1503, .patterns=0, .final=0, .range=1 },/* 5008 */
      { .f_node=2360, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5010, .patterns=0, .final=0, .range=0 },/* 5009 */
      { .f_node=2361, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5011, .patterns=0, .final=0, .range=0 },/* 5010 */
      { .f_node=2362, .degree=0, .alpha=0x00, .outgoing=0, .patterns=530, .final=1, .range=0 },/* 5011 */
      { .f_node=3593, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5013, .patterns=0, .final=0, .range=0 },/* 5012 */
      { .f_node=3594, .degree=0, .alpha=0x74/* 't' */, .outgoing=5014, .patterns=0, .final=0, .range=0 },/* 5013 */
      { .f_node=3595, .degree=0, .alpha=0x00, .outgoing=0, .patterns=532, .final=1, .range=0 },/* 5014 */
      { .f_node=996, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=5016, .patterns=0, .final=0, .range=0 },/* 5015 */
      { .f_node=1013, .degree=0, .alpha=0x79/* 'y' */, .outgoing=5017, .patterns=0, .final=0, .range=0 },/* 5016 */
      { .f_node=1014, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5018, .patterns=0, .final=0, .range=0 },/* 5017 */
      { .f_node=1015, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5019, .patterns=0, .final=0, .range=0 },/* 5018 */
      { .f_node=1016, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5020, .patterns=0, .final=0, .range=0 },/* 5019 */
      { .f_node=1017, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5021, .patterns=534, .final=1, .range=0 },/* 5020 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5022, .patterns=0, .final=0, .range=0 },/* 5021 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5023, .patterns=0, .final=0, .range=0 },/* 5022 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=535, .final=1, .range=0 },/* 5023 */
      { .f_node=1634, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5025, .patterns=0, .final=0, .range=0 },/* 5024 */
      { .f_node=5596, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5026, .patterns=0, .final=0, .range=0 },/* 5025 */
      { .f_node=2762, .degree=0, .alpha=0x66/* 'f' */, .outgoing=5027, .patterns=0, .final=0, .range=0 },/* 5026 */
      { .f_node=5332, .degree=0, .alpha=0x66/* 'f' */, .outgoing=5028, .patterns=0, .final=0, .range=0 },/* 5027 */
      { .f_node=5332, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5029, .patterns=0, .final=0, .range=0 },/* 5028 */
      { .f_node=3324, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5030, .patterns=0, .final=0, .range=0 },/* 5029 */
      { .f_node=5471, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5031, .patterns=0, .final=0, .range=0 },/* 5030 */
      { .f_node=4708, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5032, .patterns=0, .final=0, .range=0 },/* 5031 */
      { .f_node=4709, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5033, .patterns=0, .final=0, .range=0 },/* 5032 */
      { .f_node=2866, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5034, .patterns=0, .final=0, .range=0 },/* 5033 */
      { .f_node=2762, .degree=0, .alpha=0x67/* 'g' */, .outgoing=5035, .patterns=0, .final=0, .range=0 },/* 5034 */
      { .f_node=5159, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5036, .patterns=0, .final=0, .range=0 },/* 5035 */
      { .f_node=5278, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5037, .patterns=0, .final=0, .range=0 },/* 5036 */
      { .f_node=5596, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5038, .patterns=0, .final=0, .range=0 },/* 5037 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5039, .patterns=0, .final=0, .range=0 },/* 5038 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5040, .patterns=0, .final=0, .range=0 },/* 5039 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=5041, .patterns=0, .final=0, .range=0 },/* 5040 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=536, .final=1, .range=0 },/* 5041 */
      { .f_node=3324, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=5043, .patterns=0, .final=0, .range=0 },/* 5042 */
      { .f_node=1, .degree=0, .alpha=0x74/* 't' */, .outgoing=5044, .patterns=0, .final=0, .range=0 },/* 5043 */
      { .f_node=4944, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5045, .patterns=0, .final=0, .range=0 },/* 5044 */
      { .f_node=5090, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=5046, .patterns=0, .final=0, .range=0 },/* 5045 */
      { .f_node=1, .degree=2, .alpha=0x00, .outgoing=1515, .patterns=0, .final=0, .range=0 },/* 5046 */
      { .f_node=5471, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5048, .patterns=0, .final=0, .range=0 },/* 5047 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5049, .patterns=0, .final=0, .range=0 },/* 5048 */
      { .f_node=436, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5050, .patterns=0, .final=0, .range=0 },/* 5049 */
      { .f_node=877, .degree=9, .alpha=0x63, .outgoing=1518, .patterns=0, .final=0, .range=1 },/* 5050 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5052, .patterns=0, .final=0, .range=0 },/* 5051 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5053, .patterns=0, .final=0, .range=0 },/* 5052 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=537, .final=1, .range=0 },/* 5053 */
      { .f_node=1700, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5055, .patterns=0, .final=0, .range=0 },/* 5054 */
      { .f_node=1745, .degree=0, .alpha=0x76/* 'v' */, .outgoing=5056, .patterns=0, .final=0, .range=0 },/* 5055 */
      { .f_node=5786, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5057, .patterns=0, .final=0, .range=0 },/* 5056 */
      { .f_node=3733, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5058, .patterns=0, .final=0, .range=0 },/* 5057 */
      { .f_node=3983, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5059, .patterns=0, .final=0, .range=0 },/* 5058 */
      { .f_node=3997, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5060, .patterns=0, .final=0, .range=0 },/* 5059 */
      { .f_node=2762, .degree=0, .alpha=0x79/* 'y' */, .outgoing=5061, .patterns=0, .final=0, .range=0 },/* 5060 */
      { .f_node=5800, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5062, .patterns=0, .final=0, .range=0 },/* 5061 */
      { .f_node=877, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5063, .patterns=0, .final=0, .range=0 },/* 5062 */
      { .f_node=1285, .degree=0, .alpha=0x79/* 'y' */, .outgoing=5064, .patterns=0, .final=0, .range=0 },/* 5063 */
      { .f_node=4923, .degree=0, .alpha=0x71/* 'q' */, .outgoing=5065, .patterns=0, .final=0, .range=0 },/* 5064 */
      { .f_node=1, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5066, .patterns=0, .final=0, .range=0 },/* 5065 */
      { .f_node=5471, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5067, .patterns=0, .final=0, .range=0 },/* 5066 */
      { .f_node=5482, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5068, .patterns=0, .final=0, .range=0 },/* 5067 */
      { .f_node=5483, .degree=0, .alpha=0x75/* 'u' */, .outgoing=5069, .patterns=0, .final=0, .range=0 },/* 5068 */
      { .f_node=5484, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5070, .patterns=0, .final=0, .range=0 },/* 5069 */
      { .f_node=5485, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5071, .patterns=0, .final=0, .range=0 },/* 5070 */
      { .f_node=772, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5072, .patterns=0, .final=0, .range=0 },/* 5071 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5073, .patterns=0, .final=0, .range=0 },/* 5072 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5074, .patterns=0, .final=0, .range=0 },/* 5073 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=538, .final=1, .range=0 },/* 5074 */
      { .f_node=5786, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5076, .patterns=0, .final=0, .range=0 },/* 5075 */
      { .f_node=5787, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5077, .patterns=0, .final=0, .range=0 },/* 5076 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5078, .patterns=0, .final=0, .range=0 },/* 5077 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5079, .patterns=0, .final=0, .range=0 },/* 5078 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=539, .final=1, .range=0 },/* 5079 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5081, .patterns=0, .final=0, .range=0 },/* 5080 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5082, .patterns=0, .final=0, .range=0 },/* 5081 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5083, .patterns=0, .final=0, .range=0 },/* 5082 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=540, .final=1, .range=0 },/* 5083 */
      { .f_node=5293, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5085, .patterns=0, .final=0, .range=0 },/* 5084 */
      { .f_node=5418, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=5086, .patterns=0, .final=0, .range=0 },/* 5085 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5087, .patterns=0, .final=0, .range=0 },/* 5086 */
      { .f_node=877, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5088, .patterns=0, .final=0, .range=0 },/* 5087 */
      { .f_node=1881, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5089, .patterns=0, .final=0, .range=0 },/* 5088 */
      { .f_node=3515, .degree=0, .alpha=0x00, .outgoing=0, .patterns=541, .final=1, .range=0 },/* 5089 */
      { .f_node=3563, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5091, .patterns=0, .final=0, .range=0 },/* 5090 */
      { .f_node=3669, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5092, .patterns=0, .final=0, .range=0 },/* 5091 */
      { .f_node=5596, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5093, .patterns=0, .final=0, .range=0 },/* 5092 */
      { .f_node=5611, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5094, .patterns=0, .final=0, .range=0 },/* 5093 */
      { .f_node=5418, .degree=0, .alpha=0x74/* 't' */, .outgoing=5095, .patterns=0, .final=0, .range=0 },/* 5094 */
      { .f_node=5464, .degree=2, .alpha=0x00, .outgoing=1528, .patterns=0, .final=0, .range=0 },/* 5095 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=542, .final=1, .range=0 },/* 5096 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5098, .patterns=0, .final=0, .range=0 },/* 5097 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=543, .final=1, .range=0 },/* 5098 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5100, .patterns=0, .final=0, .range=0 },/* 5099 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=544, .final=1, .range=0 },/* 5100 */
      { .f_node=4944, .degree=0, .alpha=0x76/* 'v' */, .outgoing=5102, .patterns=0, .final=0, .range=0 },/* 5101 */
      { .f_node=5786, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5103, .patterns=0, .final=0, .range=0 },/* 5102 */
      { .f_node=5418, .degree=0, .alpha=0x77/* 'w' */, .outgoing=5104, .patterns=0, .final=0, .range=0 },/* 5103 */
      { .f_node=5671, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5105, .patterns=0, .final=0, .range=0 },/* 5104 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5106, .patterns=0, .final=0, .range=0 },/* 5105 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5107, .patterns=0, .final=0, .range=0 },/* 5106 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=5108, .patterns=0, .final=0, .range=0 },/* 5107 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=545, .final=1, .range=0 },/* 5108 */
      { .f_node=5858, .degree=3, .alpha=0x6d, .outgoing=1531, .patterns=0, .final=0, .range=1 },/* 5109 */
      { .f_node=4708, .degree=0, .alpha=0x62/* 'b' */, .outgoing=5111, .patterns=0, .final=0, .range=0 },/* 5110 */
      { .f_node=4204, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5112, .patterns=0, .final=0, .range=0 },/* 5111 */
      { .f_node=5293, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5113, .patterns=0, .final=0, .range=0 },/* 5112 */
      { .f_node=5596, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5114, .patterns=0, .final=0, .range=0 },/* 5113 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5115, .patterns=0, .final=0, .range=0 },/* 5114 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5116, .patterns=0, .final=0, .range=0 },/* 5115 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5117, .patterns=0, .final=0, .range=0 },/* 5116 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=546, .final=1, .range=0 },/* 5117 */
      { .f_node=5868, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5119, .patterns=0, .final=0, .range=0 },/* 5118 */
      { .f_node=5869, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5120, .patterns=0, .final=0, .range=0 },/* 5119 */
      { .f_node=5870, .degree=0, .alpha=0x74/* 't' */, .outgoing=5121, .patterns=0, .final=0, .range=0 },/* 5120 */
      { .f_node=5871, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5122, .patterns=0, .final=0, .range=0 },/* 5121 */
      { .f_node=5872, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5123, .patterns=0, .final=0, .range=0 },/* 5122 */
      { .f_node=5873, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5124, .patterns=0, .final=0, .range=0 },/* 5123 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5125, .patterns=0, .final=0, .range=0 },/* 5124 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5126, .patterns=0, .final=0, .range=0 },/* 5125 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=547, .final=1, .range=0 },/* 5126 */
      { .f_node=5671, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5128, .patterns=0, .final=0, .range=0 },/* 5127 */
      { .f_node=5742, .degree=7, .alpha=0x6d, .outgoing=1535, .patterns=0, .final=0, .range=1 },/* 5128 */
      { .f_node=3393, .degree=0, .alpha=0x67/* 'g' */, .outgoing=5130, .patterns=0, .final=0, .range=0 },/* 5129 */
      { .f_node=3451, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5131, .patterns=0, .final=0, .range=0 },/* 5130 */
      { .f_node=5239, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5132, .patterns=0, .final=0, .range=0 },/* 5131 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5133, .patterns=0, .final=0, .range=0 },/* 5132 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5134, .patterns=0, .final=0, .range=0 },/* 5133 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=548, .final=1, .range=0 },/* 5134 */
      { .f_node=3538, .degree=17, .alpha=0x63, .outgoing=1543, .patterns=0, .final=0, .range=1 },/* 5135 */
      { .f_node=5471, .degree=0, .alpha=0x68/* 'h' */, .outgoing=5137, .patterns=0, .final=0, .range=0 },/* 5136 */
      { .f_node=5919, .degree=2, .alpha=0x00, .outgoing=1561, .patterns=0, .final=0, .range=0 },/* 5137 */
      { .f_node=877, .degree=0, .alpha=0x74/* 't' */, .outgoing=5139, .patterns=0, .final=0, .range=0 },/* 5138 */
      { .f_node=1634, .degree=0, .alpha=0x76/* 'v' */, .outgoing=5140, .patterns=0, .final=0, .range=0 },/* 5139 */
      { .f_node=5786, .degree=0, .alpha=0x00, .outgoing=0, .patterns=549, .final=1, .range=0 },/* 5140 */
      { .f_node=5471, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5142, .patterns=0, .final=0, .range=0 },/* 5141 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5143, .patterns=0, .final=0, .range=0 },/* 5142 */
      { .f_node=436, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5144, .patterns=0, .final=0, .range=0 },/* 5143 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5145, .patterns=0, .final=0, .range=0 },/* 5144 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5146, .patterns=0, .final=0, .range=0 },/* 5145 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=5147, .patterns=0, .final=0, .range=0 },/* 5146 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=550, .final=1, .range=0 },/* 5147 */
      { .f_node=4278, .degree=0, .alpha=0x76/* 'v' */, .outgoing=5149, .patterns=0, .final=0, .range=0 },/* 5148 */
      { .f_node=5786, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5150, .patterns=0, .final=0, .range=0 },/* 5149 */
      { .f_node=5471, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5151, .patterns=0, .final=0, .range=0 },/* 5150 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5152, .patterns=0, .final=0, .range=0 },/* 5151 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5153, .patterns=0, .final=0, .range=0 },/* 5152 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=5154, .patterns=0, .final=0, .range=0 },/* 5153 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=551, .final=1, .range=0 },/* 5154 */
      { .f_node=5101, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5156, .patterns=0, .final=0, .range=0 },/* 5155 */
      { .f_node=4956, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5157, .patterns=0, .final=0, .range=0 },/* 5156 */
      { .f_node=5596, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5158, .patterns=0, .final=0, .range=0 },/* 5157 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=552, .final=1, .range=0 },/* 5158 */
      { .f_node=1, .degree=6, .alpha=0x00, .outgoing=1564, .patterns=0, .final=0, .range=0 },/* 5159 */
      { .f_node=5858, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=5161, .patterns=0, .final=0, .range=0 },/* 5160 */
      { .f_node=1, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=5162, .patterns=0, .final=0, .range=0 },/* 5161 */
      { .f_node=1, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5163, .patterns=0, .final=0, .range=0 },/* 5162 */
      { .f_node=3563, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5164, .patterns=0, .final=0, .range=0 },/* 5163 */
      { .f_node=3609, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5165, .patterns=0, .final=0, .range=0 },/* 5164 */
      { .f_node=3324, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5166, .patterns=0, .final=0, .range=0 },/* 5165 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5167, .patterns=0, .final=0, .range=0 },/* 5166 */
      { .f_node=878, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5168, .patterns=0, .final=0, .range=0 },/* 5167 */
      { .f_node=930, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5169, .patterns=0, .final=0, .range=0 },/* 5168 */
      { .f_node=931, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5170, .patterns=0, .final=0, .range=0 },/* 5169 */
      { .f_node=932, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5171, .patterns=0, .final=0, .range=0 },/* 5170 */
      { .f_node=933, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5172, .patterns=0, .final=0, .range=0 },/* 5171 */
      { .f_node=954, .degree=0, .alpha=0x00, .outgoing=0, .patterns=553, .final=1, .range=0 },/* 5172 */
      { .f_node=3563, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5174, .patterns=0, .final=0, .range=0 },/* 5173 */
      { .f_node=3563, .degree=0, .alpha=0x67/* 'g' */, .outgoing=5175, .patterns=0, .final=0, .range=0 },/* 5174 */
      { .f_node=5159, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5176, .patterns=0, .final=0, .range=0 },/* 5175 */
      { .f_node=5293, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5177, .patterns=0, .final=0, .range=0 },/* 5176 */
      { .f_node=3733, .degree=3, .alpha=0x00, .outgoing=1571, .patterns=0, .final=0, .range=0 },/* 5177 */
      { .f_node=2762, .degree=12, .alpha=0x64, .outgoing=1575, .patterns=0, .final=0, .range=1 },/* 5178 */
      { .f_node=2773, .degree=0, .alpha=0x73/* 's' */, .outgoing=5180, .patterns=0, .final=0, .range=0 },/* 5179 */
      { .f_node=854, .degree=1, .alpha=0x00, .outgoing=1588, .patterns=0, .final=0, .range=0 },/* 5180 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=554, .final=1, .range=0 },/* 5181 */
      { .f_node=4302, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5183, .patterns=0, .final=0, .range=0 },/* 5182 */
      { .f_node=5596, .degree=0, .alpha=0x76/* 'v' */, .outgoing=5184, .patterns=0, .final=0, .range=0 },/* 5183 */
      { .f_node=5786, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5185, .patterns=0, .final=0, .range=0 },/* 5184 */
      { .f_node=3324, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5186, .patterns=0, .final=0, .range=0 },/* 5185 */
      { .f_node=5471, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5187, .patterns=0, .final=0, .range=0 },/* 5186 */
      { .f_node=3733, .degree=0, .alpha=0x73/* 's' */, .outgoing=5188, .patterns=0, .final=0, .range=0 },/* 5187 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5189, .patterns=0, .final=0, .range=0 },/* 5188 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=555, .final=1, .range=0 },/* 5189 */
      { .f_node=2891, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5191, .patterns=0, .final=0, .range=0 },/* 5190 */
      { .f_node=4157, .degree=0, .alpha=0x73/* 's' */, .outgoing=5192, .patterns=0, .final=0, .range=0 },/* 5191 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5193, .patterns=0, .final=0, .range=0 },/* 5192 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5194, .patterns=0, .final=0, .range=0 },/* 5193 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5195, .patterns=0, .final=0, .range=0 },/* 5194 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5196, .patterns=0, .final=0, .range=0 },/* 5195 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=556, .final=1, .range=0 },/* 5196 */
      { .f_node=5969, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5198, .patterns=0, .final=0, .range=0 },/* 5197 */
      { .f_node=2762, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5199, .patterns=0, .final=0, .range=0 },/* 5198 */
      { .f_node=2866, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5200, .patterns=0, .final=0, .range=0 },/* 5199 */
      { .f_node=2762, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5201, .patterns=0, .final=0, .range=0 },/* 5200 */
      { .f_node=2793, .degree=0, .alpha=0x79/* 'y' */, .outgoing=5202, .patterns=0, .final=0, .range=0 },/* 5201 */
      { .f_node=5800, .degree=0, .alpha=0x74/* 't' */, .outgoing=5203, .patterns=0, .final=0, .range=0 },/* 5202 */
      { .f_node=5846, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5204, .patterns=0, .final=0, .range=0 },/* 5203 */
      { .f_node=5042, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5205, .patterns=0, .final=0, .range=0 },/* 5204 */
      { .f_node=5471, .degree=0, .alpha=0x73/* 's' */, .outgoing=5206, .patterns=0, .final=0, .range=0 },/* 5205 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5207, .patterns=0, .final=0, .range=0 },/* 5206 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=557, .final=1, .range=0 },/* 5207 */
      { .f_node=5858, .degree=0, .alpha=0x73/* 's' */, .outgoing=5209, .patterns=0, .final=0, .range=0 },/* 5208 */
      { .f_node=4278, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5210, .patterns=0, .final=0, .range=0 },/* 5209 */
      { .f_node=4302, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5211, .patterns=0, .final=0, .range=0 },/* 5210 */
      { .f_node=5596, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5212, .patterns=0, .final=0, .range=0 },/* 5211 */
      { .f_node=5471, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5213, .patterns=0, .final=0, .range=0 },/* 5212 */
      { .f_node=5499, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5214, .patterns=0, .final=0, .range=0 },/* 5213 */
      { .f_node=3609, .degree=0, .alpha=0x74/* 't' */, .outgoing=5215, .patterns=0, .final=0, .range=0 },/* 5214 */
      { .f_node=5464, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5216, .patterns=0, .final=0, .range=0 },/* 5215 */
      { .f_node=4956, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5217, .patterns=0, .final=0, .range=0 },/* 5216 */
      { .f_node=5418, .degree=0, .alpha=0x74/* 't' */, .outgoing=5218, .patterns=0, .final=0, .range=0 },/* 5217 */
      { .f_node=5464, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5219, .patterns=0, .final=0, .range=0 },/* 5218 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5220, .patterns=0, .final=0, .range=0 },/* 5219 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5221, .patterns=0, .final=0, .range=0 },/* 5220 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5222, .patterns=0, .final=0, .range=0 },/* 5221 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=558, .final=1, .range=0 },/* 5222 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=559, .final=1, .range=0 },/* 5223 */
      { .f_node=4944, .degree=0, .alpha=0x76/* 'v' */, .outgoing=5225, .patterns=0, .final=0, .range=0 },/* 5224 */
      { .f_node=5786, .degree=0, .alpha=0x31/* '1' */, .outgoing=5226, .patterns=0, .final=0, .range=0 },/* 5225 */
      { .f_node=2710, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5227, .patterns=0, .final=0, .range=0 },/* 5226 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5228, .patterns=0, .final=0, .range=0 },/* 5227 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5229, .patterns=0, .final=0, .range=0 },/* 5228 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5230, .patterns=0, .final=0, .range=0 },/* 5229 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=560, .final=1, .range=0 },/* 5230 */
      { .f_node=5159, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5232, .patterns=0, .final=0, .range=0 },/* 5231 */
      { .f_node=3983, .degree=0, .alpha=0x68/* 'h' */, .outgoing=5233, .patterns=0, .final=0, .range=0 },/* 5232 */
      { .f_node=5919, .degree=0, .alpha=0x74/* 't' */, .outgoing=5234, .patterns=0, .final=0, .range=0 },/* 5233 */
      { .f_node=4944, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5235, .patterns=0, .final=0, .range=0 },/* 5234 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5236, .patterns=0, .final=0, .range=0 },/* 5235 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5237, .patterns=0, .final=0, .range=0 },/* 5236 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5238, .patterns=0, .final=0, .range=0 },/* 5237 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=561, .final=1, .range=0 },/* 5238 */
      { .f_node=877, .degree=0, .alpha=0x77/* 'w' */, .outgoing=5240, .patterns=0, .final=0, .range=0 },/* 5239 */
      { .f_node=1942, .degree=0, .alpha=0x68/* 'h' */, .outgoing=5241, .patterns=0, .final=0, .range=0 },/* 5240 */
      { .f_node=1961, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5242, .patterns=0, .final=0, .range=0 },/* 5241 */
      { .f_node=1962, .degree=0, .alpha=0x74/* 't' */, .outgoing=5243, .patterns=0, .final=0, .range=0 },/* 5242 */
      { .f_node=1963, .degree=0, .alpha=0x73/* 's' */, .outgoing=5244, .patterns=0, .final=0, .range=0 },/* 5243 */
      { .f_node=1964, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5245, .patterns=0, .final=0, .range=0 },/* 5244 */
      { .f_node=1965, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5246, .patterns=0, .final=0, .range=0 },/* 5245 */
      { .f_node=1966, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5247, .patterns=0, .final=0, .range=0 },/* 5246 */
      { .f_node=1967, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5248, .patterns=0, .final=0, .range=0 },/* 5247 */
      { .f_node=1968, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5249, .patterns=562, .final=1, .range=0 },/* 5248 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5250, .patterns=0, .final=0, .range=0 },/* 5249 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=5251, .patterns=0, .final=0, .range=0 },/* 5250 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=563, .final=1, .range=0 },/* 5251 */
      { .f_node=3324, .degree=0, .alpha=0x74/* 't' */, .outgoing=5253, .patterns=0, .final=0, .range=0 },/* 5252 */
      { .f_node=3538, .degree=0, .alpha=0x68/* 'h' */, .outgoing=5254, .patterns=0, .final=0, .range=0 },/* 5253 */
      { .f_node=5919, .degree=0, .alpha=0x75/* 'u' */, .outgoing=5255, .patterns=0, .final=0, .range=0 },/* 5254 */
      { .f_node=5858, .degree=0, .alpha=0x62/* 'b' */, .outgoing=5256, .patterns=0, .final=0, .range=0 },/* 5255 */
      { .f_node=5859, .degree=1, .alpha=0x00, .outgoing=1590, .patterns=0, .final=0, .range=0 },/* 5256 */
      { .f_node=877, .degree=6, .alpha=0x63, .outgoing=1592, .patterns=0, .final=0, .range=1 },/* 5257 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5259, .patterns=0, .final=0, .range=0 },/* 5258 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5260, .patterns=0, .final=0, .range=0 },/* 5259 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=564, .final=1, .range=0 },/* 5260 */
      { .f_node=1881, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5262, .patterns=0, .final=0, .range=0 },/* 5261 */
      { .f_node=3515, .degree=0, .alpha=0x00, .outgoing=0, .patterns=565, .final=1, .range=0 },/* 5262 */
      { .f_node=5860, .degree=0, .alpha=0x73/* 's' */, .outgoing=5264, .patterns=0, .final=0, .range=0 },/* 5263 */
      { .f_node=4278, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5265, .patterns=0, .final=0, .range=0 },/* 5264 */
      { .f_node=4302, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5266, .patterns=0, .final=0, .range=0 },/* 5265 */
      { .f_node=5596, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5267, .patterns=0, .final=0, .range=0 },/* 5266 */
      { .f_node=5471, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5268, .patterns=0, .final=0, .range=0 },/* 5267 */
      { .f_node=5499, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5269, .patterns=0, .final=0, .range=0 },/* 5268 */
      { .f_node=3609, .degree=0, .alpha=0x74/* 't' */, .outgoing=5270, .patterns=0, .final=0, .range=0 },/* 5269 */
      { .f_node=5464, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5271, .patterns=0, .final=0, .range=0 },/* 5270 */
      { .f_node=4956, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5272, .patterns=0, .final=0, .range=0 },/* 5271 */
      { .f_node=5418, .degree=0, .alpha=0x74/* 't' */, .outgoing=5273, .patterns=0, .final=0, .range=0 },/* 5272 */
      { .f_node=5464, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5274, .patterns=0, .final=0, .range=0 },/* 5273 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5275, .patterns=0, .final=0, .range=0 },/* 5274 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5276, .patterns=0, .final=0, .range=0 },/* 5275 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5277, .patterns=0, .final=0, .range=0 },/* 5276 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=566, .final=1, .range=0 },/* 5277 */
      { .f_node=3733, .degree=0, .alpha=0x74/* 't' */, .outgoing=5279, .patterns=0, .final=0, .range=0 },/* 5278 */
      { .f_node=4944, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5280, .patterns=0, .final=0, .range=0 },/* 5279 */
      { .f_node=5596, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5281, .patterns=0, .final=0, .range=0 },/* 5280 */
      { .f_node=3563, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5282, .patterns=0, .final=0, .range=0 },/* 5281 */
      { .f_node=3564, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=5283, .patterns=0, .final=0, .range=0 },/* 5282 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5284, .patterns=0, .final=0, .range=0 },/* 5283 */
      { .f_node=3733, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5285, .patterns=0, .final=0, .range=0 },/* 5284 */
      { .f_node=5596, .degree=0, .alpha=0x62/* 'b' */, .outgoing=5286, .patterns=0, .final=0, .range=0 },/* 5285 */
      { .f_node=4204, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5287, .patterns=0, .final=0, .range=0 },/* 5286 */
      { .f_node=3563, .degree=0, .alpha=0x78/* 'x' */, .outgoing=5288, .patterns=0, .final=0, .range=0 },/* 5287 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5289, .patterns=0, .final=0, .range=0 },/* 5288 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5290, .patterns=0, .final=0, .range=0 },/* 5289 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5291, .patterns=0, .final=0, .range=0 },/* 5290 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5292, .patterns=0, .final=0, .range=0 },/* 5291 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=567, .final=1, .range=0 },/* 5292 */
      { .f_node=1, .degree=6, .alpha=0x69, .outgoing=1599, .patterns=0, .final=0, .range=1 },/* 5293 */
      { .f_node=3324, .degree=0, .alpha=0x66/* 'f' */, .outgoing=5295, .patterns=0, .final=0, .range=0 },/* 5294 */
      { .f_node=5332, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5296, .patterns=0, .final=0, .range=0 },/* 5295 */
      { .f_node=5376, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5297, .patterns=0, .final=0, .range=0 },/* 5296 */
      { .f_node=3905, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5298, .patterns=0, .final=0, .range=0 },/* 5297 */
      { .f_node=85, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5299, .patterns=0, .final=0, .range=0 },/* 5298 */
      { .f_node=4708, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5300, .patterns=0, .final=0, .range=0 },/* 5299 */
      { .f_node=877, .degree=0, .alpha=0x74/* 't' */, .outgoing=5301, .patterns=0, .final=0, .range=0 },/* 5300 */
      { .f_node=1634, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5302, .patterns=0, .final=0, .range=0 },/* 5301 */
      { .f_node=1648, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5303, .patterns=0, .final=0, .range=0 },/* 5302 */
      { .f_node=3983, .degree=0, .alpha=0x00, .outgoing=0, .patterns=568, .final=1, .range=0 },/* 5303 */
      { .f_node=3563, .degree=0, .alpha=0x67/* 'g' */, .outgoing=5305, .patterns=0, .final=0, .range=0 },/* 5304 */
      { .f_node=5159, .degree=1, .alpha=0x00, .outgoing=1606, .patterns=0, .final=0, .range=0 },/* 5305 */
      { .f_node=5239, .degree=0, .alpha=0x67/* 'g' */, .outgoing=5307, .patterns=0, .final=0, .range=0 },/* 5306 */
      { .f_node=1763, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5308, .patterns=0, .final=0, .range=0 },/* 5307 */
      { .f_node=5278, .degree=0, .alpha=0x74/* 't' */, .outgoing=5309, .patterns=0, .final=0, .range=0 },/* 5308 */
      { .f_node=5279, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5310, .patterns=0, .final=0, .range=0 },/* 5309 */
      { .f_node=4945, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5311, .patterns=0, .final=0, .range=0 },/* 5310 */
      { .f_node=365, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5312, .patterns=0, .final=0, .range=0 },/* 5311 */
      { .f_node=3563, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5313, .patterns=0, .final=0, .range=0 },/* 5312 */
      { .f_node=3983, .degree=0, .alpha=0x62/* 'b' */, .outgoing=5314, .patterns=0, .final=0, .range=0 },/* 5313 */
      { .f_node=4204, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5315, .patterns=0, .final=0, .range=0 },/* 5314 */
      { .f_node=3563, .degree=0, .alpha=0x78/* 'x' */, .outgoing=5316, .patterns=0, .final=0, .range=0 },/* 5315 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5317, .patterns=0, .final=0, .range=0 },/* 5316 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5318, .patterns=0, .final=0, .range=0 },/* 5317 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5319, .patterns=0, .final=0, .range=0 },/* 5318 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5320, .patterns=0, .final=0, .range=0 },/* 5319 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=569, .final=1, .range=0 },/* 5320 */
      { .f_node=5252, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5322, .patterns=0, .final=0, .range=0 },/* 5321 */
      { .f_node=3492, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5323, .patterns=0, .final=0, .range=0 },/* 5322 */
      { .f_node=877, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5324, .patterns=0, .final=0, .range=0 },/* 5323 */
      { .f_node=1700, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5325, .patterns=0, .final=0, .range=0 },/* 5324 */
      { .f_node=1745, .degree=0, .alpha=0x76/* 'v' */, .outgoing=5326, .patterns=0, .final=0, .range=0 },/* 5325 */
      { .f_node=5786, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5327, .patterns=0, .final=0, .range=0 },/* 5326 */
      { .f_node=3733, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5328, .patterns=0, .final=0, .range=0 },/* 5327 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5329, .patterns=0, .final=0, .range=0 },/* 5328 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5330, .patterns=0, .final=0, .range=0 },/* 5329 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5331, .patterns=0, .final=0, .range=0 },/* 5330 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=570, .final=1, .range=0 },/* 5331 */
      { .f_node=1, .degree=4, .alpha=0x61, .outgoing=1608, .patterns=0, .final=0, .range=1 },/* 5332 */
      { .f_node=2762, .degree=16, .alpha=0x63, .outgoing=1613, .patterns=0, .final=0, .range=1 },/* 5333 */
      { .f_node=5471, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5335, .patterns=0, .final=0, .range=0 },/* 5334 */
      { .f_node=3733, .degree=0, .alpha=0x62/* 'b' */, .outgoing=5336, .patterns=0, .final=0, .range=0 },/* 5335 */
      { .f_node=4204, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5337, .patterns=0, .final=0, .range=0 },/* 5336 */
      { .f_node=3563, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5338, .patterns=0, .final=0, .range=0 },/* 5337 */
      { .f_node=3563, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=5339, .patterns=0, .final=0, .range=0 },/* 5338 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5340, .patterns=0, .final=0, .range=0 },/* 5339 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5341, .patterns=0, .final=0, .range=0 },/* 5340 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5342, .patterns=0, .final=0, .range=0 },/* 5341 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5343, .patterns=0, .final=0, .range=0 },/* 5342 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=571, .final=1, .range=0 },/* 5343 */
      { .f_node=2908, .degree=0, .alpha=0x74/* 't' */, .outgoing=5345, .patterns=0, .final=0, .range=0 },/* 5344 */
      { .f_node=4573, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5346, .patterns=0, .final=0, .range=0 },/* 5345 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5347, .patterns=0, .final=0, .range=0 },/* 5346 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5348, .patterns=0, .final=0, .range=0 },/* 5347 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5349, .patterns=0, .final=0, .range=0 },/* 5348 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=572, .final=1, .range=0 },/* 5349 */
      { .f_node=4204, .degree=16, .alpha=0x63, .outgoing=1630, .patterns=0, .final=0, .range=1 },/* 5350 */
      { .f_node=5471, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5352, .patterns=0, .final=0, .range=0 },/* 5351 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5353, .patterns=0, .final=0, .range=0 },/* 5352 */
      { .f_node=436, .degree=0, .alpha=0x2d/* '-' */, .outgoing=5354, .patterns=0, .final=0, .range=0 },/* 5353 */
      { .f_node=5969, .degree=0, .alpha=0x00, .outgoing=0, .patterns=573, .final=1, .range=0 },/* 5354 */
      { .f_node=4278, .degree=0, .alpha=0x74/* 't' */, .outgoing=5356, .patterns=0, .final=0, .range=0 },/* 5355 */
      { .f_node=4573, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5357, .patterns=0, .final=0, .range=0 },/* 5356 */
      { .f_node=4574, .degree=0, .alpha=0x74/* 't' */, .outgoing=5358, .patterns=0, .final=0, .range=0 },/* 5357 */
      { .f_node=4575, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5359, .patterns=0, .final=0, .range=0 },/* 5358 */
      { .f_node=4576, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5360, .patterns=0, .final=0, .range=0 },/* 5359 */
      { .f_node=4577, .degree=0, .alpha=0x2d/* '-' */, .outgoing=5361, .patterns=0, .final=0, .range=0 },/* 5360 */
      { .f_node=5969, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5362, .patterns=0, .final=0, .range=0 },/* 5361 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5363, .patterns=0, .final=0, .range=0 },/* 5362 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5364, .patterns=0, .final=0, .range=0 },/* 5363 */
      { .f_node=878, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=5365, .patterns=0, .final=0, .range=0 },/* 5364 */
      { .f_node=901, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5366, .patterns=0, .final=0, .range=0 },/* 5365 */
      { .f_node=902, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5367, .patterns=0, .final=0, .range=0 },/* 5366 */
      { .f_node=2808, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5368, .patterns=0, .final=0, .range=0 },/* 5367 */
      { .f_node=2809, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5369, .patterns=0, .final=0, .range=0 },/* 5368 */
      { .f_node=4710, .degree=0, .alpha=0x68/* 'h' */, .outgoing=5370, .patterns=0, .final=0, .range=0 },/* 5369 */
      { .f_node=5919, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5371, .patterns=0, .final=0, .range=0 },/* 5370 */
      { .f_node=2, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5372, .patterns=0, .final=0, .range=0 },/* 5371 */
      { .f_node=772, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5373, .patterns=0, .final=0, .range=0 },/* 5372 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5374, .patterns=0, .final=0, .range=0 },/* 5373 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=5375, .patterns=0, .final=0, .range=0 },/* 5374 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=574, .final=1, .range=0 },/* 5375 */
      { .f_node=3733, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5377, .patterns=0, .final=0, .range=0 },/* 5376 */
      { .f_node=3733, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5378, .patterns=0, .final=0, .range=0 },/* 5377 */
      { .f_node=5293, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5379, .patterns=0, .final=0, .range=0 },/* 5378 */
      { .f_node=5294, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5380, .patterns=0, .final=0, .range=0 },/* 5379 */
      { .f_node=3492, .degree=0, .alpha=0x73/* 's' */, .outgoing=5381, .patterns=0, .final=0, .range=0 },/* 5380 */
      { .f_node=3493, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5382, .patterns=0, .final=0, .range=0 },/* 5381 */
      { .f_node=3563, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5383, .patterns=0, .final=0, .range=0 },/* 5382 */
      { .f_node=3609, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5384, .patterns=0, .final=0, .range=0 },/* 5383 */
      { .f_node=3324, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5385, .patterns=0, .final=0, .range=0 },/* 5384 */
      { .f_node=5471, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5386, .patterns=0, .final=0, .range=0 },/* 5385 */
      { .f_node=3733, .degree=1, .alpha=0x2d, .outgoing=1647, .patterns=0, .final=0, .range=1 },/* 5386 */
      { .f_node=5969, .degree=0, .alpha=0x68/* 'h' */, .outgoing=5388, .patterns=0, .final=0, .range=0 },/* 5387 */
      { .f_node=5919, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5389, .patterns=0, .final=0, .range=0 },/* 5388 */
      { .f_node=5596, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5390, .patterns=0, .final=0, .range=0 },/* 5389 */
      { .f_node=5597, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5391, .patterns=0, .final=0, .range=0 },/* 5390 */
      { .f_node=772, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5392, .patterns=0, .final=0, .range=0 },/* 5391 */
      { .f_node=878, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5393, .patterns=0, .final=0, .range=0 },/* 5392 */
      { .f_node=930, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5394, .patterns=0, .final=0, .range=0 },/* 5393 */
      { .f_node=931, .degree=0, .alpha=0x73/* 's' */, .outgoing=5395, .patterns=0, .final=0, .range=0 },/* 5394 */
      { .f_node=4278, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5396, .patterns=0, .final=0, .range=0 },/* 5395 */
      { .f_node=4478, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5397, .patterns=0, .final=0, .range=0 },/* 5396 */
      { .f_node=4487, .degree=0, .alpha=0x74/* 't' */, .outgoing=5398, .patterns=0, .final=0, .range=0 },/* 5397 */
      { .f_node=4488, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5399, .patterns=0, .final=0, .range=0 },/* 5398 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5400, .patterns=0, .final=0, .range=0 },/* 5399 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5401, .patterns=0, .final=0, .range=0 },/* 5400 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5402, .patterns=0, .final=0, .range=0 },/* 5401 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=575, .final=1, .range=0 },/* 5402 */
      { .f_node=877, .degree=2, .alpha=0x61, .outgoing=1649, .patterns=0, .final=0, .range=1 },/* 5403 */
      { .f_node=878, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5405, .patterns=0, .final=0, .range=0 },/* 5404 */
      { .f_node=930, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5406, .patterns=0, .final=0, .range=0 },/* 5405 */
      { .f_node=931, .degree=0, .alpha=0x73/* 's' */, .outgoing=5407, .patterns=0, .final=0, .range=0 },/* 5406 */
      { .f_node=4278, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5408, .patterns=0, .final=0, .range=0 },/* 5407 */
      { .f_node=4478, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5409, .patterns=0, .final=0, .range=0 },/* 5408 */
      { .f_node=4487, .degree=0, .alpha=0x74/* 't' */, .outgoing=5410, .patterns=0, .final=0, .range=0 },/* 5409 */
      { .f_node=4488, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5411, .patterns=0, .final=0, .range=0 },/* 5410 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5412, .patterns=0, .final=0, .range=0 },/* 5411 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5413, .patterns=0, .final=0, .range=0 },/* 5412 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5414, .patterns=0, .final=0, .range=0 },/* 5413 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=576, .final=1, .range=0 },/* 5414 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5416, .patterns=0, .final=0, .range=0 },/* 5415 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5417, .patterns=0, .final=0, .range=0 },/* 5416 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=577, .final=1, .range=0 },/* 5417 */
      { .f_node=1, .degree=15, .alpha=0x65, .outgoing=1652, .patterns=0, .final=0, .range=1 },/* 5418 */
      { .f_node=3733, .degree=0, .alpha=0x74/* 't' */, .outgoing=5420, .patterns=0, .final=0, .range=0 },/* 5419 */
      { .f_node=4944, .degree=0, .alpha=0x66/* 'f' */, .outgoing=5421, .patterns=0, .final=0, .range=0 },/* 5420 */
      { .f_node=5332, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5422, .patterns=0, .final=0, .range=0 },/* 5421 */
      { .f_node=5293, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5423, .patterns=0, .final=0, .range=0 },/* 5422 */
      { .f_node=5294, .degree=0, .alpha=0x78/* 'x' */, .outgoing=5424, .patterns=0, .final=0, .range=0 },/* 5423 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5425, .patterns=0, .final=0, .range=0 },/* 5424 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5426, .patterns=0, .final=0, .range=0 },/* 5425 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5427, .patterns=0, .final=0, .range=0 },/* 5426 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5428, .patterns=0, .final=0, .range=0 },/* 5427 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=578, .final=1, .range=0 },/* 5428 */
      { .f_node=5332, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5430, .patterns=0, .final=0, .range=0 },/* 5429 */
      { .f_node=5293, .degree=0, .alpha=0x78/* 'x' */, .outgoing=5431, .patterns=0, .final=0, .range=0 },/* 5430 */
      { .f_node=1, .degree=17, .alpha=0x65, .outgoing=1668, .patterns=0, .final=0, .range=1 },/* 5431 */
      { .f_node=3733, .degree=0, .alpha=0x78/* 'x' */, .outgoing=5433, .patterns=0, .final=0, .range=0 },/* 5432 */
      { .f_node=1, .degree=0, .alpha=0x74/* 't' */, .outgoing=5434, .patterns=0, .final=0, .range=0 },/* 5433 */
      { .f_node=4944, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5435, .patterns=0, .final=0, .range=0 },/* 5434 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5436, .patterns=0, .final=0, .range=0 },/* 5435 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5437, .patterns=0, .final=0, .range=0 },/* 5436 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5438, .patterns=0, .final=0, .range=0 },/* 5437 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=579, .final=1, .range=0 },/* 5438 */
      { .f_node=3324, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5440, .patterns=0, .final=0, .range=0 },/* 5439 */
      { .f_node=3393, .degree=0, .alpha=0x67/* 'g' */, .outgoing=5441, .patterns=0, .final=0, .range=0 },/* 5440 */
      { .f_node=3451, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5442, .patterns=0, .final=0, .range=0 },/* 5441 */
      { .f_node=5239, .degree=11, .alpha=0x63, .outgoing=1686, .patterns=0, .final=0, .range=1 },/* 5442 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5444, .patterns=0, .final=0, .range=0 },/* 5443 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5445, .patterns=0, .final=0, .range=0 },/* 5444 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=580, .final=1, .range=0 },/* 5445 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5447, .patterns=0, .final=0, .range=0 },/* 5446 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=5448, .patterns=0, .final=0, .range=0 },/* 5447 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=581, .final=1, .range=0 },/* 5448 */
      { .f_node=4278, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5450, .patterns=0, .final=0, .range=0 },/* 5449 */
      { .f_node=3563, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5451, .patterns=0, .final=0, .range=0 },/* 5450 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5452, .patterns=0, .final=0, .range=0 },/* 5451 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5453, .patterns=0, .final=0, .range=0 },/* 5452 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=5454, .patterns=0, .final=0, .range=0 },/* 5453 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=582, .final=1, .range=0 },/* 5454 */
      { .f_node=5786, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5456, .patterns=0, .final=0, .range=0 },/* 5455 */
      { .f_node=3324, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5457, .patterns=0, .final=0, .range=0 },/* 5456 */
      { .f_node=2, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5458, .patterns=0, .final=0, .range=0 },/* 5457 */
      { .f_node=3733, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5459, .patterns=0, .final=0, .range=0 },/* 5458 */
      { .f_node=3563, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5460, .patterns=0, .final=0, .range=0 },/* 5459 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5461, .patterns=0, .final=0, .range=0 },/* 5460 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5462, .patterns=0, .final=0, .range=0 },/* 5461 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=5463, .patterns=0, .final=0, .range=0 },/* 5462 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=583, .final=1, .range=0 },/* 5463 */
      { .f_node=4944, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5465, .patterns=0, .final=0, .range=0 },/* 5464 */
      { .f_node=5090, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5466, .patterns=0, .final=0, .range=0 },/* 5465 */
      { .f_node=3983, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5467, .patterns=0, .final=0, .range=0 },/* 5466 */
      { .f_node=877, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5468, .patterns=0, .final=0, .range=0 },/* 5467 */
      { .f_node=2338, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5469, .patterns=0, .final=0, .range=0 },/* 5468 */
      { .f_node=3669, .degree=0, .alpha=0x67/* 'g' */, .outgoing=5470, .patterns=0, .final=0, .range=0 },/* 5469 */
      { .f_node=5159, .degree=0, .alpha=0x00, .outgoing=0, .patterns=584, .final=1, .range=0 },/* 5470 */
      { .f_node=1, .degree=17, .alpha=0x61, .outgoing=1698, .patterns=0, .final=0, .range=1 },/* 5471 */
      { .f_node=2762, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5473, .patterns=0, .final=0, .range=0 },/* 5472 */
      { .f_node=2891, .degree=0, .alpha=0x74/* 't' */, .outgoing=5474, .patterns=0, .final=0, .range=0 },/* 5473 */
      { .f_node=4944, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5475, .patterns=0, .final=0, .range=0 },/* 5474 */
      { .f_node=5418, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5476, .patterns=0, .final=0, .range=0 },/* 5475 */
      { .f_node=5419, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5477, .patterns=0, .final=0, .range=0 },/* 5476 */
      { .f_node=4708, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5478, .patterns=0, .final=0, .range=0 },/* 5477 */
      { .f_node=4822, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5479, .patterns=0, .final=0, .range=0 },/* 5478 */
      { .f_node=877, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5480, .patterns=0, .final=0, .range=0 },/* 5479 */
      { .f_node=1881, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5481, .patterns=0, .final=0, .range=0 },/* 5480 */
      { .f_node=1933, .degree=0, .alpha=0x00, .outgoing=0, .patterns=585, .final=1, .range=0 },/* 5481 */
      { .f_node=5293, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5483, .patterns=0, .final=0, .range=0 },/* 5482 */
      { .f_node=5304, .degree=0, .alpha=0x75/* 'u' */, .outgoing=5484, .patterns=0, .final=0, .range=0 },/* 5483 */
      { .f_node=3718, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5485, .patterns=0, .final=0, .range=0 },/* 5484 */
      { .f_node=2, .degree=0, .alpha=0x66/* 'f' */, .outgoing=5486, .patterns=0, .final=0, .range=0 },/* 5485 */
      { .f_node=5332, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5487, .patterns=0, .final=0, .range=0 },/* 5486 */
      { .f_node=5293, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5488, .patterns=0, .final=0, .range=0 },/* 5487 */
      { .f_node=2762, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5489, .patterns=0, .final=0, .range=0 },/* 5488 */
      { .f_node=5596, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5490, .patterns=0, .final=0, .range=0 },/* 5489 */
      { .f_node=5611, .degree=0, .alpha=0x2d/* '-' */, .outgoing=5491, .patterns=0, .final=0, .range=0 },/* 5490 */
      { .f_node=5969, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5492, .patterns=0, .final=0, .range=0 },/* 5491 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5493, .patterns=0, .final=0, .range=0 },/* 5492 */
      { .f_node=436, .degree=0, .alpha=0x73/* 's' */, .outgoing=5494, .patterns=0, .final=0, .range=0 },/* 5493 */
      { .f_node=437, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5495, .patterns=0, .final=0, .range=0 },/* 5494 */
      { .f_node=438, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5496, .patterns=0, .final=0, .range=0 },/* 5495 */
      { .f_node=466, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5497, .patterns=0, .final=0, .range=0 },/* 5496 */
      { .f_node=480, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5498, .patterns=0, .final=0, .range=0 },/* 5497 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=586, .final=1, .range=0 },/* 5498 */
      { .f_node=3563, .degree=11, .alpha=0x62, .outgoing=1716, .patterns=0, .final=0, .range=1 },/* 5499 */
      { .f_node=4204, .degree=0, .alpha=0x79/* 'y' */, .outgoing=5501, .patterns=0, .final=0, .range=0 },/* 5500 */
      { .f_node=4253, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5502, .patterns=0, .final=0, .range=0 },/* 5501 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5503, .patterns=0, .final=0, .range=0 },/* 5502 */
      { .f_node=2559, .degree=0, .alpha=0x73/* 's' */, .outgoing=5504, .patterns=0, .final=0, .range=0 },/* 5503 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5505, .patterns=0, .final=0, .range=0 },/* 5504 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5506, .patterns=0, .final=0, .range=0 },/* 5505 */
      { .f_node=1545, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5507, .patterns=0, .final=0, .range=0 },/* 5506 */
      { .f_node=1581, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5508, .patterns=0, .final=0, .range=0 },/* 5507 */
      { .f_node=1582, .degree=0, .alpha=0x75/* 'u' */, .outgoing=5509, .patterns=0, .final=0, .range=0 },/* 5508 */
      { .f_node=1583, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5510, .patterns=0, .final=0, .range=0 },/* 5509 */
      { .f_node=1584, .degree=0, .alpha=0x66/* 'f' */, .outgoing=5511, .patterns=0, .final=0, .range=0 },/* 5510 */
      { .f_node=1585, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5512, .patterns=0, .final=0, .range=0 },/* 5511 */
      { .f_node=5487, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5513, .patterns=0, .final=0, .range=0 },/* 5512 */
      { .f_node=5488, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5514, .patterns=0, .final=0, .range=0 },/* 5513 */
      { .f_node=5489, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5515, .patterns=0, .final=0, .range=0 },/* 5514 */
      { .f_node=5490, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5516, .patterns=0, .final=0, .range=0 },/* 5515 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5517, .patterns=0, .final=0, .range=0 },/* 5516 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5518, .patterns=0, .final=0, .range=0 },/* 5517 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5519, .patterns=0, .final=0, .range=0 },/* 5518 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=587, .final=1, .range=0 },/* 5519 */
      { .f_node=4708, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5521, .patterns=0, .final=0, .range=0 },/* 5520 */
      { .f_node=4790, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5522, .patterns=0, .final=0, .range=0 },/* 5521 */
      { .f_node=4822, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5523, .patterns=0, .final=0, .range=0 },/* 5522 */
      { .f_node=3609, .degree=0, .alpha=0x73/* 's' */, .outgoing=5524, .patterns=0, .final=0, .range=0 },/* 5523 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5525, .patterns=0, .final=0, .range=0 },/* 5524 */
      { .f_node=877, .degree=0, .alpha=0x68/* 'h' */, .outgoing=5526, .patterns=0, .final=0, .range=0 },/* 5525 */
      { .f_node=2634, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5527, .patterns=0, .final=0, .range=0 },/* 5526 */
      { .f_node=5953, .degree=0, .alpha=0x73/* 's' */, .outgoing=5528, .patterns=0, .final=0, .range=0 },/* 5527 */
      { .f_node=3695, .degree=0, .alpha=0x74/* 't' */, .outgoing=5529, .patterns=0, .final=0, .range=0 },/* 5528 */
      { .f_node=4573, .degree=0, .alpha=0x00, .outgoing=0, .patterns=588, .final=1, .range=0 },/* 5529 */
      { .f_node=5596, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5531, .patterns=0, .final=0, .range=0 },/* 5530 */
      { .f_node=5293, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5532, .patterns=0, .final=0, .range=0 },/* 5531 */
      { .f_node=877, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5533, .patterns=0, .final=0, .range=0 },/* 5532 */
      { .f_node=1285, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5534, .patterns=0, .final=0, .range=0 },/* 5533 */
      { .f_node=1319, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5535, .patterns=0, .final=0, .range=0 },/* 5534 */
      { .f_node=1320, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5536, .patterns=0, .final=0, .range=0 },/* 5535 */
      { .f_node=1321, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5537, .patterns=0, .final=0, .range=0 },/* 5536 */
      { .f_node=1322, .degree=0, .alpha=0x73/* 's' */, .outgoing=5538, .patterns=0, .final=0, .range=0 },/* 5537 */
      { .f_node=1323, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5539, .patterns=0, .final=0, .range=0 },/* 5538 */
      { .f_node=1324, .degree=0, .alpha=0x66/* 'f' */, .outgoing=5540, .patterns=0, .final=0, .range=0 },/* 5539 */
      { .f_node=1325, .degree=0, .alpha=0x74/* 't' */, .outgoing=5541, .patterns=0, .final=0, .range=0 },/* 5540 */
      { .f_node=1326, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5542, .patterns=0, .final=0, .range=0 },/* 5541 */
      { .f_node=1327, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5543, .patterns=0, .final=0, .range=0 },/* 5542 */
      { .f_node=1328, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5544, .patterns=0, .final=0, .range=0 },/* 5543 */
      { .f_node=1329, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5545, .patterns=0, .final=0, .range=0 },/* 5544 */
      { .f_node=1330, .degree=0, .alpha=0x00, .outgoing=0, .patterns=589, .final=1, .range=0 },/* 5545 */
      { .f_node=1, .degree=19, .alpha=0x61, .outgoing=1728, .patterns=0, .final=0, .range=1 },/* 5546 */
      { .f_node=2762, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5548, .patterns=0, .final=0, .range=0 },/* 5547 */
      { .f_node=5596, .degree=0, .alpha=0x6a/* 'j' */, .outgoing=5549, .patterns=0, .final=0, .range=0 },/* 5548 */
      { .f_node=5546, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5550, .patterns=0, .final=0, .range=0 },/* 5549 */
      { .f_node=5547, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5551, .patterns=0, .final=0, .range=0 },/* 5550 */
      { .f_node=5548, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5552, .patterns=0, .final=0, .range=0 },/* 5551 */
      { .f_node=877, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5553, .patterns=0, .final=0, .range=0 },/* 5552 */
      { .f_node=1285, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5554, .patterns=0, .final=0, .range=0 },/* 5553 */
      { .f_node=1286, .degree=0, .alpha=0x67/* 'g' */, .outgoing=5555, .patterns=0, .final=0, .range=0 },/* 5554 */
      { .f_node=5159, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5556, .patterns=0, .final=0, .range=0 },/* 5555 */
      { .f_node=2762, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5557, .patterns=0, .final=0, .range=0 },/* 5556 */
      { .f_node=2866, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5558, .patterns=0, .final=0, .range=0 },/* 5557 */
      { .f_node=5419, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5559, .patterns=0, .final=0, .range=0 },/* 5558 */
      { .f_node=5596, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5560, .patterns=0, .final=0, .range=0 },/* 5559 */
      { .f_node=5597, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5561, .patterns=0, .final=0, .range=0 },/* 5560 */
      { .f_node=772, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5562, .patterns=0, .final=0, .range=0 },/* 5561 */
      { .f_node=2559, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5563, .patterns=0, .final=0, .range=0 },/* 5562 */
      { .f_node=5293, .degree=0, .alpha=0x00, .outgoing=0, .patterns=591, .final=1, .range=0 },/* 5563 */
      { .f_node=5471, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5565, .patterns=0, .final=0, .range=0 },/* 5564 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5566, .patterns=0, .final=0, .range=0 },/* 5565 */
      { .f_node=436, .degree=0, .alpha=0x73/* 's' */, .outgoing=5567, .patterns=0, .final=0, .range=0 },/* 5566 */
      { .f_node=437, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5568, .patterns=0, .final=0, .range=0 },/* 5567 */
      { .f_node=438, .degree=0, .alpha=0x66/* 'f' */, .outgoing=5569, .patterns=0, .final=0, .range=0 },/* 5568 */
      { .f_node=2299, .degree=0, .alpha=0x75/* 'u' */, .outgoing=5570, .patterns=0, .final=0, .range=0 },/* 5569 */
      { .f_node=5858, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5571, .patterns=0, .final=0, .range=0 },/* 5570 */
      { .f_node=5418, .degree=0, .alpha=0x00, .outgoing=0, .patterns=592, .final=1, .range=0 },/* 5571 */
      { .f_node=3983, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5573, .patterns=0, .final=0, .range=0 },/* 5572 */
      { .f_node=877, .degree=0, .alpha=0x74/* 't' */, .outgoing=5574, .patterns=0, .final=0, .range=0 },/* 5573 */
      { .f_node=1634, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5575, .patterns=0, .final=0, .range=0 },/* 5574 */
      { .f_node=5042, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5576, .patterns=0, .final=0, .range=0 },/* 5575 */
      { .f_node=2762, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5577, .patterns=0, .final=0, .range=0 },/* 5576 */
      { .f_node=5596, .degree=1, .alpha=0x00, .outgoing=1748, .patterns=0, .final=0, .range=0 },/* 5577 */
      { .f_node=2762, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5579, .patterns=0, .final=0, .range=0 },/* 5578 */
      { .f_node=2891, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5580, .patterns=0, .final=0, .range=0 },/* 5579 */
      { .f_node=877, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5581, .patterns=0, .final=0, .range=0 },/* 5580 */
      { .f_node=2338, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5582, .patterns=0, .final=0, .range=0 },/* 5581 */
      { .f_node=3669, .degree=0, .alpha=0x67/* 'g' */, .outgoing=5583, .patterns=0, .final=0, .range=0 },/* 5582 */
      { .f_node=5159, .degree=0, .alpha=0x00, .outgoing=0, .patterns=593, .final=1, .range=0 },/* 5583 */
      { .f_node=877, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5585, .patterns=0, .final=0, .range=0 },/* 5584 */
      { .f_node=878, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5586, .patterns=0, .final=0, .range=0 },/* 5585 */
      { .f_node=930, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5587, .patterns=0, .final=0, .range=0 },/* 5586 */
      { .f_node=931, .degree=0, .alpha=0x00, .outgoing=0, .patterns=594, .final=1, .range=0 },/* 5587 */
      { .f_node=4944, .degree=0, .alpha=0x76/* 'v' */, .outgoing=5589, .patterns=0, .final=0, .range=0 },/* 5588 */
      { .f_node=5786, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5590, .patterns=0, .final=0, .range=0 },/* 5589 */
      { .f_node=5418, .degree=0, .alpha=0x77/* 'w' */, .outgoing=5591, .patterns=0, .final=0, .range=0 },/* 5590 */
      { .f_node=5671, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5592, .patterns=0, .final=0, .range=0 },/* 5591 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5593, .patterns=0, .final=0, .range=0 },/* 5592 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5594, .patterns=0, .final=0, .range=0 },/* 5593 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=5595, .patterns=0, .final=0, .range=0 },/* 5594 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=595, .final=1, .range=0 },/* 5595 */
      { .f_node=1, .degree=17, .alpha=0x64, .outgoing=1750, .patterns=0, .final=0, .range=1 },/* 5596 */
      { .f_node=2, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5598, .patterns=0, .final=0, .range=0 },/* 5597 */
      { .f_node=436, .degree=0, .alpha=0x73/* 's' */, .outgoing=5599, .patterns=0, .final=0, .range=0 },/* 5598 */
      { .f_node=437, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5600, .patterns=0, .final=0, .range=0 },/* 5599 */
      { .f_node=438, .degree=0, .alpha=0x66/* 'f' */, .outgoing=5601, .patterns=0, .final=0, .range=0 },/* 5600 */
      { .f_node=2299, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5602, .patterns=0, .final=0, .range=0 },/* 5601 */
      { .f_node=2300, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5603, .patterns=0, .final=0, .range=0 },/* 5602 */
      { .f_node=3733, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5604, .patterns=0, .final=0, .range=0 },/* 5603 */
      { .f_node=5293, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5605, .patterns=0, .final=0, .range=0 },/* 5604 */
      { .f_node=5294, .degree=0, .alpha=0x78/* 'x' */, .outgoing=5606, .patterns=0, .final=0, .range=0 },/* 5605 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5607, .patterns=0, .final=0, .range=0 },/* 5606 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5608, .patterns=0, .final=0, .range=0 },/* 5607 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5609, .patterns=0, .final=0, .range=0 },/* 5608 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=5610, .patterns=0, .final=0, .range=0 },/* 5609 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=596, .final=1, .range=0 },/* 5610 */
      { .f_node=3733, .degree=0, .alpha=0x73/* 's' */, .outgoing=5612, .patterns=0, .final=0, .range=0 },/* 5611 */
      { .f_node=4278, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5613, .patterns=0, .final=0, .range=0 },/* 5612 */
      { .f_node=3563, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5614, .patterns=0, .final=0, .range=0 },/* 5613 */
      { .f_node=5293, .degree=0, .alpha=0x76/* 'v' */, .outgoing=5615, .patterns=0, .final=0, .range=0 },/* 5614 */
      { .f_node=5786, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5616, .patterns=0, .final=0, .range=0 },/* 5615 */
      { .f_node=3733, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5617, .patterns=0, .final=0, .range=0 },/* 5616 */
      { .f_node=5596, .degree=0, .alpha=0x2d/* '-' */, .outgoing=5618, .patterns=0, .final=0, .range=0 },/* 5617 */
      { .f_node=5969, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5619, .patterns=0, .final=0, .range=0 },/* 5618 */
      { .f_node=3733, .degree=0, .alpha=0x75/* 'u' */, .outgoing=5620, .patterns=0, .final=0, .range=0 },/* 5619 */
      { .f_node=5858, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5621, .patterns=0, .final=0, .range=0 },/* 5620 */
      { .f_node=877, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5622, .patterns=0, .final=0, .range=0 },/* 5621 */
      { .f_node=1700, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5623, .patterns=0, .final=0, .range=0 },/* 5622 */
      { .f_node=3733, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5624, .patterns=0, .final=0, .range=0 },/* 5623 */
      { .f_node=5293, .degree=0, .alpha=0x75/* 'u' */, .outgoing=5625, .patterns=0, .final=0, .range=0 },/* 5624 */
      { .f_node=5858, .degree=0, .alpha=0x78/* 'x' */, .outgoing=5626, .patterns=0, .final=0, .range=0 },/* 5625 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5627, .patterns=0, .final=0, .range=0 },/* 5626 */
      { .f_node=877, .degree=0, .alpha=0x66/* 'f' */, .outgoing=5628, .patterns=0, .final=0, .range=0 },/* 5627 */
      { .f_node=2299, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5629, .patterns=0, .final=0, .range=0 },/* 5628 */
      { .f_node=3324, .degree=0, .alpha=0x00, .outgoing=0, .patterns=597, .final=1, .range=0 },/* 5629 */
      { .f_node=5858, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5631, .patterns=0, .final=0, .range=0 },/* 5630 */
      { .f_node=4708, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5632, .patterns=0, .final=0, .range=0 },/* 5631 */
      { .f_node=3983, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5633, .patterns=0, .final=0, .range=0 },/* 5632 */
      { .f_node=3733, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5634, .patterns=0, .final=0, .range=0 },/* 5633 */
      { .f_node=5293, .degree=0, .alpha=0x73/* 's' */, .outgoing=5635, .patterns=0, .final=0, .range=0 },/* 5634 */
      { .f_node=4278, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5636, .patterns=0, .final=0, .range=0 },/* 5635 */
      { .f_node=4302, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5637, .patterns=0, .final=0, .range=0 },/* 5636 */
      { .f_node=3983, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5638, .patterns=0, .final=0, .range=0 },/* 5637 */
      { .f_node=3983, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5639, .patterns=0, .final=0, .range=0 },/* 5638 */
      { .f_node=877, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5640, .patterns=0, .final=0, .range=0 },/* 5639 */
      { .f_node=2338, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5641, .patterns=0, .final=0, .range=0 },/* 5640 */
      { .f_node=3669, .degree=0, .alpha=0x67/* 'g' */, .outgoing=5642, .patterns=0, .final=0, .range=0 },/* 5641 */
      { .f_node=5159, .degree=0, .alpha=0x00, .outgoing=0, .patterns=598, .final=1, .range=0 },/* 5642 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5644, .patterns=0, .final=0, .range=0 },/* 5643 */
      { .f_node=877, .degree=0, .alpha=0x67/* 'g' */, .outgoing=5645, .patterns=0, .final=0, .range=0 },/* 5644 */
      { .f_node=1763, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5646, .patterns=0, .final=0, .range=0 },/* 5645 */
      { .f_node=2762, .degree=0, .alpha=0x74/* 't' */, .outgoing=5647, .patterns=0, .final=0, .range=0 },/* 5646 */
      { .f_node=2937, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5648, .patterns=0, .final=0, .range=0 },/* 5647 */
      { .f_node=4956, .degree=0, .alpha=0x77/* 'w' */, .outgoing=5649, .patterns=0, .final=0, .range=0 },/* 5648 */
      { .f_node=5671, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5650, .patterns=0, .final=0, .range=0 },/* 5649 */
      { .f_node=5672, .degree=0, .alpha=0x79/* 'y' */, .outgoing=5651, .patterns=0, .final=0, .range=0 },/* 5650 */
      { .f_node=5800, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5652, .patterns=0, .final=0, .range=0 },/* 5651 */
      { .f_node=877, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5653, .patterns=0, .final=0, .range=0 },/* 5652 */
      { .f_node=1285, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5654, .patterns=0, .final=0, .range=0 },/* 5653 */
      { .f_node=1286, .degree=0, .alpha=0x73/* 's' */, .outgoing=5655, .patterns=0, .final=0, .range=0 },/* 5654 */
      { .f_node=4760, .degree=0, .alpha=0x73/* 's' */, .outgoing=5656, .patterns=0, .final=0, .range=0 },/* 5655 */
      { .f_node=4761, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5657, .patterns=0, .final=0, .range=0 },/* 5656 */
      { .f_node=4762, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5658, .patterns=0, .final=0, .range=0 },/* 5657 */
      { .f_node=4763, .degree=0, .alpha=0x67/* 'g' */, .outgoing=5659, .patterns=0, .final=0, .range=0 },/* 5658 */
      { .f_node=4764, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5660, .patterns=0, .final=0, .range=0 },/* 5659 */
      { .f_node=4765, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5661, .patterns=0, .final=0, .range=0 },/* 5660 */
      { .f_node=4766, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5662, .patterns=0, .final=0, .range=0 },/* 5661 */
      { .f_node=4767, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5663, .patterns=0, .final=0, .range=0 },/* 5662 */
      { .f_node=1700, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5664, .patterns=0, .final=0, .range=0 },/* 5663 */
      { .f_node=1745, .degree=0, .alpha=0x76/* 'v' */, .outgoing=5665, .patterns=0, .final=0, .range=0 },/* 5664 */
      { .f_node=5786, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5666, .patterns=0, .final=0, .range=0 },/* 5665 */
      { .f_node=3733, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5667, .patterns=0, .final=0, .range=0 },/* 5666 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5668, .patterns=0, .final=0, .range=0 },/* 5667 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5669, .patterns=0, .final=0, .range=0 },/* 5668 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5670, .patterns=0, .final=0, .range=0 },/* 5669 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=599, .final=1, .range=0 },/* 5670 */
      { .f_node=1, .degree=14, .alpha=0x61, .outgoing=1768, .patterns=0, .final=0, .range=1 },/* 5671 */
      { .f_node=2762, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=5673, .patterns=0, .final=0, .range=0 },/* 5672 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5674, .patterns=0, .final=0, .range=0 },/* 5673 */
      { .f_node=3733, .degree=0, .alpha=0x73/* 's' */, .outgoing=5675, .patterns=0, .final=0, .range=0 },/* 5674 */
      { .f_node=4278, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5676, .patterns=0, .final=0, .range=0 },/* 5675 */
      { .f_node=4478, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5677, .patterns=0, .final=0, .range=0 },/* 5676 */
      { .f_node=4479, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5678, .patterns=0, .final=0, .range=0 },/* 5677 */
      { .f_node=4480, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5679, .patterns=0, .final=0, .range=0 },/* 5678 */
      { .f_node=5471, .degree=0, .alpha=0x68/* 'h' */, .outgoing=5680, .patterns=0, .final=0, .range=0 },/* 5679 */
      { .f_node=5919, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5681, .patterns=0, .final=0, .range=0 },/* 5680 */
      { .f_node=2762, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5682, .patterns=0, .final=0, .range=0 },/* 5681 */
      { .f_node=5471, .degree=0, .alpha=0x74/* 't' */, .outgoing=5683, .patterns=0, .final=0, .range=0 },/* 5682 */
      { .f_node=4944, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5684, .patterns=0, .final=0, .range=0 },/* 5683 */
      { .f_node=5042, .degree=0, .alpha=0x76/* 'v' */, .outgoing=5685, .patterns=0, .final=0, .range=0 },/* 5684 */
      { .f_node=5786, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5686, .patterns=0, .final=0, .range=0 },/* 5685 */
      { .f_node=3324, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5687, .patterns=0, .final=0, .range=0 },/* 5686 */
      { .f_node=2762, .degree=0, .alpha=0x74/* 't' */, .outgoing=5688, .patterns=0, .final=0, .range=0 },/* 5687 */
      { .f_node=2937, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5689, .patterns=0, .final=0, .range=0 },/* 5688 */
      { .f_node=5042, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5690, .patterns=0, .final=0, .range=0 },/* 5689 */
      { .f_node=3515, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5691, .patterns=0, .final=0, .range=0 },/* 5690 */
      { .f_node=3609, .degree=0, .alpha=0x2d/* '-' */, .outgoing=5692, .patterns=0, .final=0, .range=0 },/* 5691 */
      { .f_node=5969, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5693, .patterns=0, .final=0, .range=0 },/* 5692 */
      { .f_node=3983, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5694, .patterns=0, .final=0, .range=0 },/* 5693 */
      { .f_node=4025, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5695, .patterns=0, .final=0, .range=0 },/* 5694 */
      { .f_node=877, .degree=0, .alpha=0x67/* 'g' */, .outgoing=5696, .patterns=0, .final=0, .range=0 },/* 5695 */
      { .f_node=1763, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5697, .patterns=0, .final=0, .range=0 },/* 5696 */
      { .f_node=1811, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5698, .patterns=0, .final=0, .range=0 },/* 5697 */
      { .f_node=1812, .degree=0, .alpha=0x67/* 'g' */, .outgoing=5699, .patterns=0, .final=0, .range=0 },/* 5698 */
      { .f_node=1813, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5700, .patterns=0, .final=0, .range=0 },/* 5699 */
      { .f_node=1814, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5701, .patterns=0, .final=0, .range=0 },/* 5700 */
      { .f_node=1815, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5702, .patterns=0, .final=0, .range=0 },/* 5701 */
      { .f_node=5178, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5703, .patterns=0, .final=0, .range=0 },/* 5702 */
      { .f_node=5190, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5704, .patterns=0, .final=0, .range=0 },/* 5703 */
      { .f_node=5191, .degree=0, .alpha=0x73/* 's' */, .outgoing=5705, .patterns=0, .final=0, .range=0 },/* 5704 */
      { .f_node=5192, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5706, .patterns=0, .final=0, .range=0 },/* 5705 */
      { .f_node=5193, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5707, .patterns=0, .final=0, .range=0 },/* 5706 */
      { .f_node=5194, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5708, .patterns=0, .final=0, .range=0 },/* 5707 */
      { .f_node=5195, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5709, .patterns=0, .final=0, .range=0 },/* 5708 */
      { .f_node=5196, .degree=0, .alpha=0x00, .outgoing=0, .patterns=600, .final=1, .range=0 },/* 5709 */
      { .f_node=3733, .degree=0, .alpha=0x62/* 'b' */, .outgoing=5711, .patterns=0, .final=0, .range=0 },/* 5710 */
      { .f_node=4204, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5712, .patterns=0, .final=0, .range=0 },/* 5711 */
      { .f_node=877, .degree=0, .alpha=0x74/* 't' */, .outgoing=5713, .patterns=0, .final=0, .range=0 },/* 5712 */
      { .f_node=1634, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5714, .patterns=0, .final=0, .range=0 },/* 5713 */
      { .f_node=1635, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5715, .patterns=0, .final=0, .range=0 },/* 5714 */
      { .f_node=5293, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5716, .patterns=0, .final=0, .range=0 },/* 5715 */
      { .f_node=3733, .degree=0, .alpha=0x67/* 'g' */, .outgoing=5717, .patterns=0, .final=0, .range=0 },/* 5716 */
      { .f_node=5159, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5718, .patterns=0, .final=0, .range=0 },/* 5717 */
      { .f_node=5596, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5719, .patterns=0, .final=0, .range=0 },/* 5718 */
      { .f_node=2762, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5720, .patterns=0, .final=0, .range=0 },/* 5719 */
      { .f_node=2808, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5721, .patterns=0, .final=0, .range=0 },/* 5720 */
      { .f_node=877, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5722, .patterns=0, .final=0, .range=0 },/* 5721 */
      { .f_node=2338, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5723, .patterns=0, .final=0, .range=0 },/* 5722 */
      { .f_node=3669, .degree=0, .alpha=0x67/* 'g' */, .outgoing=5724, .patterns=0, .final=0, .range=0 },/* 5723 */
      { .f_node=5159, .degree=0, .alpha=0x00, .outgoing=0, .patterns=602, .final=1, .range=0 },/* 5724 */
      { .f_node=5919, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5726, .patterns=0, .final=0, .range=0 },/* 5725 */
      { .f_node=3324, .degree=0, .alpha=0x73/* 's' */, .outgoing=5727, .patterns=0, .final=0, .range=0 },/* 5726 */
      { .f_node=4278, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5728, .patterns=0, .final=0, .range=0 },/* 5727 */
      { .f_node=4478, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5729, .patterns=0, .final=0, .range=0 },/* 5728 */
      { .f_node=4479, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5730, .patterns=0, .final=0, .range=0 },/* 5729 */
      { .f_node=5596, .degree=0, .alpha=0x73/* 's' */, .outgoing=5731, .patterns=0, .final=0, .range=0 },/* 5730 */
      { .f_node=4278, .degree=0, .alpha=0x79/* 'y' */, .outgoing=5732, .patterns=0, .final=0, .range=0 },/* 5731 */
      { .f_node=5800, .degree=0, .alpha=0x73/* 's' */, .outgoing=5733, .patterns=0, .final=0, .range=0 },/* 5732 */
      { .f_node=4278, .degree=0, .alpha=0x74/* 't' */, .outgoing=5734, .patterns=0, .final=0, .range=0 },/* 5733 */
      { .f_node=4573, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5735, .patterns=0, .final=0, .range=0 },/* 5734 */
      { .f_node=4644, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5736, .patterns=0, .final=0, .range=0 },/* 5735 */
      { .f_node=4708, .degree=0, .alpha=0x73/* 's' */, .outgoing=5737, .patterns=0, .final=0, .range=0 },/* 5736 */
      { .f_node=4868, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5738, .patterns=0, .final=0, .range=0 },/* 5737 */
      { .f_node=877, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5739, .patterns=0, .final=0, .range=0 },/* 5738 */
      { .f_node=2338, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5740, .patterns=0, .final=0, .range=0 },/* 5739 */
      { .f_node=3669, .degree=0, .alpha=0x67/* 'g' */, .outgoing=5741, .patterns=0, .final=0, .range=0 },/* 5740 */
      { .f_node=5159, .degree=0, .alpha=0x00, .outgoing=0, .patterns=603, .final=1, .range=0 },/* 5741 */
      { .f_node=3324, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=5743, .patterns=0, .final=0, .range=0 },/* 5742 */
      { .f_node=1, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5744, .patterns=0, .final=0, .range=0 },/* 5743 */
      { .f_node=3324, .degree=3, .alpha=0x6d, .outgoing=1783, .patterns=0, .final=0, .range=1 },/* 5744 */
      { .f_node=3393, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5746, .patterns=0, .final=0, .range=0 },/* 5745 */
      { .f_node=4751, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5747, .patterns=0, .final=0, .range=0 },/* 5746 */
      { .f_node=4752, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5748, .patterns=0, .final=0, .range=0 },/* 5747 */
      { .f_node=4753, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5749, .patterns=0, .final=0, .range=0 },/* 5748 */
      { .f_node=4754, .degree=1, .alpha=0x00, .outgoing=1787, .patterns=0, .final=0, .range=0 },/* 5749 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=604, .final=1, .range=0 },/* 5750 */
      { .f_node=5332, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5752, .patterns=0, .final=0, .range=0 },/* 5751 */
      { .f_node=3563, .degree=0, .alpha=0x75/* 'u' */, .outgoing=5753, .patterns=0, .final=0, .range=0 },/* 5752 */
      { .f_node=3718, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5754, .patterns=0, .final=0, .range=0 },/* 5753 */
      { .f_node=5418, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5755, .patterns=0, .final=0, .range=0 },/* 5754 */
      { .f_node=2, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5756, .patterns=0, .final=0, .range=0 },/* 5755 */
      { .f_node=413, .degree=0, .alpha=0x74/* 't' */, .outgoing=5757, .patterns=0, .final=0, .range=0 },/* 5756 */
      { .f_node=414, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5758, .patterns=0, .final=0, .range=0 },/* 5757 */
      { .f_node=5042, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5759, .patterns=0, .final=0, .range=0 },/* 5758 */
      { .f_node=3515, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5760, .patterns=0, .final=0, .range=0 },/* 5759 */
      { .f_node=3609, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5761, .patterns=0, .final=0, .range=0 },/* 5760 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=605, .final=1, .range=0 },/* 5761 */
      { .f_node=3983, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5763, .patterns=0, .final=0, .range=0 },/* 5762 */
      { .f_node=3733, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5764, .patterns=0, .final=0, .range=0 },/* 5763 */
      { .f_node=3905, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5765, .patterns=0, .final=0, .range=0 },/* 5764 */
      { .f_node=786, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5766, .patterns=0, .final=0, .range=0 },/* 5765 */
      { .f_node=2762, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5767, .patterns=0, .final=0, .range=0 },/* 5766 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=606, .final=1, .range=0 },/* 5767 */
      { .f_node=3563, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5769, .patterns=0, .final=0, .range=0 },/* 5768 */
      { .f_node=3669, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5770, .patterns=0, .final=0, .range=0 },/* 5769 */
      { .f_node=5293, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5771, .patterns=0, .final=0, .range=0 },/* 5770 */
      { .f_node=2, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5772, .patterns=0, .final=0, .range=0 },/* 5771 */
      { .f_node=85, .degree=0, .alpha=0x66/* 'f' */, .outgoing=5773, .patterns=0, .final=0, .range=0 },/* 5772 */
      { .f_node=3579, .degree=0, .alpha=0x77/* 'w' */, .outgoing=5774, .patterns=0, .final=0, .range=0 },/* 5773 */
      { .f_node=5671, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5775, .patterns=0, .final=0, .range=0 },/* 5774 */
      { .f_node=5672, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5776, .patterns=0, .final=0, .range=0 },/* 5775 */
      { .f_node=5596, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5777, .patterns=0, .final=0, .range=0 },/* 5776 */
      { .f_node=5471, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5778, .patterns=0, .final=0, .range=0 },/* 5777 */
      { .f_node=5530, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5779, .patterns=0, .final=0, .range=0 },/* 5778 */
      { .f_node=2762, .degree=0, .alpha=0x66/* 'f' */, .outgoing=5780, .patterns=0, .final=0, .range=0 },/* 5779 */
      { .f_node=5332, .degree=0, .alpha=0x74/* 't' */, .outgoing=5781, .patterns=0, .final=0, .range=0 },/* 5780 */
      { .f_node=4944, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5782, .patterns=0, .final=0, .range=0 },/* 5781 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5783, .patterns=0, .final=0, .range=0 },/* 5782 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5784, .patterns=0, .final=0, .range=0 },/* 5783 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5785, .patterns=0, .final=0, .range=0 },/* 5784 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=607, .final=1, .range=0 },/* 5785 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5787, .patterns=0, .final=0, .range=0 },/* 5786 */
      { .f_node=877, .degree=0, .alpha=0x77/* 'w' */, .outgoing=5788, .patterns=0, .final=0, .range=0 },/* 5787 */
      { .f_node=1942, .degree=0, .alpha=0x68/* 'h' */, .outgoing=5789, .patterns=0, .final=0, .range=0 },/* 5788 */
      { .f_node=1961, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5790, .patterns=0, .final=0, .range=0 },/* 5789 */
      { .f_node=1962, .degree=0, .alpha=0x74/* 't' */, .outgoing=5791, .patterns=0, .final=0, .range=0 },/* 5790 */
      { .f_node=1963, .degree=0, .alpha=0x73/* 's' */, .outgoing=5792, .patterns=0, .final=0, .range=0 },/* 5791 */
      { .f_node=1964, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5793, .patterns=0, .final=0, .range=0 },/* 5792 */
      { .f_node=1965, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5794, .patterns=0, .final=0, .range=0 },/* 5793 */
      { .f_node=1966, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5795, .patterns=0, .final=0, .range=0 },/* 5794 */
      { .f_node=1967, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5796, .patterns=0, .final=0, .range=0 },/* 5795 */
      { .f_node=1968, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5797, .patterns=608, .final=1, .range=0 },/* 5796 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5798, .patterns=0, .final=0, .range=0 },/* 5797 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=5799, .patterns=0, .final=0, .range=0 },/* 5798 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=609, .final=1, .range=0 },/* 5799 */
      { .f_node=1, .degree=19, .alpha=0x61, .outgoing=1789, .patterns=0, .final=0, .range=1 },/* 5800 */
      { .f_node=2762, .degree=0, .alpha=0x68/* 'h' */, .outgoing=5802, .patterns=0, .final=0, .range=0 },/* 5801 */
      { .f_node=5919, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5803, .patterns=0, .final=0, .range=0 },/* 5802 */
      { .f_node=5953, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5804, .patterns=0, .final=0, .range=0 },/* 5803 */
      { .f_node=3563, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5805, .patterns=0, .final=0, .range=0 },/* 5804 */
      { .f_node=2762, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5806, .patterns=0, .final=0, .range=0 },/* 5805 */
      { .f_node=2891, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5807, .patterns=0, .final=0, .range=0 },/* 5806 */
      { .f_node=4157, .degree=0, .alpha=0x73/* 's' */, .outgoing=5808, .patterns=0, .final=0, .range=0 },/* 5807 */
      { .f_node=4278, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5809, .patterns=0, .final=0, .range=0 },/* 5808 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=610, .final=1, .range=0 },/* 5809 */
      { .f_node=3563, .degree=0, .alpha=0x75/* 'u' */, .outgoing=5811, .patterns=0, .final=0, .range=0 },/* 5810 */
      { .f_node=3718, .degree=0, .alpha=0x74/* 't' */, .outgoing=5812, .patterns=0, .final=0, .range=0 },/* 5811 */
      { .f_node=3719, .degree=0, .alpha=0x75/* 'u' */, .outgoing=5813, .patterns=0, .final=0, .range=0 },/* 5812 */
      { .f_node=5109, .degree=1, .alpha=0x00, .outgoing=1809, .patterns=0, .final=0, .range=0 },/* 5813 */
      { .f_node=5859, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5815, .patterns=0, .final=0, .range=0 },/* 5814 */
      { .f_node=3733, .degree=2, .alpha=0x00, .outgoing=1811, .patterns=0, .final=0, .range=0 },/* 5815 */
      { .f_node=3324, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5817, .patterns=0, .final=0, .range=0 },/* 5816 */
      { .f_node=877, .degree=0, .alpha=0x67/* 'g' */, .outgoing=5818, .patterns=0, .final=0, .range=0 },/* 5817 */
      { .f_node=1763, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5819, .patterns=0, .final=0, .range=0 },/* 5818 */
      { .f_node=1811, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5820, .patterns=0, .final=0, .range=0 },/* 5819 */
      { .f_node=1812, .degree=0, .alpha=0x67/* 'g' */, .outgoing=5821, .patterns=0, .final=0, .range=0 },/* 5820 */
      { .f_node=1813, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5822, .patterns=0, .final=0, .range=0 },/* 5821 */
      { .f_node=1814, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5823, .patterns=0, .final=0, .range=0 },/* 5822 */
      { .f_node=1815, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5824, .patterns=0, .final=0, .range=0 },/* 5823 */
      { .f_node=5178, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5825, .patterns=0, .final=0, .range=0 },/* 5824 */
      { .f_node=5190, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5826, .patterns=0, .final=0, .range=0 },/* 5825 */
      { .f_node=5191, .degree=0, .alpha=0x73/* 's' */, .outgoing=5827, .patterns=0, .final=0, .range=0 },/* 5826 */
      { .f_node=5192, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5828, .patterns=0, .final=0, .range=0 },/* 5827 */
      { .f_node=5193, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5829, .patterns=0, .final=0, .range=0 },/* 5828 */
      { .f_node=5194, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5830, .patterns=0, .final=0, .range=0 },/* 5829 */
      { .f_node=5195, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5831, .patterns=0, .final=0, .range=0 },/* 5830 */
      { .f_node=5196, .degree=0, .alpha=0x00, .outgoing=0, .patterns=611, .final=1, .range=0 },/* 5831 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=613, .final=1, .range=0 },/* 5832 */
      { .f_node=5969, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5834, .patterns=0, .final=0, .range=0 },/* 5833 */
      { .f_node=5418, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5835, .patterns=0, .final=0, .range=0 },/* 5834 */
      { .f_node=3563, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5836, .patterns=0, .final=0, .range=0 },/* 5835 */
      { .f_node=3564, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5837, .patterns=0, .final=0, .range=0 },/* 5836 */
      { .f_node=5499, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5838, .patterns=0, .final=0, .range=0 },/* 5837 */
      { .f_node=3563, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=5839, .patterns=0, .final=0, .range=0 },/* 5838 */
      { .f_node=1, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5840, .patterns=0, .final=0, .range=0 },/* 5839 */
      { .f_node=3324, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5841, .patterns=0, .final=0, .range=0 },/* 5840 */
      { .f_node=3733, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5842, .patterns=0, .final=0, .range=0 },/* 5841 */
      { .f_node=877, .degree=0, .alpha=0x00, .outgoing=0, .patterns=614, .final=1, .range=0 },/* 5842 */
      { .f_node=877, .degree=0, .alpha=0x62/* 'b' */, .outgoing=5844, .patterns=0, .final=0, .range=0 },/* 5843 */
      { .f_node=1678, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5845, .patterns=0, .final=0, .range=0 },/* 5844 */
      { .f_node=3733, .degree=0, .alpha=0x00, .outgoing=0, .patterns=615, .final=1, .range=0 },/* 5845 */
      { .f_node=4944, .degree=0, .alpha=0x33/* '3' */, .outgoing=5847, .patterns=0, .final=0, .range=0 },/* 5846 */
      { .f_node=1, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5848, .patterns=0, .final=0, .range=0 },/* 5847 */
      { .f_node=877, .degree=0, .alpha=0x67/* 'g' */, .outgoing=5849, .patterns=0, .final=0, .range=0 },/* 5848 */
      { .f_node=1763, .degree=0, .alpha=0x67/* 'g' */, .outgoing=5850, .patterns=0, .final=0, .range=0 },/* 5849 */
      { .f_node=5231, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5851, .patterns=0, .final=0, .range=0 },/* 5850 */
      { .f_node=5232, .degree=0, .alpha=0x68/* 'h' */, .outgoing=5852, .patterns=0, .final=0, .range=0 },/* 5851 */
      { .f_node=5233, .degree=0, .alpha=0x74/* 't' */, .outgoing=5853, .patterns=0, .final=0, .range=0 },/* 5852 */
      { .f_node=5234, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5854, .patterns=0, .final=0, .range=0 },/* 5853 */
      { .f_node=5235, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5855, .patterns=0, .final=0, .range=0 },/* 5854 */
      { .f_node=5236, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5856, .patterns=0, .final=0, .range=0 },/* 5855 */
      { .f_node=5237, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5857, .patterns=0, .final=0, .range=0 },/* 5856 */
      { .f_node=5238, .degree=0, .alpha=0x00, .outgoing=0, .patterns=616, .final=1, .range=0 },/* 5857 */
      { .f_node=1, .degree=14, .alpha=0x62, .outgoing=1814, .patterns=0, .final=0, .range=1 },/* 5858 */
      { .f_node=4204, .degree=0, .alpha=0x75/* 'u' */, .outgoing=5860, .patterns=0, .final=0, .range=0 },/* 5859 */
      { .f_node=4234, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5861, .patterns=0, .final=0, .range=0 },/* 5860 */
      { .f_node=5418, .degree=0, .alpha=0x74/* 't' */, .outgoing=5862, .patterns=0, .final=0, .range=0 },/* 5861 */
      { .f_node=5464, .degree=0, .alpha=0x75/* 'u' */, .outgoing=5863, .patterns=0, .final=0, .range=0 },/* 5862 */
      { .f_node=5109, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5864, .patterns=0, .final=0, .range=0 },/* 5863 */
      { .f_node=877, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5865, .patterns=0, .final=0, .range=0 },/* 5864 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5866, .patterns=0, .final=0, .range=0 },/* 5865 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5867, .patterns=0, .final=0, .range=0 },/* 5866 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=618, .final=1, .range=0 },/* 5867 */
      { .f_node=3983, .degree=8, .alpha=0x64, .outgoing=1829, .patterns=0, .final=0, .range=1 },/* 5868 */
      { .f_node=2, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5870, .patterns=0, .final=0, .range=0 },/* 5869 */
      { .f_node=413, .degree=0, .alpha=0x74/* 't' */, .outgoing=5871, .patterns=0, .final=0, .range=0 },/* 5870 */
      { .f_node=414, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5872, .patterns=0, .final=0, .range=0 },/* 5871 */
      { .f_node=4956, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5873, .patterns=0, .final=0, .range=0 },/* 5872 */
      { .f_node=877, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5874, .patterns=0, .final=0, .range=0 },/* 5873 */
      { .f_node=1285, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5875, .patterns=0, .final=0, .range=0 },/* 5874 */
      { .f_node=1319, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5876, .patterns=0, .final=0, .range=0 },/* 5875 */
      { .f_node=1320, .degree=0, .alpha=0x72/* 'r' */, .outgoing=5877, .patterns=0, .final=0, .range=0 },/* 5876 */
      { .f_node=1321, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5878, .patterns=0, .final=0, .range=0 },/* 5877 */
      { .f_node=1322, .degree=0, .alpha=0x73/* 's' */, .outgoing=5879, .patterns=0, .final=0, .range=0 },/* 5878 */
      { .f_node=1323, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5880, .patterns=0, .final=0, .range=0 },/* 5879 */
      { .f_node=1324, .degree=0, .alpha=0x66/* 'f' */, .outgoing=5881, .patterns=0, .final=0, .range=0 },/* 5880 */
      { .f_node=1325, .degree=0, .alpha=0x74/* 't' */, .outgoing=5882, .patterns=0, .final=0, .range=0 },/* 5881 */
      { .f_node=1326, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5883, .patterns=0, .final=0, .range=0 },/* 5882 */
      { .f_node=1327, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5884, .patterns=0, .final=0, .range=0 },/* 5883 */
      { .f_node=1328, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5885, .patterns=0, .final=0, .range=0 },/* 5884 */
      { .f_node=1329, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5886, .patterns=0, .final=0, .range=0 },/* 5885 */
      { .f_node=1330, .degree=0, .alpha=0x00, .outgoing=0, .patterns=619, .final=1, .range=0 },/* 5886 */
      { .f_node=3997, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5888, .patterns=0, .final=0, .range=0 },/* 5887 */
      { .f_node=5304, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5889, .patterns=0, .final=0, .range=0 },/* 5888 */
      { .f_node=2762, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5890, .patterns=0, .final=0, .range=0 },/* 5889 */
      { .f_node=2773, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5891, .patterns=0, .final=0, .range=0 },/* 5890 */
      { .f_node=772, .degree=3, .alpha=0x76, .outgoing=1838, .patterns=0, .final=0, .range=1 },/* 5891 */
      { .f_node=2428, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5893, .patterns=0, .final=0, .range=0 },/* 5892 */
      { .f_node=2436, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5894, .patterns=0, .final=0, .range=0 },/* 5893 */
      { .f_node=2446, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5895, .patterns=0, .final=0, .range=0 },/* 5894 */
      { .f_node=3733, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5896, .patterns=0, .final=0, .range=0 },/* 5895 */
      { .f_node=3563, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5897, .patterns=0, .final=0, .range=0 },/* 5896 */
      { .f_node=877, .degree=0, .alpha=0x67/* 'g' */, .outgoing=5898, .patterns=0, .final=0, .range=0 },/* 5897 */
      { .f_node=1763, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5899, .patterns=0, .final=0, .range=0 },/* 5898 */
      { .f_node=1811, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5900, .patterns=0, .final=0, .range=0 },/* 5899 */
      { .f_node=1812, .degree=0, .alpha=0x67/* 'g' */, .outgoing=5901, .patterns=0, .final=0, .range=0 },/* 5900 */
      { .f_node=1813, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5902, .patterns=0, .final=0, .range=0 },/* 5901 */
      { .f_node=1814, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5903, .patterns=0, .final=0, .range=0 },/* 5902 */
      { .f_node=1815, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5904, .patterns=0, .final=0, .range=0 },/* 5903 */
      { .f_node=1853, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5905, .patterns=621, .final=1, .range=0 },/* 5904 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5906, .patterns=0, .final=0, .range=0 },/* 5905 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5907, .patterns=0, .final=0, .range=0 },/* 5906 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=623, .final=1, .range=0 },/* 5907 */
      { .f_node=2468, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5909, .patterns=0, .final=0, .range=0 },/* 5908 */
      { .f_node=2481, .degree=0, .alpha=0x75/* 'u' */, .outgoing=5910, .patterns=0, .final=0, .range=0 },/* 5909 */
      { .f_node=2482, .degree=0, .alpha=0x74/* 't' */, .outgoing=5911, .patterns=0, .final=0, .range=0 },/* 5910 */
      { .f_node=2483, .degree=0, .alpha=0x75/* 'u' */, .outgoing=5912, .patterns=0, .final=0, .range=0 },/* 5911 */
      { .f_node=2484, .degree=0, .alpha=0x62/* 'b' */, .outgoing=5913, .patterns=0, .final=0, .range=0 },/* 5912 */
      { .f_node=2485, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5914, .patterns=0, .final=0, .range=0 },/* 5913 */
      { .f_node=2486, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5915, .patterns=0, .final=0, .range=0 },/* 5914 */
      { .f_node=5832, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5916, .patterns=624, .final=1, .range=0 },/* 5915 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5917, .patterns=0, .final=0, .range=0 },/* 5916 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5918, .patterns=0, .final=0, .range=0 },/* 5917 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=625, .final=1, .range=0 },/* 5918 */
      { .f_node=1, .degree=10, .alpha=0x65, .outgoing=1842, .patterns=0, .final=0, .range=1 },/* 5919 */
      { .f_node=3733, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5921, .patterns=0, .final=0, .range=0 },/* 5920 */
      { .f_node=2762, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5922, .patterns=0, .final=0, .range=0 },/* 5921 */
      { .f_node=2773, .degree=0, .alpha=0x73/* 's' */, .outgoing=5923, .patterns=0, .final=0, .range=0 },/* 5922 */
      { .f_node=854, .degree=0, .alpha=0x2d/* '-' */, .outgoing=5924, .patterns=0, .final=0, .range=0 },/* 5923 */
      { .f_node=5969, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5925, .patterns=0, .final=0, .range=0 },/* 5924 */
      { .f_node=2762, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=5926, .patterns=0, .final=0, .range=0 },/* 5925 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=5927, .patterns=0, .final=0, .range=0 },/* 5926 */
      { .f_node=5969, .degree=0, .alpha=0x73/* 's' */, .outgoing=5928, .patterns=0, .final=0, .range=0 },/* 5927 */
      { .f_node=4278, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5929, .patterns=0, .final=0, .range=0 },/* 5928 */
      { .f_node=4478, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5930, .patterns=0, .final=0, .range=0 },/* 5929 */
      { .f_node=4487, .degree=0, .alpha=0x74/* 't' */, .outgoing=5931, .patterns=0, .final=0, .range=0 },/* 5930 */
      { .f_node=4488, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5932, .patterns=0, .final=0, .range=0 },/* 5931 */
      { .f_node=4489, .degree=0, .alpha=0x66/* 'f' */, .outgoing=5933, .patterns=0, .final=0, .range=0 },/* 5932 */
      { .f_node=4490, .degree=0, .alpha=0x79/* 'y' */, .outgoing=5934, .patterns=0, .final=0, .range=0 },/* 5933 */
      { .f_node=4491, .degree=0, .alpha=0x2d/* '-' */, .outgoing=5935, .patterns=0, .final=0, .range=0 },/* 5934 */
      { .f_node=4502, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5936, .patterns=0, .final=0, .range=0 },/* 5935 */
      { .f_node=4503, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5937, .patterns=0, .final=0, .range=0 },/* 5936 */
      { .f_node=4504, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5938, .patterns=0, .final=0, .range=0 },/* 5937 */
      { .f_node=4505, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5939, .patterns=0, .final=0, .range=0 },/* 5938 */
      { .f_node=4506, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5940, .patterns=0, .final=0, .range=0 },/* 5939 */
      { .f_node=4507, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=5941, .patterns=0, .final=0, .range=0 },/* 5940 */
      { .f_node=4508, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5942, .patterns=0, .final=0, .range=0 },/* 5941 */
      { .f_node=4509, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5943, .patterns=0, .final=0, .range=0 },/* 5942 */
      { .f_node=4510, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5944, .patterns=0, .final=0, .range=0 },/* 5943 */
      { .f_node=4511, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5945, .patterns=0, .final=0, .range=0 },/* 5944 */
      { .f_node=4512, .degree=0, .alpha=0x7a/* 'z' */, .outgoing=5946, .patterns=0, .final=0, .range=0 },/* 5945 */
      { .f_node=4513, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5947, .patterns=0, .final=0, .range=0 },/* 5946 */
      { .f_node=4514, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5948, .patterns=0, .final=0, .range=0 },/* 5947 */
      { .f_node=4515, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5949, .patterns=0, .final=0, .range=0 },/* 5948 */
      { .f_node=4516, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5950, .patterns=0, .final=0, .range=0 },/* 5949 */
      { .f_node=4517, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5951, .patterns=0, .final=0, .range=0 },/* 5950 */
      { .f_node=4518, .degree=0, .alpha=0x74/* 't' */, .outgoing=5952, .patterns=0, .final=0, .range=0 },/* 5951 */
      { .f_node=4519, .degree=0, .alpha=0x00, .outgoing=0, .patterns=626, .final=1, .range=0 },/* 5952 */
      { .f_node=3563, .degree=0, .alpha=0x74/* 't' */, .outgoing=5954, .patterns=0, .final=0, .range=0 },/* 5953 */
      { .f_node=4944, .degree=0, .alpha=0x73/* 's' */, .outgoing=5955, .patterns=0, .final=0, .range=0 },/* 5954 */
      { .f_node=4278, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5956, .patterns=0, .final=0, .range=0 },/* 5955 */
      { .f_node=4478, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5957, .patterns=0, .final=0, .range=0 },/* 5956 */
      { .f_node=4487, .degree=0, .alpha=0x74/* 't' */, .outgoing=5958, .patterns=0, .final=0, .range=0 },/* 5957 */
      { .f_node=4488, .degree=0, .alpha=0x73/* 's' */, .outgoing=5959, .patterns=0, .final=0, .range=0 },/* 5958 */
      { .f_node=4278, .degree=0, .alpha=0x68/* 'h' */, .outgoing=5960, .patterns=0, .final=0, .range=0 },/* 5959 */
      { .f_node=4347, .degree=0, .alpha=0x69/* 'i' */, .outgoing=5961, .patterns=0, .final=0, .range=0 },/* 5960 */
      { .f_node=3324, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5962, .patterns=0, .final=0, .range=0 },/* 5961 */
      { .f_node=3733, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5963, .patterns=0, .final=0, .range=0 },/* 5962 */
      { .f_node=5293, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5964, .patterns=0, .final=0, .range=0 },/* 5963 */
      { .f_node=2, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5965, .patterns=0, .final=0, .range=0 },/* 5964 */
      { .f_node=772, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5966, .patterns=0, .final=0, .range=0 },/* 5965 */
      { .f_node=1545, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5967, .patterns=0, .final=0, .range=0 },/* 5966 */
      { .f_node=5499, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5968, .patterns=0, .final=0, .range=0 },/* 5967 */
      { .f_node=5520, .degree=0, .alpha=0x00, .outgoing=0, .patterns=628, .final=1, .range=0 },/* 5968 */
      { .f_node=1, .degree=7, .alpha=0x6d, .outgoing=1853, .patterns=0, .final=0, .range=1 },/* 5969 */
      { .f_node=4708, .degree=0, .alpha=0x73/* 's' */, .outgoing=5971, .patterns=0, .final=0, .range=0 },/* 5970 */
      { .f_node=4868, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5972, .patterns=0, .final=0, .range=0 },/* 5971 */
      { .f_node=4302, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5973, .patterns=0, .final=0, .range=0 },/* 5972 */
      { .f_node=3905, .degree=0, .alpha=0x67/* 'g' */, .outgoing=5974, .patterns=0, .final=0, .range=0 },/* 5973 */
      { .f_node=3906, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5975, .patterns=0, .final=0, .range=0 },/* 5974 */
      { .f_node=3907, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5976, .patterns=0, .final=0, .range=0 },/* 5975 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5977, .patterns=0, .final=0, .range=0 },/* 5976 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5978, .patterns=0, .final=0, .range=0 },/* 5977 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=5979, .patterns=0, .final=0, .range=0 },/* 5978 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=629, .final=1, .range=0 },/* 5979 */
      { .f_node=4944, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5981, .patterns=0, .final=0, .range=0 },/* 5980 */
      { .f_node=4956, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5982, .patterns=0, .final=0, .range=0 },/* 5981 */
      { .f_node=4957, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=5983, .patterns=0, .final=0, .range=0 },/* 5982 */
      { .f_node=4958, .degree=0, .alpha=0x73/* 's' */, .outgoing=5984, .patterns=0, .final=0, .range=0 },/* 5983 */
      { .f_node=4959, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5985, .patterns=0, .final=0, .range=0 },/* 5984 */
      { .f_node=4986, .degree=0, .alpha=0x63/* 'c' */, .outgoing=5986, .patterns=0, .final=0, .range=0 },/* 5985 */
      { .f_node=1545, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=5987, .patterns=0, .final=0, .range=0 },/* 5986 */
      { .f_node=1581, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=5988, .patterns=0, .final=0, .range=0 },/* 5987 */
      { .f_node=1582, .degree=0, .alpha=0x75/* 'u' */, .outgoing=5989, .patterns=0, .final=0, .range=0 },/* 5988 */
      { .f_node=1583, .degree=0, .alpha=0x64/* 'd' */, .outgoing=5990, .patterns=0, .final=0, .range=0 },/* 5989 */
      { .f_node=1584, .degree=0, .alpha=0x61/* 'a' */, .outgoing=5991, .patterns=0, .final=0, .range=0 },/* 5990 */
      { .f_node=413, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5992, .patterns=0, .final=0, .range=0 },/* 5991 */
      { .f_node=2891, .degree=0, .alpha=0x70/* 'p' */, .outgoing=5993, .patterns=0, .final=0, .range=0 },/* 5992 */
      { .f_node=2892, .degree=0, .alpha=0x2e/* '.' */, .outgoing=5994, .patterns=0, .final=0, .range=0 },/* 5993 */
      { .f_node=877, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=5995, .patterns=0, .final=0, .range=0 },/* 5994 */
      { .f_node=2559, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5996, .patterns=0, .final=0, .range=0 },/* 5995 */
      { .f_node=2560, .degree=0, .alpha=0x74/* 't' */, .outgoing=5997, .patterns=0, .final=0, .range=0 },/* 5996 */
      { .f_node=2561, .degree=0, .alpha=0x00, .outgoing=0, .patterns=630, .final=1, .range=0 },/* 5997 */
      {} };
    struct aho_patterns pattern_list_w1[]= {
      { .len=0, .from_start=0, .at_end=0, .last=0, .code=0, .pattern=0 }, /* 0 */
      { .len=28, .from_start=0, .at_end=0, .last=0, .code=1, .pattern=1 }, /* 1 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=18, .pattern=2 }, /* 2 */
      { .len=29, .from_start=0, .at_end=0, .last=0, .code=2, .pattern=3 }, /* 3 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=18, .pattern=2 }, /* 4 */
      { .len=29, .from_start=0, .at_end=0, .last=0, .code=376, .pattern=4 }, /* 5 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=18, .pattern=2 }, /* 6 */
      { .len=26, .from_start=0, .at_end=0, .last=0, .code=92, .pattern=5 }, /* 7 */
      { .len=21, .from_start=0, .at_end=0, .last=1, .code=179, .pattern=6 }, /* 8 */
      { .len=8, .from_start=0, .at_end=0, .last=0, .code=186, .pattern=7 }, /* 9 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=185, .pattern=8 }, /* 10 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=93, .pattern=9 }, /* 11 */
      { .len=18, .from_start=0, .at_end=0, .last=1, .code=126, .pattern=10 }, /* 12 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=131, .pattern=11 }, /* 13 */
      { .len=18, .from_start=0, .at_end=0, .last=1, .code=134, .pattern=12 }, /* 14 */
      { .len=18, .from_start=0, .at_end=0, .last=1, .code=135, .pattern=13 }, /* 15 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=104, .pattern=14 }, /* 16 */
      { .len=15, .from_start=0, .at_end=0, .last=0, .code=106, .pattern=15 }, /* 17 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=377, .pattern=16 }, /* 18 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=107, .pattern=17 }, /* 19 */
      { .len=17, .from_start=0, .at_end=0, .last=1, .code=133, .pattern=18 }, /* 20 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=148, .pattern=19 }, /* 21 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=108, .pattern=20 }, /* 22 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=112, .pattern=21 }, /* 23 */
      { .len=15, .from_start=0, .at_end=0, .last=0, .code=119, .pattern=22 }, /* 24 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=146, .pattern=23 }, /* 25 */
      { .len=21, .from_start=0, .at_end=0, .last=1, .code=124, .pattern=24 }, /* 26 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=115, .pattern=25 }, /* 27 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=121, .pattern=26 }, /* 28 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=127, .pattern=27 }, /* 29 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=144, .pattern=28 }, /* 30 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=132, .pattern=29 }, /* 31 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=137, .pattern=30 }, /* 32 */
      { .len=22, .from_start=0, .at_end=0, .last=0, .code=136, .pattern=31 }, /* 33 */
      { .len=18, .from_start=0, .at_end=0, .last=1, .code=123, .pattern=32 }, /* 34 */
      { .len=20, .from_start=0, .at_end=0, .last=1, .code=138, .pattern=33 }, /* 35 */
      { .len=17, .from_start=0, .at_end=0, .last=1, .code=150, .pattern=34 }, /* 36 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=164, .pattern=35 }, /* 37 */
      { .len=38, .from_start=0, .at_end=0, .last=0, .code=94, .pattern=36 }, /* 38 */
      { .len=21, .from_start=0, .at_end=0, .last=1, .code=179, .pattern=6 }, /* 39 */
      { .len=8, .from_start=0, .at_end=0, .last=0, .code=186, .pattern=7 }, /* 40 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=185, .pattern=8 }, /* 41 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=95, .pattern=37 }, /* 42 */
      { .len=24, .from_start=0, .at_end=0, .last=0, .code=98, .pattern=38 }, /* 43 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=174, .pattern=39 }, /* 44 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=140, .pattern=40 }, /* 45 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=141, .pattern=41 }, /* 46 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=128, .pattern=42 }, /* 47 */
      { .len=18, .from_start=0, .at_end=0, .last=1, .code=163, .pattern=43 }, /* 48 */
      { .len=19, .from_start=0, .at_end=0, .last=1, .code=117, .pattern=44 }, /* 49 */
      { .len=28, .from_start=0, .at_end=0, .last=1, .code=161, .pattern=45 }, /* 50 */
      { .len=22, .from_start=0, .at_end=0, .last=1, .code=109, .pattern=46 }, /* 51 */
      { .len=20, .from_start=0, .at_end=0, .last=1, .code=111, .pattern=47 }, /* 52 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=147, .pattern=48 }, /* 53 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=158, .pattern=49 }, /* 54 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=99, .pattern=50 }, /* 55 */
      { .len=8, .from_start=0, .at_end=0, .last=0, .code=186, .pattern=7 }, /* 56 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=185, .pattern=8 }, /* 57 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=100, .pattern=51 }, /* 58 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=143, .pattern=52 }, /* 59 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=116, .pattern=53 }, /* 60 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=120, .pattern=54 }, /* 61 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=105, .pattern=55 }, /* 62 */
      { .len=22, .from_start=0, .at_end=0, .last=1, .code=122, .pattern=56 }, /* 63 */
      { .len=18, .from_start=0, .at_end=0, .last=1, .code=139, .pattern=57 }, /* 64 */
      { .len=29, .from_start=0, .at_end=0, .last=1, .code=162, .pattern=58 }, /* 65 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=159, .pattern=59 }, /* 66 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=125, .pattern=60 }, /* 67 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=142, .pattern=61 }, /* 68 */
      { .len=18, .from_start=0, .at_end=0, .last=1, .code=154, .pattern=62 }, /* 69 */
      { .len=18, .from_start=0, .at_end=0, .last=1, .code=155, .pattern=63 }, /* 70 */
      { .len=18, .from_start=0, .at_end=0, .last=1, .code=156, .pattern=64 }, /* 71 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=160, .pattern=65 }, /* 72 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=403, .pattern=66 }, /* 73 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=338, .pattern=67 }, /* 74 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=455, .pattern=68 }, /* 75 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=456, .pattern=69 }, /* 76 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=457, .pattern=70 }, /* 77 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=458, .pattern=71 }, /* 78 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=459, .pattern=72 }, /* 79 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=493, .pattern=73 }, /* 80 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=494, .pattern=74 }, /* 81 */
      { .len=32, .from_start=0, .at_end=0, .last=1, .code=497, .pattern=75 }, /* 82 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=495, .pattern=76 }, /* 83 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=496, .pattern=77 }, /* 84 */
      { .len=24, .from_start=0, .at_end=0, .last=1, .code=492, .pattern=78 }, /* 85 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=4, .pattern=79 }, /* 86 */
      { .len=17, .from_start=0, .at_end=0, .last=1, .code=3, .pattern=80 }, /* 87 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=288, .pattern=81 }, /* 88 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=10, .pattern=82 }, /* 89 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=345, .pattern=83 }, /* 90 */
      { .len=19, .from_start=0, .at_end=0, .last=1, .code=34, .pattern=84 }, /* 91 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=23, .pattern=85 }, /* 92 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=28, .pattern=86 }, /* 93 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=29, .pattern=87 }, /* 94 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=290, .pattern=88 }, /* 95 */
      { .len=18, .from_start=0, .at_end=0, .last=1, .code=355, .pattern=89 }, /* 96 */
      { .len=5, .from_start=0, .at_end=0, .last=1, .code=17, .pattern=90 }, /* 97 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=295, .pattern=91 }, /* 98 */
      { .len=18, .from_start=0, .at_end=0, .last=1, .code=6, .pattern=92 }, /* 99 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=198, .pattern=93 }, /* 100 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=199, .pattern=94 }, /* 101 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=200, .pattern=95 }, /* 102 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=201, .pattern=96 }, /* 103 */
      { .len=18, .from_start=0, .at_end=0, .last=1, .code=202, .pattern=97 }, /* 104 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=240, .pattern=98 }, /* 105 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=253, .pattern=99 }, /* 106 */
      { .len=8, .from_start=0, .at_end=0, .last=1, .code=241, .pattern=100 }, /* 107 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=279, .pattern=101 }, /* 108 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=281, .pattern=102 }, /* 109 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=280, .pattern=103 }, /* 110 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=270, .pattern=104 }, /* 111 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=271, .pattern=105 }, /* 112 */
      { .len=8, .from_start=0, .at_end=0, .last=1, .code=272, .pattern=106 }, /* 113 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=273, .pattern=107 }, /* 114 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=278, .pattern=108 }, /* 115 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=277, .pattern=109 }, /* 116 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=414, .pattern=110 }, /* 117 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=289, .pattern=111 }, /* 118 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=319, .pattern=112 }, /* 119 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=300, .pattern=113 }, /* 120 */
      { .len=10, .from_start=0, .at_end=0, .last=0, .code=327, .pattern=114 }, /* 121 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=299, .pattern=115 }, /* 122 */
      { .len=17, .from_start=0, .at_end=0, .last=1, .code=394, .pattern=116 }, /* 123 */
      { .len=17, .from_start=0, .at_end=0, .last=1, .code=392, .pattern=117 }, /* 124 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=395, .pattern=118 }, /* 125 */
      { .len=17, .from_start=0, .at_end=0, .last=1, .code=336, .pattern=119 }, /* 126 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=383, .pattern=120 }, /* 127 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=382, .pattern=121 }, /* 128 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=379, .pattern=122 }, /* 129 */
      { .len=29, .from_start=0, .at_end=0, .last=1, .code=411, .pattern=123 }, /* 130 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=415, .pattern=124 }, /* 131 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=12, .pattern=125 }, /* 132 */
      { .len=17, .from_start=0, .at_end=0, .last=0, .code=9, .pattern=126 }, /* 133 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=13, .pattern=127 }, /* 134 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=39, .pattern=128 }, /* 135 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=26, .pattern=129 }, /* 136 */
      { .len=5, .from_start=0, .at_end=0, .last=1, .code=257, .pattern=130 }, /* 137 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=298, .pattern=131 }, /* 138 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=292, .pattern=132 }, /* 139 */
      { .len=24, .from_start=0, .at_end=0, .last=1, .code=313, .pattern=133 }, /* 140 */
      { .len=20, .from_start=0, .at_end=0, .last=1, .code=362, .pattern=134 }, /* 141 */
      { .len=19, .from_start=0, .at_end=0, .last=1, .code=363, .pattern=135 }, /* 142 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=318, .pattern=136 }, /* 143 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=302, .pattern=137 }, /* 144 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=323, .pattern=138 }, /* 145 */
      { .len=20, .from_start=0, .at_end=0, .last=1, .code=315, .pattern=139 }, /* 146 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=324, .pattern=140 }, /* 147 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=320, .pattern=141 }, /* 148 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=368, .pattern=142 }, /* 149 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=367, .pattern=143 }, /* 150 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=402, .pattern=144 }, /* 151 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=258, .pattern=145 }, /* 152 */
      { .len=13, .from_start=0, .at_end=0, .last=0, .code=420, .pattern=146 }, /* 153 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=421, .pattern=147 }, /* 154 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=487, .pattern=148 }, /* 155 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=410, .pattern=149 }, /* 156 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=409, .pattern=150 }, /* 157 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=422, .pattern=151 }, /* 158 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=423, .pattern=152 }, /* 159 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=11, .pattern=153 }, /* 160 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=242, .pattern=154 }, /* 161 */
      { .len=15, .from_start=0, .at_end=0, .last=0, .code=35, .pattern=155 }, /* 162 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=28, .pattern=86 }, /* 163 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=30, .pattern=156 }, /* 164 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=75, .pattern=157 }, /* 165 */
      { .len=17, .from_start=0, .at_end=0, .last=1, .code=76, .pattern=158 }, /* 166 */
      { .len=14, .from_start=0, .at_end=0, .last=0, .code=214, .pattern=159 }, /* 167 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=213, .pattern=160 }, /* 168 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=18, .pattern=2 }, /* 169 */
      { .len=8, .from_start=0, .at_end=0, .last=1, .code=61, .pattern=161 }, /* 170 */
      { .len=8, .from_start=0, .at_end=0, .last=1, .code=62, .pattern=162 }, /* 171 */
      { .len=32, .from_start=0, .at_end=0, .last=0, .code=19, .pattern=163 }, /* 172 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=15, .pattern=164 }, /* 173 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=20, .pattern=165 }, /* 174 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=259, .pattern=166 }, /* 175 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=209, .pattern=167 }, /* 176 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=210, .pattern=168 }, /* 177 */
      { .len=19, .from_start=0, .at_end=0, .last=1, .code=21, .pattern=169 }, /* 178 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=22, .pattern=170 }, /* 179 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=33, .pattern=171 }, /* 180 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=31, .pattern=172 }, /* 181 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=353, .pattern=173 }, /* 182 */
      { .len=8, .from_start=0, .at_end=0, .last=1, .code=190, .pattern=174 }, /* 183 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=203, .pattern=175 }, /* 184 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=413, .pattern=176 }, /* 185 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=412, .pattern=177 }, /* 186 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=32, .pattern=178 }, /* 187 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=287, .pattern=179 }, /* 188 */
      { .len=11, .from_start=0, .at_end=0, .last=0, .code=387, .pattern=180 }, /* 189 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=386, .pattern=181 }, /* 190 */
      { .len=10, .from_start=0, .at_end=0, .last=0, .code=389, .pattern=182 }, /* 191 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=388, .pattern=183 }, /* 192 */
      { .len=22, .from_start=0, .at_end=0, .last=0, .code=391, .pattern=184 }, /* 193 */
      { .len=21, .from_start=0, .at_end=0, .last=1, .code=390, .pattern=185 }, /* 194 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=183, .pattern=186 }, /* 195 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=97, .pattern=187 }, /* 196 */
      { .len=22, .from_start=0, .at_end=0, .last=1, .code=165, .pattern=188 }, /* 197 */
      { .len=22, .from_start=0, .at_end=0, .last=1, .code=175, .pattern=189 }, /* 198 */
      { .len=8, .from_start=0, .at_end=0, .last=0, .code=186, .pattern=7 }, /* 199 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=185, .pattern=8 }, /* 200 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=234, .pattern=190 }, /* 201 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=187, .pattern=191 }, /* 202 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=267, .pattern=192 }, /* 203 */
      { .len=19, .from_start=0, .at_end=0, .last=1, .code=40, .pattern=193 }, /* 204 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=37, .pattern=194 }, /* 205 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=38, .pattern=195 }, /* 206 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=354, .pattern=196 }, /* 207 */
      { .len=23, .from_start=0, .at_end=0, .last=1, .code=356, .pattern=197 }, /* 208 */
      { .len=11, .from_start=0, .at_end=0, .last=0, .code=74, .pattern=198 }, /* 209 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=75, .pattern=157 }, /* 210 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=52, .pattern=199 }, /* 211 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=53, .pattern=200 }, /* 212 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=221, .pattern=201 }, /* 213 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=269, .pattern=202 }, /* 214 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=268, .pattern=203 }, /* 215 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=348, .pattern=204 }, /* 216 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=301, .pattern=205 }, /* 217 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=397, .pattern=206 }, /* 218 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=398, .pattern=207 }, /* 219 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=399, .pattern=208 }, /* 220 */
      { .len=8, .from_start=0, .at_end=0, .last=1, .code=400, .pattern=209 }, /* 221 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=283, .pattern=210 }, /* 222 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=321, .pattern=211 }, /* 223 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=286, .pattern=212 }, /* 224 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=297, .pattern=213 }, /* 225 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=296, .pattern=214 }, /* 226 */
      { .len=17, .from_start=0, .at_end=0, .last=1, .code=316, .pattern=215 }, /* 227 */
      { .len=17, .from_start=0, .at_end=0, .last=1, .code=317, .pattern=216 }, /* 228 */
      { .len=18, .from_start=0, .at_end=0, .last=1, .code=341, .pattern=217 }, /* 229 */
      { .len=19, .from_start=0, .at_end=0, .last=0, .code=343, .pattern=218 }, /* 230 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=297, .pattern=213 }, /* 231 */
      { .len=4, .from_start=0, .at_end=0, .last=1, .code=401, .pattern=219 }, /* 232 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=54, .pattern=220 }, /* 233 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=55, .pattern=221 }, /* 234 */
      { .len=24, .from_start=0, .at_end=0, .last=1, .code=56, .pattern=222 }, /* 235 */
      { .len=29, .from_start=0, .at_end=0, .last=1, .code=57, .pattern=223 }, /* 236 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=285, .pattern=224 }, /* 237 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=170, .pattern=225 }, /* 238 */
      { .len=20, .from_start=0, .at_end=0, .last=1, .code=151, .pattern=226 }, /* 239 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=167, .pattern=227 }, /* 240 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=63, .pattern=228 }, /* 241 */
      { .len=18, .from_start=0, .at_end=0, .last=1, .code=64, .pattern=229 }, /* 242 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=65, .pattern=230 }, /* 243 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=293, .pattern=231 }, /* 244 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=453, .pattern=232 }, /* 245 */
      { .len=6, .from_start=0, .at_end=0, .last=1, .code=67, .pattern=233 }, /* 246 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=68, .pattern=234 }, /* 247 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=69, .pattern=235 }, /* 248 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=72, .pattern=236 }, /* 249 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=70, .pattern=237 }, /* 250 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=71, .pattern=238 }, /* 251 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=73, .pattern=239 }, /* 252 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=81, .pattern=240 }, /* 253 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=83, .pattern=241 }, /* 254 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=85, .pattern=242 }, /* 255 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=86, .pattern=243 }, /* 256 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=87, .pattern=244 }, /* 257 */
      { .len=6, .from_start=0, .at_end=0, .last=1, .code=88, .pattern=245 }, /* 258 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=350, .pattern=246 }, /* 259 */
      { .len=7, .from_start=0, .at_end=0, .last=0, .code=352, .pattern=247 }, /* 260 */
      { .len=6, .from_start=0, .at_end=0, .last=1, .code=351, .pattern=248 }, /* 261 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=365, .pattern=249 }, /* 262 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=364, .pattern=250 }, /* 263 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=361, .pattern=251 }, /* 264 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=372, .pattern=252 }, /* 265 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=322, .pattern=253 }, /* 266 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=90, .pattern=254 }, /* 267 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=377, .pattern=16 }, /* 268 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=169, .pattern=255 }, /* 269 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=239, .pattern=256 }, /* 270 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=213, .pattern=160 }, /* 271 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=215, .pattern=257 }, /* 272 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=430, .pattern=258 }, /* 273 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=431, .pattern=259 }, /* 274 */
      { .len=17, .from_start=0, .at_end=0, .last=1, .code=304, .pattern=260 }, /* 275 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=225, .pattern=261 }, /* 276 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=226, .pattern=262 }, /* 277 */
      { .len=8, .from_start=0, .at_end=0, .last=0, .code=186, .pattern=7 }, /* 278 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=185, .pattern=8 }, /* 279 */
      { .len=24, .from_start=0, .at_end=0, .last=1, .code=237, .pattern=263 }, /* 280 */
      { .len=21, .from_start=0, .at_end=0, .last=1, .code=238, .pattern=264 }, /* 281 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=235, .pattern=265 }, /* 282 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=260, .pattern=266 }, /* 283 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=266, .pattern=267 }, /* 284 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=325, .pattern=268 }, /* 285 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=326, .pattern=269 }, /* 286 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=454, .pattern=270 }, /* 287 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=408, .pattern=271 }, /* 288 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=407, .pattern=272 }, /* 289 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=347, .pattern=273 }, /* 290 */
      { .len=28, .from_start=0, .at_end=0, .last=0, .code=342, .pattern=274 }, /* 291 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=298, .pattern=131 }, /* 292 */
      { .len=8, .from_start=0, .at_end=0, .last=1, .code=349, .pattern=275 }, /* 293 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=424, .pattern=276 }, /* 294 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=425, .pattern=277 }, /* 295 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=428, .pattern=278 }, /* 296 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=429, .pattern=279 }, /* 297 */
      { .len=8, .from_start=0, .at_end=0, .last=1, .code=482, .pattern=280 }, /* 298 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=483, .pattern=281 }, /* 299 */
      { .len=22, .from_start=0, .at_end=0, .last=1, .code=486, .pattern=282 }, /* 300 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=484, .pattern=283 }, /* 301 */
      { .len=17, .from_start=0, .at_end=0, .last=1, .code=485, .pattern=284 }, /* 302 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=180, .pattern=285 }, /* 303 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=4, .pattern=79 }, /* 304 */
      { .len=44, .from_start=0, .at_end=0, .last=1, .code=5, .pattern=286 }, /* 305 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=27, .pattern=287 }, /* 306 */
      { .len=21, .from_start=0, .at_end=0, .last=1, .code=113, .pattern=288 }, /* 307 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=12, .pattern=125 }, /* 308 */
      { .len=16, .from_start=0, .at_end=0, .last=0, .code=460, .pattern=289 }, /* 309 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=13, .pattern=127 }, /* 310 */
      { .len=24, .from_start=0, .at_end=0, .last=1, .code=375, .pattern=290 }, /* 311 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=12, .pattern=125 }, /* 312 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=13, .pattern=127 }, /* 313 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=461, .pattern=291 }, /* 314 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=15, .pattern=164 }, /* 315 */
      { .len=19, .from_start=0, .at_end=0, .last=1, .code=16, .pattern=292 }, /* 316 */
      { .len=8, .from_start=0, .at_end=0, .last=0, .code=186, .pattern=7 }, /* 317 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=185, .pattern=8 }, /* 318 */
      { .len=26, .from_start=0, .at_end=0, .last=1, .code=96, .pattern=293 }, /* 319 */
      { .len=18, .from_start=0, .at_end=0, .last=1, .code=123, .pattern=32 }, /* 320 */
      { .len=30, .from_start=0, .at_end=0, .last=1, .code=426, .pattern=294 }, /* 321 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=12, .pattern=125 }, /* 322 */
      { .len=18, .from_start=0, .at_end=0, .last=0, .code=7, .pattern=295 }, /* 323 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=13, .pattern=127 }, /* 324 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=12, .pattern=125 }, /* 325 */
      { .len=17, .from_start=0, .at_end=0, .last=0, .code=8, .pattern=296 }, /* 326 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=13, .pattern=127 }, /* 327 */
      { .len=34, .from_start=0, .at_end=0, .last=0, .code=246, .pattern=297 }, /* 328 */
      { .len=25, .from_start=0, .at_end=0, .last=1, .code=248, .pattern=298 }, /* 329 */
      { .len=35, .from_start=0, .at_end=0, .last=0, .code=245, .pattern=299 }, /* 330 */
      { .len=25, .from_start=0, .at_end=0, .last=1, .code=248, .pattern=298 }, /* 331 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=12, .pattern=125 }, /* 332 */
      { .len=25, .from_start=0, .at_end=0, .last=0, .code=462, .pattern=300 }, /* 333 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=13, .pattern=127 }, /* 334 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=12, .pattern=125 }, /* 335 */
      { .len=26, .from_start=0, .at_end=0, .last=0, .code=471, .pattern=301 }, /* 336 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=13, .pattern=127 }, /* 337 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=12, .pattern=125 }, /* 338 */
      { .len=26, .from_start=0, .at_end=0, .last=0, .code=472, .pattern=302 }, /* 339 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=13, .pattern=127 }, /* 340 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=12, .pattern=125 }, /* 341 */
      { .len=26, .from_start=0, .at_end=0, .last=0, .code=473, .pattern=303 }, /* 342 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=13, .pattern=127 }, /* 343 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=12, .pattern=125 }, /* 344 */
      { .len=26, .from_start=0, .at_end=0, .last=0, .code=474, .pattern=304 }, /* 345 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=13, .pattern=127 }, /* 346 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=12, .pattern=125 }, /* 347 */
      { .len=26, .from_start=0, .at_end=0, .last=0, .code=475, .pattern=305 }, /* 348 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=13, .pattern=127 }, /* 349 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=12, .pattern=125 }, /* 350 */
      { .len=26, .from_start=0, .at_end=0, .last=0, .code=476, .pattern=306 }, /* 351 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=13, .pattern=127 }, /* 352 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=12, .pattern=125 }, /* 353 */
      { .len=26, .from_start=0, .at_end=0, .last=0, .code=477, .pattern=307 }, /* 354 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=13, .pattern=127 }, /* 355 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=12, .pattern=125 }, /* 356 */
      { .len=26, .from_start=0, .at_end=0, .last=0, .code=478, .pattern=308 }, /* 357 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=13, .pattern=127 }, /* 358 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=12, .pattern=125 }, /* 359 */
      { .len=26, .from_start=0, .at_end=0, .last=0, .code=479, .pattern=309 }, /* 360 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=13, .pattern=127 }, /* 361 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=12, .pattern=125 }, /* 362 */
      { .len=26, .from_start=0, .at_end=0, .last=0, .code=480, .pattern=310 }, /* 363 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=13, .pattern=127 }, /* 364 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=12, .pattern=125 }, /* 365 */
      { .len=25, .from_start=0, .at_end=0, .last=0, .code=463, .pattern=311 }, /* 366 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=13, .pattern=127 }, /* 367 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=12, .pattern=125 }, /* 368 */
      { .len=25, .from_start=0, .at_end=0, .last=0, .code=464, .pattern=312 }, /* 369 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=13, .pattern=127 }, /* 370 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=12, .pattern=125 }, /* 371 */
      { .len=25, .from_start=0, .at_end=0, .last=0, .code=465, .pattern=313 }, /* 372 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=13, .pattern=127 }, /* 373 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=12, .pattern=125 }, /* 374 */
      { .len=25, .from_start=0, .at_end=0, .last=0, .code=466, .pattern=314 }, /* 375 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=13, .pattern=127 }, /* 376 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=12, .pattern=125 }, /* 377 */
      { .len=25, .from_start=0, .at_end=0, .last=0, .code=467, .pattern=315 }, /* 378 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=13, .pattern=127 }, /* 379 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=12, .pattern=125 }, /* 380 */
      { .len=25, .from_start=0, .at_end=0, .last=0, .code=468, .pattern=316 }, /* 381 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=13, .pattern=127 }, /* 382 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=12, .pattern=125 }, /* 383 */
      { .len=25, .from_start=0, .at_end=0, .last=0, .code=469, .pattern=317 }, /* 384 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=13, .pattern=127 }, /* 385 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=12, .pattern=125 }, /* 386 */
      { .len=25, .from_start=0, .at_end=0, .last=0, .code=470, .pattern=318 }, /* 387 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=13, .pattern=127 }, /* 388 */
      { .len=26, .from_start=0, .at_end=0, .last=1, .code=427, .pattern=319 }, /* 389 */
      { .len=20, .from_start=0, .at_end=0, .last=1, .code=118, .pattern=320 }, /* 390 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=129, .pattern=321 }, /* 391 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=77, .pattern=322 }, /* 392 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=12, .pattern=125 }, /* 393 */
      { .len=17, .from_start=0, .at_end=0, .last=0, .code=14, .pattern=323 }, /* 394 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=13, .pattern=127 }, /* 395 */
      { .len=48, .from_start=0, .at_end=0, .last=0, .code=173, .pattern=324 }, /* 396 */
      { .len=21, .from_start=0, .at_end=0, .last=1, .code=179, .pattern=6 }, /* 397 */
      { .len=43, .from_start=0, .at_end=0, .last=1, .code=308, .pattern=325 }, /* 398 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=75, .pattern=157 }, /* 399 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=78, .pattern=326 }, /* 400 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=79, .pattern=327 }, /* 401 */
      { .len=24, .from_start=0, .at_end=0, .last=0, .code=41, .pattern=328 }, /* 402 */
      { .len=16, .from_start=0, .at_end=0, .last=0, .code=49, .pattern=329 }, /* 403 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=28, .pattern=86 }, /* 404 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=48, .pattern=330 }, /* 405 */
      { .len=16, .from_start=0, .at_end=0, .last=0, .code=49, .pattern=329 }, /* 406 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=28, .pattern=86 }, /* 407 */
      { .len=6, .from_start=0, .at_end=0, .last=1, .code=351, .pattern=248 }, /* 408 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=157, .pattern=331 }, /* 409 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=371, .pattern=332 }, /* 410 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=366, .pattern=333 }, /* 411 */
      { .len=19, .from_start=0, .at_end=0, .last=1, .code=369, .pattern=334 }, /* 412 */
      { .len=23, .from_start=0, .at_end=0, .last=1, .code=310, .pattern=335 }, /* 413 */
      { .len=37, .from_start=0, .at_end=0, .last=1, .code=309, .pattern=336 }, /* 414 */
      { .len=17, .from_start=0, .at_end=0, .last=1, .code=339, .pattern=337 }, /* 415 */
      { .len=27, .from_start=0, .at_end=0, .last=1, .code=24, .pattern=338 }, /* 416 */
      { .len=24, .from_start=0, .at_end=0, .last=0, .code=42, .pattern=339 }, /* 417 */
      { .len=16, .from_start=0, .at_end=0, .last=0, .code=49, .pattern=329 }, /* 418 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=28, .pattern=86 }, /* 419 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=370, .pattern=340 }, /* 420 */
      { .len=26, .from_start=0, .at_end=0, .last=1, .code=25, .pattern=341 }, /* 421 */
      { .len=23, .from_start=0, .at_end=0, .last=1, .code=58, .pattern=342 }, /* 422 */
      { .len=25, .from_start=0, .at_end=0, .last=1, .code=312, .pattern=343 }, /* 423 */
      { .len=22, .from_start=0, .at_end=0, .last=1, .code=59, .pattern=344 }, /* 424 */
      { .len=23, .from_start=0, .at_end=0, .last=1, .code=60, .pattern=345 }, /* 425 */
      { .len=22, .from_start=0, .at_end=0, .last=1, .code=204, .pattern=346 }, /* 426 */
      { .len=25, .from_start=0, .at_end=0, .last=1, .code=205, .pattern=347 }, /* 427 */
      { .len=22, .from_start=0, .at_end=0, .last=1, .code=206, .pattern=348 }, /* 428 */
      { .len=22, .from_start=0, .at_end=0, .last=0, .code=254, .pattern=349 }, /* 429 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=80, .pattern=350 }, /* 430 */
      { .len=25, .from_start=0, .at_end=0, .last=1, .code=359, .pattern=351 }, /* 431 */
      { .len=25, .from_start=0, .at_end=0, .last=1, .code=360, .pattern=352 }, /* 432 */
      { .len=26, .from_start=0, .at_end=0, .last=1, .code=358, .pattern=353 }, /* 433 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=36, .pattern=354 }, /* 434 */
      { .len=8, .from_start=0, .at_end=0, .last=0, .code=186, .pattern=7 }, /* 435 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=185, .pattern=8 }, /* 436 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=177, .pattern=355 }, /* 437 */
      { .len=8, .from_start=0, .at_end=0, .last=0, .code=186, .pattern=7 }, /* 438 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=185, .pattern=8 }, /* 439 */
      { .len=19, .from_start=0, .at_end=0, .last=1, .code=178, .pattern=356 }, /* 440 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=421, .pattern=147 }, /* 441 */
      { .len=26, .from_start=0, .at_end=0, .last=1, .code=439, .pattern=357 }, /* 442 */
      { .len=34, .from_start=0, .at_end=0, .last=1, .code=438, .pattern=358 }, /* 443 */
      { .len=29, .from_start=0, .at_end=0, .last=1, .code=443, .pattern=359 }, /* 444 */
      { .len=26, .from_start=0, .at_end=0, .last=1, .code=440, .pattern=360 }, /* 445 */
      { .len=31, .from_start=0, .at_end=0, .last=1, .code=444, .pattern=361 }, /* 446 */
      { .len=26, .from_start=0, .at_end=0, .last=1, .code=441, .pattern=362 }, /* 447 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=490, .pattern=363 }, /* 448 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=491, .pattern=364 }, /* 449 */
      { .len=31, .from_start=0, .at_end=0, .last=1, .code=488, .pattern=365 }, /* 450 */
      { .len=24, .from_start=0, .at_end=0, .last=1, .code=489, .pattern=366 }, /* 451 */
      { .len=8, .from_start=0, .at_end=0, .last=1, .code=303, .pattern=367 }, /* 452 */
      { .len=23, .from_start=0, .at_end=0, .last=1, .code=452, .pattern=368 }, /* 453 */
      { .len=20, .from_start=0, .at_end=0, .last=0, .code=43, .pattern=369 }, /* 454 */
      { .len=16, .from_start=0, .at_end=0, .last=0, .code=49, .pattern=329 }, /* 455 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=28, .pattern=86 }, /* 456 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=448, .pattern=370 }, /* 457 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=451, .pattern=371 }, /* 458 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=437, .pattern=372 }, /* 459 */
      { .len=24, .from_start=0, .at_end=0, .last=1, .code=282, .pattern=373 }, /* 460 */
      { .len=19, .from_start=0, .at_end=0, .last=0, .code=45, .pattern=374 }, /* 461 */
      { .len=16, .from_start=0, .at_end=0, .last=0, .code=49, .pattern=329 }, /* 462 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=28, .pattern=86 }, /* 463 */
      { .len=29, .from_start=0, .at_end=0, .last=1, .code=498, .pattern=375 }, /* 464 */
      { .len=20, .from_start=0, .at_end=0, .last=1, .code=314, .pattern=376 }, /* 465 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=434, .pattern=377 }, /* 466 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=337, .pattern=378 }, /* 467 */
      { .len=35, .from_start=0, .at_end=0, .last=1, .code=208, .pattern=379 }, /* 468 */
      { .len=17, .from_start=0, .at_end=0, .last=1, .code=385, .pattern=380 }, /* 469 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=380, .pattern=381 }, /* 470 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=381, .pattern=382 }, /* 471 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=384, .pattern=383 }, /* 472 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=378, .pattern=384 }, /* 473 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=432, .pattern=385 }, /* 474 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=89, .pattern=386 }, /* 475 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=244, .pattern=387 }, /* 476 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=243, .pattern=388 }, /* 477 */
      { .len=25, .from_start=0, .at_end=0, .last=1, .code=248, .pattern=298 }, /* 478 */
      { .len=25, .from_start=0, .at_end=0, .last=1, .code=249, .pattern=389 }, /* 479 */
      { .len=18, .from_start=0, .at_end=0, .last=1, .code=252, .pattern=390 }, /* 480 */
      { .len=19, .from_start=0, .at_end=0, .last=1, .code=251, .pattern=391 }, /* 481 */
      { .len=22, .from_start=0, .at_end=0, .last=1, .code=250, .pattern=392 }, /* 482 */
      { .len=47, .from_start=0, .at_end=0, .last=1, .code=307, .pattern=393 }, /* 483 */
      { .len=48, .from_start=0, .at_end=0, .last=1, .code=306, .pattern=394 }, /* 484 */
      { .len=29, .from_start=0, .at_end=0, .last=1, .code=396, .pattern=395 }, /* 485 */
      { .len=18, .from_start=0, .at_end=0, .last=1, .code=393, .pattern=396 }, /* 486 */
      { .len=19, .from_start=0, .at_end=0, .last=0, .code=44, .pattern=397 }, /* 487 */
      { .len=16, .from_start=0, .at_end=0, .last=0, .code=49, .pattern=329 }, /* 488 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=28, .pattern=86 }, /* 489 */
      { .len=16, .from_start=0, .at_end=0, .last=0, .code=47, .pattern=398 }, /* 490 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=28, .pattern=86 }, /* 491 */
      { .len=12, .from_start=0, .at_end=0, .last=0, .code=184, .pattern=399 }, /* 492 */
      { .len=8, .from_start=0, .at_end=0, .last=0, .code=186, .pattern=7 }, /* 493 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=185, .pattern=8 }, /* 494 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=189, .pattern=400 }, /* 495 */
      { .len=12, .from_start=0, .at_end=0, .last=0, .code=181, .pattern=401 }, /* 496 */
      { .len=8, .from_start=0, .at_end=0, .last=0, .code=186, .pattern=7 }, /* 497 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=185, .pattern=8 }, /* 498 */
      { .len=16, .from_start=0, .at_end=0, .last=0, .code=182, .pattern=402 }, /* 499 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=187, .pattern=191 }, /* 500 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=218, .pattern=403 }, /* 501 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=256, .pattern=404 }, /* 502 */
      { .len=20, .from_start=0, .at_end=0, .last=1, .code=311, .pattern=405 }, /* 503 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=221, .pattern=201 }, /* 504 */
      { .len=20, .from_start=0, .at_end=0, .last=1, .code=220, .pattern=406 }, /* 505 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=221, .pattern=201 }, /* 506 */
      { .len=16, .from_start=0, .at_end=0, .last=0, .code=224, .pattern=407 }, /* 507 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=222, .pattern=408 }, /* 508 */
      { .len=26, .from_start=0, .at_end=0, .last=0, .code=101, .pattern=409 }, /* 509 */
      { .len=18, .from_start=0, .at_end=0, .last=1, .code=102, .pattern=410 }, /* 510 */
      { .len=22, .from_start=0, .at_end=0, .last=0, .code=255, .pattern=411 }, /* 511 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=80, .pattern=350 }, /* 512 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=294, .pattern=412 }, /* 513 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=299, .pattern=115 }, /* 514 */
      { .len=8, .from_start=0, .at_end=0, .last=0, .code=186, .pattern=7 }, /* 515 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=185, .pattern=8 }, /* 516 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=176, .pattern=413 }, /* 517 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=449, .pattern=414 }, /* 518 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=446, .pattern=415 }, /* 519 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=436, .pattern=416 }, /* 520 */
      { .len=22, .from_start=0, .at_end=0, .last=0, .code=46, .pattern=417 }, /* 521 */
      { .len=16, .from_start=0, .at_end=0, .last=0, .code=49, .pattern=329 }, /* 522 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=28, .pattern=86 }, /* 523 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=418, .pattern=418 }, /* 524 */
      { .len=31, .from_start=0, .at_end=0, .last=1, .code=333, .pattern=419 }, /* 525 */
      { .len=19, .from_start=0, .at_end=0, .last=0, .code=328, .pattern=420 }, /* 526 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=298, .pattern=131 }, /* 527 */
      { .len=18, .from_start=0, .at_end=0, .last=0, .code=329, .pattern=421 }, /* 528 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=292, .pattern=132 }, /* 529 */
      { .len=16, .from_start=0, .at_end=0, .last=0, .code=335, .pattern=422 }, /* 530 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=365, .pattern=249 }, /* 531 */
      { .len=16, .from_start=0, .at_end=0, .last=0, .code=334, .pattern=423 }, /* 532 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=366, .pattern=333 }, /* 533 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=198, .pattern=93 }, /* 534 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=330, .pattern=424 }, /* 535 */
      { .len=24, .from_start=0, .at_end=0, .last=1, .code=332, .pattern=425 }, /* 536 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=442, .pattern=426 }, /* 537 */
      { .len=31, .from_start=0, .at_end=0, .last=1, .code=445, .pattern=427 }, /* 538 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=447, .pattern=428 }, /* 539 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=450, .pattern=429 }, /* 540 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=50, .pattern=430 }, /* 541 */
      { .len=8, .from_start=0, .at_end=0, .last=1, .code=404, .pattern=431 }, /* 542 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=405, .pattern=432 }, /* 543 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=406, .pattern=433 }, /* 544 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=261, .pattern=434 }, /* 545 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=481, .pattern=435 }, /* 546 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=419, .pattern=436 }, /* 547 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=212, .pattern=437 }, /* 548 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=263, .pattern=438 }, /* 549 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=264, .pattern=439 }, /* 550 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=265, .pattern=440 }, /* 551 */
      { .len=8, .from_start=0, .at_end=0, .last=1, .code=211, .pattern=441 }, /* 552 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=51, .pattern=442 }, /* 553 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=166, .pattern=443 }, /* 554 */
      { .len=17, .from_start=0, .at_end=0, .last=1, .code=168, .pattern=444 }, /* 555 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=174, .pattern=39 }, /* 556 */
      { .len=17, .from_start=0, .at_end=0, .last=1, .code=171, .pattern=445 }, /* 557 */
      { .len=21, .from_start=0, .at_end=0, .last=1, .code=179, .pattern=6 }, /* 558 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=185, .pattern=8 }, /* 559 */
      { .len=8, .from_start=0, .at_end=0, .last=1, .code=172, .pattern=446 }, /* 560 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=188, .pattern=447 }, /* 561 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=221, .pattern=201 }, /* 562 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=222, .pattern=408 }, /* 563 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=386, .pattern=181 }, /* 564 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=388, .pattern=183 }, /* 565 */
      { .len=21, .from_start=0, .at_end=0, .last=1, .code=390, .pattern=185 }, /* 566 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=416, .pattern=448 }, /* 567 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=373, .pattern=449 }, /* 568 */
      { .len=18, .from_start=0, .at_end=0, .last=1, .code=66, .pattern=450 }, /* 569 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=305, .pattern=451 }, /* 570 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=80, .pattern=350 }, /* 571 */
      { .len=8, .from_start=0, .at_end=0, .last=1, .code=197, .pattern=452 }, /* 572 */
      { .len=6, .from_start=0, .at_end=0, .last=1, .code=84, .pattern=453 }, /* 573 */
      { .len=23, .from_start=0, .at_end=0, .last=1, .code=82, .pattern=454 }, /* 574 */
      { .len=28, .from_start=0, .at_end=0, .last=1, .code=275, .pattern=455 }, /* 575 */
      { .len=24, .from_start=0, .at_end=0, .last=1, .code=274, .pattern=456 }, /* 576 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=276, .pattern=457 }, /* 577 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=191, .pattern=458 }, /* 578 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=192, .pattern=459 }, /* 579 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=193, .pattern=460 }, /* 580 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=194, .pattern=461 }, /* 581 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=196, .pattern=462 }, /* 582 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=195, .pattern=463 }, /* 583 */
      { .len=8, .from_start=0, .at_end=0, .last=1, .code=91, .pattern=464 }, /* 584 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=146, .pattern=23 }, /* 585 */
      { .len=18, .from_start=0, .at_end=0, .last=1, .code=102, .pattern=410 }, /* 586 */
      { .len=22, .from_start=0, .at_end=0, .last=1, .code=374, .pattern=465 }, /* 587 */
      { .len=12, .from_start=0, .at_end=0, .last=1, .code=103, .pattern=466 }, /* 588 */
      { .len=17, .from_start=0, .at_end=0, .last=0, .code=357, .pattern=467 }, /* 589 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=298, .pattern=131 }, /* 590 */
      { .len=18, .from_start=0, .at_end=0, .last=1, .code=152, .pattern=468 }, /* 591 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=130, .pattern=469 }, /* 592 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=110, .pattern=470 }, /* 593 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=114, .pattern=471 }, /* 594 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=262, .pattern=472 }, /* 595 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=145, .pattern=473 }, /* 596 */
      { .len=20, .from_start=0, .at_end=0, .last=1, .code=149, .pattern=474 }, /* 597 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=153, .pattern=475 }, /* 598 */
      { .len=28, .from_start=0, .at_end=0, .last=1, .code=207, .pattern=476 }, /* 599 */
      { .len=39, .from_start=0, .at_end=0, .last=0, .code=284, .pattern=477 }, /* 600 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=174, .pattern=39 }, /* 601 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=417, .pattern=478 }, /* 602 */
      { .len=18, .from_start=0, .at_end=0, .last=1, .code=435, .pattern=479 }, /* 603 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=217, .pattern=480 }, /* 604 */
      { .len=20, .from_start=0, .at_end=0, .last=1, .code=219, .pattern=481 }, /* 605 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=216, .pattern=482 }, /* 606 */
      { .len=19, .from_start=0, .at_end=0, .last=1, .code=344, .pattern=483 }, /* 607 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=221, .pattern=201 }, /* 608 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=223, .pattern=484 }, /* 609 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=227, .pattern=485 }, /* 610 */
      { .len=23, .from_start=0, .at_end=0, .last=0, .code=230, .pattern=486 }, /* 611 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=174, .pattern=39 }, /* 612 */
      { .len=8, .from_start=0, .at_end=0, .last=1, .code=231, .pattern=487 }, /* 613 */
      { .len=17, .from_start=0, .at_end=0, .last=1, .code=236, .pattern=488 }, /* 614 */
      { .len=8, .from_start=0, .at_end=0, .last=1, .code=232, .pattern=489 }, /* 615 */
      { .len=13, .from_start=0, .at_end=0, .last=0, .code=233, .pattern=490 }, /* 616 */
      { .len=9, .from_start=0, .at_end=0, .last=1, .code=188, .pattern=447 }, /* 617 */
      { .len=10, .from_start=0, .at_end=0, .last=1, .code=433, .pattern=491 }, /* 618 */
      { .len=20, .from_start=0, .at_end=0, .last=0, .code=340, .pattern=492 }, /* 619 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=298, .pattern=131 }, /* 620 */
      { .len=8, .from_start=0, .at_end=0, .last=0, .code=186, .pattern=7 }, /* 621 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=185, .pattern=8 }, /* 622 */
      { .len=23, .from_start=0, .at_end=0, .last=1, .code=229, .pattern=493 }, /* 623 */
      { .len=8, .from_start=0, .at_end=0, .last=1, .code=231, .pattern=487 }, /* 624 */
      { .len=18, .from_start=0, .at_end=0, .last=1, .code=228, .pattern=494 }, /* 625 */
      { .len=34, .from_start=0, .at_end=0, .last=0, .code=247, .pattern=495 }, /* 626 */
      { .len=25, .from_start=0, .at_end=0, .last=1, .code=248, .pattern=298 }, /* 627 */
      { .len=17, .from_start=0, .at_end=0, .last=1, .code=346, .pattern=496 }, /* 628 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=291, .pattern=497 }, /* 629 */
      { .len=19, .from_start=0, .at_end=0, .last=1, .code=331, .pattern=498 }, /* 630 */
      {}};
    char outgoings_w1[] = "#d.1aioepbsmtglfncjr*wvyuh-m2oran.is56789cdefghu.-.c2djlodnpc4stabf.wlabcdefghijklmnopqrbc.apqr-..9-1nes2cabcdefghijklmnopqrabcd.flmnoijklmn-ohcfghijklmn./01ijklmncdefghijklmna.cdefghijklmncdefghijklm-pcdefghijklmnasmpcutblgiwxdefo2vykq.-nzhrijklmnopqrstuvwxyzcdlc.-.cdcdefghijklmn.kpcinf-tlo.adeffghijkld-cdefghijklmnopij.noabcdabcijklmnopqrsfghijklmnefghijklmnocdefghijklmnopqrscdefghijklmnopqrstuez.ismd..tocdefghijklmnopqrstucdefghijklmnopqrstuabcdefghijklmnocddefghijklmnopqrsabcdefghijklmnopqrstunopqrscdefghijklmnt.defghijklmn-i.cdefghijklmnefghijklmnopqrstuvwv.sayi-./01234bcdefghijklmnopqrscdefghijklmncdefghijklmnopqrst.ucdefghizst.vcdefghijklmn-.bheapiuxabcdefghijklmnopibc.noefghijklmnopqrst.acdefghijklmnozc.mpucdefghijklmn.labcefghijklmnopqrstuvwxyhijklmnopqrstu.s-ab.sdriabcdefghijklmnopqrabcsw.cdefgcdefghijklmnopd../0123nopqrsefghibcdefghijklmnopqrscdefghimnopqrsabcdefghijklmnopqrst-eefghijklmnopqrstcdefghijklmns.ai.i.mscdefghijklmefghijklmnopqrsabcdefghijklmnopqrstuvnopqrstuvwxyz.a-lmnopqrstuvwefghijklmnop-./01234123456789-./0123456789bcdefghijklmnopqrsthijklmnopqrstuabcdefg-./012.is-.cdefghijklmnopqrstu.almncdabc6174dv34567801234567defgabcdefghijklmnoula1ighijklmnopqrstutuv-cstuvghi-.cdefghijklmijklmnopqrstuvwxycdefghijklmnocdefghijklmnopqrstuvw.aabcdefghijklmnop-.abcdefghijklmnopqrefghijklmnoc-.cdefghijklmncdefghijklmabcdeefghijklmnopqrstuvw-.abcdefghijklmnopqrstuvwxyijklmnopghijklmnoopqrsdefghijklmnopqrs-.fghijklmncdefghidefghijklmnopqrstuvw-.mnopqrstcdefghijklmnopqrstucdefghijklmncv.cdefghijkl.szmnopmnopqrstcdefghijklmnopqrst.csuotg.iea-u.defghijklmnop.e.ucdefghiijklmno.iabcdecdefghijklmnopqrscdefghijklmnopqrs-.abcefghijklmnopqrstefghijklmnopqrstuvcdefghijklmnabcdefghijklmnopqrbcdefghijklmabcdefghijklmnopqrsta.defghijklmnopqrstuabcdefghijklmnomnop.fabcdefghijklmnopqrstb.i.-bcdefghijklmnopdefghijklvwxyefghijklmnomnopqrst";
    unsigned short next_w1[]= {
      0,2,877,2710,2762,3324,3563,3733,3983,4204,4278,4708,4944,5159,5293,5332,5418,5471,
      5546,5596,5643,5671,5786,5800,5858,5919,5969,3,30,85,365,413,436,772,786,854,31,0,
      0,0,58,86,0,0,0,0,114,95,110,115,167,116,130,139,153,168,179,190,214,226,238,273,
      279,296,310,343,356,193,196,206,239,0,0,0,0,0,0,0,0,0,0,249,0,0,0,0,0,265,281,286,
      300,304,311,0,328,369,402,438,603,614,647,705,720,735,750,763,439,0,466,494,0,0,563,
      0,0,0,0,0,0,573,0,0,583,592,440,0,0,456,441,448,467,0,0,480,495,0,0,0,0,518,520,535,
      548,555,615,0,0,0,0,0,0,0,633,648,0,683,694,650,0,0,0,0,673,788,0,0,0,0,0,0,0,0,0,
      0,813,792,802,796,0,0,0,0,0,0,0,0,0,0,799,803,0,0,0,806,0,0,0,0,0,808,816,825,830,
      0,0,0,0,0,0,0,0,0,0,851,878,996,1285,1451,1545,1603,1634,1678,1700,1763,1881,1942,
      2109,2151,2239,2299,2338,2420,2428,2468,2524,2533,2539,2548,2559,2627,2634,2664,879,
      0,901,0,906,920,0,930,0,0,0,0,0,0,985,0,0,988,882,889,932,962,971,934,954,935,947,
      955,0,0,0,0,0,0,0,0,0,0,958,997,1013,1046,1065,1094,1116,1136,1141,1167,1217,1246,
      1017,1018,1025,1030,1034,1050,0,0,0,0,0,1056,1066,1071,1072,0,0,0,0,0,0,1079,0,0,
      0,0,0,1086,1097,1103,1108,1110,1111,1117,0,0,1128,1119,0,1123,1143,0,0,0,0,0,0,0,
      0,0,1155,1156,0,0,0,0,0,0,0,1162,1168,0,0,0,0,0,0,0,0,0,1203,1171,0,0,0,0,0,0,0,0,
      0,0,0,0,1182,0,0,1193,1222,0,1230,0,0,0,0,0,0,0,1238,1247,0,0,0,0,0,0,1273,1286,1305,
      1316,1319,1359,1439,1287,1301,1327,1333,1347,1328,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
      0,1331,1354,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1357,1360,0,0,0,1373,1388,0,1405,1413,
      0,0,0,0,0,1425,1374,1381,1427,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1433,1452,0,0,0,0,0,0,0,
      1472,0,0,1481,0,0,0,1498,0,1512,1525,0,1532,1453,0,0,0,0,1462,1492,0,0,0,0,0,0,0,
      0,0,0,1495,1500,1509,1546,0,0,0,0,0,0,0,1581,0,1594,1548,1558,1571,1597,0,0,0,0,0,
      0,0,0,0,0,1600,1635,0,0,0,0,0,0,0,0,0,1648,0,0,0,0,0,1661,0,1670,1687,1696,1701,1723,
      1738,1745,1702,0,0,0,0,0,0,1712,1724,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1733,1746,0,
      0,0,0,0,0,0,0,0,0,1753,1764,0,0,1775,0,0,1780,0,0,0,1806,0,1811,0,0,0,1863,1873,1785,
      1791,1786,0,0,0,0,0,1789,1816,1823,1838,1853,1854,1882,0,0,1904,0,0,0,0,0,0,1912,
      1933,1887,1899,1943,1961,1969,2018,2037,2049,2090,2107,1944,0,0,0,0,0,0,0,0,0,0,0,
      0,0,0,1953,1970,1978,1995,2013,1975,1976,1979,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1985,1999,
      2006,2000,0,0,0,0,0,0,0,0,0,0,0,2003,2019,2025,2055,2062,2071,2080,2056,0,0,0,0,0,
      0,0,0,0,0,2059,2113,2117,2126,0,2136,2152,0,0,0,0,0,0,0,2161,0,2169,0,0,2200,0,0,
      0,0,0,0,2228,2170,0,0,0,0,0,0,0,0,0,0,0,0,2187,2206,2210,2220,2240,2251,2254,2258,
      2277,2285,2292,2260,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2268,2300,2311,2312,2319,2326,
      2332,2333,0,0,0,2336,2339,0,0,2354,0,0,0,0,0,0,2370,2381,2396,2410,2341,2351,2359,
      0,0,0,0,2363,2383,0,0,0,0,2388,2429,0,0,0,2436,2437,0,2446,0,0,0,0,0,0,0,0,0,0,0,
      0,0,0,2454,2441,0,0,0,0,0,2444,2450,0,0,0,0,0,2452,2469,0,0,0,0,0,0,0,2474,0,0,0,
      0,0,2481,0,0,0,0,2516,2487,2503,2560,0,0,0,2574,0,0,0,0,0,2588,0,0,0,0,2601,2582,
      0,0,0,0,0,0,0,0,0,0,2585,2638,2648,2652,2658,2668,2671,2673,2691,2700,2674,0,0,0,
      0,0,0,0,0,0,2677,2711,0,0,0,0,0,0,0,0,0,0,0,0,0,2719,2763,0,0,2773,0,0,0,0,0,0,0,
      2793,2808,2866,0,2891,0,0,2908,2937,2967,3030,2810,0,0,0,0,0,0,0,0,0,0,0,2831,2834,
      2838,2853,2839,0,0,0,0,0,0,0,0,0,0,2847,2940,0,0,0,0,0,0,0,0,0,0,2954,2971,0,0,0,
      0,0,0,3000,3039,3204,3219,3234,3249,3264,3279,3294,3309,3040,0,0,3054,3069,3084,3099,
      3114,3129,3144,3159,3174,3189,3325,0,0,0,0,3381,0,0,0,0,0,3393,3492,3515,0,0,0,0,
      3538,3326,0,0,3350,0,0,0,0,0,0,0,0,0,3368,3394,0,0,0,0,0,3451,3398,0,0,0,0,3409,3500,
      3501,3508,3543,3553,3564,3569,0,3579,0,0,0,0,0,0,0,3609,0,0,0,3669,3695,0,3718,3584,
      3596,3585,0,3593,3611,3655,3621,0,3631,3734,3759,3844,3865,3905,3926,3760,0,0,0,3781,
      3804,3805,0,0,0,0,0,0,3824,3870,0,0,3889,3934,0,3950,0,0,0,0,0,0,0,0,0,0,0,3966,3984,
      3997,4025,4036,4157,4001,0,0,0,0,0,0,0,0,0,0,0,0,0,4011,4039,0,4135,4045,4114,4046,
      0,0,4083,4047,0,4061,4085,4101,4166,0,0,0,4169,0,0,0,0,0,4190,4205,0,0,0,0,0,0,0,
      0,4212,0,0,4234,0,0,0,4253,4256,4262,0,0,0,0,0,0,0,0,0,0,4267,4279,0,4302,0,0,4347,
      4366,0,4375,4421,0,4467,0,4478,0,0,0,4573,4675,0,4693,4303,4320,4377,0,0,0,0,0,0,
      0,0,0,0,0,0,0,0,4389,4425,4463,4426,0,0,0,0,4437,0,0,4446,0,0,0,0,0,0,0,0,4454,4479,
      0,0,0,0,0,0,0,0,0,4487,4492,4502,4520,4496,0,0,0,0,0,0,0,0,0,0,4499,4521,4538,4548,
      0,0,0,0,0,0,0,4559,4574,0,0,0,4644,4595,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4619,4656,
      4671,4709,0,0,0,4751,0,0,0,4771,0,0,0,4790,0,4822,0,4847,0,4868,4884,4899,0,0,0,4923,
      4710,0,0,0,0,0,0,4731,4713,0,0,0,0,0,0,0,4720,4735,0,0,0,4741,4752,0,0,0,0,0,0,0,
      0,0,0,0,0,0,0,4760,4792,4809,4869,0,0,0,0,0,0,0,4879,4901,0,4908,0,0,0,4916,4945,
      4956,0,0,0,5042,0,0,5084,0,0,5090,0,0,0,0,5101,5109,0,5127,4960,4986,4987,0,5002,
      0,0,0,5015,5024,4997,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5000,5009,0,0,0,0,0,0,0,0,
      0,0,5012,5047,5075,5080,5051,0,0,0,0,0,0,0,0,5054,5096,5097,5099,5110,0,0,5118,5129,
      0,0,0,0,0,0,5135,5136,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5155,5138,5141,5148,5160,5173,
      5224,5231,5239,5252,5278,5178,5197,5208,5223,5179,0,0,0,0,0,0,0,0,0,0,0,5190,5181,
      5182,5257,5263,5258,0,0,0,0,0,5261,5294,0,0,0,0,0,5304,5306,5321,5333,5350,0,0,5376,
      5334,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5344,5351,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5355,5387,
      5403,5404,0,5415,5419,5429,0,0,0,0,0,0,0,0,0,0,0,0,0,5464,5432,0,0,0,5439,0,0,0,0,
      0,0,0,0,0,5449,0,0,5455,5443,0,0,0,0,0,0,0,0,0,0,5446,5472,0,0,0,0,0,0,0,0,0,0,5482,
      0,0,5499,0,0,5530,5500,0,0,0,0,0,0,0,0,0,0,5520,5547,0,5564,0,0,0,0,0,0,0,0,0,0,0,
      0,5572,0,0,0,5588,5578,5584,5597,5611,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5630,5672,0,0,
      0,5710,0,0,5725,5742,0,0,0,0,0,5768,5745,0,0,5762,5750,5751,5801,0,0,0,0,0,0,0,0,
      0,0,0,0,0,5810,0,0,0,0,5846,5814,5843,5816,5832,5833,5859,0,0,0,0,0,0,0,0,0,0,0,0,
      0,5868,5869,0,0,0,0,0,0,0,5887,5892,0,0,5908,5920,0,0,0,0,0,0,0,0,0,5953,5970,0,0,
      0,0,0,0,5980,};
/* patterns length 7988 */
    char *patterns_w1[]= { NULL,
      "dmqdd6hw24ucf.cloudfront.net", /* 1 */
      ".cloudfront.net", /* 2 */
      "d25xi40x97liuc.cloudfront.net", /* 3 */
      "d295hzzivaok4k.cloudfront.net", /* 4 */
      "docs.googleusercontent.com", /* 5 */
      "googleusercontent.com", /* 6 */
      ".google.", /* 7 */
      "google.", /* 8 */
      "docs.google.com", /* 9 */
      "doh-ch.blahdns.com", /* 10 */
      "doh-2.seby.io", /* 11 */
      "doh-de.blahdns.com", /* 12 */
      "doh-jp.blahdns.com", /* 13 */
      "doh.libredns.gr", /* 14 */
      "doh.opendns.com", /* 15 */
      ".opendns.com", /* 16 */
      "doh.dns.sb", /* 17 */
      "doh.dnswarden.com", /* 18 */
      "doh.dnslify.com", /* 19 */
      "doh.netweaver.uk", /* 20 */
      "doh.powerdns.org", /* 21 */
      "doh.captnemo.in", /* 22 */
      "captnemo.in", /* 23 */
      "doh.cleanbrowsing.org", /* 24 */
      "doh.crypto.sx", /* 25 */
      "doh.42l.fr", /* 26 */
      "doh.seby.io", /* 27 */
      "doh.securedns.eu", /* 28 */
      "doh.tiar.app", /* 29 */
      "doh.tiarap.org", /* 30 */
      "doh.appliedprivacy.net", /* 31 */
      "appliedprivacy.net", /* 32 */
      "doh.armadillodns.net", /* 33 */
      "doh.bortzmeyer.fr", /* 34 */
      "doh.ffmuc.net", /* 35 */
      "drive-thirdparty.googleusercontent.com", /* 36 */
      "drive.google.com", /* 37 */
      "datasaver.googleapis.com", /* 38 */
      "googleapis.com", /* 39 */
      "dns.aa.net.uk", /* 40 */
      "dns.aaflalo.me", /* 41 */
      "dns.adguard.com", /* 42 */
      "dns.cloudflare.com", /* 43 */
      "dns.containerpi.com", /* 44 */
      "dns.digitale-gesellschaft.ch", /* 45 */
      "dns.dns-over-https.com", /* 46 */
      "dns.dnsoverhttps.net", /* 47 */
      "dns.dnshome.de", /* 48 */
      "dns.dnscrypt.ca", /* 49 */
      "dns.google", /* 50 */
      "dns.google.com", /* 51 */
      "dns.nextdns.io", /* 52 */
      "dns.quad9.net", /* 53 */
      "dns.rubyfish.cn", /* 54 */
      "dns9.quad9.net", /* 55 */
      "dns-family.adguard.com", /* 56 */
      "dns-nyc.aaflalo.me", /* 57 */
      "dns1.digitale-gesellschaft.ch", /* 58 */
      "dns1.dnscrypt.ca", /* 59 */
      "dns10.quad9.net", /* 60 */
      "dns11.quad9.net", /* 61 */
      "dnsnl.alekberg.net", /* 62 */
      "dnses.alekberg.net", /* 63 */
      "dnsse.alekberg.net", /* 64 */
      "dns2.dnscrypt.ca", /* 65 */
      "dnscrypt.org", /* 66 */
      "d.docs.live.net", /* 67 */
      "discordapp.com", /* 68 */
      "discordapp.net", /* 69 */
      "discord.com", /* 70 */
      "discord.gg", /* 71 */
      "discord.media", /* 72 */
      "disney-plus.com", /* 73 */
      "disneyplus.com", /* 74 */
      "disneyplus.com.ssl.sc.omtrdc.net", /* 75 */
      "disneyplus.net", /* 76 */
      "dssott.com", /* 77 */
      "dssott.com.akamaized.net", /* 78 */
      ".aiv-cdn.net", /* 79 */
      ".aiv-delivery.net", /* 80 */
      ".aka.ms", /* 81 */
      ".amazonvideo.com", /* 82 */
      ".anchorfree.", /* 83 */
      ".apple-cloudkit.com", /* 84 */
      ".apple-dns.net", /* 85 */
      ".apple.com", /* 86 */
      ".apple.news", /* 87 */
      ".appcenter.ms", /* 88 */
      ".app.iflixcorp.com", /* 89 */
      ".aws.", /* 90 */
      ".azure.com", /* 91 */
      ".s.loris.llnwd.net", /* 92 */
      ".skype.", /* 93 */
      ".skypeassets.", /* 94 */
      ".skypedata.", /* 95 */
      ".skypeecs-", /* 96 */
      ".skypeforbusiness.", /* 97 */
      ".spotify.com", /* 98 */
      ".spotilocal.com", /* 99 */
      ".scdn.co", /* 100 */
      ".sc-cdn.net", /* 101 */
      ".sc-jpl.com", /* 102 */
      ".sc-prod.net", /* 103 */
      ".sinaimg.cn", /* 104 */
      ".sinajs.cn", /* 105 */
      ".sina.cn", /* 106 */
      ".sina.com.cn", /* 107 */
      ".snapads.", /* 108 */
      ".snapchat.", /* 109 */
      ".sndcdn.com", /* 110 */
      ".sfx.ms", /* 111 */
      ".s-microsoft.com", /* 112 */
      ".s-msft.com", /* 113 */
      ".s-msn.com", /* 114 */
      "msn.com", /* 115 */
      ".steamcontent.com", /* 116 */
      ".steampowered.com", /* 117 */
      ".steamstatic.com", /* 118 */
      ".storage.live.com", /* 119 */
      ".slack-core.com", /* 120 */
      ".slack-edge.com", /* 121 */
      ".slack-msgs.com", /* 122 */
      ".sonyentertainmentnetwork.com", /* 123 */
      ".soundcloud.com", /* 124 */
      "amazon.", /* 125 */
      ".media-amazon.com", /* 126 */
      "amazon.com", /* 127 */
      ".me.com", /* 128 */
      ".mzstatic.com", /* 129 */
      ".m.me", /* 130 */
      ".microsoft.com", /* 131 */
      ".microsoft.us", /* 132 */
      ".microsofttranslator.com", /* 133 */
      ".microsoftonline.com", /* 134 */
      ".microsoftonline.us", /* 135 */
      ".msa.akadns6.net", /* 136 */
      ".msecnd.net", /* 137 */
      ".msedge.net", /* 138 */
      ".msftconnecttest.com", /* 139 */
      ".mshome.net", /* 140 */
      ".msidentity.com", /* 141 */
      ".msocdn.com", /* 142 */
      ".msocsp.com", /* 143 */
      ".mmsns.qpic.cn", /* 144 */
      ".pandora.com", /* 145 */
      ".pastebin.com", /* 146 */
      "pastebin.com", /* 147 */
      ".pinimg.com", /* 148 */
      ".playstation.com", /* 149 */
      ".playstation.net", /* 150 */
      ".ppstream.com", /* 151 */
      ".pps.tv", /* 152 */
      ".primevideo.com", /* 153 */
      ".pscdn.co", /* 154 */
      ".push.apple.com", /* 155 */
      ".cdn-apple.com", /* 156 */
      "instagram.", /* 157 */
      ".cdninstagram.com", /* 158 */
      ".cdn.viber.com", /* 159 */
      ".viber.com", /* 160 */
      ".cnn.com", /* 161 */
      ".cnn.net", /* 162 */
      ".us-west-2.compute.amazonaws.com", /* 163 */
      "amazonaws.com", /* 164 */
      ".teamviewer.com", /* 165 */
      ".torproject.org", /* 166 */
      ".tuenti.com", /* 167 */
      ".twttr.com", /* 168 */
      ".bloombergvault.com", /* 169 */
      ".bloomberg.com", /* 170 */
      ".ls-apple.com", /* 171 */
      ".ls4-apple.com", /* 172 */
      ".labgency.ws", /* 173 */
      ".last.fm", /* 174 */
      ".lync.com", /* 175 */
      ".licdn.com", /* 176 */
      ".linkedin.com", /* 177 */
      ".gc-apple.com", /* 178 */
      ".gfx.ms", /* 179 */
      ".github.com", /* 180 */
      "github.com", /* 181 */
      ".github.io", /* 182 */
      "github.io", /* 183 */
      ".githubusercontent.com", /* 184 */
      "githubusercontent.com", /* 185 */
      ".gmail.", /* 186 */
      ".googlezip.net", /* 187 */
      ".googlesyndication.com", /* 188 */
      ".googletagservices.com", /* 189 */
      ".googlevideo.com", /* 190 */
      ".gstatic.com", /* 191 */
      ".gtimg.com", /* 192 */
      ".icloud-content.com", /* 193 */
      ".icloud.com", /* 194 */
      ".icloud.com.", /* 195 */
      ".iflix.com", /* 196 */
      ".images.iflixassets.com", /* 197 */
      ".instagram.", /* 198 */
      ".wbagora.com", /* 199 */
      ".wbplay.com", /* 200 */
      ".whatsapp.", /* 201 */
      ".weibo.cn", /* 202 */
      ".weibo.com", /* 203 */
      ".webex.com", /* 204 */
      ".webtrends.com", /* 205 */
      ".wechat.com", /* 206 */
      ".wechat.org", /* 207 */
      ".wechatapp.com", /* 208 */
      ".we.chat", /* 209 */
      ".waze.com", /* 210 */
      ".wac.phicdn.net", /* 211 */
      ".wpc.v0cdn.net", /* 212 */
      ".windows.com", /* 213 */
      ".windows.net", /* 214 */
      ".windowsmedia.com", /* 215 */
      ".windowsphone.com", /* 216 */
      ".windowsupdate.com", /* 217 */
      ".wustat.windows.com", /* 218 */
      ".wx.", /* 219 */
      ".xbox.com", /* 220 */
      ".xboxlive.com", /* 221 */
      ".xboxlive.com.akadns.net", /* 222 */
      ".xboxlive.com.c.footprint.net", /* 223 */
      ".deezer.com", /* 224 */
      ".dmtry.com", /* 225 */
      ".doh.dns.snopyta.org", /* 226 */
      ".doubleclick.net", /* 227 */
      ".dropbox.com", /* 228 */
      ".dropboxstatic.com", /* 229 */
      ".dropbox-dns.com", /* 230 */
      ".dynamics.com", /* 231 */
      ".eaqbr.com.br", /* 232 */
      ".ebay.", /* 233 */
      ".ebay.com", /* 234 */
      ".ebaystatic.com", /* 235 */
      ".ebaystratus.com", /* 236 */
      ".ebaydesc.com", /* 237 */
      ".ebayrtm.com", /* 238 */
      ".ebayimg.com", /* 239 */
      ".facebook.net", /* 240 */
      ".fbcdn.net", /* 241 */
      ".fbsbx.com", /* 242 */
      ".fbwat.ch", /* 243 */
      ".fb.com", /* 244 */
      ".fb.gg", /* 245 */
      ".ocsdomain.com", /* 246 */
      ".ocs.fr", /* 247 */
      "ocs.fr", /* 248 */
      ".office.com", /* 249 */
      ".office365.com", /* 250 */
      ".omniroot.com", /* 251 */
      ".onenote.", /* 252 */
      ".onestore.ms", /* 253 */
      ".ooklaserver.net", /* 254 */
      ".2mdn.net", /* 255 */
      ".vevo.com", /* 256 */
      ".viber.it", /* 257 */
      ".vidto.me", /* 258 */
      ".vidto.se", /* 259 */
      ".visualstudio.com", /* 260 */
      ".yahoo.", /* 261 */
      ".yimg.com", /* 262 */
      ".youtube-ui.l.google.com", /* 263 */
      ".youtubeeducation.com", /* 264 */
      ".ytimg.com", /* 265 */
      ".kakao.com", /* 266 */
      ".qq.com", /* 267 */
      "..msn-com.", /* 268 */
      ".-s-msn-com.", /* 269 */
      ".net.anydesk.com", /* 270 */
      ".nintendo.com", /* 271 */
      ".nintendo.net", /* 272 */
      ".northghost.com", /* 273 */
      ".ntservicepack.microsoft.com", /* 274 */
      ".zoom.us", /* 275 */
      ".hulustream.com", /* 276 */
      ".hulu.com", /* 277 */
      ".huluad.com", /* 278 */
      ".huluim.com", /* 279 */
      ".redd.it", /* 280 */
      ".reddit.com", /* 281 */
      ".reddit.map.fastly.net", /* 282 */
      ".redditmedia.com", /* 283 */
      ".redditstatic.com", /* 284 */
      "1e100.net", /* 285 */
      "1s3.lvlt.dash.us.aiv-cdn.net.c.footprint.net", /* 286 */
      "aaplimg.com", /* 287 */
      "adblock.mydns.network", /* 288 */
      "alexa.amazon.com", /* 289 */
      "amanda.ns.cloudflare.com", /* 290 */
      "amazonalexa.com", /* 291 */
      "amazon-adsystem.com", /* 292 */
      "android.clients.google.com", /* 293 */
      "assetshuluimcom-a.akamaihd.net", /* 294 */
      "atv-ext.amazon.com", /* 295 */
      "atv-ps.amazon.com", /* 296 */
      "audio-ak-spotify-com.akamaized.net", /* 297 */
      "spotify-com.akamaized.net", /* 298 */
      "audio4-ak-spotify-com.akamaized.net", /* 299 */
      "avs-alexa-1-na.amazon.com", /* 300 */
      "avs-alexa-10-na.amazon.com", /* 301 */
      "avs-alexa-11-na.amazon.com", /* 302 */
      "avs-alexa-12-na.amazon.com", /* 303 */
      "avs-alexa-13-na.amazon.com", /* 304 */
      "avs-alexa-14-na.amazon.com", /* 305 */
      "avs-alexa-15-na.amazon.com", /* 306 */
      "avs-alexa-16-na.amazon.com", /* 307 */
      "avs-alexa-17-na.amazon.com", /* 308 */
      "avs-alexa-18-na.amazon.com", /* 309 */
      "avs-alexa-19-na.amazon.com", /* 310 */
      "avs-alexa-2-na.amazon.com", /* 311 */
      "avs-alexa-3-na.amazon.com", /* 312 */
      "avs-alexa-4-na.amazon.com", /* 313 */
      "avs-alexa-5-na.amazon.com", /* 314 */
      "avs-alexa-6-na.amazon.com", /* 315 */
      "avs-alexa-7-na.amazon.com", /* 316 */
      "avs-alexa-8-na.amazon.com", /* 317 */
      "avs-alexa-9-na.amazon.com", /* 318 */
      "ibhuluimcom-a.akamaihd.net", /* 319 */
      "ibksturm.synology.me", /* 320 */
      "ibuki.cgnat.net", /* 321 */
      "igcdn-photos-", /* 322 */
      "images-amazon.com", /* 323 */
      "images2-hangout-opensocial.googleusercontent.com", /* 324 */
      "img-prod-cms-rt-microsoft-com.akamaized.net", /* 325 */
      "instagramimages-", /* 326 */
      "instagramstatic-", /* 327 */
      "iosapps.itunes.apple.com", /* 328 */
      "itunes.apple.com", /* 329 */
      "itunes-apple.com", /* 330 */
      "odvr.nic.cz", /* 331 */
      "office.live.com", /* 332 */
      "office.net", /* 333 */
      "officeapps.live.com", /* 334 */
      "onecollector.akadns.net", /* 335 */
      "onecollector.cloudapp.aria.akadns.net", /* 336 */
      "onedrive.live.com", /* 337 */
      "origin-apple.com.akadns.net", /* 338 */
      "osxapps.itunes.apple.com", /* 339 */
      "outlook.live.com", /* 340 */
      "e6858.dsce9.akamaiedge.net", /* 341 */
      "e13555.b.akamaiedge.net", /* 342 */
      "e1723.dscd.akamaiedge.net", /* 343 */
      "e1800.d.akamaiedge.net", /* 344 */
      "e1879.e7.akamaiedge.net", /* 345 */
      "e7768.b.akamaiedge.net", /* 346 */
      "e4593.dspg.akamaiedge.net", /* 347 */
      "e4593.g.akamaiedge.net", /* 348 */
      "edge-mqtt.facebook.com", /* 349 */
      "facebook.com", /* 350 */
      "evsecure-aia.verisign.com", /* 351 */
      "evsecure-crl.verisign.com", /* 352 */
      "evsecure-ocsp.verisign.com", /* 353 */
      "push-apple.com", /* 354 */
      "plus.google.com", /* 355 */
      "plus.url.google.com", /* 356 */
      "p16-tiktok-sg.ibyteimg.com", /* 357 */
      "p16-tiktok-sign-va-h2.ibyteimg.com", /* 358 */
      "p16-tiktok-va-h2.ibyteimg.com", /* 359 */
      "p16-tiktok-va.ibyteimg.com", /* 360 */
      "p16-tiktokcdn-com.akamaized.net", /* 361 */
      "p16-va-tiktok.ibyteimg.com", /* 362 */
      "pinterest.", /* 363 */
      "pinterest.co.", /* 364 */
      "pinterest.global.map.fastly.net", /* 365 */
      "pinterest.map.fastly.net", /* 366 */
      "bing.com", /* 367 */
      "brasilbandalarga.com.br", /* 368 */
      "buy.itunes.apple.com", /* 369 */
      "bytecdn.cn", /* 370 */
      "byted.org", /* 371 */
      "byteoversea.com", /* 372 */
      "sc-analytics.appspot.com", /* 373 */
      "se.itunes.apple.com", /* 374 */
      "search-api-disney.bamgrid.com", /* 375 */
      "sharepointonline.com", /* 376 */
      "signal.org", /* 377 */
      "skyapi.live.net", /* 378 */
      "skype-calling-missedcallsregistrar-", /* 379 */
      "slack-assets2.s3-", /* 380 */
      "slack-files.com", /* 381 */
      "slack-imgs.com", /* 382 */
      "slack-redir.net", /* 383 */
      "slack.com", /* 384 */
      "snapcraft.io", /* 385 */
      "speedtest.", /* 386 */
      "spotifycdn.com", /* 387 */
      "spotifycdn.net", /* 388 */
      "spotify.com.edgesuite.net", /* 389 */
      "spotify.demdex.net", /* 390 */
      "spotify.edgekey.net", /* 391 */
      "spotify.map.fastly.net", /* 392 */
      "statics-marketingsites-eus-ms-com.akamaized.net", /* 393 */
      "statics-marketingsites-wcus-ms-com.akamaized.net", /* 394 */
      "steamcommunity-a.akamaihd.net", /* 395 */
      "steamcommunity.com", /* 396 */
      "su.itunes.apple.com", /* 397 */
      "swscan.apple.com", /* 398 */
      "mail.google.", /* 399 */
      "mail.outlook.com", /* 400 */
      "maps.google.", /* 401 */
      "maps.gstatic.com", /* 402 */
      "mediawiki.", /* 403 */
      "messenger.com", /* 404 */
      "microsoft.akadns.net", /* 405 */
      "mmg-fna.whatsapp.net", /* 406 */
      "mmg.whatsapp.net", /* 407 */
      "g.whatsapp.net", /* 408 */
      "mozilla.cloudflare-dns.com", /* 409 */
      "cloudflare-dns.com", /* 410 */
      "mqtt-mini.facebook.com", /* 411 */
      "msftncsi.com", /* 412 */
      "mtalk.google.com", /* 413 */
      "muscdn.com", /* 414 */
      "musemuse.cn", /* 415 */
      "musical.ly", /* 416 */
      "myapp.itunes.apple.com", /* 417 */
      "tdesktop.com", /* 418 */
      "teams-msgapi.trafficmanager.net", /* 419 */
      "teams.microsoft.com", /* 420 */
      "teams.microsoft.us", /* 421 */
      "teams.office.com", /* 422 */
      "teams.office.net", /* 423 */
      "teams.skype.com", /* 424 */
      "teams.trafficmanager.net", /* 425 */
      "tiktokcdn.com", /* 426 */
      "tiktokcdn.liveplay.myqcloud.com", /* 427 */
      "tiktokv.com", /* 428 */
      "tiktok.com", /* 429 */
      "tlnk.io", /* 430 */
      "torrent.", /* 431 */
      "torrents.", /* 432 */
      "torrentz.", /* 433 */
      "ttvnw.net", /* 434 */
      "tumblr.com", /* 435 */
      "tupdate.com", /* 436 */
      "twimg.com", /* 437 */
      "twitch.tv", /* 438 */
      "twitchcdn.net", /* 439 */
      "twitchsvc.net", /* 440 */
      "twitter.", /* 441 */
      "guzzoni.apple.", /* 442 */
      "googleads.", /* 443 */
      "googleadservices.", /* 444 */
      "google-analytics.", /* 445 */
      "gtv1.com", /* 446 */
      "ggpht.com", /* 447 */
      "getrockerbox.com", /* 448 */
      "lifedom.top", /* 449 */
      "log.getdropbox.com", /* 450 */
      "login.live.com", /* 451 */
      "fast.com", /* 452 */
      "fbcdn-", /* 453 */
      "fbstatic-a.akamaihd.net", /* 454 */
      "feelinsonice-hrd.appspot.com", /* 455 */
      "feelinsonice.appspot.com", /* 456 */
      "feelinsonice.com", /* 457 */
      "netflix.com", /* 458 */
      "nflxext.com", /* 459 */
      "nflximg.com", /* 460 */
      "nflximg.net", /* 461 */
      "nflxso.net", /* 462 */
      "nflxvideo.net", /* 463 */
      "ntop.org", /* 464 */
      "coby.ns.cloudflare.com", /* 465 */
      "commons.host", /* 466 */
      "crl.microsoft.com", /* 467 */
      "jarjar.meganerd.nl", /* 468 */
      "jcdns.fun", /* 469 */
      "jp.tiarap.org", /* 470 */
      "jp.tiar.app", /* 471 */
      "jtvnw.net", /* 472 */
      "rdns.faelix.net", /* 473 */
      "resolver-eu.lelux.fi", /* 474 */
      "rumpelsepp.org", /* 475 */
      "*.gateway.messenger.live.com", /* 476 */
      "wazespeechactiviation-pa.googleapis.com", /* 477 */
      "web.telegram.org", /* 478 */
      "whispersystems.org", /* 479 */
      "wikimedia.", /* 480 */
      "wikimediafoundation.", /* 481 */
      "wikipedia.", /* 482 */
      "worldofwarcraft.com", /* 483 */
      "v.whatsapp.net", /* 484 */
      "yahooapis.", /* 485 */
      "youtubei.googleapis.com", /* 486 */
      "youtube.", /* 487 */
      "youtube-nocookie.", /* 488 */
      "youtu.be", /* 489 */
      "yt3.ggpht.com", /* 490 */
      "ubuntu.com", /* 491 */
      "update.microsoft.com", /* 492 */
      "upload.video.google.com", /* 493 */
      "upload.youtube.com", /* 494 */
      "heads-ak-spotify-com.akamaized.net", /* 495 */
      "hotspotshield.com", /* 496 */
      "-msedge.net", /* 497 */
      "-teams.cloudapp.net", /* 498 */
      NULL };

    struct aho_compiled w1 = {
        .a_node       = &a_node_w1[0],
        .pattern_list = &pattern_list_w1[0],
        .next         = &next_w1[0],
        .outgoings    = &outgoings_w1[0],
       .patterns     = &patterns_w1[0]
    };
