#ifndef UE4SS_SDK_Qos_HPP
#define UE4SS_SDK_Qos_HPP

#include "Qos_enums.hpp"

struct FDatacenterQosInstance
{
    FQosDatacenterInfo Definition;
    EQosDatacenterResult Result;
    int32 AvgPingMs;
    TArray<int32> PingResults;
    FDateTime LastCheckTimestamp;
    bool bUsable;

};

struct FQosDatacenterInfo
{
    FString ID;
    FString regionId;
    bool bEnabled;
    TArray<FQosPingServerInfo> Servers;

};

struct FQosPingServerInfo
{
    FString Address;
    int32 Port;

};

struct FQosRegionInfo
{
    FText DisplayName;
    FString regionId;
    bool bEnabled;
    bool bVisible;
    bool bAutoAssignable;
    bool bAllowSubspaceBias;
    FQosSubspaceComparisonParams SubspaceBiasParams;

};

struct FQosSubspaceComparisonParams
{
    int32 MaxNonSubspacePingMs;
    int32 MinSubspacePingMs;
    int32 ConstantMaxToleranceMs;
    float ScaledMaxTolerancePct;

};

struct FRegionQosInstance
{
    FQosRegionInfo Definition;
    TArray<FDatacenterQosInstance> DatacenterOptions;

};

class AQosBeaconClient : public AOnlineBeaconClient
{

    void ServerQosRequest(FString InSessionId);
    void ClientQosResponse(EQosResponseType Response);
};

class AQosBeaconHost : public AOnlineBeaconHostObject
{
};

class UQosEvaluator : public UObject
{
    bool bInProgress;
    bool bCancelOperation;
    TArray<FDatacenterQosInstance> Datacenters;

};

class UQosRegionManager : public UObject
{
    int32 NumTestsPerRegion;
    float PingTimeout;
    bool bEnableSubspaceBiasOrder;
    FString SubspaceDelimiter;
    TArray<FQosRegionInfo> RegionDefinitions;
    TArray<FQosDatacenterInfo> DatacenterDefinitions;
    FDateTime LastCheckTimestamp;
    class UQosEvaluator* Evaluator;
    EQosCompletionResult QosEvalResult;
    TArray<FRegionQosInstance> RegionOptions;
    FString ForceRegionId;
    bool bRegionForcedViaCommandline;
    FString SelectedRegionId;

};

#endif
