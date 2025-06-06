/**************************************************************************/
/*  unicode_ranges.inc                                                    */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

// This file was generated using the `misc/scripts/unicode_ranges_fetch.py` script.

#ifndef UNICODE_RANGES_INC
#define UNICODE_RANGES_INC

// Unicode Character Blocks
// Source: https://www.unicode.org/Public/16.0.0/ucd/Blocks.txt

struct UniRange {
	int32_t start;
	int32_t end;
	String name;
};

static UniRange unicode_ranges[] = {
	{ 0x0000, 0x007F, U"Basic Latin" },
	{ 0x0080, 0x00FF, U"Latin-1 Supplement" },
	{ 0x0100, 0x017F, U"Latin Extended-A" },
	{ 0x0180, 0x024F, U"Latin Extended-B" },
	{ 0x0250, 0x02AF, U"IPA Extensions" },
	{ 0x02B0, 0x02FF, U"Spacing Modifier Letters" },
	{ 0x0300, 0x036F, U"Combining Diacritical Marks" },
	{ 0x0370, 0x03FF, U"Greek and Coptic" },
	{ 0x0400, 0x04FF, U"Cyrillic" },
	{ 0x0500, 0x052F, U"Cyrillic Supplement" },
	{ 0x0530, 0x058F, U"Armenian" },
	{ 0x0590, 0x05FF, U"Hebrew" },
	{ 0x0600, 0x06FF, U"Arabic" },
	{ 0x0700, 0x074F, U"Syriac" },
	{ 0x0750, 0x077F, U"Arabic Supplement" },
	{ 0x0780, 0x07BF, U"Thaana" },
	{ 0x07C0, 0x07FF, U"NKo" },
	{ 0x0800, 0x083F, U"Samaritan" },
	{ 0x0840, 0x085F, U"Mandaic" },
	{ 0x0860, 0x086F, U"Syriac Supplement" },
	{ 0x0870, 0x089F, U"Arabic Extended-B" },
	{ 0x08A0, 0x08FF, U"Arabic Extended-A" },
	{ 0x0900, 0x097F, U"Devanagari" },
	{ 0x0980, 0x09FF, U"Bengali" },
	{ 0x0A00, 0x0A7F, U"Gurmukhi" },
	{ 0x0A80, 0x0AFF, U"Gujarati" },
	{ 0x0B00, 0x0B7F, U"Oriya" },
	{ 0x0B80, 0x0BFF, U"Tamil" },
	{ 0x0C00, 0x0C7F, U"Telugu" },
	{ 0x0C80, 0x0CFF, U"Kannada" },
	{ 0x0D00, 0x0D7F, U"Malayalam" },
	{ 0x0D80, 0x0DFF, U"Sinhala" },
	{ 0x0E00, 0x0E7F, U"Thai" },
	{ 0x0E80, 0x0EFF, U"Lao" },
	{ 0x0F00, 0x0FFF, U"Tibetan" },
	{ 0x1000, 0x109F, U"Myanmar" },
	{ 0x10A0, 0x10FF, U"Georgian" },
	{ 0x1100, 0x11FF, U"Hangul Jamo" },
	{ 0x1200, 0x137F, U"Ethiopic" },
	{ 0x1380, 0x139F, U"Ethiopic Supplement" },
	{ 0x13A0, 0x13FF, U"Cherokee" },
	{ 0x1400, 0x167F, U"Unified Canadian Aboriginal Syllabics" },
	{ 0x1680, 0x169F, U"Ogham" },
	{ 0x16A0, 0x16FF, U"Runic" },
	{ 0x1700, 0x171F, U"Tagalog" },
	{ 0x1720, 0x173F, U"Hanunoo" },
	{ 0x1740, 0x175F, U"Buhid" },
	{ 0x1760, 0x177F, U"Tagbanwa" },
	{ 0x1780, 0x17FF, U"Khmer" },
	{ 0x1800, 0x18AF, U"Mongolian" },
	{ 0x18B0, 0x18FF, U"Unified Canadian Aboriginal Syllabics Extended" },
	{ 0x1900, 0x194F, U"Limbu" },
	{ 0x1950, 0x197F, U"Tai Le" },
	{ 0x1980, 0x19DF, U"New Tai Lue" },
	{ 0x19E0, 0x19FF, U"Khmer Symbols" },
	{ 0x1A00, 0x1A1F, U"Buginese" },
	{ 0x1A20, 0x1AAF, U"Tai Tham" },
	{ 0x1AB0, 0x1AFF, U"Combining Diacritical Marks Extended" },
	{ 0x1B00, 0x1B7F, U"Balinese" },
	{ 0x1B80, 0x1BBF, U"Sundanese" },
	{ 0x1BC0, 0x1BFF, U"Batak" },
	{ 0x1C00, 0x1C4F, U"Lepcha" },
	{ 0x1C50, 0x1C7F, U"Ol Chiki" },
	{ 0x1C80, 0x1C8F, U"Cyrillic Extended-C" },
	{ 0x1C90, 0x1CBF, U"Georgian Extended" },
	{ 0x1CC0, 0x1CCF, U"Sundanese Supplement" },
	{ 0x1CD0, 0x1CFF, U"Vedic Extensions" },
	{ 0x1D00, 0x1D7F, U"Phonetic Extensions" },
	{ 0x1D80, 0x1DBF, U"Phonetic Extensions Supplement" },
	{ 0x1DC0, 0x1DFF, U"Combining Diacritical Marks Supplement" },
	{ 0x1E00, 0x1EFF, U"Latin Extended Additional" },
	{ 0x1F00, 0x1FFF, U"Greek Extended" },
	{ 0x2000, 0x206F, U"General Punctuation" },
	{ 0x2070, 0x209F, U"Superscripts and Subscripts" },
	{ 0x20A0, 0x20CF, U"Currency Symbols" },
	{ 0x20D0, 0x20FF, U"Combining Diacritical Marks for Symbols" },
	{ 0x2100, 0x214F, U"Letterlike Symbols" },
	{ 0x2150, 0x218F, U"Number Forms" },
	{ 0x2190, 0x21FF, U"Arrows" },
	{ 0x2200, 0x22FF, U"Mathematical Operators" },
	{ 0x2300, 0x23FF, U"Miscellaneous Technical" },
	{ 0x2400, 0x243F, U"Control Pictures" },
	{ 0x2440, 0x245F, U"Optical Character Recognition" },
	{ 0x2460, 0x24FF, U"Enclosed Alphanumerics" },
	{ 0x2500, 0x257F, U"Box Drawing" },
	{ 0x2580, 0x259F, U"Block Elements" },
	{ 0x25A0, 0x25FF, U"Geometric Shapes" },
	{ 0x2600, 0x26FF, U"Miscellaneous Symbols" },
	{ 0x2700, 0x27BF, U"Dingbats" },
	{ 0x27C0, 0x27EF, U"Miscellaneous Mathematical Symbols-A" },
	{ 0x27F0, 0x27FF, U"Supplemental Arrows-A" },
	{ 0x2800, 0x28FF, U"Braille Patterns" },
	{ 0x2900, 0x297F, U"Supplemental Arrows-B" },
	{ 0x2980, 0x29FF, U"Miscellaneous Mathematical Symbols-B" },
	{ 0x2A00, 0x2AFF, U"Supplemental Mathematical Operators" },
	{ 0x2B00, 0x2BFF, U"Miscellaneous Symbols and Arrows" },
	{ 0x2C00, 0x2C5F, U"Glagolitic" },
	{ 0x2C60, 0x2C7F, U"Latin Extended-C" },
	{ 0x2C80, 0x2CFF, U"Coptic" },
	{ 0x2D00, 0x2D2F, U"Georgian Supplement" },
	{ 0x2D30, 0x2D7F, U"Tifinagh" },
	{ 0x2D80, 0x2DDF, U"Ethiopic Extended" },
	{ 0x2DE0, 0x2DFF, U"Cyrillic Extended-A" },
	{ 0x2E00, 0x2E7F, U"Supplemental Punctuation" },
	{ 0x2E80, 0x2EFF, U"CJK Radicals Supplement" },
	{ 0x2F00, 0x2FDF, U"Kangxi Radicals" },
	{ 0x2FF0, 0x2FFF, U"Ideographic Description Characters" },
	{ 0x3000, 0x303F, U"CJK Symbols and Punctuation" },
	{ 0x3040, 0x309F, U"Hiragana" },
	{ 0x30A0, 0x30FF, U"Katakana" },
	{ 0x3100, 0x312F, U"Bopomofo" },
	{ 0x3130, 0x318F, U"Hangul Compatibility Jamo" },
	{ 0x3190, 0x319F, U"Kanbun" },
	{ 0x31A0, 0x31BF, U"Bopomofo Extended" },
	{ 0x31C0, 0x31EF, U"CJK Strokes" },
	{ 0x31F0, 0x31FF, U"Katakana Phonetic Extensions" },
	{ 0x3200, 0x32FF, U"Enclosed CJK Letters and Months" },
	{ 0x3300, 0x33FF, U"CJK Compatibility" },
	{ 0x3400, 0x4DBF, U"CJK Unified Ideographs Extension A" },
	{ 0x4DC0, 0x4DFF, U"Yijing Hexagram Symbols" },
	{ 0x4E00, 0x9FFF, U"CJK Unified Ideographs" },
	{ 0xA000, 0xA48F, U"Yi Syllables" },
	{ 0xA490, 0xA4CF, U"Yi Radicals" },
	{ 0xA4D0, 0xA4FF, U"Lisu" },
	{ 0xA500, 0xA63F, U"Vai" },
	{ 0xA640, 0xA69F, U"Cyrillic Extended-B" },
	{ 0xA6A0, 0xA6FF, U"Bamum" },
	{ 0xA700, 0xA71F, U"Modifier Tone Letters" },
	{ 0xA720, 0xA7FF, U"Latin Extended-D" },
	{ 0xA800, 0xA82F, U"Syloti Nagri" },
	{ 0xA830, 0xA83F, U"Common Indic Number Forms" },
	{ 0xA840, 0xA87F, U"Phags-pa" },
	{ 0xA880, 0xA8DF, U"Saurashtra" },
	{ 0xA8E0, 0xA8FF, U"Devanagari Extended" },
	{ 0xA900, 0xA92F, U"Kayah Li" },
	{ 0xA930, 0xA95F, U"Rejang" },
	{ 0xA960, 0xA97F, U"Hangul Jamo Extended-A" },
	{ 0xA980, 0xA9DF, U"Javanese" },
	{ 0xA9E0, 0xA9FF, U"Myanmar Extended-B" },
	{ 0xAA00, 0xAA5F, U"Cham" },
	{ 0xAA60, 0xAA7F, U"Myanmar Extended-A" },
	{ 0xAA80, 0xAADF, U"Tai Viet" },
	{ 0xAAE0, 0xAAFF, U"Meetei Mayek Extensions" },
	{ 0xAB00, 0xAB2F, U"Ethiopic Extended-A" },
	{ 0xAB30, 0xAB6F, U"Latin Extended-E" },
	{ 0xAB70, 0xABBF, U"Cherokee Supplement" },
	{ 0xABC0, 0xABFF, U"Meetei Mayek" },
	{ 0xAC00, 0xD7AF, U"Hangul Syllables" },
	{ 0xD7B0, 0xD7FF, U"Hangul Jamo Extended-B" },
	{ 0xE000, 0xF8FF, U"Private Use Area" },
	{ 0xF900, 0xFAFF, U"CJK Compatibility Ideographs" },
	{ 0xFB00, 0xFB4F, U"Alphabetic Presentation Forms" },
	{ 0xFB50, 0xFDFF, U"Arabic Presentation Forms-A" },
	{ 0xFE10, 0xFE1F, U"Vertical Forms" },
	{ 0xFE20, 0xFE2F, U"Combining Half Marks" },
	{ 0xFE30, 0xFE4F, U"CJK Compatibility Forms" },
	{ 0xFE50, 0xFE6F, U"Small Form Variants" },
	{ 0xFE70, 0xFEFF, U"Arabic Presentation Forms-B" },
	{ 0xFF00, 0xFFEF, U"Halfwidth and Fullwidth Forms" },
	{ 0x10000, 0x1007F, U"Linear B Syllabary" },
	{ 0x10080, 0x100FF, U"Linear B Ideograms" },
	{ 0x10100, 0x1013F, U"Aegean Numbers" },
	{ 0x10140, 0x1018F, U"Ancient Greek Numbers" },
	{ 0x10190, 0x101CF, U"Ancient Symbols" },
	{ 0x101D0, 0x101FF, U"Phaistos Disc" },
	{ 0x10280, 0x1029F, U"Lycian" },
	{ 0x102A0, 0x102DF, U"Carian" },
	{ 0x102E0, 0x102FF, U"Coptic Epact Numbers" },
	{ 0x10300, 0x1032F, U"Old Italic" },
	{ 0x10330, 0x1034F, U"Gothic" },
	{ 0x10350, 0x1037F, U"Old Permic" },
	{ 0x10380, 0x1039F, U"Ugaritic" },
	{ 0x103A0, 0x103DF, U"Old Persian" },
	{ 0x10400, 0x1044F, U"Deseret" },
	{ 0x10450, 0x1047F, U"Shavian" },
	{ 0x10480, 0x104AF, U"Osmanya" },
	{ 0x104B0, 0x104FF, U"Osage" },
	{ 0x10500, 0x1052F, U"Elbasan" },
	{ 0x10530, 0x1056F, U"Caucasian Albanian" },
	{ 0x10570, 0x105BF, U"Vithkuqi" },
	{ 0x105C0, 0x105FF, U"Todhri" },
	{ 0x10600, 0x1077F, U"Linear A" },
	{ 0x10780, 0x107BF, U"Latin Extended-F" },
	{ 0x10800, 0x1083F, U"Cypriot Syllabary" },
	{ 0x10840, 0x1085F, U"Imperial Aramaic" },
	{ 0x10860, 0x1087F, U"Palmyrene" },
	{ 0x10880, 0x108AF, U"Nabataean" },
	{ 0x108E0, 0x108FF, U"Hatran" },
	{ 0x10900, 0x1091F, U"Phoenician" },
	{ 0x10920, 0x1093F, U"Lydian" },
	{ 0x10980, 0x1099F, U"Meroitic Hieroglyphs" },
	{ 0x109A0, 0x109FF, U"Meroitic Cursive" },
	{ 0x10A00, 0x10A5F, U"Kharoshthi" },
	{ 0x10A60, 0x10A7F, U"Old South Arabian" },
	{ 0x10A80, 0x10A9F, U"Old North Arabian" },
	{ 0x10AC0, 0x10AFF, U"Manichaean" },
	{ 0x10B00, 0x10B3F, U"Avestan" },
	{ 0x10B40, 0x10B5F, U"Inscriptional Parthian" },
	{ 0x10B60, 0x10B7F, U"Inscriptional Pahlavi" },
	{ 0x10B80, 0x10BAF, U"Psalter Pahlavi" },
	{ 0x10C00, 0x10C4F, U"Old Turkic" },
	{ 0x10C80, 0x10CFF, U"Old Hungarian" },
	{ 0x10D00, 0x10D3F, U"Hanifi Rohingya" },
	{ 0x10D40, 0x10D8F, U"Garay" },
	{ 0x10E60, 0x10E7F, U"Rumi Numeral Symbols" },
	{ 0x10E80, 0x10EBF, U"Yezidi" },
	{ 0x10EC0, 0x10EFF, U"Arabic Extended-C" },
	{ 0x10F00, 0x10F2F, U"Old Sogdian" },
	{ 0x10F30, 0x10F6F, U"Sogdian" },
	{ 0x10F70, 0x10FAF, U"Old Uyghur" },
	{ 0x10FB0, 0x10FDF, U"Chorasmian" },
	{ 0x10FE0, 0x10FFF, U"Elymaic" },
	{ 0x11000, 0x1107F, U"Brahmi" },
	{ 0x11080, 0x110CF, U"Kaithi" },
	{ 0x110D0, 0x110FF, U"Sora Sompeng" },
	{ 0x11100, 0x1114F, U"Chakma" },
	{ 0x11150, 0x1117F, U"Mahajani" },
	{ 0x11180, 0x111DF, U"Sharada" },
	{ 0x111E0, 0x111FF, U"Sinhala Archaic Numbers" },
	{ 0x11200, 0x1124F, U"Khojki" },
	{ 0x11280, 0x112AF, U"Multani" },
	{ 0x112B0, 0x112FF, U"Khudawadi" },
	{ 0x11300, 0x1137F, U"Grantha" },
	{ 0x11380, 0x113FF, U"Tulu-Tigalari" },
	{ 0x11400, 0x1147F, U"Newa" },
	{ 0x11480, 0x114DF, U"Tirhuta" },
	{ 0x11580, 0x115FF, U"Siddham" },
	{ 0x11600, 0x1165F, U"Modi" },
	{ 0x11660, 0x1167F, U"Mongolian Supplement" },
	{ 0x11680, 0x116CF, U"Takri" },
	{ 0x116D0, 0x116FF, U"Myanmar Extended-C" },
	{ 0x11700, 0x1174F, U"Ahom" },
	{ 0x11800, 0x1184F, U"Dogra" },
	{ 0x118A0, 0x118FF, U"Warang Citi" },
	{ 0x11900, 0x1195F, U"Dives Akuru" },
	{ 0x119A0, 0x119FF, U"Nandinagari" },
	{ 0x11A00, 0x11A4F, U"Zanabazar Square" },
	{ 0x11A50, 0x11AAF, U"Soyombo" },
	{ 0x11AB0, 0x11ABF, U"Unified Canadian Aboriginal Syllabics Extended-A" },
	{ 0x11AC0, 0x11AFF, U"Pau Cin Hau" },
	{ 0x11B00, 0x11B5F, U"Devanagari Extended-A" },
	{ 0x11BC0, 0x11BFF, U"Sunuwar" },
	{ 0x11C00, 0x11C6F, U"Bhaiksuki" },
	{ 0x11C70, 0x11CBF, U"Marchen" },
	{ 0x11D00, 0x11D5F, U"Masaram Gondi" },
	{ 0x11D60, 0x11DAF, U"Gunjala Gondi" },
	{ 0x11EE0, 0x11EFF, U"Makasar" },
	{ 0x11F00, 0x11F5F, U"Kawi" },
	{ 0x11FB0, 0x11FBF, U"Lisu Supplement" },
	{ 0x11FC0, 0x11FFF, U"Tamil Supplement" },
	{ 0x12000, 0x123FF, U"Cuneiform" },
	{ 0x12400, 0x1247F, U"Cuneiform Numbers and Punctuation" },
	{ 0x12480, 0x1254F, U"Early Dynastic Cuneiform" },
	{ 0x12F90, 0x12FFF, U"Cypro-Minoan" },
	{ 0x13000, 0x1342F, U"Egyptian Hieroglyphs" },
	{ 0x13460, 0x143FF, U"Egyptian Hieroglyphs Extended-A" },
	{ 0x14400, 0x1467F, U"Anatolian Hieroglyphs" },
	{ 0x16100, 0x1613F, U"Gurung Khema" },
	{ 0x16800, 0x16A3F, U"Bamum Supplement" },
	{ 0x16A40, 0x16A6F, U"Mro" },
	{ 0x16A70, 0x16ACF, U"Tangsa" },
	{ 0x16AD0, 0x16AFF, U"Bassa Vah" },
	{ 0x16B00, 0x16B8F, U"Pahawh Hmong" },
	{ 0x16D40, 0x16D7F, U"Kirat Rai" },
	{ 0x16E40, 0x16E9F, U"Medefaidrin" },
	{ 0x16F00, 0x16F9F, U"Miao" },
	{ 0x16FE0, 0x16FFF, U"Ideographic Symbols and Punctuation" },
	{ 0x17000, 0x187FF, U"Tangut" },
	{ 0x18800, 0x18AFF, U"Tangut Components" },
	{ 0x18B00, 0x18CFF, U"Khitan Small Script" },
	{ 0x18D00, 0x18D7F, U"Tangut Supplement" },
	{ 0x1AFF0, 0x1AFFF, U"Kana Extended-B" },
	{ 0x1B000, 0x1B0FF, U"Kana Supplement" },
	{ 0x1B100, 0x1B12F, U"Kana Extended-A" },
	{ 0x1B130, 0x1B16F, U"Small Kana Extension" },
	{ 0x1B170, 0x1B2FF, U"Nushu" },
	{ 0x1BC00, 0x1BC9F, U"Duployan" },
	{ 0x1BCA0, 0x1BCAF, U"Shorthand Format Controls" },
	{ 0x1CC00, 0x1CEBF, U"Symbols for Legacy Computing Supplement" },
	{ 0x1CF00, 0x1CFCF, U"Znamenny Musical Notation" },
	{ 0x1D000, 0x1D0FF, U"Byzantine Musical Symbols" },
	{ 0x1D100, 0x1D1FF, U"Musical Symbols" },
	{ 0x1D200, 0x1D24F, U"Ancient Greek Musical Notation" },
	{ 0x1D2C0, 0x1D2DF, U"Kaktovik Numerals" },
	{ 0x1D2E0, 0x1D2FF, U"Mayan Numerals" },
	{ 0x1D300, 0x1D35F, U"Tai Xuan Jing Symbols" },
	{ 0x1D360, 0x1D37F, U"Counting Rod Numerals" },
	{ 0x1D400, 0x1D7FF, U"Mathematical Alphanumeric Symbols" },
	{ 0x1D800, 0x1DAAF, U"Sutton SignWriting" },
	{ 0x1DF00, 0x1DFFF, U"Latin Extended-G" },
	{ 0x1E000, 0x1E02F, U"Glagolitic Supplement" },
	{ 0x1E030, 0x1E08F, U"Cyrillic Extended-D" },
	{ 0x1E100, 0x1E14F, U"Nyiakeng Puachue Hmong" },
	{ 0x1E290, 0x1E2BF, U"Toto" },
	{ 0x1E2C0, 0x1E2FF, U"Wancho" },
	{ 0x1E4D0, 0x1E4FF, U"Nag Mundari" },
	{ 0x1E5D0, 0x1E5FF, U"Ol Onal" },
	{ 0x1E7E0, 0x1E7FF, U"Ethiopic Extended-B" },
	{ 0x1E800, 0x1E8DF, U"Mende Kikakui" },
	{ 0x1E900, 0x1E95F, U"Adlam" },
	{ 0x1EC70, 0x1ECBF, U"Indic Siyaq Numbers" },
	{ 0x1ED00, 0x1ED4F, U"Ottoman Siyaq Numbers" },
	{ 0x1EE00, 0x1EEFF, U"Arabic Mathematical Alphabetic Symbols" },
	{ 0x1F000, 0x1F02F, U"Mahjong Tiles" },
	{ 0x1F030, 0x1F09F, U"Domino Tiles" },
	{ 0x1F0A0, 0x1F0FF, U"Playing Cards" },
	{ 0x1F100, 0x1F1FF, U"Enclosed Alphanumeric Supplement" },
	{ 0x1F200, 0x1F2FF, U"Enclosed Ideographic Supplement" },
	{ 0x1F300, 0x1F5FF, U"Miscellaneous Symbols and Pictographs" },
	{ 0x1F600, 0x1F64F, U"Emoticons" },
	{ 0x1F650, 0x1F67F, U"Ornamental Dingbats" },
	{ 0x1F680, 0x1F6FF, U"Transport and Map Symbols" },
	{ 0x1F700, 0x1F77F, U"Alchemical Symbols" },
	{ 0x1F780, 0x1F7FF, U"Geometric Shapes Extended" },
	{ 0x1F800, 0x1F8FF, U"Supplemental Arrows-C" },
	{ 0x1F900, 0x1F9FF, U"Supplemental Symbols and Pictographs" },
	{ 0x1FA00, 0x1FA6F, U"Chess Symbols" },
	{ 0x1FA70, 0x1FAFF, U"Symbols and Pictographs Extended-A" },
	{ 0x1FB00, 0x1FBFF, U"Symbols for Legacy Computing" },
	{ 0x20000, 0x2A6DF, U"CJK Unified Ideographs Extension B" },
	{ 0x2A700, 0x2B73F, U"CJK Unified Ideographs Extension C" },
	{ 0x2B740, 0x2B81F, U"CJK Unified Ideographs Extension D" },
	{ 0x2B820, 0x2CEAF, U"CJK Unified Ideographs Extension E" },
	{ 0x2CEB0, 0x2EBEF, U"CJK Unified Ideographs Extension F" },
	{ 0x2EBF0, 0x2EE5F, U"CJK Unified Ideographs Extension I" },
	{ 0x2F800, 0x2FA1F, U"CJK Compatibility Ideographs Supplement" },
	{ 0x30000, 0x3134F, U"CJK Unified Ideographs Extension G" },
	{ 0x31350, 0x323AF, U"CJK Unified Ideographs Extension H" },
	{ 0xF0000, 0xFFFFF, U"Supplementary Private Use Area-A" },
	{ 0x100000, 0x10FFFF, U"Supplementary Private Use Area-B" },
	{ 0x10FFFF, 0x10FFFF, String() }
};

#endif // UNICODE_RANGES_INC
