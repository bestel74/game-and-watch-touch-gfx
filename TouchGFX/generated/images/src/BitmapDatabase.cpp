// 4.16.0 0xbaee9e2e
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_gold_1[]; // BITMAP_GOLD_1_ID = 0, Size: 32x32 pixels
extern const unsigned char image_gold_2[]; // BITMAP_GOLD_2_ID = 1, Size: 32x32 pixels
extern const unsigned char image_gold_3[]; // BITMAP_GOLD_3_ID = 2, Size: 32x32 pixels
extern const unsigned char image_gold_4[]; // BITMAP_GOLD_4_ID = 3, Size: 32x32 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] =
{
    { image_gold_1, 0, 32, 32, 9, 7, 14, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 18, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_gold_2, 0, 32, 32, 10, 7, 12, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 18, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_gold_3, 0, 32, 32, 14, 5, 4, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 22, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_gold_4, 0, 32, 32, 10, 7, 12, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 18, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
}
