/* Flash OS Routines (Automagically Generated)
 * Copyright (c) 2009-2015 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

static const uint32_t ncs36510_flash_prog_blob[] = {
    0xE00ABE00, 0x062D780D, 0x24084068, 0xD3000040, 0x1E644058, 0x1C49D1FA, 0x2A001E52, 0x4770D1F2,
    0x4770ba40, 0x4770bac0, 0x4770ba40, 0x4770bac0, 0x49a06842, 0x68016111, 0xf4116840, 0x499e1f80,
    0x6181bf14, 0x47706141, 0x68406801, 0x1f80f411, 0x6801d004, 0x0f02f011, 0x4770d1fb, 0xf0116801,
    0xd1fb0f01, 0x68014770, 0xf4116840, 0x68411f80, 0xf041bf14, 0xf0410101, 0x60410102, 0x68014770,
    0xf4116840, 0x68411f80, 0xf021bf14, 0xf0210101, 0x60410102, 0x68434770, 0x611a4a86, 0x68436802,
    0x1f80f412, 0xbf144a84, 0x615a619a, 0x60d16842, 0x21016840, 0x47706081, 0xf4116801, 0x68411f80,
    0xf44fbf14, 0xf44f1281, 0x60ca5200, 0x49796842, 0x68016111, 0xf4116842, 0x49771f80, 0x6191bf14,
    0x21026151, 0x60816840, 0x47704770, 0x1e5b6808, 0xf810d305, 0xf802cb01, 0x1e5bcb01, 0x6008d2f9,
    0x47702001, 0x4604b510, 0x46116808, 0x5f00f5b0, 0x020af3c0, 0xb132d20b, 0x020af3c0, 0x6200f5c2,
    0xd205429a, 0xf5b3e00a, 0xd8076f00, 0xb13ae00b, 0x020af3c0, 0x6200f5c2, 0xd204429a, 0xbd102000,
    0x6f00f5b3, 0x6862d8fa, 0xc004f8d2, 0x0c40f04c, 0xc004f8c2, 0xc004f8d4, 0xf8cc4a56, 0x68222010,
    0xc004f8d4, 0x1f80f412, 0xbf144a53, 0x2018f8cc, 0x2014f8cc, 0xf000461a, 0x6820f929, 0x1f80f410,
    0xd0046860, 0xf0116801, 0xd1fb0f02, 0x6801e003, 0x0f01f011, 0x2001d1fb, 0xb410bd10, 0xc114f8df,
    0x29064b45, 0xe8dfd27d, 0x037cf001, 0x6e485429, 0xf4116801, 0xbf141f80, 0x1181f44f, 0x5100f44f,
    0x60d16842, 0xf8c16841, 0x6801c010, 0x1f80f411, 0xbf146841, 0x614b618b, 0x68422102, 0x68016091,
    0xf4116840, 0xd0041f80, 0xf0116801, 0xd1fb0f02, 0x6801e057, 0x0f01f011, 0xe052d1fb, 0x68426811,
    0xc010f8c2, 0xf4126802, 0x68421f80, 0x6193bf14, 0x68426153, 0x684260d1, 0x60912101, 0x68406801,
    0x1f80f411, 0x6801d004, 0x0f02f011, 0xe038d1fb, 0xf0116801, 0xd1fb0f01, 0x6801e033, 0xf4116840,
    0x68411f80, 0xf041bf14, 0xf0410101, 0x60410102, 0x6801e027, 0x1f80f411, 0x684a6841, 0xf022bf14,
    0xf0220201, 0x604a0202, 0x68406801, 0x1f80f411, 0x6801d004, 0x0f02f011, 0xe012d1fb, 0xf0116801,
    0xd1fb0f01, 0x6801e00d, 0xf4116840, 0xd0041f80, 0xf0116801, 0xd1fb0f02, 0x6801e003, 0x0f01f011,
    0xbc10d1fb, 0x47702001, 0xf01169c1, 0xbf180f01, 0x477069c0, 0xbb781ae9, 0xb56d9099, 0xb5104838,
    0xf4216901, 0x61010100, 0xf0216901, 0x61014180, 0x49354834, 0xf04f6001, 0x211f20e0, 0x1180f8c0,
    0x1280f8c0, 0xf04f4931, 0x60086020, 0x22004830, 0x44782103, 0xff51f7ff, 0xbd102000, 0x47702000,
    0x47702000, 0xb510482b, 0xf7ff4478, 0x482afed5, 0xf7ff4478, 0x2000fed1, 0xb501bd10, 0xf5b09800,
    0xbf3c5f00, 0xbd082001, 0x5100f5a0, 0x2fa0f5b1, 0x4822d204, 0x2102466a, 0xe0084478, 0x1081f5a0,
    0x2fa0f5b0, 0x481ed205, 0x2102466a, 0xf7ff4478, 0x2000ff24, 0xb507bd08, 0xf5b09800, 0xd3165f00,
    0x5c00f5a0, 0x2fa0f5bc, 0x4816d204, 0x4669460b, 0xe0084478, 0x1081f5a0, 0x2fa0f5b0, 0x4812d20a,
    0x4669460b, 0xf7ff4478, 0x2801febd, 0xb003d002, 0xbd002001, 0x2000b003, 0x2000bd00, 0x00004770,
    0x4001b000, 0x4001e000, 0x2082353f, 0xe000ed04, 0x00000106, 0x000000e4, 0x000000e8, 0x000000b4,
    0x000000ac, 0x0000007c, 0x00000074, 0x0301ea40, 0xd003079b, 0xc908e009, 0xc0081f12, 0xd2fa2a04,
    0xf811e003, 0xf8003b01, 0x1e523b01, 0x4770d2f9, 0x00000000, 0x40017000, 0x00000008, 0x00100000,
    0x40017000, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};

static const program_target_t flash = {
    0x3fff42bd, // Init
    0x3fff42fd, // UnInit
    0x3fff4305, // EraseChip
    0x3fff431b, // EraseSector
    0x3fff4357, // ProgramPage

    // BKPT : start of blob + 1
    // RSB  : blob start + header + rw data offset
    // RSP  : stack pointer
    {
        0x3fff4001,
        0x3fff4408,
        0x3fff4800
    },

    0x3fff4000 + 0x00000A00,  // mem buffer location
    0x3fff4000,               // location to write prog_blob in target RAM
    sizeof(ncs36510_flash_prog_blob),   // prog_blob size
    ncs36510_flash_prog_blob,           // address of prog_blob
    0x00000200       // ram_to_flash_bytes_to_be_written
};
