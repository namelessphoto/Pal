#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalWorldMapType.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIWorldMap.generated.h"

UCLASS(EditInlineNew)
class PAL_API UPalUIWorldMap : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
    UPalUIWorldMap();

protected:
    UFUNCTION(BlueprintCallable)
    void RegisterRespawnPoint(const FVector& RespawnLocation, const FQuat& RespawnRotation);
    
    UFUNCTION(BlueprintCallable)
    void Debug_SetLocation(const FVector& Location);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateWorldMapData(EPalWorldMapType worldMapType);
    
};

