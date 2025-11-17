#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EDrawDebugTrace -FallbackName=EDrawDebugTrace
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "EPalTraceTypeQuery.h"
#include "PalPhysicsUtility.generated.h"

class UActorComponent;
class UObject;

UCLASS(BlueprintType)
class UPalPhysicsUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalPhysicsUtility();

    UFUNCTION(BlueprintCallable)
    static void SetCanEverAffectNavigation(UActorComponent* Component, bool bAffect);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool LineTraceSingleByPalTraceType(const UObject* WorldContextObject, FVector Start, FVector End, EPalTraceTypeQuery PalTraceType, bool bTraceComplex, bool bReturnPhysicalMaterial, bool bReturnTraceIndex, FHitResult& HitResult, TEnumAsByte<EDrawDebugTrace> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
};

