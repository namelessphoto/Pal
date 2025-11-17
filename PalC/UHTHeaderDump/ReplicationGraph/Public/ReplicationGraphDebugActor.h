#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ReplicationGraphDebugActor.generated.h"

class UNetReplicationGraphConnection;
class UReplicationGraph;

UCLASS(NotPlaceable, Transient)
class REPLICATIONGRAPH_API AReplicationGraphDebugActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    UReplicationGraph* ReplicationGraph;
    
    UPROPERTY()
    UNetReplicationGraphConnection* ConnectionManager;
    
    AReplicationGraphDebugActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Reliable, Server)
    void ServerStopDebugging();
    
    UFUNCTION(Reliable, Server)
    void ServerStartDebugging();
    
    UFUNCTION(Reliable, Server)
    void ServerSetPeriodFrameForClass(UClass* Class, int32 PeriodFrame);
    
    UFUNCTION(Reliable, Server)
    void ServerSetCullDistanceForClass(UClass* Class, float CullDistance);
    
    UFUNCTION(Reliable, Server)
    void ServerSetConditionalActorBreakpoint(AActor* Actor);
    
    UFUNCTION(Reliable, Server)
    void ServerPrintCullDistances();
    
    UFUNCTION(Reliable, Server)
    void ServerPrintAllActorInfo(const FString& Str);
    
    UFUNCTION(Reliable, Server)
    void ServerCellInfo();
    
    UFUNCTION(Client, Reliable)
    void ClientCellInfo(FVector CellLocation, FVector CellExtent, const TArray<AActor*>& Actors);
    
};

