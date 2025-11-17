#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalCustomMarkerSaveData.h"
#include "PalWorldSubsystem.h"
#include "PalLocationManager.generated.h"

class UPalLocationBase;
class UPalLocationPoint;

UCLASS(BlueprintType)
class UPalLocationManager : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLocationDelegate, const FGuid&, LocationId, UPalLocationBase*, Location);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCustomMarkerDelegate, const FGuid&, MarkerId);
    
    UPROPERTY(BlueprintAssignable)
    FLocationDelegate OnAddedLocation;
    
    UPROPERTY(BlueprintAssignable)
    FLocationDelegate OnRemoveLocation;
    
    UPROPERTY(BlueprintAssignable)
    FLocationDelegate OnAddedLocationForCompass;
    
    UPROPERTY(BlueprintAssignable)
    FLocationDelegate OnRemoveLocationForCompass;
    
    UPROPERTY(BlueprintAssignable)
    FCustomMarkerDelegate OnCustomMarkerChanged;
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, UPalLocationBase*> LocationMapInServer;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, UPalLocationBase*> LocationMapInLocal;
    
    UPROPERTY(Transient)
    TMap<FGuid, UPalLocationBase*> LocationMapCombined;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, FPalCustomMarkerSaveData> CustomMarkers;
    
public:
    UPalLocationManager();

    UFUNCTION(BlueprintCallable)
    void RemoveLocalCustomMarker(const FGuid& MarkerId);
    
    UFUNCTION(BlueprintPure)
    UPalLocationPoint* GetLocationPoint(const FGuid& ID) const;
    
    UFUNCTION(BlueprintPure)
    TMap<FGuid, UPalLocationBase*> GetLocationMap() const;
    
    UFUNCTION(BlueprintPure)
    UPalLocationBase* GetLocation(const FGuid& ID) const;
    
    UFUNCTION(BlueprintPure)
    TMap<FGuid, FPalCustomMarkerSaveData> GetCustomMarkers() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeCustomMarkerType(const FGuid& MarkerrId, int32 Type);
    
    UFUNCTION(BlueprintCallable)
    FGuid AddLocalCustomMarker(FVector IconLocation, int32 IconType);
    
};

