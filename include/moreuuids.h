/*
 * $Id$
 *
 * (C) 2003-2006 Gabest
 * (C) 2006-2010 see AUTHORS
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with GNU Make; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *  http://www.gnu.org/copyleft/gpl.html
 *
 *  Note: This interface was defined for the matroska container format
 *  originally, but can be implemented for other formats as well.
 *
 */

#pragma once

#include <dvdmedia.h>

// 30323449-0000-0010-8000-00AA00389B71  'I420' == MEDIASUBTYPE_I420
DEFINE_GUID(MEDIASUBTYPE_I420,
			0x30323449, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);

#define WAVE_FORMAT_DOLBY_AC3 0x2000
// {00002000-0000-0010-8000-00aa00389b71}
DEFINE_GUID(MEDIASUBTYPE_WAVE_DOLBY_AC3,
			WAVE_FORMAT_DOLBY_AC3, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);

#define WAVE_FORMAT_DVD_DTS 0x2001
// {00002001-0000-0010-8000-00aa00389b71}
DEFINE_GUID(MEDIASUBTYPE_WAVE_DTS,
			WAVE_FORMAT_DVD_DTS, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);

// Be compatible with 3ivx
#define WAVE_FORMAT_AAC 0x00FF
// {000000FF-0000-0010-8000-00AA00389B71}
DEFINE_GUID(MEDIASUBTYPE_AAC,
			WAVE_FORMAT_AAC, 0x000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);

// ... and also compatible with nero
// btw, older nero parsers use a lower-case fourcc, newer upper-case (why can't it just offer both?)
// {4134504D-0000-0010-8000-00AA00389B71}
DEFINE_GUID(MEDIASUBTYPE_MP4A,
			0x4134504D, 0x000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);

// {6134706D-0000-0010-8000-00AA00389B71}
DEFINE_GUID(MEDIASUBTYPE_mp4a,
			0x6134706D, 0x000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);

#define WAVE_FORMAT_MP3 0x0055
// 00000055-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_MP3,
			WAVE_FORMAT_MP3, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);

#define WAVE_FORMAT_FLAC 0xF1AC
// 0000F1AC-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_FLAC,
			WAVE_FORMAT_FLAC, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);

// {1541C5C0-CDDF-477d-BC0A-86F8AE7F8354}
DEFINE_GUID(MEDIASUBTYPE_FLAC_FRAMED,
			0x1541c5c0, 0xcddf, 0x477d, 0xbc, 0xa, 0x86, 0xf8, 0xae, 0x7f, 0x83, 0x54);

#define WAVE_FORMAT_TTA1 0x77A1
// {000077A1-0000-0010-8000-00AA00389B71}
DEFINE_GUID(MEDIASUBTYPE_TTA1,
			WAVE_FORMAT_TTA1, 0x000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);

#define WAVE_FORMAT_WAVPACK4 0x5756
// {00005756-0000-0010-8000-00AA00389B71}
DEFINE_GUID(MEDIASUBTYPE_WAVPACK4,
			WAVE_FORMAT_WAVPACK4, 0x000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);

DEFINE_GUID(MEDIASUBTYPE_AMR,
			0x000000FE, 0x000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
// {726D6173-0000-0010-8000-00AA00389B71}
DEFINE_GUID(MEDIASUBTYPE_SAMR,
			0x726D6173, 0x000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);

DEFINE_GUID(MEDIASUBTYPE_VP80 ,
			0x30385056, 0x0000, 0x0010,  0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);

DEFINE_GUID(MEDIASUBTYPE_IMA4,
			0x34616D69, 0x000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
// {34616D69-0000-0010-8000-00AA00389B71}

DEFINE_GUID(MEDIASUBTYPE_SAWB,
			0x62776173, 0x000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);

// {DA5B82EE-6BD2-426f-BF1E-30112DA78AE1}
DEFINE_GUID(MEDIASUBTYPE_SVCD_SUBPICTURE,
			0xda5b82ee, 0x6bd2, 0x426f, 0xbf, 0x1e, 0x30, 0x11, 0x2d, 0xa7, 0x8a, 0xe1);

// {7B57308F-5154-4c36-B903-52FE76E184FC}
DEFINE_GUID(MEDIASUBTYPE_CVD_SUBPICTURE,
			0x7b57308f, 0x5154, 0x4c36, 0xb9, 0x3, 0x52, 0xfe, 0x76, 0xe1, 0x84, 0xfc);

// {0E3A2342-F6E2-4c91-BDAE-87C71EAD0D63}
DEFINE_GUID(MEDIASUBTYPE_MPEG2_PVA,
			0xe3a2342, 0xf6e2, 0x4c91, 0xbd, 0xae, 0x87, 0xc7, 0x1e, 0xad, 0xd, 0x63);

// {6B6D0800-9ADA-11d0-A520-00A0D10129C0}
DEFINE_GUID(CLSID_NetShowSource,
			0x6b6d0800, 0x9ada, 0x11d0, 0xa5, 0x20, 0x0, 0xa0, 0xd1, 0x1, 0x29, 0xc0);

// DirectShowMedia

// {5E9C9EE0-2E4A-4f22-9906-7BBBB75AA2B6}
DEFINE_GUID(MEDIASUBTYPE_DirectShowMedia,
			0x5e9c9ee0, 0x2e4a, 0x4f22, 0x99, 0x6, 0x7b, 0xbb, 0xb7, 0x5a, 0xa2, 0xb6);

// Dirac

// {A29DA00F-A22B-40ea-98DE-2F7FECADA5DE}
DEFINE_GUID(MEDIASUBTYPE_Dirac,
			0xa29da00f, 0xa22b, 0x40ea, 0x98, 0xde, 0x2f, 0x7f, 0xec, 0xad, 0xa5, 0xde);

// {64726376-0000-0010-8000-00AA00389B71}
DEFINE_GUID(MEDIASUBTYPE_DiracVideo,
			0x64726376, 0x000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);

// {D2667A7E-4055-4244-A65F-DDDDF2B74BD7}
DEFINE_GUID(FORMAT_DiracVideoInfo,
			0xd2667a7e, 0x4055, 0x4244, 0xa6, 0x5f, 0xdd, 0xdd, 0xf2, 0xb7, 0x4b, 0xd7);

struct DIRACINFOHEADER
{
	VIDEOINFOHEADER2 hdr;
	DWORD cbSequenceHeader;
	DWORD dwSequenceHeader[1];
};

// MP4

// {08E22ADA-B715-45ed-9D20-7B87750301D4}
DEFINE_GUID(MEDIASUBTYPE_MP4,
			0x8e22ada, 0xb715, 0x45ed, 0x9d, 0x20, 0x7b, 0x87, 0x75, 0x3, 0x1, 0xd4);

// FLV

// {F2FAC0F1-3852-4670-AAC0-9051D400AC54}
DEFINE_GUID(MEDIASUBTYPE_FLV,
			0xf2fac0f1, 0x3852, 0x4670, 0xaa, 0xc0, 0x90, 0x51, 0xd4, 0x0, 0xac, 0x54);

// 31564C46-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_FLV1,
			0x31564C46, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 31766C66-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_flv1,
			0x31766C66, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 34564C46-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_FLV4,
			0x34564C46, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 34766C66-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_flv4,
			0x34766C66, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 30355056-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_VP50,
			0x30355056, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 30357076-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_vp50,
			0x30357076, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 30365056-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_VP60,
			0x30365056, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 30367076-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_vp60,
			0x30367076, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 31365056-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_VP61,
			0x31365056, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 31367076-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_vp61,
			0x31367076, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 32365056-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_VP62,
			0x32365056, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 32367076-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_vp62,
			0x32367076, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 41365056-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_VP6A,
			0x41365056, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 61367076-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_vp6a,
			0x61367076, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 46365056-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_VP6F,
			0x46365056, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 66367076-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_vp6f,
			0x66367076, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

//
// RealMedia
//

// {57428EC6-C2B2-44a2-AA9C-28F0B6A5C48E}
DEFINE_GUID(MEDIASUBTYPE_RealMedia,
			0x57428ec6, 0xc2b2, 0x44a2, 0xaa, 0x9c, 0x28, 0xf0, 0xb6, 0xa5, 0xc4, 0x8e);

// 30315652-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_RV10,
			0x30315652, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 30325652-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_RV20,
			0x30325652, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 30335652-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_RV30,
			0x30335652, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 30345652-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_RV40,
			0x30345652, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 31345652-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_RV41,
			0x31345652, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 345f3431-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_14_4,
			0x345f3431, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 385f3832-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_28_8,
			0x385f3832, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 43525441-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_ATRC,
			0x43525441, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 4b4f4f43-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_COOK,
			0x4b4f4f43, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 54454e44-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_DNET,
			0x54454e44, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 52504953-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_SIPR,
			0x52504953, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 43414152-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_RAAC,
			0x43414152, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 50434152-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_RACP,
			0x50434152, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

enum
{
	WAVE_FORMAT_14_4 = 0x2002,
	WAVE_FORMAT_28_8 = 0x2003,
	WAVE_FORMAT_ATRC = 0x0270, //WAVE_FORMAT_SONY_SCX,
	WAVE_FORMAT_COOK = 0x2004,
	WAVE_FORMAT_DNET = 0x2005,
	WAVE_FORMAT_RAAC = 0x2006,
	WAVE_FORMAT_RACP = 0x2007,
	WAVE_FORMAT_SIPR = 0x0130, //WAVE_FORMAT_SIPROLAB_ACEPLNET,
};

//
// PS2
//

#define WAVE_FORMAT_PS2_PCM 0xF521
// 0000F521-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_PS2_PCM,
			WAVE_FORMAT_PS2_PCM, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);

#define WAVE_FORMAT_PS2_ADPCM 0xF522
// 0000F522-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_PS2_ADPCM,
			WAVE_FORMAT_PS2_ADPCM, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);

struct WAVEFORMATEXPS2 : public WAVEFORMATEX
{
	DWORD dwInterleave;

	struct WAVEFORMATEXPS2()
	{
		memset(this, 0, sizeof(*this));
		cbSize = sizeof(WAVEFORMATEXPS2) - sizeof(WAVEFORMATEX);
	}
};

// {4F3D3D21-6D7C-4f73-AA05-E397B5EAE0AA}
DEFINE_GUID(MEDIASUBTYPE_PS2_SUB,
			0x4f3d3d21, 0x6d7c, 0x4f73, 0xaa, 0x5, 0xe3, 0x97, 0xb5, 0xea, 0xe0, 0xaa);

// Haali's video renderer

// {760A8F35-97E7-479d-AAF5-DA9EFF95D751}
DEFINE_GUID(CLSID_DXR,
			0x760a8f35, 0x97e7, 0x479d, 0xaa, 0xf5, 0xda, 0x9e, 0xff, 0x95, 0xd7, 0x51);

DEFINE_GUID(CLSID_madVR,
			0xe1a8b82a, 0x32ce, 0x4b0d, 0xbe, 0x0d, 0xaa, 0x68, 0xc7, 0x72, 0xe4, 0x23);

//
// Ogg
//

// f07e245f-5a1f-4d1e-8bff-dc31d84a55ab
DEFINE_GUID(CLSID_OggSplitter,
			0xf07e245f, 0x5a1f, 0x4d1e, 0x8b, 0xff, 0xdc, 0x31, 0xd8, 0x4a, 0x55, 0xab);

// {078C3DAA-9E58-4d42-9E1C-7C8EE79539C5}
DEFINE_GUID(CLSID_OggSplitPropPage,
			0x78c3daa, 0x9e58, 0x4d42, 0x9e, 0x1c, 0x7c, 0x8e, 0xe7, 0x95, 0x39, 0xc5);

// 8cae96b7-85b1-4605-b23c-17ff5262b296
DEFINE_GUID(CLSID_OggMux,
			0x8cae96b7, 0x85b1, 0x4605, 0xb2, 0x3c, 0x17, 0xff, 0x52, 0x62, 0xb2, 0x96);

// {AB97AFC3-D08E-4e2d-98E0-AEE6D4634BA4}
DEFINE_GUID(CLSID_OggMuxPropPage,
			0xab97afc3, 0xd08e, 0x4e2d, 0x98, 0xe0, 0xae, 0xe6, 0xd4, 0x63, 0x4b, 0xa4);

// {889EF574-0656-4B52-9091-072E52BB1B80}
DEFINE_GUID(CLSID_VorbisEnc,
			0x889ef574, 0x0656, 0x4b52, 0x90, 0x91, 0x07, 0x2e, 0x52, 0xbb, 0x1b, 0x80);

// {c5379125-fd36-4277-a7cd-fab469ef3a2f}
DEFINE_GUID(CLSID_VorbisEncPropPage,
			0xc5379125, 0xfd36, 0x4277, 0xa7, 0xcd, 0xfa, 0xb4, 0x69, 0xef, 0x3a, 0x2f);

// 02391f44-2767-4e6a-a484-9b47b506f3a4
DEFINE_GUID(CLSID_VorbisDec,
			0x02391f44, 0x2767, 0x4e6a, 0xa4, 0x84, 0x9b, 0x47, 0xb5, 0x06, 0xf3, 0xa4);

// 77983549-ffda-4a88-b48f-b924e8d1f01c
DEFINE_GUID(CLSID_OggDSAboutPage,
			0x77983549, 0xffda, 0x4a88, 0xb4, 0x8f, 0xb9, 0x24, 0xe8, 0xd1, 0xf0, 0x1c);

// {D2855FA9-61A7-4db0-B979-71F297C17A04}
DEFINE_GUID(MEDIASUBTYPE_Ogg,
			0xd2855fa9, 0x61a7, 0x4db0, 0xb9, 0x79, 0x71, 0xf2, 0x97, 0xc1, 0x7a, 0x4);

// cddca2d5-6d75-4f98-840e-737bedd5c63b
DEFINE_GUID(MEDIASUBTYPE_Vorbis,
			0xcddca2d5, 0x6d75, 0x4f98, 0x84, 0x0e, 0x73, 0x7b, 0xed, 0xd5, 0xc6, 0x3b);

// 6bddfa7e-9f22-46a9-ab5e-884eff294d9f
DEFINE_GUID(FORMAT_VorbisFormat,
			0x6bddfa7e, 0x9f22, 0x46a9, 0xab, 0x5e, 0x88, 0x4e, 0xff, 0x29, 0x4d, 0x9f);

typedef struct tagVORBISFORMAT
{
	WORD nChannels;
	DWORD nSamplesPerSec;
	DWORD nMinBitsPerSec;
	DWORD nAvgBitsPerSec;
	DWORD nMaxBitsPerSec;
	float fQuality;
} VORBISFORMAT, *PVORBISFORMAT, FAR *LPVORBISFORMAT;

// {8D2FD10B-5841-4a6b-8905-588FEC1ADED9}
DEFINE_GUID(MEDIASUBTYPE_Vorbis2,
			0x8d2fd10b, 0x5841, 0x4a6b, 0x89, 0x5, 0x58, 0x8f, 0xec, 0x1a, 0xde, 0xd9);

// {B36E107F-A938-4387-93C7-55E966757473}
DEFINE_GUID(FORMAT_VorbisFormat2,
			0xb36e107f, 0xa938, 0x4387, 0x93, 0xc7, 0x55, 0xe9, 0x66, 0x75, 0x74, 0x73);

typedef struct tagVORBISFORMAT2
{
	DWORD Channels;
	DWORD SamplesPerSec;
	DWORD BitsPerSample;
	DWORD HeaderSize[3]; // 0: Identification, 1: Comment, 2: Setup
} VORBISFORMAT2, *PVORBISFORMAT2, FAR *LPVORBISFORMAT2;

//
// Matroska
//

// {1AC0BEBD-4D2B-45ad-BCEB-F2C41C5E3788}
DEFINE_GUID(MEDIASUBTYPE_Matroska,
			0x1ac0bebd, 0x4d2b, 0x45ad, 0xbc, 0xeb, 0xf2, 0xc4, 0x1c, 0x5e, 0x37, 0x88);

// {E487EB08-6B26-4be9-9DD3-993434D313FD}
DEFINE_GUID(MEDIATYPE_Subtitle,
			0xe487eb08, 0x6b26, 0x4be9, 0x9d, 0xd3, 0x99, 0x34, 0x34, 0xd3, 0x13, 0xfd);

// {87C0B230-03A8-4fdf-8010-B27A5848200D}
DEFINE_GUID(MEDIASUBTYPE_UTF8,
			0x87c0b230, 0x3a8, 0x4fdf, 0x80, 0x10, 0xb2, 0x7a, 0x58, 0x48, 0x20, 0xd);

// {3020560F-255A-4ddc-806E-6C5CC6DCD70A}
DEFINE_GUID(MEDIASUBTYPE_SSA,
			0x3020560f, 0x255a, 0x4ddc, 0x80, 0x6e, 0x6c, 0x5c, 0xc6, 0xdc, 0xd7, 0xa);

// {326444F7-686F-47ff-A4B2-C8C96307B4C2}
DEFINE_GUID(MEDIASUBTYPE_ASS,
			0x326444f7, 0x686f, 0x47ff, 0xa4, 0xb2, 0xc8, 0xc9, 0x63, 0x7, 0xb4, 0xc2);

// {370689E7-B226-4f67-978D-F10BC1A9C6AE}
DEFINE_GUID(MEDIASUBTYPE_ASS2,
			0x370689e7, 0xb226, 0x4f67, 0x97, 0x8d, 0xf1, 0xb, 0xc1, 0xa9, 0xc6, 0xae);

// {76C421C4-DB89-42ec-936E-A9FBC1794714}
DEFINE_GUID(MEDIASUBTYPE_SSF,
			0x76c421c4, 0xdb89, 0x42ec, 0x93, 0x6e, 0xa9, 0xfb, 0xc1, 0x79, 0x47, 0x14);

// {B753B29A-0A96-45be-985F-68351D9CAB90}
DEFINE_GUID(MEDIASUBTYPE_USF,
			0xb753b29a, 0xa96, 0x45be, 0x98, 0x5f, 0x68, 0x35, 0x1d, 0x9c, 0xab, 0x90);

// {F7239E31-9599-4e43-8DD5-FBAF75CF37F1}
DEFINE_GUID(MEDIASUBTYPE_VOBSUB,
			0xf7239e31, 0x9599, 0x4e43, 0x8d, 0xd5, 0xfb, 0xaf, 0x75, 0xcf, 0x37, 0xf1);

// {A33D2F7D-96BC-4337-B23B-A8B9FBC295E9}
DEFINE_GUID(FORMAT_SubtitleInfo,
			0xa33d2f7d, 0x96bc, 0x4337, 0xb2, 0x3b, 0xa8, 0xb9, 0xfb, 0xc2, 0x95, 0xe9);

// {04EBA53E-9330-436c-9133-553EC87031DC}
DEFINE_GUID(MEDIASUBTYPE_HDMVSUB,
			0x4eba53e, 0x9330, 0x436c, 0x91, 0x33, 0x55, 0x3e, 0xc8, 0x70, 0x31, 0xdc);

#pragma pack(push, 1)
typedef struct {
	DWORD dwOffset;
	CHAR IsoLang[4]; // three letter lang code + terminating zero
	WCHAR TrackName[256]; // 256 chars ought to be enough for everyone :)
} SUBTITLEINFO;
#pragma pack(pop)

// SUBTITLEINFO structure content starting at dwOffset (also the content of CodecPrivate)
// --------------------------------------------------------------------------------------
//
// Here the text should start with the Byte Order Mark, even though
// UTF-8 is prefered, it also helps identifying the encoding type.
//
// MEDIASUBTYPE_USF:
//
// <?xml version="1.0" encoding="UTF-8"?>
// <!-- DOCTYPE USFSubtitles SYSTEM "USFV100.dtd" -->
// <?xml-stylesheet type="text/xsl" href="USFV100.xsl"?>
//
// <USFSubtitles version="1.0">
// ... every element excluding <subtitles></subtitles> ...
// </USFSubtitles>
//
// MEDIASUBTYPE_SSA/ASS:
//
// The file header and all sub-sections except [Events]
//
// MEDIATYPE_VOBSUB:
//
// TODO
//

// Data description of the media samples (everything is UTF-8 encoded here)
// ------------------------------------------------------------------------
//
// MEDIASUBTYPE_USF:
//
// The text _inside_ the <subtitle>..</subtitle> element.
//
// Since timing is set on the sample, there is no need to put
// <subtitle start=".." stop=".." duration=".."> into the data.
//
// MEDIASUBTYPE_SSA/ASS:
//
// Comma separated values similar to the "Dialogue: ..." line with these fields:
// ReadOrder, Layer, Style, Name, MarginL, MarginR, MarginV, Effect, Text
//
// With the exception of ReadOrder every field can be found in ASS files. The
// ReadOrder field is needed for the decoder to be able to reorder the streamed
// samples as they were placed originally in the file.
//
// If the source is only SSA, the Layer field can be left empty.
//
// MEDIATYPE_VOBSUB:
//
// Standard dvd subpic data, without the stream id at the beginning.
//

// Matroska CodecID mappings
// ------------------------
//
// S_TEXT/ASCII	<->	MEDIATYPE_Text		MEDIASUBTYPE_NULL	FORMAT_None
// S_TEXT/UTF8	<->	MEDIATYPE_Subtitle	MEDIASUBTYPE_UTF8	FORMAT_SubtitleInfo
// S_TEXT/SSA	<->	MEDIATYPE_Subtitle	MEDIASUBTYPE_SSA	FORMAT_SubtitleInfo
// S_TEXT/ASS	<->	MEDIATYPE_Subtitle	MEDIASUBTYPE_ASS	FORMAT_SubtitleInfo
// S_TEXT/USF	<->	MEDIATYPE_Subtitle	MEDIASUBTYPE_USF	FORMAT_SubtitleInfo
// S_VOBSUB		<-> MEDIATYPE_Subtitle	MEDIASUBTYPE_VOBSUB	FORMAT_SubtitleInfo
// S_VOBSUB/ZLIB<-> MEDIATYPE_Subtitle	MEDIASUBTYPE_VOBSUB	FORMAT_SubtitleInfo
//

/*
DEFINE_GUID( MEDIATYPE_MPEG2_SECTIONS,
	0x455f176c, 0x4b06, 0x47ce, 0x9a, 0xef, 0x8c, 0xae, 0xf7, 0x3d, 0xf7, 0xb5);

DEFINE_GUID(MEDIASUBTYPE_ATSC_SI,
0xb3c7397c, 0xd303, 0x414d, 0xb3, 0x3c, 0x4e, 0xd2, 0xc9, 0xd2, 0x97, 0x33);

DEFINE_GUID(MEDIASUBTYPE_DVB_SI,
0xe9dd31a3, 0x221d, 0x4adb, 0x85, 0x32, 0x9a, 0xf3, 0x9, 0xc1, 0xa4, 0x8);


// {C892E55B-252D-42b5-A316-D997E7A5D995}
DEFINE_GUID(MEDIASUBTYPE_MPEG2DATA,
0xc892e55b, 0x252d, 0x42b5, 0xa3, 0x16, 0xd9, 0x97, 0xe7, 0xa5, 0xd9, 0x95);

*/

// H264
// 34363248-0000-0010-8000-00aa00389b71
// DEFINE_GUID(MEDIASUBTYPE_H264,
// 0x34363248, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 34363268-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_h264,
			0x34363268, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 34363258-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_X264,
			0x34363258, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 34363278-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_x264,
			0x34363278, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 6F29D2AD-E130-45AA-B42F-F623AD354A90
DEFINE_GUID(MEDIASUBTYPE_ArcsoftH264,
			0x6F29D2AD, 0xE130, 0x45AA, 0xB4, 0x2F, 0xF6, 0x23, 0xAD, 0x35, 0x4A, 0x90);

// 48535356-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_VSSH,
			0x48535356, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 68737376-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_vssh,
			0x68737376, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 43564144-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_DAVC,
			0x43564144, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 63766164-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_davc,
			0x63766164, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 43564150-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_PAVC,
			0x43564150, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 63766170-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_pavc,
			0x63766170, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 31435641-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_AVC1,
			0x31435641, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 31637661-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_avc1,
			0x31637661, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 31564343-0000-0010-8000-00AA00389B71 (custom H.264 FourCC used by Haali Media Splitter)
DEFINE_GUID(MEDIASUBTYPE_CCV1,
			0x31564343, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 8D2D71CB-243F-45E3-B2D8-5FD7967EC09B		<= Used by MediaPortal for example...
DEFINE_GUID(MEDIASUBTYPE_H264_bis,
			0x8D2D71CB, 0x243F, 0x45E3, 0xB2, 0xD8, 0x5F, 0xD7, 0x96, 0x7E, 0xC0, 0x9B);

// 33515653-0000-0010-8000-00aa00389b71
DEFINE_GUID(MEDIASUBTYPE_SVQ3,
			0x33515653, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 56564D41-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_XVID,
			0x44495658, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 56564D41-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_xvid,
			0x64697678, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 30355844-0000-0010-8000-00aa00389b71
DEFINE_GUID(MEDIASUBTYPE_DX50,
			0x30355844, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 30357864-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_dx50,
			0x30357864, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 56564D41-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_DIVX,
			0x58564944, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 78766964-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_divx,
			0x78766964, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 5634504d-0000-0010-8000-00aa00389b71
DEFINE_GUID(MEDIASUBTYPE_MP4V,
			0x5634504d, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 7634706D-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_mp4v,
			0x7634706D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 3273346d-0000-0010-8000-00aa00389b71
DEFINE_GUID(MEDIASUBTYPE_M4S2,
			0x3273346d, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 3273346D-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_m4s2,
			0x3273346D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 5334504D-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_MP4S,
			0x5334504D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 7334706D-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_mp4s,
			0x7334706D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 31564933-0000-0010-8000-00aa00389b71
DEFINE_GUID(MEDIASUBTYPE_3IV1,
			0x31564933, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 31766933-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_3iv1,
			0x31766933, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 32564933-0000-0010-8000-00aa00389b71
DEFINE_GUID(MEDIASUBTYPE_3IV2,
			0x32564933, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 32766933-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_3iv2,
			0x32766933, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 58564933-0000-0010-8000-00aa00389b71
DEFINE_GUID(MEDIASUBTYPE_3IVX,
			0x58564933, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 78766933-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_3ivx,
			0x78766933, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 305A4C42-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_BLZ0,
			0x305A4C42, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 307A6C62-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_blz0,
			0x307A6C62, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 56344D44-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_DM4V,
			0x56344D44, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 76346D64-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_dm4v,
			0x76346D64, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 4D475844-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_DXGM,
			0x4D475844, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 6D677864-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_dxgm,
			0x6D677864, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 53444646-0000-0010-8000-00aa00389b71
DEFINE_GUID(MEDIASUBTYPE_FFDS,
			0x53444646, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 73646666-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_ffds,
			0x73646666, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 57465646-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_FVFW,
			0x57465646, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 77667666-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_fvfw,
			0x77667666, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 34504D46-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_FMP4,
			0x34504D46, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 34706D66-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_fmp4,
			0x34706D66, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 34584448-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_HDX4,
			0x34584448, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 34786468-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_hdx4,
			0x34786468, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 34504D4C-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_LMP4,
			0x34504D4C, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 34706D6C-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_lmp4,
			0x34706D6C, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 4749444E-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_NDIG,
			0x4749444E, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 6769646E-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_ndig,
			0x6769646E, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 34504D52-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_RMP4,
			0x34504D52, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 34706D72-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_rmp4,
			0x34706D72, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 34504D53-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_SMP4,
			0x34504D53, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 34706D73-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_smp4,
			0x34706D73, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 47444553-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_SEDG,
			0x47444553, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 67646573-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_sedg,
			0x67646573, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 34504D55-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_UMP4,
			0x34504D55, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 34706D75-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_ump4,
			0x34706D75, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 46315657-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_WV1F,
			0x46315657, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 66317677-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_wv1f,
			0x66317677, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 58495658-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_XVIX,
			0x58495658, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 78697678-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_xvix,
			0x78697678, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 31564D57-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_WMV1,
			0x31564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 31766D77-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_wmv1,
			0x31766D77, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 32564D57-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_WMV2,
			0x32564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 32766D77-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_wmv2,
			0x32766D77, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 31564D57-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_WMV3,
			0x33564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 33766D77-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_wmv3,
			0x33766D77, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 31515653-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_SVQ1,
			0x31515653, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 33363248-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_H263,
			0x33363248, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 33363268-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_h263,
			0x33363268, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

DEFINE_GUID(MEDIASUBTYPE_S263,
			0x33363273, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 33363273-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_s263,
			0x33363273, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 56564D41-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_AMVV,
			0x56564D41, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 31435657-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_WVC1,
			0x31435657, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 31637677-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_wvc1,
			0x31637677, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 3334504D-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_MP43,
			0x3334504D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 3334706D-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_mp43,
			0x3334706D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 33585644-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_DVX3,
			0x33585644, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 33787664-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_dvx3,
			0x33787664, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 33564944-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_DIV3,
			0x33564944, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 33766964-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_div3,
			0x33766964, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 314C4F43-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_COL1,
			0x314C4F43, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 316C6F63-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_col1,
			0x316C6F63, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 34564944-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_DIV4,
			0x34564944, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 34766964-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_div4,
			0x34766964, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 35564944-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_DIV5,
			0x35564944, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 35766964-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_div5,
			0x35766964, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 36564944-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_DIV6,
			0x36564944, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 36766964-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_div6,
			0x36766964, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 31345041-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_AP41,
			0x31345041, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 31347061-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_ap41,
			0x31347061, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 3347504D-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_MPG3,
			0x3347504D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 3367706D-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_mpg3,
			0x3367706D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 3234504D-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_MP42,
			0x3234504D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 3234706D-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_mp42,
			0x3234706D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 32564944-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_DIV2,
			0x32564944, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 32766964-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_div2,
			0x32766964, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 3447504D-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_MPG4,
			0x3447504D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 3467706D-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_mpg4,
			0x3467706D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 31564944-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_DIV1,
			0x31564944, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 31766964-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_div1,
			0x31766964, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 3134504D-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_MP41,
			0x3134504D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 3134706D-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_mp41,
			0x3134706D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 4F454854-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_THEORA,
			0x4F454854, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

// 6F656874-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_theora,
			0x6F656874, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);

DEFINE_GUID(FORMAT_RLTheora,
			0xe69b30d1, 0x7d65, 0x4166, 0xb9, 0x90, 0x10, 0x3d, 0xa8, 0xc9, 0x11, 0xe3 );

// Audio codecs

// 41564D41-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_IMA_AMV,
			0x41564D41, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);

// 4C4C454E-0000-0010-8000-00AA00389B71
DEFINE_GUID(MEDIASUBTYPE_NELLYMOSER,
			0x4C4C454E, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);


// {949F97FD-56F6-4527-B4AE-DDEB375AB80F}		Mpc-hc specific !
DEFINE_GUID(MEDIASUBTYPE_HDMV_LPCM_AUDIO,
			0x949f97fd, 0x56f6, 0x4527, 0xb4, 0xae, 0xdd, 0xeb, 0x37, 0x5a, 0xb8, 0xf);

struct WAVEFORMATEX_HDMV_LPCM : public WAVEFORMATEX
{
	BYTE channel_conf;

	struct WAVEFORMATEX_HDMV_LPCM()
	{
		memset(this, 0, sizeof(*this));
		cbSize = sizeof(WAVEFORMATEX_HDMV_LPCM) - sizeof(WAVEFORMATEX);
	}
};


// Guid from wmcodecdsp.h (Windows SDK)

DEFINE_GUID(MEDIASUBTYPE_DOLBY_DDPLUS,
			0xa7fb87af, 0x2d02, 0x42fb, 0xa4, 0xd4, 0x5, 0xcd, 0x93, 0x84, 0x3b, 0xdd);

DEFINE_GUID(MEDIASUBTYPE_DOLBY_TRUEHD,
			0xeb27cec4, 0x163e, 0x4ca3, 0x8b, 0x74, 0x8e, 0x25, 0xf9, 0x1b, 0x51, 0x7e);

DEFINE_GUID(MEDIASUBTYPE_DTS_HD,
			0xa2e58eb7, 0xfa9, 0x48bb, 0xa4, 0xc, 0xfa, 0xe, 0x15, 0x6d, 0x6, 0x45);


// Additionnal DXVA GUIDs

// Intel ClearVideo VC1 bitstream decoder
DEFINE_GUID(DXVA_Intel_VC1_ClearVideo, 0xBCC5DB6D, 0xA2B6,0x4AF0,0xAC,0xE4,0xAD,0xB1,0xF7,0x87,0xBC,0x89);

// Intel ClearVideo H264 bitstream decoder
DEFINE_GUID(DXVA_Intel_H264_ClearVideo, 0x604F8E68, 0x4951,0x4C54,0x88,0xFE,0xAB,0xD2,0x5C,0x15,0xB3,0xD6);

DEFINE_GUID(CLSID_AC3Filter, 0xA753A1EC, 0x973E, 0x4718, 0xAF, 0x8E, 0xA3, 0xF5, 0x54, 0xD4, 0x5C, 0x44);

// uncompressed
#define DEFINE_GUID_FOURCC(FOURCC) \
 DEFINE_GUID(MEDIASUBTYPE_##FOURCC,FOURCC_##FOURCC, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);

//uncompressed
#define FOURCC_YUY2 mmioFOURCC('Y','U','Y','2')
#define FOURCC_V422 mmioFOURCC('V','4','2','2')
#define FOURCC_YV12 mmioFOURCC('Y','V','1','2')
#define FOURCC_YVYU mmioFOURCC('Y','V','Y','U')
#define FOURCC_UYVY mmioFOURCC('U','Y','V','Y')
#define FOURCC_YUYV mmioFOURCC('Y','U','Y','V')
#define FOURCC_VYUY mmioFOURCC('V','Y','U','Y')
#define FOURCC_I420 mmioFOURCC('I','4','2','0')
#define FOURCC_IYUV mmioFOURCC('I','Y','U','V')
#define FOURCC_444P mmioFOURCC('4','4','4','P')
#define FOURCC_YV24 mmioFOURCC('Y','V','2','4') // YUV 4:4:4
#define FOURCC_422P mmioFOURCC('4','2','2','P')
#define FOURCC_YV16 mmioFOURCC('Y','V','1','6') // YUV 4:2:2
#define FOURCC_411P mmioFOURCC('4','1','1','P')
#define FOURCC_Y41B mmioFOURCC('Y','4','1','B') // YUV 4:1:1
#define FOURCC_410P mmioFOURCC('4','1','0','P')
#define FOURCC_PAL1 mmioFOURCC('P','A','L','1')
#define FOURCC_PAL4 mmioFOURCC('P','A','L','4')
#define FOURCC_PAL8 mmioFOURCC('P','A','L','8')
#define FOURCC_RGB2 mmioFOURCC('R','G','B','2')
#define FOURCC_RGB3 mmioFOURCC('R','G','B','3')
#define FOURCC_RGB5 mmioFOURCC('R','G','B','5')
#define FOURCC_RGB6 mmioFOURCC('R','G','B','6')
#define FOURCC_CLJR mmioFOURCC('C','L','J','R')
#define FOURCC_Y800 mmioFOURCC('Y','8','0','0')
#define FOURCC_NV12 mmioFOURCC('N','V','1','2')
#define FOURCC_NV21 mmioFOURCC('N','V','2','1')

DEFINE_GUID_FOURCC(422P)
DEFINE_GUID_FOURCC(444P)
DEFINE_GUID_FOURCC(411P)
DEFINE_GUID_FOURCC(410P)
DEFINE_GUID_FOURCC(VYUY)
DEFINE_GUID_FOURCC(Y800)
DEFINE_GUID_FOURCC(NV21)
DEFINE_GUID_FOURCC(YV16)
