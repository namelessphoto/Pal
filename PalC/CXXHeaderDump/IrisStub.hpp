#ifndef UE4SS_SDK_IrisStub_HPP
#define UE4SS_SDK_IrisStub_HPP

struct FNetSerializerConfig
{
};

struct FPolymorphicArrayStructNetSerializerConfig : public FNetSerializerConfig
{
};

struct FPolymorphicStructNetSerializerConfig : public FNetSerializerConfig
{
};

class UDataStream : public UObject
{
};

class UIrisObjectReferencePackageMap : public UObject
{
};

class UNetBlobHandler : public UObject
{
};

class UNetObjectCountLimiterConfig : public UNetObjectPrioritizerConfig
{
};

class UNetObjectFilter : public UObject
{
};

class UNetObjectFilterConfig : public UObject
{
};

class UNetObjectPrioritizer : public UObject
{
};

class UNetObjectPrioritizerConfig : public UObject
{
};

class UObjectReplicationBridge : public UReplicationBridge
{
};

class UReplicationBridge : public UObject
{
};

class USequentialPartialNetBlobHandler : public UNetBlobHandler
{
};

class USequentialPartialNetBlobHandlerConfig : public UObject
{
};

class USphereWithOwnerBoostNetObjectPrioritizerConfig : public UNetObjectPrioritizerConfig
{
};

#endif
