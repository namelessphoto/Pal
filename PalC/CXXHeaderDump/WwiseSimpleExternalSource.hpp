#ifndef UE4SS_SDK_WwiseSimpleExternalSource_HPP
#define UE4SS_SDK_WwiseSimpleExternalSource_HPP

struct FWwiseExternalSourceCookieDefaultMedia : public FTableRowBase
{
    int32 ExternalSourceCookie;
    FString ExternalSourceName;
    int32 MediaInfoId;
    FString MediaName;

};

struct FWwiseExternalSourceMediaInfo : public FTableRowBase
{
    int32 ExternalSourceMediaInfoId;
    FName MediaName;
    int32 CodecID;
    bool bIsStreamed;
    bool bUseDeviceMemory;
    int32 MemoryAlignment;
    int32 PrefetchSize;

};

class UWwiseExternalSourceSettings : public UObject
{
    FSoftObjectPath MediaInfoTable;
    FSoftObjectPath ExternalSourceDefaultMedia;
    FDirectoryPath ExternalSourceStagingDirectory;

};

#endif
