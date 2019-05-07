// IdeaFG.cpp  : Definition of ActiveX Control wrapper class(es) created by Microsoft Visual C++


#include "stdafx.h"
#include "IdeaFG.h"

/////////////////////////////////////////////////////////////////////////////
// CIdeaFG

IMPLEMENT_DYNCREATE(CIdeaFG, CWnd)

// CIdeaFG properties
long CIdeaFG::GetBoardCount()
{
	long result;
	GetProperty(0x45, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetBoardCount(long propVal)
{
	SetProperty(0x45, VT_I4, propVal);
}

long CIdeaFG::GetCurrentBoardIndex()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetCurrentBoardIndex(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

long CIdeaFG::GetDefaultBoardIndex()
{
	long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetDefaultBoardIndex(long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}

long CIdeaFG::GetBoardHandle()
{
	long result;
	GetProperty(0x46, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetBoardHandle(long propVal)
{
	SetProperty(0x46, VT_I4, propVal);
}

CString CIdeaFG::GetBoardLocation()
{
	CString result;
	GetProperty(0x47, VT_BSTR, (void*)&result);
	return result;
}

void CIdeaFG::SetBoardLocation(LPCTSTR propVal)
{
	SetProperty(0x47, VT_BSTR, propVal);
}

CString CIdeaFG::GetHardwareProfile()
{
	CString result;
	GetProperty(0x3, VT_BSTR, (void*)&result);
	return result;
}

void CIdeaFG::SetHardwareProfile(LPCTSTR propVal)
{
	SetProperty(0x3, VT_BSTR, propVal);
}

CString CIdeaFG::GetCA1Path()
{
	CString result;
	GetProperty(0x4, VT_BSTR, (void*)&result);
	return result;
}

void CIdeaFG::SetCA1Path(LPCTSTR propVal)
{
	SetProperty(0x4, VT_BSTR, propVal);
}

CString CIdeaFG::GetCA2Path()
{
	CString result;
	GetProperty(0x5, VT_BSTR, (void*)&result);
	return result;
}

void CIdeaFG::SetCA2Path(LPCTSTR propVal)
{
	SetProperty(0x5, VT_BSTR, propVal);
}

CString CIdeaFG::GetCA3Path()
{
	CString result;
	GetProperty(0x6, VT_BSTR, (void*)&result);
	return result;
}

void CIdeaFG::SetCA3Path(LPCTSTR propVal)
{
	SetProperty(0x6, VT_BSTR, propVal);
}

CString CIdeaFG::GetCA4Path()
{
	CString result;
	GetProperty(0x7, VT_BSTR, (void*)&result);
	return result;
}

void CIdeaFG::SetCA4Path(LPCTSTR propVal)
{
	SetProperty(0x7, VT_BSTR, propVal);
}

CString CIdeaFG::GetSVideo1Path()
{
	CString result;
	GetProperty(0x8, VT_BSTR, (void*)&result);
	return result;
}

void CIdeaFG::SetSVideo1Path(LPCTSTR propVal)
{
	SetProperty(0x8, VT_BSTR, propVal);
}

CString CIdeaFG::GetSVideo2Path()
{
	CString result;
	GetProperty(0x9, VT_BSTR, (void*)&result);
	return result;
}

void CIdeaFG::SetSVideo2Path(LPCTSTR propVal)
{
	SetProperty(0x9, VT_BSTR, propVal);
}

CString CIdeaFG::GetComposite1Path()
{
	CString result;
	GetProperty(0xa, VT_BSTR, (void*)&result);
	return result;
}

void CIdeaFG::SetComposite1Path(LPCTSTR propVal)
{
	SetProperty(0xa, VT_BSTR, propVal);
}

CString CIdeaFG::GetComposite2Path()
{
	CString result;
	GetProperty(0xb, VT_BSTR, (void*)&result);
	return result;
}

void CIdeaFG::SetComposite2Path(LPCTSTR propVal)
{
	SetProperty(0xb, VT_BSTR, propVal);
}

CString CIdeaFG::GetComposite3Path()
{
	CString result;
	GetProperty(0xc, VT_BSTR, (void*)&result);
	return result;
}

void CIdeaFG::SetComposite3Path(LPCTSTR propVal)
{
	SetProperty(0xc, VT_BSTR, propVal);
}

CString CIdeaFG::GetComposite4Path()
{
	CString result;
	GetProperty(0xd, VT_BSTR, (void*)&result);
	return result;
}

void CIdeaFG::SetComposite4Path(LPCTSTR propVal)
{
	SetProperty(0xd, VT_BSTR, propVal);
}

long CIdeaFG::GetVideoChannel()
{
	long result;
	GetProperty(0xe, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetVideoChannel(long propVal)
{
	SetProperty(0xe, VT_I4, propVal);
}

long CIdeaFG::GetSyncChannel()
{
	long result;
	GetProperty(0xf, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetSyncChannel(long propVal)
{
	SetProperty(0xf, VT_I4, propVal);
}

long CIdeaFG::GetPixelType()
{
	long result;
	GetProperty(0x10, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetPixelType(long propVal)
{
	SetProperty(0x10, VT_I4, propVal);
}

long CIdeaFG::GetBrightness()
{
	long result;
	GetProperty(0x11, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetBrightness(long propVal)
{
	SetProperty(0x11, VT_I4, propVal);
}

long CIdeaFG::GetContrast()
{
	long result;
	GetProperty(0x12, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetContrast(long propVal)
{
	SetProperty(0x12, VT_I4, propVal);
}

long CIdeaFG::GetHue()
{
	long result;
	GetProperty(0x13, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetHue(long propVal)
{
	SetProperty(0x13, VT_I4, propVal);
}

long CIdeaFG::GetSaturation()
{
	long result;
	GetProperty(0x14, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetSaturation(long propVal)
{
	SetProperty(0x14, VT_I4, propVal);
}

long CIdeaFG::GetSequenceCount()
{
	long result;
	GetProperty(0x15, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetSequenceCount(long propVal)
{
	SetProperty(0x15, VT_I4, propVal);
}

long CIdeaFG::GetSequenceGrabDelay()
{
	long result;
	GetProperty(0x16, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetSequenceGrabDelay(long propVal)
{
	SetProperty(0x16, VT_I4, propVal);
}

long CIdeaFG::GetUseTriggers()
{
	long result;
	GetProperty(0x17, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetUseTriggers(long propVal)
{
	SetProperty(0x17, VT_I4, propVal);
}

long CIdeaFG::GetTriggerDelay()
{
	long result;
	GetProperty(0x18, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetTriggerDelay(long propVal)
{
	SetProperty(0x18, VT_I4, propVal);
}

BOOL CIdeaFG::GetAudioEnabled()
{
	BOOL result;
	GetProperty(0x19, VT_BOOL, (void*)&result);
	return result;
}

void CIdeaFG::SetAudioEnabled(BOOL propVal)
{
	SetProperty(0x19, VT_BOOL, propVal);
}

long CIdeaFG::GetAudioSampleRate()
{
	long result;
	GetProperty(0x1a, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetAudioSampleRate(long propVal)
{
	SetProperty(0x1a, VT_I4, propVal);
}

long CIdeaFG::GetAudioChannels()
{
	long result;
	GetProperty(0x1b, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetAudioChannels(long propVal)
{
	SetProperty(0x1b, VT_I4, propVal);
}

long CIdeaFG::GetAudioBitsPerSample()
{
	long result;
	GetProperty(0x1c, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetAudioBitsPerSample(long propVal)
{
	SetProperty(0x1c, VT_I4, propVal);
}

CString CIdeaFG::GetAVIFile()
{
	CString result;
	GetProperty(0x1d, VT_BSTR, (void*)&result);
	return result;
}

void CIdeaFG::SetAVIFile(LPCTSTR propVal)
{
	SetProperty(0x1d, VT_BSTR, propVal);
}

long CIdeaFG::GetCodecVideoQuality()
{
	long result;
	GetProperty(0x1e, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetCodecVideoQuality(long propVal)
{
	SetProperty(0x1e, VT_I4, propVal);
}

BOOL CIdeaFG::GetFireSnapEvent()
{
	BOOL result;
	GetProperty(0x1f, VT_BOOL, (void*)&result);
	return result;
}

void CIdeaFG::SetFireSnapEvent(BOOL propVal)
{
	SetProperty(0x1f, VT_BOOL, propVal);
}

long CIdeaFG::GetSnapFieldMode()
{
	long result;
	GetProperty(0x20, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetSnapFieldMode(long propVal)
{
	SetProperty(0x20, VT_I4, propVal);
}

CString CIdeaFG::GetRegistrySection()
{
	CString result;
	GetProperty(0x21, VT_BSTR, (void*)&result);
	return result;
}

void CIdeaFG::SetRegistrySection(LPCTSTR propVal)
{
	SetProperty(0x21, VT_BSTR, propVal);
}

OLE_HANDLE CIdeaFG::GetHWnd()
{
	OLE_HANDLE result;
	GetProperty(DISPID_HWND, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetHWnd(OLE_HANDLE propVal)
{
	SetProperty(DISPID_HWND, VT_I4, propVal);
}

long CIdeaFG::GetTriggeredStreaming()
{
	long result;
	GetProperty(0x22, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetTriggeredStreaming(long propVal)
{
	SetProperty(0x22, VT_I4, propVal);
}

long CIdeaFG::GetDecimateLiveHorizontal()
{
	long result;
	GetProperty(0x23, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetDecimateLiveHorizontal(long propVal)
{
	SetProperty(0x23, VT_I4, propVal);
}

long CIdeaFG::GetDecimateLiveVertical()
{
	long result;
	GetProperty(0x24, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetDecimateLiveVertical(long propVal)
{
	SetProperty(0x24, VT_I4, propVal);
}

long CIdeaFG::GetDecimateStreamHorizontal()
{
	long result;
	GetProperty(0x25, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetDecimateStreamHorizontal(long propVal)
{
	SetProperty(0x25, VT_I4, propVal);
}

long CIdeaFG::GetDecimateStreamVertical()
{
	long result;
	GetProperty(0x26, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetDecimateStreamVertical(long propVal)
{
	SetProperty(0x26, VT_I4, propVal);
}

long CIdeaFG::GetTriggerMethod()
{
	long result;
	GetProperty(0x27, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetTriggerMethod(long propVal)
{
	SetProperty(0x27, VT_I4, propVal);
}

CString CIdeaFG::GetCableTypeIRGB()
{
	CString result;
	GetProperty(0x48, VT_BSTR, (void*)&result);
	return result;
}

void CIdeaFG::SetCableTypeIRGB(LPCTSTR propVal)
{
	SetProperty(0x48, VT_BSTR, propVal);
}

long CIdeaFG::GetFieldUpdateLive()
{
	long result;
	GetProperty(0x28, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetFieldUpdateLive(long propVal)
{
	SetProperty(0x28, VT_I4, propVal);
}

long CIdeaFG::GetFieldUpdateStream()
{
	long result;
	GetProperty(0x29, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetFieldUpdateStream(long propVal)
{
	SetProperty(0x29, VT_I4, propVal);
}

long CIdeaFG::GetVerbosity()
{
	long result;
	GetProperty(0x2a, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetVerbosity(long propVal)
{
	SetProperty(0x2a, VT_I4, propVal);
}

short CIdeaFG::GetLastError()
{
	short result;
	GetProperty(0x2b, VT_I2, (void*)&result);
	return result;
}

void CIdeaFG::SetLastError(short propVal)
{
	SetProperty(0x2b, VT_I2, propVal);
}

CString CIdeaFG::GetMessageCaption()
{
	CString result;
	GetProperty(0x2c, VT_BSTR, (void*)&result);
	return result;
}

void CIdeaFG::SetMessageCaption(LPCTSTR propVal)
{
	SetProperty(0x2c, VT_BSTR, propVal);
}

long CIdeaFG::GetDecimateFrameRate()
{
	long result;
	GetProperty(0x2d, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetDecimateFrameRate(long propVal)
{
	SetProperty(0x2d, VT_I4, propVal);
}

long CIdeaFG::GetTriggerFilterTime()
{
	long result;
	GetProperty(0x2e, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetTriggerFilterTime(long propVal)
{
	SetProperty(0x2e, VT_I4, propVal);
}

long CIdeaFG::GetSnappedImageOrientation()
{
	long result;
	GetProperty(0x2f, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetSnappedImageOrientation(long propVal)
{
	SetProperty(0x2f, VT_I4, propVal);
}

long CIdeaFG::GetUseSyncChannelFromCHP()
{
	long result;
	GetProperty(0x30, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetUseSyncChannelFromCHP(long propVal)
{
	SetProperty(0x30, VT_I4, propVal);
}

CString CIdeaFG::GetDicomFile()
{
	CString result;
	GetProperty(0x31, VT_BSTR, (void*)&result);
	return result;
}

void CIdeaFG::SetDicomFile(LPCTSTR propVal)
{
	SetProperty(0x31, VT_BSTR, propVal);
}

CString CIdeaFG::GetStreamingLogFile()
{
	CString result;
	GetProperty(0x32, VT_BSTR, (void*)&result);
	return result;
}

void CIdeaFG::SetStreamingLogFile(LPCTSTR propVal)
{
	SetProperty(0x32, VT_BSTR, propVal);
}

long CIdeaFG::GetDicomClass()
{
	long result;
	GetProperty(0x33, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetDicomClass(long propVal)
{
	SetProperty(0x33, VT_I4, propVal);
}

short CIdeaFG::GetDicomFlags()
{
	short result;
	GetProperty(0x34, VT_I2, (void*)&result);
	return result;
}

void CIdeaFG::SetDicomFlags(short propVal)
{
	SetProperty(0x34, VT_I2, propVal);
}

long CIdeaFG::GetBitsPerPixel()
{
	long result;
	GetProperty(0x49, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetBitsPerPixel(long propVal)
{
	SetProperty(0x49, VT_I4, propVal);
}

CString CIdeaFG::GetCodecDLL()
{
	CString result;
	GetProperty(0x4a, VT_BSTR, (void*)&result);
	return result;
}

void CIdeaFG::SetCodecDLL(LPCTSTR propVal)
{
	SetProperty(0x4a, VT_BSTR, propVal);
}

long CIdeaFG::GetCodecFourCCType()
{
	long result;
	GetProperty(0x4b, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetCodecFourCCType(long propVal)
{
	SetProperty(0x4b, VT_I4, propVal);
}

long CIdeaFG::GetBytesPerPixel()
{
	long result;
	GetProperty(0x4c, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetBytesPerPixel(long propVal)
{
	SetProperty(0x4c, VT_I4, propVal);
}

BOOL CIdeaFG::GetControlManagesConfiguration()
{
	BOOL result;
	GetProperty(0x35, VT_BOOL, (void*)&result);
	return result;
}

void CIdeaFG::SetControlManagesConfiguration(BOOL propVal)
{
	SetProperty(0x35, VT_BOOL, propVal);
}

long CIdeaFG::GetFrameRateMeasured()
{
	long result;
	GetProperty(0x4d, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetFrameRateMeasured(long propVal)
{
	SetProperty(0x4d, VT_I4, propVal);
}

long CIdeaFG::GetFrameRateTheoretical()
{
	long result;
	GetProperty(0x4e, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetFrameRateTheoretical(long propVal)
{
	SetProperty(0x4e, VT_I4, propVal);
}

long CIdeaFG::GetStreamingBuffers()
{
	long result;
	GetProperty(0x36, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetStreamingBuffers(long propVal)
{
	SetProperty(0x36, VT_I4, propVal);
}

CString CIdeaFG::GetVesaChpPath()
{
	CString result;
	GetProperty(0x37, VT_BSTR, (void*)&result);
	return result;
}

void CIdeaFG::SetVesaChpPath(LPCTSTR propVal)
{
	SetProperty(0x37, VT_BSTR, propVal);
}

long CIdeaFG::GetKeyFrameRate()
{
	long result;
	GetProperty(0x38, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetKeyFrameRate(long propVal)
{
	SetProperty(0x38, VT_I4, propVal);
}

long CIdeaFG::GetForceMonoSnapsTo24Bit()
{
	long result;
	GetProperty(0x39, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetForceMonoSnapsTo24Bit(long propVal)
{
	SetProperty(0x39, VT_I4, propVal);
}

long CIdeaFG::GetImageDIBBitsSizeInBytes()
{
	long result;
	GetProperty(0x4f, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetImageDIBBitsSizeInBytes(long propVal)
{
	SetProperty(0x4f, VT_I4, propVal);
}

long CIdeaFG::GetAutoSignalDetection()
{
	long result;
	GetProperty(0x3a, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetAutoSignalDetection(long propVal)
{
	SetProperty(0x3a, VT_I4, propVal);
}

long CIdeaFG::GetDefaultCableTypeIRGB()
{
	long result;
	GetProperty(0x3b, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetDefaultCableTypeIRGB(long propVal)
{
	SetProperty(0x3b, VT_I4, propVal);
}

long CIdeaFG::GetCableTypeIndexIRGB()
{
	long result;
	GetProperty(0x50, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetCableTypeIndexIRGB(long propVal)
{
	SetProperty(0x50, VT_I4, propVal);
}

long CIdeaFG::GetDecimateSnapHorizontal()
{
	long result;
	GetProperty(0x3c, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetDecimateSnapHorizontal(long propVal)
{
	SetProperty(0x3c, VT_I4, propVal);
}

long CIdeaFG::GetDecimateSnapVertical()
{
	long result;
	GetProperty(0x3d, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetDecimateSnapVertical(long propVal)
{
	SetProperty(0x3d, VT_I4, propVal);
}

long CIdeaFG::GetDigitalMode()
{
	long result;
	GetProperty(0x51, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetDigitalMode(long propVal)
{
	SetProperty(0x51, VT_I4, propVal);
}

long CIdeaFG::GetApplicationNotBusyEvent()
{
	long result;
	GetProperty(0x3e, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetApplicationNotBusyEvent(long propVal)
{
	SetProperty(0x3e, VT_I4, propVal);
}

long CIdeaFG::GetSaveToJpegQuality()
{
	long result;
	GetProperty(0x3f, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetSaveToJpegQuality(long propVal)
{
	SetProperty(0x3f, VT_I4, propVal);
}

CString CIdeaFG::GetCopyrightNotices()
{
	CString result;
	GetProperty(0x52, VT_BSTR, (void*)&result);
	return result;
}

void CIdeaFG::SetCopyrightNotices(LPCTSTR propVal)
{
	SetProperty(0x52, VT_BSTR, propVal);
}

long CIdeaFG::GetSuspendMode()
{
	long result;
	GetProperty(0x40, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetSuspendMode(long propVal)
{
	SetProperty(0x40, VT_I4, propVal);
}

long CIdeaFG::GetDeinterlaceMode()
{
	long result;
	GetProperty(0x41, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetDeinterlaceMode(long propVal)
{
	SetProperty(0x41, VT_I4, propVal);
}

long CIdeaFG::GetCopySnapToClipBoard()
{
	long result;
	GetProperty(0x42, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetCopySnapToClipBoard(long propVal)
{
	SetProperty(0x42, VT_I4, propVal);
}

long CIdeaFG::GetTriggerStartFrameDelay()
{
	long result;
	GetProperty(0x43, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetTriggerStartFrameDelay(long propVal)
{
	SetProperty(0x43, VT_I4, propVal);
}

long CIdeaFG::GetTriggerStopFrameDelay()
{
	long result;
	GetProperty(0x44, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetTriggerStopFrameDelay(long propVal)
{
	SetProperty(0x44, VT_I4, propVal);
}
//////////////////////
CString CIdeaFG::GetWAVAudioPath()
{
	CString result;
	GetProperty(0x10E, VT_BSTR, (void*)&result);
	return result;
}

void CIdeaFG::SetWAVAudioPath(LPCTSTR propVal)
{
	SetProperty(0x10E, VT_BSTR, propVal);
}

long CIdeaFG::GetWAVAudioStatus()
{
	long result;
	GetProperty(0x10F, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetWAVAudioStatus(long propVal)
{
	SetProperty(0x10F, VT_I4, propVal);
}

long CIdeaFG::GetWAVAudioEnabled()
{
	long result;
	GetProperty(0x110, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetWAVAudioEnabled(long propVal)
{
	SetProperty(0x110, VT_I4, propVal);
}

long CIdeaFG::GetWAVAudioFormat()
{
	long result;
	GetProperty(0x111, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetWAVAudioFormat(long propVal)
{
	SetProperty(0x111, VT_I4, propVal);
}

CString CIdeaFG::GetH264File()
{
	CString result;
	GetProperty(0x112, VT_BSTR, (void*)&result);
	return result;
}

void CIdeaFG::SetH264File(LPCTSTR propVal)
{
	SetProperty(0x112, VT_BSTR, propVal);
}

bool CIdeaFG::GetH264VariableBitRate()
{
	bool result;
	GetProperty(0x113, VT_BOOL, (void*)&result);
	return result;
}

void CIdeaFG::SetH264VariableBitRate(bool propVal)
{
	SetProperty(0x113, VT_BOOL, propVal);
}

long CIdeaFG::GetH264KBitRate()
{
	long result;
	GetProperty(0x114, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetH264KBitRate(long propVal)
{
	SetProperty(0x114, VT_I4, propVal);
}

long CIdeaFG::GetH264AverageKBitRate()
{
	long result;
	GetProperty(0x115, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetH264AverageKBitRate(long propVal)
{
	SetProperty(0x115, VT_I4, propVal);
}

long CIdeaFG::GetH264MaxKBitRate()
{
	long result;
	GetProperty(0x116, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetH264MaxKBitRate(long propVal)
{
	SetProperty(0x116, VT_I4, propVal);
}

long CIdeaFG::GetH264MinKBitRate()
{
	long result;
	GetProperty(0x117, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetH264MinKBitRate(long propVal)
{
	SetProperty(0x117, VT_I4, propVal);
}

long CIdeaFG::GetH264CaptureSizeSelect()
{
	long result;
	GetProperty(0x118, VT_I4, (void*)&result);
	return result;
}

void CIdeaFG::SetH264CaptureSizeSelect(long propVal)
{
	SetProperty(0x118, VT_I4, propVal);
}
