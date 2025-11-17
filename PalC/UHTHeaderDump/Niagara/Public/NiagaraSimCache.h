#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "ENiagaraSimCacheAttributeCaptureMode.h"
#include "NiagaraSimCacheCreateParameters.h"
#include "NiagaraSimCacheFrame.h"
#include "NiagaraSimCacheLayout.h"
#include "NiagaraVariableBase.h"
#include "NiagaraSimCache.generated.h"

class UNiagaraSystem;

UCLASS(BlueprintType)
class NIAGARA_API UNiagaraSimCache : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<UNiagaraSystem> SoftNiagaraSystem;
    
    UPROPERTY(VisibleAnywhere)
    float StartSeconds;
    
    UPROPERTY(VisibleAnywhere)
    float DurationSeconds;
    
    UPROPERTY()
    FNiagaraSimCacheCreateParameters CreateParameters;
    
    UPROPERTY(Transient)
    bool bNeedsReadComponentMappingRecache;
    
    UPROPERTY()
    FNiagaraSimCacheLayout CacheLayout;
    
    UPROPERTY()
    TArray<FNiagaraSimCacheFrame> CacheFrames;
    
    UPROPERTY()
    TMap<FNiagaraVariableBase, UObject*> DataInterfaceStorage;
    
public:
    UNiagaraSimCache();

    UFUNCTION(BlueprintPure)
    void ReadVectorAttribute(TArray<FVector>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex) const;
    
    UFUNCTION(BlueprintPure)
    void ReadVector4Attribute(TArray<FVector4>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex) const;
    
    UFUNCTION(BlueprintPure)
    void ReadVector2Attribute(TArray<FVector2D>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex) const;
    
    UFUNCTION(BlueprintPure)
    void ReadQuatAttributeWithRebase(TArray<FQuat>& OutValues, FQuat Quat, FName AttributeName, FName EmitterName, int32 FrameIndex) const;
    
    UFUNCTION(BlueprintPure)
    void ReadQuatAttribute(TArray<FQuat>& OutValues, FName AttributeName, FName EmitterName, bool bLocalSpaceToWorld, int32 FrameIndex) const;
    
    UFUNCTION(BlueprintPure)
    void ReadPositionAttributeWithRebase(TArray<FVector>& OutValues, FTransform Transform, FName AttributeName, FName EmitterName, int32 FrameIndex) const;
    
    UFUNCTION(BlueprintPure)
    void ReadPositionAttribute(TArray<FVector>& OutValues, FName AttributeName, FName EmitterName, bool bLocalSpaceToWorld, int32 FrameIndex) const;
    
    UFUNCTION(BlueprintPure)
    void ReadIntAttribute(TArray<int32>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex) const;
    
    UFUNCTION(BlueprintPure)
    void ReadFloatAttribute(TArray<float>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex) const;
    
    UFUNCTION(BlueprintPure)
    void ReadColorAttribute(TArray<FLinearColor>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex) const;
    
    UFUNCTION(BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCacheValid() const;
    
    UFUNCTION(BlueprintPure)
    float GetStartSeconds() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumFrames() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumEmitters() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetEmitterNames() const;
    
    UFUNCTION(BlueprintPure)
    FName GetEmitterName(int32 EmitterIndex) const;
    
    UFUNCTION(BlueprintPure)
    ENiagaraSimCacheAttributeCaptureMode GetAttributeCaptureMode() const;
    
};

