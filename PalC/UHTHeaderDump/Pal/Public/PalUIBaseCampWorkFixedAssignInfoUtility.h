#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EPalWorkSuitability.h"
#include "EPalWorkType.h"
#include "PalUIBaseCampWorkFixedAssignInfo.h"
#include "PalUIBaseCampWorkFixedAssignInfoUtility.generated.h"

class UPalMapObjectConcreteModelBase;
class UPalWorkBase;
class UPalWorkProgress;

UCLASS(BlueprintType)
class UPalUIBaseCampWorkFixedAssignInfoUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalUIBaseCampWorkFixedAssignInfoUtility();

    UFUNCTION(BlueprintPure)
    static EPalWorkType GetWorkType(const FPalUIBaseCampWorkFixedAssignInfo& Info);
    
    UFUNCTION(BlueprintPure)
    static TArray<EPalWorkSuitability> GetWorkSuitability(const FPalUIBaseCampWorkFixedAssignInfo& Info);
    
    UFUNCTION(BlueprintPure)
    static UPalWorkProgress* GetWorkProgress(const FPalUIBaseCampWorkFixedAssignInfo& Info);
    
    UFUNCTION(BlueprintPure)
    static UPalWorkBase* GetWorkBase(const FPalUIBaseCampWorkFixedAssignInfo& Info);
    
    UFUNCTION(BlueprintPure)
    static UPalMapObjectConcreteModelBase* GetOwnerMapObjectConcreteModel(const FPalUIBaseCampWorkFixedAssignInfo& Info);
    
    UFUNCTION(BlueprintPure)
    static int32 GetAssignableNum(const FPalUIBaseCampWorkFixedAssignInfo& Info);
    
};

