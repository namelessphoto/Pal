#ifndef UE4SS_SDK_WwiseObjectUtils_HPP
#define UE4SS_SDK_WwiseObjectUtils_HPP

struct FAkOutputDeviceID : public FAkUInt64Wrapper
{
};

struct FAkUInt32Wrapper
{
    uint32 UInt32Value;

};

struct FAkUInt64Wrapper
{
    uint64 UInt64Value;

};

struct FAkUniqueID : public FAkUInt32Wrapper
{
};

#endif
