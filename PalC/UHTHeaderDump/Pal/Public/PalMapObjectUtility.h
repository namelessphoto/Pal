#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EPalMapObjectOperationResult.h"
#include "PalItemVisualModelFXInfo.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectUtility.generated.h"

class AActor;
class UMaterialInterface;
class UObject;
class UPrimitiveComponent;
class USkeletalMesh;
class UStaticMesh;

UCLASS(BlueprintType)
class UPalMapObjectUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalMapObjectUtility();

    UFUNCTION(BlueprintPure)
    static bool TryGetItemVisualModelStaticMesh(TSubclassOf<AActor> actorClass, UStaticMesh*& OutStaticMesh, FTransform& OutComponentTransform, FVector& OutCenterOfMass, UMaterialInterface*& OutMaterialInterface);
    
    UFUNCTION(BlueprintPure)
    static bool TryGetItemVisualModelSkeletalMesh(TSubclassOf<AActor> actorClass, USkeletalMesh*& OutSkeletalMesh, FTransform& OutComponentTransform, FVector& OutCenterOfMass, UMaterialInterface*& OutMaterialInterface);
    
    UFUNCTION(BlueprintPure)
    static EPalMapObjectOperationResult ToMapObjectOperationResult(const int32 ResultIntValue);
    
    UFUNCTION(BlueprintPure)
    static EPalMapObjectOperationResult SelectPriorityResult(EPalMapObjectOperationResult Result1, EPalMapObjectOperationResult Result2);
    
    UFUNCTION(BlueprintPure)
    static FString MapObjectOperationResultToString(const EPalMapObjectOperationResult Result);
    
    UFUNCTION(BlueprintPure)
    static bool IsContainsCollisionProfiles(const UPrimitiveComponent* Component, const TArray<FName>& CollisionProfiles);
    
    UFUNCTION(BlueprintPure)
    static void GetItemVisualModelFX(TSubclassOf<AActor> actorClass, TArray<FPalItemVisualModelFXInfo>& OutFXInfos);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FName ConvertBlueprintItemIdToBuildObjectId(const UObject* WorldContextObject, const FName& StaticItemId);
    
};

