// IdeaFG.h  : Declaration of ActiveX Control wrapper class(es) created by Microsoft Visual C++

#pragma once
#pragma warning( disable : 4100 )

/////////////////////////////////////////////////////////////////////////////
// CIdeaFG

class CIdeaFG : public CWnd
{
protected:
	DECLARE_DYNCREATE(CIdeaFG)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x25647545, 0x37D5, 0x11D5, { 0xBF, 0x9B, 0x0, 0x50, 0xBA, 0xD3, 0x62, 0xD7 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle,
						const RECT& rect, CWnd* pParentWnd, UINT nID, 
						CCreateContext* pContext = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); 
	}

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, 
				UINT nID, CFile* pPersist = NULL, BOOL bStorage = FALSE,
				BSTR bstrLicKey = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); 
	}

// Attributes
public:
	long GetBoardCount();
	void SetBoardCount(long);
	long GetCurrentBoardIndex();
	void SetCurrentBoardIndex(long);
	long GetDefaultBoardIndex();
	void SetDefaultBoardIndex(long);
	long GetBoardHandle();
	void SetBoardHandle(long);
	CString GetBoardLocation();
	void SetBoardLocation(LPCTSTR);
	CString GetHardwareProfile();
	void SetHardwareProfile(LPCTSTR);
	CString GetCA1Path();
	void SetCA1Path(LPCTSTR);
	CString GetCA2Path();
	void SetCA2Path(LPCTSTR);
	CString GetCA3Path();
	void SetCA3Path(LPCTSTR);
	CString GetCA4Path();
	void SetCA4Path(LPCTSTR);
	CString GetSVideo1Path();
	void SetSVideo1Path(LPCTSTR);
	CString GetSVideo2Path();
	void SetSVideo2Path(LPCTSTR);
	CString GetComposite1Path();
	void SetComposite1Path(LPCTSTR);
	CString GetComposite2Path();
	void SetComposite2Path(LPCTSTR);
	CString GetComposite3Path();
	void SetComposite3Path(LPCTSTR);
	CString GetComposite4Path();
	void SetComposite4Path(LPCTSTR);
	long GetVideoChannel();
	void SetVideoChannel(long);
	long GetSyncChannel();
	void SetSyncChannel(long);
	long GetPixelType();
	void SetPixelType(long);
	long GetBrightness();
	void SetBrightness(long);
	long GetContrast();
	void SetContrast(long);
	long GetHue();
	void SetHue(long);
	long GetSaturation();
	void SetSaturation(long);
	long GetSequenceCount();
	void SetSequenceCount(long);
	long GetSequenceGrabDelay();
	void SetSequenceGrabDelay(long);
	long GetUseTriggers();
	void SetUseTriggers(long);
	long GetTriggerDelay();
	void SetTriggerDelay(long);
	BOOL GetAudioEnabled();
	void SetAudioEnabled(BOOL);
	long GetAudioSampleRate();
	void SetAudioSampleRate(long);
	long GetAudioChannels();
	void SetAudioChannels(long);
	long GetAudioBitsPerSample();
	void SetAudioBitsPerSample(long);
	CString GetAVIFile();
	void SetAVIFile(LPCTSTR);
	long GetCodecVideoQuality();
	void SetCodecVideoQuality(long);
	BOOL GetFireSnapEvent();
	void SetFireSnapEvent(BOOL);
	long GetSnapFieldMode();
	void SetSnapFieldMode(long);
	CString GetRegistrySection();
	void SetRegistrySection(LPCTSTR);
	OLE_HANDLE GetHWnd();
	void SetHWnd(OLE_HANDLE);
	long GetTriggeredStreaming();
	void SetTriggeredStreaming(long);
	long GetDecimateLiveHorizontal();
	void SetDecimateLiveHorizontal(long);
	long GetDecimateLiveVertical();
	void SetDecimateLiveVertical(long);
	long GetDecimateStreamHorizontal();
	void SetDecimateStreamHorizontal(long);
	long GetDecimateStreamVertical();
	void SetDecimateStreamVertical(long);
	long GetTriggerMethod();
	void SetTriggerMethod(long);
	CString GetCableTypeIRGB();
	void SetCableTypeIRGB(LPCTSTR);
	long GetFieldUpdateLive();
	void SetFieldUpdateLive(long);
	long GetFieldUpdateStream();
	void SetFieldUpdateStream(long);
	long GetVerbosity();
	void SetVerbosity(long);
	short GetLastError();
	void SetLastError(short);
	CString GetMessageCaption();
	void SetMessageCaption(LPCTSTR);
	long GetDecimateFrameRate();
	void SetDecimateFrameRate(long);
	long GetTriggerFilterTime();
	void SetTriggerFilterTime(long);
	long GetSnappedImageOrientation();
	void SetSnappedImageOrientation(long);
	long GetUseSyncChannelFromCHP();
	void SetUseSyncChannelFromCHP(long);
	CString GetDicomFile();
	void SetDicomFile(LPCTSTR);
	CString GetStreamingLogFile();
	void SetStreamingLogFile(LPCTSTR);
	long GetDicomClass();
	void SetDicomClass(long);
	short GetDicomFlags();
	void SetDicomFlags(short);
	long GetBitsPerPixel();
	void SetBitsPerPixel(long);
	CString GetCodecDLL();
	void SetCodecDLL(LPCTSTR);
	long GetCodecFourCCType();
	void SetCodecFourCCType(long);
	long GetBytesPerPixel();
	void SetBytesPerPixel(long);
	BOOL GetControlManagesConfiguration();
	void SetControlManagesConfiguration(BOOL);
	long GetFrameRateMeasured();
	void SetFrameRateMeasured(long);
	long GetFrameRateTheoretical();
	void SetFrameRateTheoretical(long);
	long GetStreamingBuffers();
	void SetStreamingBuffers(long);
	CString GetVesaChpPath();
	void SetVesaChpPath(LPCTSTR);
	long GetKeyFrameRate();
	void SetKeyFrameRate(long);
	long GetForceMonoSnapsTo24Bit();
	void SetForceMonoSnapsTo24Bit(long);
	long GetImageDIBBitsSizeInBytes();
	void SetImageDIBBitsSizeInBytes(long);
	long GetAutoSignalDetection();
	void SetAutoSignalDetection(long);
	long GetDefaultCableTypeIRGB();
	void SetDefaultCableTypeIRGB(long);
	long GetCableTypeIndexIRGB();
	void SetCableTypeIndexIRGB(long);
	long GetDecimateSnapHorizontal();
	void SetDecimateSnapHorizontal(long);
	long GetDecimateSnapVertical();
	void SetDecimateSnapVertical(long);
	long GetDigitalMode();
	void SetDigitalMode(long);
	long GetApplicationNotBusyEvent();
	void SetApplicationNotBusyEvent(long);
	long GetSaveToJpegQuality();
	void SetSaveToJpegQuality(long);
	CString GetCopyrightNotices();
	void SetCopyrightNotices(LPCTSTR);
	long GetSuspendMode();
	void SetSuspendMode(long);
	long GetDeinterlaceMode();
	void SetDeinterlaceMode(long);
	long GetCopySnapToClipBoard();
	void SetCopySnapToClipBoard(long);
	long GetTriggerStartFrameDelay();
	void SetTriggerStartFrameDelay(long);
	long GetTriggerStopFrameDelay();
	void SetTriggerStopFrameDelay(long);
  CString GetWAVAudioPath();
  void SetWAVAudioPath(LPCTSTR);
  long GetWAVAudioStatus();
  void SetWAVAudioStatus(long);
  long GetWAVAudioEnabled();
  void SetWAVAudioEnabled(long);
  long GetWAVAudioFormat();
  void SetWAVAudioFormat(long);
	CString GetH264File();
	void SetH264File(LPCTSTR);
  bool GetH264VariableBitRate();
  void SetH264VariableBitRate(bool);
  long GetH264KBitRate();
  void SetH264KBitRate(long);
  long GetH264AverageKBitRate();
  void SetH264AverageKBitRate(long);
  long GetH264MaxKBitRate();
  void SetH264MaxKBitRate(long);
  long GetH264MinKBitRate();
  void SetH264MinKBitRate(long);
  long GetH264CaptureSizeSelect();
  void SetH264CaptureSizeSelect(long);

  // Operations
public:

	long GetNthBoardType(short Index)
	{
		long result;
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x53, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Index);
		return result;
	}
	CString GetNthSerialNumber(short Index)
	{
		CString result;
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x54, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, Index);
		return result;
	}
	BOOL Open()
	{
		BOOL result;
		InvokeHelper(0x55, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL Close()
	{
		BOOL result;
		InvokeHelper(0x56, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	long GetImageHandle()
	{
		long result;
		InvokeHelper(0x57, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL IsColorBoard()
	{
		BOOL result;
		InvokeHelper(0x58, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL IsTVBoard()
	{
		BOOL result;
		InvokeHelper(0x59, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL IsVideoDetected()
	{
		BOOL result;
		InvokeHelper(0x5a, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	CString GetNthBoardTypeString(short Index)
	{
		CString result;
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x5b, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, Index);
		return result;
	}
	long GetIndex(LPCTSTR SerialNumber)
	{
		long result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x5c, DISPATCH_METHOD, VT_I4, (void*)&result, parms, SerialNumber);
		return result;
	}
	void SetDisplayWindow(long hWnd)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x5d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, hWnd);
	}
	BOOL Snap()
	{
		BOOL result;
		InvokeHelper(0x5e, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	long SnapSequence()
	{
		long result;
		InvokeHelper(0x5f, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void ForceTrigger()
	{
		InvokeHelper(0x60, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void ReleaseBuffers(long MemoryHandle)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x61, DISPATCH_METHOD, VT_EMPTY, NULL, parms, MemoryHandle);
	}
	void ReleaseAllBuffers()
	{
		InvokeHelper(0x62, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	VARIANT GetBuffer(long MemoryHandle, long FrameNumber)
	{
		VARIANT result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x63, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, MemoryHandle, FrameNumber);
		return result;
	}
	long GetImageWidth()
	{
		long result;
		InvokeHelper(0x64, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetImageHeight()
	{
		long result;
		InvokeHelper(0x65, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetImageDIB()
	{
		long result;
		InvokeHelper(0x66, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL SaveImageToFile(long hbm, LPCTSTR FilePath, long FileType)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_I4 ;
		InvokeHelper(0x67, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, hbm, FilePath, FileType);
		return result;
	}
	LPDISPATCH GetImagePicture()
	{
		LPDISPATCH result;
		InvokeHelper(0x68, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void ReadConfiguration()
	{
		InvokeHelper(0x69, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void WriteConfiguration()
	{
		InvokeHelper(0x6a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	long ReadConfigDword(LPCTSTR Name, long Default)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_I4 ;
		InvokeHelper(0x6b, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Name, Default);
		return result;
	}
	CString ReadConfigString(LPCTSTR Name, LPCTSTR Default)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR ;
		InvokeHelper(0x6c, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, Name, Default);
		return result;
	}
	void WriteConfigDword(LPCTSTR Name, long Value)
	{
		static BYTE parms[] = VTS_BSTR VTS_I4 ;
		InvokeHelper(0x6d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Name, Value);
	}
	void WriteConfigString(LPCTSTR Name, LPCTSTR Value)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR ;
		InvokeHelper(0x6e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Name, Value);
	}
	long ReadConfigGlobalDword(LPCTSTR Name, long Default)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_I4 ;
		InvokeHelper(0x6f, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Name, Default);
		return result;
	}
	void WriteConfigGlobalDword(LPCTSTR Name, long Value)
	{
		static BYTE parms[] = VTS_BSTR VTS_I4 ;
		InvokeHelper(0x70, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Name, Value);
	}
	void WriteConfigGlobalString(LPCTSTR Name, LPCTSTR Value)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR ;
		InvokeHelper(0x71, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Name, Value);
	}
	CString ReadConfigGlobalString(LPCTSTR Name, LPCTSTR Default)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR ;
		InvokeHelper(0x72, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, Name, Default);
		return result;
	}
	long GetBlackLevel()
	{
		long result;
		InvokeHelper(0x73, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetBlackReference()
	{
		long result;
		InvokeHelper(0x74, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetGain()
	{
		long result;
		InvokeHelper(0x75, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetHorzBackPorch()
	{
		long result;
		InvokeHelper(0x76, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetHorzBackSync()
	{
		long result;
		InvokeHelper(0x77, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetHorzFrequency()
	{
		long result;
		InvokeHelper(0x78, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetHorzStart()
	{
		long result;
		InvokeHelper(0x79, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetHorzTotal()
	{
		long result;
		InvokeHelper(0x7a, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetInterlace()
	{
		long result;
		InvokeHelper(0x7b, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetPassMode()
	{
		long result;
		InvokeHelper(0x7c, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetPhaseDelay()
	{
		long result;
		InvokeHelper(0x7d, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetPitch()
	{
		long result;
		InvokeHelper(0x7e, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetVertBackPorch()
	{
		long result;
		InvokeHelper(0x7f, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetVertStart()
	{
		long result;
		InvokeHelper(0x80, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetVertSyncType()
	{
		long result;
		InvokeHelper(0x81, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetWhiteReference()
	{
		long result;
		InvokeHelper(0x82, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetBlackLevel(long BlackLevel)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x83, DISPATCH_METHOD, VT_EMPTY, NULL, parms, BlackLevel);
	}
	void SetBlackReference(long BlackReference)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x84, DISPATCH_METHOD, VT_EMPTY, NULL, parms, BlackReference);
	}
	void SetGain(long Gain)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x85, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Gain);
	}
	void SetHorzBackPorch(long HorzBackPorch)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x86, DISPATCH_METHOD, VT_EMPTY, NULL, parms, HorzBackPorch);
	}
	void SetHorzBackSync(long HorzBackSync)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x87, DISPATCH_METHOD, VT_EMPTY, NULL, parms, HorzBackSync);
	}
	void SetHorzFrequency(long HorzFrequency)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x88, DISPATCH_METHOD, VT_EMPTY, NULL, parms, HorzFrequency);
	}
	void SetHorzStart(long HorzStart)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x89, DISPATCH_METHOD, VT_EMPTY, NULL, parms, HorzStart);
	}
	void SetHorzSyncWidth(long HorzSyncWidth)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x8a, DISPATCH_METHOD, VT_EMPTY, NULL, parms, HorzSyncWidth);
	}
	void SetInterlace(long Interlace)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x8b, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Interlace);
	}
	void SetPassMode(long PassMode)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x8c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, PassMode);
	}
	void SetPhaseDelay(long PhaseDelay)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x8d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, PhaseDelay);
	}
	void SetPitch(long Pitch)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x8e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Pitch);
	}
	void SetVertBackPorch(long VertBackPorch)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x8f, DISPATCH_METHOD, VT_EMPTY, NULL, parms, VertBackPorch);
	}
	void SetVertStart(long VertStart)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x90, DISPATCH_METHOD, VT_EMPTY, NULL, parms, VertStart);
	}
	void SetVertSyncType(long VertSyncType)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x91, DISPATCH_METHOD, VT_EMPTY, NULL, parms, VertSyncType);
	}
	void SetWhiteReference(long WhiteReference)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x92, DISPATCH_METHOD, VT_EMPTY, NULL, parms, WhiteReference);
	}
	long GetHorzSyncWidth()
	{
		long result;
		InvokeHelper(0x93, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetHorzTotal(long HorzTotal)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x94, DISPATCH_METHOD, VT_EMPTY, NULL, parms, HorzTotal);
	}
	long GetImageSizeInBytes()
	{
		long result;
		InvokeHelper(0x95, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetHorizontalPosition()
	{
		long result;
		InvokeHelper(0x96, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetHorizontalPosition(long HorizontalPosition)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x97, DISPATCH_METHOD, VT_EMPTY, NULL, parms, HorizontalPosition);
	}
	long GetOutputFormat()
	{
		long result;
		InvokeHelper(0x98, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetOutputFormat(long OutputFormat)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x99, DISPATCH_METHOD, VT_EMPTY, NULL, parms, OutputFormat);
	}
	CString GetMVCurrentCameraMode()
	{
		CString result;
		InvokeHelper(0x9a, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void SetMVCurrentCameraMode(LPCTSTR CurrentCameraMode)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x9b, DISPATCH_METHOD, VT_EMPTY, NULL, parms, CurrentCameraMode);
	}
	CString GetMVCameraModes()
	{
		CString result;
		InvokeHelper(0x9c, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString GetMVCameraHelpFile()
	{
		CString result;
		InvokeHelper(0x9d, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long GetMVExposureDelay()
	{
		long result;
		InvokeHelper(0x9e, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetMVExposureDelay(long ExposureDelay)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x9f, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ExposureDelay);
	}
	long GetMVExposureDelayTime()
	{
		long result;
		InvokeHelper(0xa0, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetMVExposureDelayTime(long ExposureDelayTime)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xa1, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ExposureDelayTime);
	}
	long GetMVExposureDuration()
	{
		long result;
		InvokeHelper(0xa2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetMVExposureDuration(long ExposureDuration)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xa3, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ExposureDuration);
	}
	long GetMVExposureDurationTime()
	{
		long result;
		InvokeHelper(0xa4, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetMVExposureDurationTime(long ExposureDurationTime)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xa5, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ExposureDurationTime);
	}
	long GetMVExposurePolarity()
	{
		long result;
		InvokeHelper(0xa6, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetMVExposurePolarity(long ExposurePolarity)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xa7, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ExposurePolarity);
	}
	long GetMVIntegrationFrames()
	{
		long result;
		InvokeHelper(0xa8, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetMVIntegrationFrames(long IntegrationFrames)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xa9, DISPATCH_METHOD, VT_EMPTY, NULL, parms, IntegrationFrames);
	}
	long GetMVIntegrationTime()
	{
		long result;
		InvokeHelper(0xaa, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetMVIntegrationTime(long IntegrationTime)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xab, DISPATCH_METHOD, VT_EMPTY, NULL, parms, IntegrationTime);
	}
	long GetMVRetriggerDelay()
	{
		long result;
		InvokeHelper(0xac, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetMVRetriggerDelay(long RetriggerDelay)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xad, DISPATCH_METHOD, VT_EMPTY, NULL, parms, RetriggerDelay);
	}
	long GetMVRetriggerDelayTime()
	{
		long result;
		InvokeHelper(0xae, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetMVRetriggerDelayTime(long RetriggerDelayTime)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xaf, DISPATCH_METHOD, VT_EMPTY, NULL, parms, RetriggerDelayTime);
	}
	long GetMVStrobeDelay()
	{
		long result;
		InvokeHelper(0xb0, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetMVStrobeDelay(long StrobeDelay)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xb1, DISPATCH_METHOD, VT_EMPTY, NULL, parms, StrobeDelay);
	}
	long GetMVStrobeDelayTime()
	{
		long result;
		InvokeHelper(0xb2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetMVStrobeDelayTime(long StrobeDelayTime)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xb3, DISPATCH_METHOD, VT_EMPTY, NULL, parms, StrobeDelayTime);
	}
	long GetMVStrobeDuration()
	{
		long result;
		InvokeHelper(0xb4, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetMVStrobeDuration(long StrobeDuration)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xb5, DISPATCH_METHOD, VT_EMPTY, NULL, parms, StrobeDuration);
	}
	long GetMVStrobeDurationTime()
	{
		long result;
		InvokeHelper(0xb6, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetMVStrobeDurationTime(long StrobeDurationTime)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xb7, DISPATCH_METHOD, VT_EMPTY, NULL, parms, StrobeDurationTime);
	}
	long GetMVStrobePolarity()
	{
		long result;
		InvokeHelper(0xb8, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetMVStrobePolarity(long StrobePolarity)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xb9, DISPATCH_METHOD, VT_EMPTY, NULL, parms, StrobePolarity);
	}
	long GetMVTriggerPolarity()
	{
		long result;
		InvokeHelper(0xba, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetMVTriggerPolarity(long TriggerPolarity)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xbb, DISPATCH_METHOD, VT_EMPTY, NULL, parms, TriggerPolarity);
	}
	void SetMVIOLine(long Line, long Level, long Duration, long Action)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0xbc, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Line, Level, Duration, Action);
	}
	void SetMVIOSyncs(long HSyncIO, long VSyncIO)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0xbd, DISPATCH_METHOD, VT_EMPTY, NULL, parms, HSyncIO, VSyncIO);
	}
	long GetMVSyncGenHPolarity()
	{
		long result;
		InvokeHelper(0xbe, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetMVSyncGenHPolarity(long SyncGenHPolarity)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xbf, DISPATCH_METHOD, VT_EMPTY, NULL, parms, SyncGenHPolarity);
	}
	long GetMVSyncGenHTotal()
	{
		long result;
		InvokeHelper(0xc0, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetMVSyncGenHTotal(long SyncGenHTotal)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xc1, DISPATCH_METHOD, VT_EMPTY, NULL, parms, SyncGenHTotal);
	}
	long GetMVSyncGenHWidth()
	{
		long result;
		InvokeHelper(0xc2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetMVSyncGenHWidth(long SyncGenHWidth)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xc3, DISPATCH_METHOD, VT_EMPTY, NULL, parms, SyncGenHWidth);
	}
	long GetMVSyncGenVPolarity()
	{
		long result;
		InvokeHelper(0xc4, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetMVSyncGenVPolarity(long SyncGenVPolarity)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xc5, DISPATCH_METHOD, VT_EMPTY, NULL, parms, SyncGenVPolarity);
	}
	long GetMVSyncGenVTotal()
	{
		long result;
		InvokeHelper(0xc6, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetMVSyncGenVTotal(long SyncGenVTotal)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xc7, DISPATCH_METHOD, VT_EMPTY, NULL, parms, SyncGenVTotal);
	}
	long GetMVSyncGenVWidth()
	{
		long result;
		InvokeHelper(0xc8, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetMVSyncGenVWidth(long SyncGenVWidth)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xc9, DISPATCH_METHOD, VT_EMPTY, NULL, parms, SyncGenVWidth);
	}
	CString GetVideoFormat()
	{
		CString result;
		InvokeHelper(0xca, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void SetVideoFormat(LPCTSTR VideoFormat)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0xcb, DISPATCH_METHOD, VT_EMPTY, NULL, parms, VideoFormat);
	}
	BOOL IsRGBBoard()
	{
		BOOL result;
		InvokeHelper(0xcc, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL SnapRgb3(short QuickSnap)
	{
		BOOL result;
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0xcd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, QuickSnap);
		return result;
	}
	BOOL LiveVideo(short StartLive)
	{
		BOOL result;
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0xce, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, StartLive);
		return result;
	}
	BOOL InitRgb3(long UseRegistry, LPCTSTR RPath, LPCTSTR GPath, LPCTSTR BPath, long SyncChan)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_BSTR VTS_BSTR VTS_I4 ;
		InvokeHelper(0xcf, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, UseRegistry, RPath, GPath, BPath, SyncChan);
		return result;
	}
	BOOL CodecLoad(LPCTSTR CodecDLL, long CodecFourCCType)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR VTS_I4 ;
		InvokeHelper(0xd0, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, CodecDLL, CodecFourCCType);
		return result;
	}
	void CodecConfigure()
	{
		InvokeHelper(0xd1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void ShowConfigDialog(long Flags)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xd2, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Flags);
	}
	void ShowVideoAdjustments(long Flags)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xd3, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Flags);
	}
	void ShowCompressionDialog(long Flags)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xd4, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Flags);
	}
	CString GetErrorText(long ErrorCode)
	{
		CString result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xd5, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, ErrorCode);
		return result;
	}
	void AbortTrigger()
	{
		InvokeHelper(0xd6, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL SnapInThread()
	{
		BOOL result;
		InvokeHelper(0xd7, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void SnapSequenceCancel()
	{
		InvokeHelper(0xd8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void SnapCancel()
	{
		InvokeHelper(0xd9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL SnapSequenceInThread(long SnapEvent)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xda, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, SnapEvent);
		return result;
	}
	void ShowDicomDialog(long Flags)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xdb, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Flags);
	}
	VARIANT GetPixelData()
	{
		VARIANT result;
		InvokeHelper(0xdc, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	BOOL CodecChooseFromList()
	{
		BOOL result;
		InvokeHelper(0xdd, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void CodecAbout()
	{
		InvokeHelper(0xde, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL CodecChooseByFormat()
	{
		BOOL result;
		InvokeHelper(0xdf, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL CodecHasConfigure()
	{
		BOOL result;
		InvokeHelper(0xe0, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL CodecHasAbout()
	{
		BOOL result;
		InvokeHelper(0xe1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void ShowBoardSelectionDialog(long Flags)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xe2, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Flags);
	}
	CString get_NthUserDefinedBoardName(short Index)
	{
		CString result;
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x10c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms, Index);
		return result;
	}
	void put_NthUserDefinedBoardName(short Index, LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_I2 VTS_BSTR ;
		InvokeHelper(0x10c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, Index, newValue);
	}
	CString get_NthBoardDescription(short Index)
	{
		CString result;
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x10d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms, Index);
		return result;
	}
	void ShowUserDefinedBoardNamesDialog(long Flags)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xe3, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Flags);
	}
	BOOL StreamToMemory(long FrameCount, long Flags, long StartEvent, long PauseEvent, long CancelEvent, long * MemoryHandle)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_PI4 ;
		InvokeHelper(0xe4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, FrameCount, Flags, StartEvent, PauseEvent, CancelEvent, MemoryHandle);
		return result;
	}
	BOOL StartContinuousCapture(long Flags, long CancelEvent)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0xe5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, Flags, CancelEvent);
		return result;
	}
	VARIANT GetHistogram(long * NumPoints)
	{
		VARIANT result;
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0xe6, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, NumPoints);
		return result;
	}
	BOOL StreamToAvi(long FrameCount, long Flags, long StartEvent, long PauseEvent, long CancelEvent, long * MemoryHandle)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_PI4 ;
		InvokeHelper(0xe7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, FrameCount, Flags, StartEvent, PauseEvent, CancelEvent, MemoryHandle);
		return result;
	}
	BOOL StreamToDicom(long FrameCount, long Flags, long StartEvent, long PauseEvent, long CancelEvent, long * MemoryHandle)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_PI4 ;
		InvokeHelper(0xe8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, FrameCount, Flags, StartEvent, PauseEvent, CancelEvent, MemoryHandle);
		return result;
	}
	BOOL SavePixelDataToFile(VARIANT PixelData, long Width, long Height, long BitsPerPixel, LPCTSTR FilePath, long FileType)
	{
		BOOL result;
		static BYTE parms[] = VTS_VARIANT VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_I4 ;
		InvokeHelper(0xe9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, &PixelData, Width, Height, BitsPerPixel, FilePath, FileType);
		return result;
	}
	void ShowAreaOfInterestDialog(long Flags)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xea, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Flags);
	}
	long ShowVesaDetectDialog(long Flags)
	{
		long result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xeb, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Flags);
		return result;
	}
	long ShowIRGBCableTypeDialog(long Flags)
	{
		long result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xec, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Flags);
		return result;
	}
	void ResetBoard()
	{
		InvokeHelper(0xed, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void GetStreamAOI(long * Left, long * Right, long * Top, long * Bottom)
	{
		static BYTE parms[] = VTS_PI4 VTS_PI4 VTS_PI4 VTS_PI4 ;
		InvokeHelper(0xee, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Left, Right, Top, Bottom);
	}
	void GetLiveAOI(long * Left, long * Right, long * Top, long * Bottom)
	{
		static BYTE parms[] = VTS_PI4 VTS_PI4 VTS_PI4 VTS_PI4 ;
		InvokeHelper(0xef, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Left, Right, Top, Bottom);
	}
	void SetLiveAOI(long Left, long Right, long Top, long Bottom)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0xf0, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Left, Right, Top, Bottom);
	}
	void SetStreamAOI(long Left, long Right, long Top, long Bottom)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0xf1, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Left, Right, Top, Bottom);
	}
	long GetNumberOfCableTypesIRGB()
	{
		long result;
		InvokeHelper(0xf2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString GetCableTypeListIRGB(short Index)
	{
		CString result;
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0xf3, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, Index);
		return result;
	}
	long GetStreamWidth()
	{
		long result;
		InvokeHelper(0xf4, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetStreamHeight()
	{
		long result;
		InvokeHelper(0xf5, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetLiveWidth()
	{
		long result;
		InvokeHelper(0xf6, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetLiveHeight()
	{
		long result;
		InvokeHelper(0xf7, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetSnapHeight()
	{
		long result;
		InvokeHelper(0xf8, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetSnapWidth()
	{
		long result;
		InvokeHelper(0xf9, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL SaveVideoSettings(LPCTSTR ProfilePath, LPCTSTR Comments, LPCTSTR MyName, LPCTSTR MyVersion, long SilentMode)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_I4 ;
		InvokeHelper(0xfa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, ProfilePath, Comments, MyName, MyVersion, SilentMode);
		return result;
	}
	BOOL IsDigitalBoard()
	{
		BOOL result;
		InvokeHelper(0xfb, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL IsMonoBoard()
	{
		BOOL result;
		InvokeHelper(0xfc, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL IsHighSpeedRGBBoard()
	{
		BOOL result;
		InvokeHelper(0xfd, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void SetImageWidth(long ImageWidth)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xfe, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ImageWidth);
	}
	void SetImageHeight(long ImageHeight)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xff, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ImageHeight);
	}
	BOOL IsStreamingBoard()
	{
		BOOL result;
		InvokeHelper(0x100, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void WhiteBalance(long Flags)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x101, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Flags);
	}
	long GetVertTotal()
	{
		long result;
		InvokeHelper(0x102, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetVertTotal(long VertTotal)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x103, DISPATCH_METHOD, VT_EMPTY, NULL, parms, VertTotal);
	}
	long GetBoardType()
	{
		long result;
		InvokeHelper(0x104, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString GetBoardTypeString()
	{
		CString result;
		InvokeHelper(0x105, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString GetSerialNumber()
	{
		CString result;
		InvokeHelper(0x106, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	BOOL IsYPbPrInput()
	{
		BOOL result;
		InvokeHelper(0x107, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL Is64BitBoard()
	{
		BOOL result;
		InvokeHelper(0x108, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void SetSnapAOI(long Left, long Right, long Top, long Bottom)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x109, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Left, Right, Top, Bottom);
	}
	void GetSnapAOI(long * Left, long * Right, long * Top, long * Bottom)
	{
		static BYTE parms[] = VTS_PI4 VTS_PI4 VTS_PI4 VTS_PI4 ;
		InvokeHelper(0x10a, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Left, Right, Top, Bottom);
	}
	void ResetBoardFast()
	{
		InvokeHelper(0x10b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL StreamToH264(long FrameCount, long Flags, long StartEvent, long PauseEvent, long CancelEvent )
	{
    BOOL result;
		static BYTE parms[] =  VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x119, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, FrameCount, Flags, StartEvent, PauseEvent, CancelEvent );
		return result;
  }

  void StopStreamToH264()
  {
    InvokeHelper(0x11C, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
  }


	BOOL IsCompressionBoard()
	{
		BOOL result;
		InvokeHelper(0x11A, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void ShowH264Dialog(long flags)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x11B, DISPATCH_METHOD, VT_EMPTY, NULL, parms, flags);
	}

	long CopyAndReleaseFrame(void *pBuffer, long nBufferSize)
	{
		long result;
		static BYTE parms[] = VTS_PUI1 VTS_I4 ;
		InvokeHelper(0x11D, DISPATCH_METHOD, VT_I4, (void*)&result, parms, pBuffer, nBufferSize);
		return result;
	}
	
	long CopyAndReleaseFrameLV(unsigned __int64 pBuffer, long nBufferSize)
	{
		long result;
		static BYTE parms[] = VTS_UI8 VTS_I4 ;
		InvokeHelper(0x11E, DISPATCH_METHOD, VT_I4, (void*)&result, parms, pBuffer, nBufferSize);
		return result;
	}
	
  void AboutBox()
	{
		InvokeHelper(DISPID_ABOUTBOX, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

};

#pragma warning( default : 4100 )
