#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LensDistortionState.h"
#include "Templates/SubclassOf.h"
#include "LensDistortionModelHandlerBase.generated.h"

class ULensModel;
class UMaterialInstanceDynamic;
class UTextureRenderTarget2D;

UCLASS(Abstract, BlueprintType)
class CAMERACALIBRATIONCORE_API ULensDistortionModelHandlerBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TSubclassOf<ULensModel> LensModelClass;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UMaterialInstanceDynamic* DistortionPostProcessMID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLensDistortionState CurrentState;
    
    UPROPERTY(VisibleAnywhere)
    FString DisplayName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float OverscanFactor;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* UndistortionDisplacementMapMID;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* DistortionDisplacementMapMID;
    
    UPROPERTY(Transient)
    UTextureRenderTarget2D* UndistortionDisplacementMapRT;
    
    UPROPERTY(Transient)
    UTextureRenderTarget2D* DistortionDisplacementMapRT;
    
    UPROPERTY()
    FGuid DistortionProducerID;
    
public:
    ULensDistortionModelHandlerBase();

    UFUNCTION(BlueprintCallable)
    void SetDistortionState(const FLensDistortionState& InNewState);
    
    UFUNCTION(BlueprintPure)
    bool IsModelSupported(const TSubclassOf<ULensModel>& ModelToSupport) const;
    
    UFUNCTION(BlueprintPure)
    UTextureRenderTarget2D* GetUndistortionDisplacementMap() const;
    
    UFUNCTION(BlueprintPure)
    UTextureRenderTarget2D* GetDistortionDisplacementMap() const;
    
};

