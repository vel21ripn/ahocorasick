#define H_Server 0x20
#define H_Host 0x21
#define H_X_Fwd 0x22
#define H_ContentType 0x23
#define H_Accept 0x24
#define H_Referer 0x25
#define H_User_Agent 0x26
#define H_Content_Encoding 0x27
#define H_Transfer_Encoding 0x28
#define H_Content_Length 0x29
#define H_Content_Disposition 0x2a
#define H_Cookie 0x2b
#define H_X_Session_Type 0x2c
#define H_Origin 0x2d
#define H_Date 0x2e
#define H_Vaty 0x2f
#define H_ETag 0x30
#define H_Pragma 0x31
#define H_Expires 0x32
#define H_Set_Cookie 0x33
#define H_Keep_Alive 0x34
#define H_Connection 0x35
#define H_Last_Modified 0x36
#define H_Accept_Ranges 0x37
#define H_Accept_Language 0x38
#define H_Accept_Encoding 0x39
#define H_Upgrade_Insecure_Requests 0x3a

#include "libahocorasick-c.h"
struct aho_node a_node_w1[]= {
      { .f_node=0, .degree=0, .alpha=0x00, .outgoing=0, .patterns=0, .final=0, .range=0 },/* 0 */
      { .f_node=0, .degree=23, .alpha=0x41, .outgoing=1, .patterns=0, .final=0, .range=1 },/* 1 */
      { .f_node=1, .degree=0, .alpha=0x63/* 'c' */, .outgoing=3, .patterns=0, .final=0, .range=0 },/* 2 */
      { .f_node=1, .degree=0, .alpha=0x63/* 'c' */, .outgoing=4, .patterns=0, .final=0, .range=0 },/* 3 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=5, .patterns=0, .final=0, .range=0 },/* 4 */
      { .f_node=1, .degree=0, .alpha=0x70/* 'p' */, .outgoing=6, .patterns=0, .final=0, .range=0 },/* 5 */
      { .f_node=1, .degree=0, .alpha=0x74/* 't' */, .outgoing=7, .patterns=0, .final=0, .range=0 },/* 6 */
      { .f_node=1, .degree=13, .alpha=0x2d, .outgoing=25, .patterns=0, .final=0, .range=1 },/* 7 */
      { .f_node=1, .degree=13, .alpha=0x45, .outgoing=39, .patterns=0, .final=0, .range=1 },/* 8 */
      { .f_node=94, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=10, .patterns=0, .final=0, .range=0 },/* 9 */
      { .f_node=1, .degree=0, .alpha=0x63/* 'c' */, .outgoing=11, .patterns=0, .final=0, .range=0 },/* 10 */
      { .f_node=1, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=12, .patterns=0, .final=0, .range=0 },/* 11 */
      { .f_node=1, .degree=0, .alpha=0x64/* 'd' */, .outgoing=13, .patterns=0, .final=0, .range=0 },/* 12 */
      { .f_node=1, .degree=0, .alpha=0x69/* 'i' */, .outgoing=14, .patterns=0, .final=0, .range=0 },/* 13 */
      { .f_node=1, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=15, .patterns=0, .final=0, .range=0 },/* 14 */
      { .f_node=1, .degree=0, .alpha=0x67/* 'g' */, .outgoing=16, .patterns=0, .final=0, .range=0 },/* 15 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=17, .patterns=0, .final=0, .range=0 },/* 16 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=1, .final=1, .range=0 },/* 17 */
      { .f_node=122, .degree=0, .alpha=0x61/* 'a' */, .outgoing=19, .patterns=0, .final=0, .range=0 },/* 18 */
      { .f_node=123, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=20, .patterns=0, .final=0, .range=0 },/* 19 */
      { .f_node=1, .degree=0, .alpha=0x67/* 'g' */, .outgoing=21, .patterns=0, .final=0, .range=0 },/* 20 */
      { .f_node=1, .degree=0, .alpha=0x75/* 'u' */, .outgoing=22, .patterns=0, .final=0, .range=0 },/* 21 */
      { .f_node=1, .degree=0, .alpha=0x61/* 'a' */, .outgoing=23, .patterns=0, .final=0, .range=0 },/* 22 */
      { .f_node=1, .degree=0, .alpha=0x67/* 'g' */, .outgoing=24, .patterns=0, .final=0, .range=0 },/* 23 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=25, .patterns=0, .final=0, .range=0 },/* 24 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=26, .patterns=0, .final=0, .range=0 },/* 25 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=2, .final=1, .range=0 },/* 26 */
      { .f_node=150, .degree=0, .alpha=0x61/* 'a' */, .outgoing=28, .patterns=0, .final=0, .range=0 },/* 27 */
      { .f_node=1, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=29, .patterns=0, .final=0, .range=0 },/* 28 */
      { .f_node=1, .degree=0, .alpha=0x67/* 'g' */, .outgoing=30, .patterns=0, .final=0, .range=0 },/* 29 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=31, .patterns=0, .final=0, .range=0 },/* 30 */
      { .f_node=1, .degree=0, .alpha=0x73/* 's' */, .outgoing=32, .patterns=0, .final=0, .range=0 },/* 31 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=33, .patterns=0, .final=0, .range=0 },/* 32 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=3, .final=1, .range=0 },/* 33 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=4, .final=1, .range=0 },/* 34 */
      { .f_node=1, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=36, .patterns=0, .final=0, .range=0 },/* 35 */
      { .f_node=1, .degree=1, .alpha=0x6e, .outgoing=53, .patterns=0, .final=0, .range=1 },/* 36 */
      { .f_node=1, .degree=6, .alpha=0x6e, .outgoing=55, .patterns=0, .final=0, .range=1 },/* 37 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=39, .patterns=0, .final=0, .range=0 },/* 38 */
      { .f_node=1, .degree=0, .alpha=0x63/* 'c' */, .outgoing=40, .patterns=0, .final=0, .range=0 },/* 39 */
      { .f_node=1, .degree=0, .alpha=0x74/* 't' */, .outgoing=41, .patterns=0, .final=0, .range=0 },/* 40 */
      { .f_node=1, .degree=0, .alpha=0x69/* 'i' */, .outgoing=42, .patterns=0, .final=0, .range=0 },/* 41 */
      { .f_node=1, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=43, .patterns=0, .final=0, .range=0 },/* 42 */
      { .f_node=1, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=44, .patterns=0, .final=0, .range=0 },/* 43 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=45, .patterns=0, .final=0, .range=0 },/* 44 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=5, .final=1, .range=0 },/* 45 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=47, .patterns=0, .final=0, .range=0 },/* 46 */
      { .f_node=1, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=48, .patterns=0, .final=0, .range=0 },/* 47 */
      { .f_node=1, .degree=0, .alpha=0x74/* 't' */, .outgoing=49, .patterns=0, .final=0, .range=0 },/* 48 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=50, .patterns=0, .final=0, .range=0 },/* 49 */
      { .f_node=1, .degree=16, .alpha=0x44, .outgoing=62, .patterns=0, .final=0, .range=1 },/* 50 */
      { .f_node=89, .degree=0, .alpha=0x69/* 'i' */, .outgoing=52, .patterns=0, .final=0, .range=0 },/* 51 */
      { .f_node=1, .degree=0, .alpha=0x73/* 's' */, .outgoing=53, .patterns=0, .final=0, .range=0 },/* 52 */
      { .f_node=1, .degree=0, .alpha=0x70/* 'p' */, .outgoing=54, .patterns=0, .final=0, .range=0 },/* 53 */
      { .f_node=1, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=55, .patterns=0, .final=0, .range=0 },/* 54 */
      { .f_node=1, .degree=0, .alpha=0x73/* 's' */, .outgoing=56, .patterns=0, .final=0, .range=0 },/* 55 */
      { .f_node=1, .degree=0, .alpha=0x69/* 'i' */, .outgoing=57, .patterns=0, .final=0, .range=0 },/* 56 */
      { .f_node=1, .degree=0, .alpha=0x74/* 't' */, .outgoing=58, .patterns=0, .final=0, .range=0 },/* 57 */
      { .f_node=1, .degree=0, .alpha=0x69/* 'i' */, .outgoing=59, .patterns=0, .final=0, .range=0 },/* 58 */
      { .f_node=1, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=60, .patterns=0, .final=0, .range=0 },/* 59 */
      { .f_node=1, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=61, .patterns=0, .final=0, .range=0 },/* 60 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=62, .patterns=0, .final=0, .range=0 },/* 61 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=6, .final=1, .range=0 },/* 62 */
      { .f_node=94, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=64, .patterns=0, .final=0, .range=0 },/* 63 */
      { .f_node=1, .degree=0, .alpha=0x63/* 'c' */, .outgoing=65, .patterns=0, .final=0, .range=0 },/* 64 */
      { .f_node=1, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=66, .patterns=0, .final=0, .range=0 },/* 65 */
      { .f_node=1, .degree=0, .alpha=0x64/* 'd' */, .outgoing=67, .patterns=0, .final=0, .range=0 },/* 66 */
      { .f_node=1, .degree=0, .alpha=0x69/* 'i' */, .outgoing=68, .patterns=0, .final=0, .range=0 },/* 67 */
      { .f_node=1, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=69, .patterns=0, .final=0, .range=0 },/* 68 */
      { .f_node=1, .degree=0, .alpha=0x67/* 'g' */, .outgoing=70, .patterns=0, .final=0, .range=0 },/* 69 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=71, .patterns=0, .final=0, .range=0 },/* 70 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=7, .final=1, .range=0 },/* 71 */
      { .f_node=122, .degree=0, .alpha=0x65/* 'e' */, .outgoing=73, .patterns=0, .final=0, .range=0 },/* 72 */
      { .f_node=1, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=74, .patterns=0, .final=0, .range=0 },/* 73 */
      { .f_node=1, .degree=0, .alpha=0x67/* 'g' */, .outgoing=75, .patterns=0, .final=0, .range=0 },/* 74 */
      { .f_node=1, .degree=0, .alpha=0x74/* 't' */, .outgoing=76, .patterns=0, .final=0, .range=0 },/* 75 */
      { .f_node=1, .degree=0, .alpha=0x68/* 'h' */, .outgoing=77, .patterns=0, .final=0, .range=0 },/* 76 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=78, .patterns=0, .final=0, .range=0 },/* 77 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=8, .final=1, .range=0 },/* 78 */
      { .f_node=174, .degree=0, .alpha=0x79/* 'y' */, .outgoing=80, .patterns=0, .final=0, .range=0 },/* 79 */
      { .f_node=1, .degree=0, .alpha=0x70/* 'p' */, .outgoing=81, .patterns=0, .final=0, .range=0 },/* 80 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=82, .patterns=0, .final=0, .range=0 },/* 81 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=83, .patterns=0, .final=0, .range=0 },/* 82 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=9, .final=1, .range=0 },/* 83 */
      { .f_node=1, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=85, .patterns=0, .final=0, .range=0 },/* 84 */
      { .f_node=1, .degree=0, .alpha=0x69/* 'i' */, .outgoing=86, .patterns=0, .final=0, .range=0 },/* 85 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=87, .patterns=0, .final=0, .range=0 },/* 86 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=88, .patterns=0, .final=0, .range=0 },/* 87 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=10, .final=1, .range=0 },/* 88 */
      { .f_node=1, .degree=0, .alpha=0x61/* 'a' */, .outgoing=90, .patterns=0, .final=0, .range=0 },/* 89 */
      { .f_node=1, .degree=0, .alpha=0x74/* 't' */, .outgoing=91, .patterns=0, .final=0, .range=0 },/* 90 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=92, .patterns=0, .final=0, .range=0 },/* 91 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=93, .patterns=0, .final=0, .range=0 },/* 92 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=11, .final=1, .range=0 },/* 93 */
      { .f_node=1, .degree=1, .alpha=0x00, .outgoing=79, .patterns=0, .final=0, .range=0 },/* 94 */
      { .f_node=174, .degree=0, .alpha=0x61/* 'a' */, .outgoing=96, .patterns=0, .final=0, .range=0 },/* 95 */
      { .f_node=1, .degree=0, .alpha=0x67/* 'g' */, .outgoing=97, .patterns=0, .final=0, .range=0 },/* 96 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=98, .patterns=0, .final=0, .range=0 },/* 97 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=12, .final=1, .range=0 },/* 98 */
      { .f_node=1, .degree=0, .alpha=0x70/* 'p' */, .outgoing=100, .patterns=0, .final=0, .range=0 },/* 99 */
      { .f_node=1, .degree=0, .alpha=0x69/* 'i' */, .outgoing=101, .patterns=0, .final=0, .range=0 },/* 100 */
      { .f_node=1, .degree=0, .alpha=0x72/* 'r' */, .outgoing=102, .patterns=0, .final=0, .range=0 },/* 101 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=103, .patterns=0, .final=0, .range=0 },/* 102 */
      { .f_node=1, .degree=0, .alpha=0x73/* 's' */, .outgoing=104, .patterns=0, .final=0, .range=0 },/* 103 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=105, .patterns=0, .final=0, .range=0 },/* 104 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=13, .final=1, .range=0 },/* 105 */
      { .f_node=1, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=107, .patterns=0, .final=0, .range=0 },/* 106 */
      { .f_node=1, .degree=0, .alpha=0x73/* 's' */, .outgoing=108, .patterns=0, .final=0, .range=0 },/* 107 */
      { .f_node=1, .degree=0, .alpha=0x74/* 't' */, .outgoing=109, .patterns=0, .final=0, .range=0 },/* 108 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=110, .patterns=0, .final=0, .range=0 },/* 109 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=14, .final=1, .range=0 },/* 110 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=112, .patterns=0, .final=0, .range=0 },/* 111 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=113, .patterns=0, .final=0, .range=0 },/* 112 */
      { .f_node=1, .degree=0, .alpha=0x70/* 'p' */, .outgoing=114, .patterns=0, .final=0, .range=0 },/* 113 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=115, .patterns=0, .final=0, .range=0 },/* 114 */
      { .f_node=1, .degree=0, .alpha=0x41/* 'A' */, .outgoing=116, .patterns=0, .final=0, .range=0 },/* 115 */
      { .f_node=2, .degree=0, .alpha=0x6c/* 'l' */, .outgoing=117, .patterns=0, .final=0, .range=0 },/* 116 */
      { .f_node=1, .degree=0, .alpha=0x69/* 'i' */, .outgoing=118, .patterns=0, .final=0, .range=0 },/* 117 */
      { .f_node=1, .degree=0, .alpha=0x76/* 'v' */, .outgoing=119, .patterns=0, .final=0, .range=0 },/* 118 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=120, .patterns=0, .final=0, .range=0 },/* 119 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=121, .patterns=0, .final=0, .range=0 },/* 120 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=15, .final=1, .range=0 },/* 121 */
      { .f_node=1, .degree=0, .alpha=0x61/* 'a' */, .outgoing=123, .patterns=0, .final=0, .range=0 },/* 122 */
      { .f_node=1, .degree=0, .alpha=0x73/* 's' */, .outgoing=124, .patterns=0, .final=0, .range=0 },/* 123 */
      { .f_node=1, .degree=0, .alpha=0x74/* 't' */, .outgoing=125, .patterns=0, .final=0, .range=0 },/* 124 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=126, .patterns=0, .final=0, .range=0 },/* 125 */
      { .f_node=1, .degree=0, .alpha=0x4d/* 'M' */, .outgoing=127, .patterns=0, .final=0, .range=0 },/* 126 */
      { .f_node=1, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=128, .patterns=0, .final=0, .range=0 },/* 127 */
      { .f_node=1, .degree=0, .alpha=0x64/* 'd' */, .outgoing=129, .patterns=0, .final=0, .range=0 },/* 128 */
      { .f_node=1, .degree=0, .alpha=0x69/* 'i' */, .outgoing=130, .patterns=0, .final=0, .range=0 },/* 129 */
      { .f_node=1, .degree=0, .alpha=0x66/* 'f' */, .outgoing=131, .patterns=0, .final=0, .range=0 },/* 130 */
      { .f_node=1, .degree=0, .alpha=0x69/* 'i' */, .outgoing=132, .patterns=0, .final=0, .range=0 },/* 131 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=133, .patterns=0, .final=0, .range=0 },/* 132 */
      { .f_node=1, .degree=0, .alpha=0x64/* 'd' */, .outgoing=134, .patterns=0, .final=0, .range=0 },/* 133 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=135, .patterns=0, .final=0, .range=0 },/* 134 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=16, .final=1, .range=0 },/* 135 */
      { .f_node=1, .degree=0, .alpha=0x72/* 'r' */, .outgoing=137, .patterns=0, .final=0, .range=0 },/* 136 */
      { .f_node=1, .degree=0, .alpha=0x69/* 'i' */, .outgoing=138, .patterns=0, .final=0, .range=0 },/* 137 */
      { .f_node=1, .degree=0, .alpha=0x67/* 'g' */, .outgoing=139, .patterns=0, .final=0, .range=0 },/* 138 */
      { .f_node=1, .degree=0, .alpha=0x69/* 'i' */, .outgoing=140, .patterns=0, .final=0, .range=0 },/* 139 */
      { .f_node=1, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=141, .patterns=0, .final=0, .range=0 },/* 140 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=142, .patterns=0, .final=0, .range=0 },/* 141 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=17, .final=1, .range=0 },/* 142 */
      { .f_node=1, .degree=0, .alpha=0x72/* 'r' */, .outgoing=144, .patterns=0, .final=0, .range=0 },/* 143 */
      { .f_node=1, .degree=0, .alpha=0x61/* 'a' */, .outgoing=145, .patterns=0, .final=0, .range=0 },/* 144 */
      { .f_node=1, .degree=0, .alpha=0x67/* 'g' */, .outgoing=146, .patterns=0, .final=0, .range=0 },/* 145 */
      { .f_node=1, .degree=0, .alpha=0x6d/* 'm' */, .outgoing=147, .patterns=0, .final=0, .range=0 },/* 146 */
      { .f_node=1, .degree=0, .alpha=0x61/* 'a' */, .outgoing=148, .patterns=0, .final=0, .range=0 },/* 147 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=149, .patterns=0, .final=0, .range=0 },/* 148 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=18, .final=1, .range=0 },/* 149 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=151, .patterns=0, .final=0, .range=0 },/* 150 */
      { .f_node=1, .degree=0, .alpha=0x66/* 'f' */, .outgoing=152, .patterns=0, .final=0, .range=0 },/* 151 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=153, .patterns=0, .final=0, .range=0 },/* 152 */
      { .f_node=1, .degree=0, .alpha=0x72/* 'r' */, .outgoing=154, .patterns=0, .final=0, .range=0 },/* 153 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=155, .patterns=0, .final=0, .range=0 },/* 154 */
      { .f_node=1, .degree=0, .alpha=0x72/* 'r' */, .outgoing=156, .patterns=0, .final=0, .range=0 },/* 155 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=157, .patterns=0, .final=0, .range=0 },/* 156 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=19, .final=1, .range=0 },/* 157 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=159, .patterns=0, .final=0, .range=0 },/* 158 */
      { .f_node=1, .degree=2, .alpha=0x72, .outgoing=81, .patterns=0, .final=0, .range=1 },/* 159 */
      { .f_node=1, .degree=0, .alpha=0x76/* 'v' */, .outgoing=161, .patterns=0, .final=0, .range=0 },/* 160 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=162, .patterns=0, .final=0, .range=0 },/* 161 */
      { .f_node=1, .degree=0, .alpha=0x72/* 'r' */, .outgoing=163, .patterns=0, .final=0, .range=0 },/* 162 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=164, .patterns=0, .final=0, .range=0 },/* 163 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=20, .final=1, .range=0 },/* 164 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=166, .patterns=0, .final=0, .range=0 },/* 165 */
      { .f_node=1, .degree=0, .alpha=0x43/* 'C' */, .outgoing=167, .patterns=0, .final=0, .range=0 },/* 166 */
      { .f_node=35, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=168, .patterns=0, .final=0, .range=0 },/* 167 */
      { .f_node=36, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=169, .patterns=0, .final=0, .range=0 },/* 168 */
      { .f_node=84, .degree=0, .alpha=0x6b/* 'k' */, .outgoing=170, .patterns=0, .final=0, .range=0 },/* 169 */
      { .f_node=85, .degree=0, .alpha=0x69/* 'i' */, .outgoing=171, .patterns=0, .final=0, .range=0 },/* 170 */
      { .f_node=86, .degree=0, .alpha=0x65/* 'e' */, .outgoing=172, .patterns=0, .final=0, .range=0 },/* 171 */
      { .f_node=87, .degree=0, .alpha=0x3a/* ':' */, .outgoing=173, .patterns=0, .final=0, .range=0 },/* 172 */
      { .f_node=88, .degree=0, .alpha=0x00, .outgoing=0, .patterns=21, .final=1, .range=0 },/* 173 */
      { .f_node=1, .degree=0, .alpha=0x72/* 'r' */, .outgoing=175, .patterns=0, .final=0, .range=0 },/* 174 */
      { .f_node=1, .degree=0, .alpha=0x61/* 'a' */, .outgoing=176, .patterns=0, .final=0, .range=0 },/* 175 */
      { .f_node=1, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=177, .patterns=0, .final=0, .range=0 },/* 176 */
      { .f_node=1, .degree=0, .alpha=0x73/* 's' */, .outgoing=178, .patterns=0, .final=0, .range=0 },/* 177 */
      { .f_node=1, .degree=0, .alpha=0x66/* 'f' */, .outgoing=179, .patterns=0, .final=0, .range=0 },/* 178 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=180, .patterns=0, .final=0, .range=0 },/* 179 */
      { .f_node=1, .degree=0, .alpha=0x72/* 'r' */, .outgoing=181, .patterns=0, .final=0, .range=0 },/* 180 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=182, .patterns=0, .final=0, .range=0 },/* 181 */
      { .f_node=1, .degree=0, .alpha=0x45/* 'E' */, .outgoing=183, .patterns=0, .final=0, .range=0 },/* 182 */
      { .f_node=94, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=184, .patterns=0, .final=0, .range=0 },/* 183 */
      { .f_node=1, .degree=0, .alpha=0x63/* 'c' */, .outgoing=185, .patterns=0, .final=0, .range=0 },/* 184 */
      { .f_node=1, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=186, .patterns=0, .final=0, .range=0 },/* 185 */
      { .f_node=1, .degree=0, .alpha=0x64/* 'd' */, .outgoing=187, .patterns=0, .final=0, .range=0 },/* 186 */
      { .f_node=1, .degree=0, .alpha=0x69/* 'i' */, .outgoing=188, .patterns=0, .final=0, .range=0 },/* 187 */
      { .f_node=1, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=189, .patterns=0, .final=0, .range=0 },/* 188 */
      { .f_node=1, .degree=0, .alpha=0x67/* 'g' */, .outgoing=190, .patterns=0, .final=0, .range=0 },/* 189 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=191, .patterns=0, .final=0, .range=0 },/* 190 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=23, .final=1, .range=0 },/* 191 */
      { .f_node=1, .degree=3, .alpha=0x70, .outgoing=84, .patterns=0, .final=0, .range=1 },/* 192 */
      { .f_node=1, .degree=0, .alpha=0x67/* 'g' */, .outgoing=194, .patterns=0, .final=0, .range=0 },/* 193 */
      { .f_node=1, .degree=0, .alpha=0x72/* 'r' */, .outgoing=195, .patterns=0, .final=0, .range=0 },/* 194 */
      { .f_node=1, .degree=0, .alpha=0x61/* 'a' */, .outgoing=196, .patterns=0, .final=0, .range=0 },/* 195 */
      { .f_node=1, .degree=0, .alpha=0x64/* 'd' */, .outgoing=197, .patterns=0, .final=0, .range=0 },/* 196 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=198, .patterns=0, .final=0, .range=0 },/* 197 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=199, .patterns=0, .final=0, .range=0 },/* 198 */
      { .f_node=1, .degree=0, .alpha=0x49/* 'I' */, .outgoing=200, .patterns=0, .final=0, .range=0 },/* 199 */
      { .f_node=1, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=201, .patterns=0, .final=0, .range=0 },/* 200 */
      { .f_node=1, .degree=0, .alpha=0x73/* 's' */, .outgoing=202, .patterns=0, .final=0, .range=0 },/* 201 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=203, .patterns=0, .final=0, .range=0 },/* 202 */
      { .f_node=1, .degree=0, .alpha=0x63/* 'c' */, .outgoing=204, .patterns=0, .final=0, .range=0 },/* 203 */
      { .f_node=1, .degree=0, .alpha=0x75/* 'u' */, .outgoing=205, .patterns=0, .final=0, .range=0 },/* 204 */
      { .f_node=1, .degree=0, .alpha=0x72/* 'r' */, .outgoing=206, .patterns=0, .final=0, .range=0 },/* 205 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=207, .patterns=0, .final=0, .range=0 },/* 206 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=208, .patterns=0, .final=0, .range=0 },/* 207 */
      { .f_node=1, .degree=0, .alpha=0x52/* 'R' */, .outgoing=209, .patterns=0, .final=0, .range=0 },/* 208 */
      { .f_node=150, .degree=0, .alpha=0x65/* 'e' */, .outgoing=210, .patterns=0, .final=0, .range=0 },/* 209 */
      { .f_node=151, .degree=0, .alpha=0x71/* 'q' */, .outgoing=211, .patterns=0, .final=0, .range=0 },/* 210 */
      { .f_node=1, .degree=0, .alpha=0x75/* 'u' */, .outgoing=212, .patterns=0, .final=0, .range=0 },/* 211 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=213, .patterns=0, .final=0, .range=0 },/* 212 */
      { .f_node=1, .degree=0, .alpha=0x73/* 's' */, .outgoing=214, .patterns=0, .final=0, .range=0 },/* 213 */
      { .f_node=1, .degree=0, .alpha=0x74/* 't' */, .outgoing=215, .patterns=0, .final=0, .range=0 },/* 214 */
      { .f_node=1, .degree=0, .alpha=0x73/* 's' */, .outgoing=216, .patterns=0, .final=0, .range=0 },/* 215 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=217, .patterns=0, .final=0, .range=0 },/* 216 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=24, .final=1, .range=0 },/* 217 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=219, .patterns=0, .final=0, .range=0 },/* 218 */
      { .f_node=1, .degree=0, .alpha=0x72/* 'r' */, .outgoing=220, .patterns=0, .final=0, .range=0 },/* 219 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=221, .patterns=0, .final=0, .range=0 },/* 220 */
      { .f_node=1, .degree=0, .alpha=0x41/* 'A' */, .outgoing=222, .patterns=0, .final=0, .range=0 },/* 221 */
      { .f_node=2, .degree=0, .alpha=0x67/* 'g' */, .outgoing=223, .patterns=0, .final=0, .range=0 },/* 222 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=224, .patterns=0, .final=0, .range=0 },/* 223 */
      { .f_node=1, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=225, .patterns=0, .final=0, .range=0 },/* 224 */
      { .f_node=1, .degree=0, .alpha=0x74/* 't' */, .outgoing=226, .patterns=0, .final=0, .range=0 },/* 225 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=227, .patterns=0, .final=0, .range=0 },/* 226 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=25, .final=1, .range=0 },/* 227 */
      { .f_node=1, .degree=0, .alpha=0x61/* 'a' */, .outgoing=229, .patterns=0, .final=0, .range=0 },/* 228 */
      { .f_node=1, .degree=0, .alpha=0x72/* 'r' */, .outgoing=230, .patterns=0, .final=0, .range=0 },/* 229 */
      { .f_node=1, .degree=0, .alpha=0x79/* 'y' */, .outgoing=231, .patterns=0, .final=0, .range=0 },/* 230 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=232, .patterns=0, .final=0, .range=0 },/* 231 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=26, .final=1, .range=0 },/* 232 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=234, .patterns=0, .final=0, .range=0 },/* 233 */
      { .f_node=1, .degree=13, .alpha=0x46, .outgoing=88, .patterns=0, .final=0, .range=1 },/* 234 */
      { .f_node=1, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=236, .patterns=0, .final=0, .range=0 },/* 235 */
      { .f_node=1, .degree=0, .alpha=0x72/* 'r' */, .outgoing=237, .patterns=0, .final=0, .range=0 },/* 236 */
      { .f_node=1, .degree=0, .alpha=0x77/* 'w' */, .outgoing=238, .patterns=0, .final=0, .range=0 },/* 237 */
      { .f_node=1, .degree=0, .alpha=0x61/* 'a' */, .outgoing=239, .patterns=0, .final=0, .range=0 },/* 238 */
      { .f_node=1, .degree=0, .alpha=0x72/* 'r' */, .outgoing=240, .patterns=0, .final=0, .range=0 },/* 239 */
      { .f_node=1, .degree=0, .alpha=0x64/* 'd' */, .outgoing=241, .patterns=0, .final=0, .range=0 },/* 240 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=242, .patterns=0, .final=0, .range=0 },/* 241 */
      { .f_node=1, .degree=0, .alpha=0x64/* 'd' */, .outgoing=243, .patterns=0, .final=0, .range=0 },/* 242 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=244, .patterns=0, .final=0, .range=0 },/* 243 */
      { .f_node=1, .degree=0, .alpha=0x46/* 'F' */, .outgoing=245, .patterns=0, .final=0, .range=0 },/* 244 */
      { .f_node=1, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=246, .patterns=0, .final=0, .range=0 },/* 245 */
      { .f_node=1, .degree=0, .alpha=0x72/* 'r' */, .outgoing=247, .patterns=0, .final=0, .range=0 },/* 246 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=248, .patterns=0, .final=0, .range=0 },/* 247 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=27, .final=1, .range=0 },/* 248 */
      { .f_node=158, .degree=0, .alpha=0x65/* 'e' */, .outgoing=250, .patterns=0, .final=0, .range=0 },/* 249 */
      { .f_node=159, .degree=0, .alpha=0x73/* 's' */, .outgoing=251, .patterns=0, .final=0, .range=0 },/* 250 */
      { .f_node=1, .degree=0, .alpha=0x73/* 's' */, .outgoing=252, .patterns=0, .final=0, .range=0 },/* 251 */
      { .f_node=1, .degree=0, .alpha=0x69/* 'i' */, .outgoing=253, .patterns=0, .final=0, .range=0 },/* 252 */
      { .f_node=1, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=254, .patterns=0, .final=0, .range=0 },/* 253 */
      { .f_node=1, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=255, .patterns=0, .final=0, .range=0 },/* 254 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=256, .patterns=0, .final=0, .range=0 },/* 255 */
      { .f_node=1, .degree=0, .alpha=0x54/* 'T' */, .outgoing=257, .patterns=0, .final=0, .range=0 },/* 256 */
      { .f_node=174, .degree=0, .alpha=0x79/* 'y' */, .outgoing=258, .patterns=0, .final=0, .range=0 },/* 257 */
      { .f_node=1, .degree=0, .alpha=0x70/* 'p' */, .outgoing=259, .patterns=0, .final=0, .range=0 },/* 258 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=260, .patterns=0, .final=0, .range=0 },/* 259 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=261, .patterns=0, .final=0, .range=0 },/* 260 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=28, .final=1, .range=0 },/* 261 */
      {} };
    struct aho_patterns pattern_list_w1[]= {
      { .len=0, .from_start=0, .at_end=0, .last=0, .code=0, .pattern=0 }, /* 0 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=57, .pattern=1 }, /* 1 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=56, .pattern=2 }, /* 2 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=55, .pattern=3 }, /* 3 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=36, .pattern=4 }, /* 4 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=53, .pattern=5 }, /* 5 */
      { .len=20, .from_start=0, .at_end=0, .last=1, .code=42, .pattern=6 }, /* 6 */
      { .len=17, .from_start=0, .at_end=0, .last=1, .code=39, .pattern=7 }, /* 7 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=41, .pattern=8 }, /* 8 */
      { .len=13, .from_start=0, .at_end=0, .last=1, .code=35, .pattern=9 }, /* 9 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=43, .pattern=10 }, /* 10 */
      { .len=5, .from_start=0, .at_end=0, .last=1, .code=46, .pattern=11 }, /* 11 */
      { .len=5, .from_start=0, .at_end=0, .last=1, .code=48, .pattern=12 }, /* 12 */
      { .len=8, .from_start=0, .at_end=0, .last=1, .code=50, .pattern=13 }, /* 13 */
      { .len=5, .from_start=0, .at_end=0, .last=1, .code=33, .pattern=14 }, /* 14 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=52, .pattern=15 }, /* 15 */
      { .len=14, .from_start=0, .at_end=0, .last=1, .code=54, .pattern=16 }, /* 16 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=45, .pattern=17 }, /* 17 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=49, .pattern=18 }, /* 18 */
      { .len=8, .from_start=0, .at_end=0, .last=1, .code=37, .pattern=19 }, /* 19 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=32, .pattern=20 }, /* 20 */
      { .len=11, .from_start=0, .at_end=0, .last=0, .code=51, .pattern=21 }, /* 21 */
      { .len=7, .from_start=0, .at_end=0, .last=1, .code=43, .pattern=10 }, /* 22 */
      { .len=18, .from_start=0, .at_end=0, .last=1, .code=40, .pattern=22 }, /* 23 */
      { .len=26, .from_start=0, .at_end=0, .last=1, .code=58, .pattern=23 }, /* 24 */
      { .len=11, .from_start=0, .at_end=0, .last=1, .code=38, .pattern=24 }, /* 25 */
      { .len=5, .from_start=0, .at_end=0, .last=1, .code=47, .pattern=25 }, /* 26 */
      { .len=16, .from_start=0, .at_end=0, .last=1, .code=34, .pattern=26 }, /* 27 */
      { .len=15, .from_start=0, .at_end=0, .last=1, .code=44, .pattern=27 }, /* 28 */
      {}};
    char outgoings_w1[] = "#ABCDEFGHIJKLMNOPQRSTUVWX-./0123456789:EFGHIJKLMNOPQRnonopqrstDEFGHIJKLMNOPQRSTTxrstpqrsFGHIJKLMNOPQRS";
    unsigned short next_w1[]= {
      0,2,0,35,89,94,0,0,106,0,0,111,122,0,0,136,143,0,150,158,174,192,228,0,233,8,0,0,
      0,0,0,0,0,0,0,0,0,0,34,9,0,0,0,0,0,0,18,0,0,0,0,0,27,37,84,38,0,0,0,0,0,46,51,63,
      0,0,0,0,0,0,72,0,0,0,0,0,0,0,79,95,99,160,0,165,193,0,0,218,235,0,0,0,0,0,0,0,0,0,
      0,0,0,249,};
/* patterns length 315 */
    char *patterns_w1[]= { NULL,
      "Accept-Encoding:", /* 1 */
      "Accept-Language:", /* 2 */
      "Accept-Ranges:", /* 3 */
      "Accept:", /* 4 */
      "Connection:", /* 5 */
      "Content-Disposition:", /* 6 */
      "Content-Encoding:", /* 7 */
      "Content-Length:", /* 8 */
      "Content-Type:", /* 9 */
      "Cookie:", /* 10 */
      "Date:", /* 11 */
      "ETag:", /* 12 */
      "Expires:", /* 13 */
      "Host:", /* 14 */
      "Keep-Alive:", /* 15 */
      "Last-Modified:", /* 16 */
      "Origin:", /* 17 */
      "Pragma:", /* 18 */
      "Referer:", /* 19 */
      "Server:", /* 20 */
      "Set-Cookie:", /* 21 */
      "Transfer-Encoding:", /* 22 */
      "Upgrade-Insecure-Requests:", /* 23 */
      "User-Agent:", /* 24 */
      "Vary:", /* 25 */
      "X-Forwarded-For:", /* 26 */
      "X-Session-Type:", /* 27 */
      NULL };

    struct aho_compiled w1 = {
        .a_node       = &a_node_w1[0],
        .pattern_list = &pattern_list_w1[0],
        .next         = &next_w1[0],
        .outgoings    = &outgoings_w1[0],
       .patterns     = &patterns_w1[0]
    };
