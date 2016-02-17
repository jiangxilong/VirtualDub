//	VirtualDub - Video processing and capture application
//	Copyright (C) 1998-2006 Avery Lee
//
//	This program is free software; you can redistribute it and/or modify
//	it under the terms of the GNU General Public License as published by
//	the Free Software Foundation; either version 2 of the License, or
//	(at your option) any later version.
//
//	This program is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//	GNU General Public License for more details.
//
//	You should have received a copy of the GNU General Public License
//	along with this program; if not, write to the Free Software
//	Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

#ifndef f_AVIOUTPUTRAWVIDEO_H
#define f_AVIOUTPUTRAWVIDEO_H

#include <vd2/system/fileasync.h>
#include <vd2/system/vdalloc.h>
#include <vd2/Kasumi/pixmap.h>

#include "AVIOutput.h"
#include "DubOutput.h"

class AVIOutputRawVideo : public AVIOutput {
public:
	AVIOutputRawVideo(const VDAVIOutputRawVideoFormat& format);
	~AVIOutputRawVideo();

	void SetInputLayout(const VDPixmapLayout& layout);

	IVDMediaOutputStream *createVideoStream();
	IVDMediaOutputStream *createAudioStream();

	void setBufferSize(sint32 nBytes) {
		mBufferSize = nBytes;
	}

	bool init(const wchar_t *szFile);
	bool init(VDFileHandle h);
	void finalize();

	void write(const void *pBuffer, uint32 cbBuffer);

private:
	void WriteHeader(bool initial);

	vdautoptr<IVDFileAsync>	mpFileAsync;
	uint64		mBytesWritten;
	sint32		mBufferSize;
	bool		mbDoTruncate;

	VDPixmapLayout	mInputLayout;

	const VDAVIOutputRawVideoFormat mFormat;
};

#endif
