#ifndef UE4SS_SDK_NetCore_HPP
#define UE4SS_SDK_NetCore_HPP

#include "NetCore_enums.hpp"

struct FEscalationState : public FStateStruct
{
    bool bLogEscalate;
    bool bDormant;
    int16 CooloffTime;
    int16 AutoEscalateTime;
    int8 HighestTimePeriod;
    TArray<int8> AllTimePeriods;

};

struct FFastArraySerializer
{
    int32 ArrayReplicationKey;
    EFastArraySerializerDeltaFlags DeltaFlags;

};

struct FFastArraySerializerItem
{
    int32 ReplicationID;
    int32 ReplicationKey;
    int32 MostRecentArrayReplicationKey;

};

struct FNetAnalyticsDataConfig
{
    FName DataName;
    bool bEnabled;

};

struct FNetFaultState : public FEscalationState
{
    bool bCloseConnection;
    int16 EscalateQuotaFaultsPerPeriod;
    int8 EscalateQuotaFaultPercentPerPeriod;
    int16 DescalateQuotaFaultsPerPeriod;
    int8 DescalateQuotaFaultPercentPerPeriod;
    int8 EscalateQuotaTimePeriod;

};

struct FStateStruct
{
    FString StateName;

};

class UEscalationManagerConfig : public UStatePerObjectConfig
{
    TArray<FString> EscalationSeverity;

};

class UNetAnalyticsAggregatorConfig : public UObject
{
    TArray<FNetAnalyticsDataConfig> NetAnalyticsData;

};

class UStatePerObjectConfig : public UObject
{
    FString PerObjectConfigSection;
    bool bEnabled;

};

#endif
