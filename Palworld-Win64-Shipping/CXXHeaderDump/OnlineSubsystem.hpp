#ifndef UE4SS_SDK_OnlineSubsystem_HPP
#define UE4SS_SDK_OnlineSubsystem_HPP

#include "OnlineSubsystem_enums.hpp"

struct FNamedInterface
{
    FName InterfaceName;
    class UObject* InterfaceObject;

};

struct FNamedInterfaceDef
{
    FName InterfaceName;
    FString InterfaceClassName;

};

class ITurnBasedMatchInterface : public IInterface
{

    void OnMatchReceivedTurn(FString Match, bool bDidBecomeActive);
    void OnMatchEnded(FString Match);
};

class UNamedInterfaces : public UObject
{
    TArray<FNamedInterface> NamedInterfaces;
    TArray<FNamedInterfaceDef> NamedInterfaceDefs;

};

#endif
