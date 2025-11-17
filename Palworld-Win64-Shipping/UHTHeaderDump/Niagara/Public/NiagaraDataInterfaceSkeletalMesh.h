#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "ENDISkeletalMesh_SkinningMode.h"
#include "ENDISkeletalMesh_SourceMode.h"
#include "NiagaraDataInterface.h"
#include "NiagaraUserParameterBinding.h"
#include "NiagaraDataInterfaceSkeletalMesh.generated.h"

class AActor;
class USkeletalMeshComponent;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ENDISkeletalMesh_SourceMode SourceMode;
    
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AActor> SoftSourceActor;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ComponentTags;
    
    UPROPERTY(Instanced, Transient)
    USkeletalMeshComponent* SourceComponent;
    
public:
    UPROPERTY(EditAnywhere)
    FNiagaraUserParameterBinding MeshUserParameter;
    
    UPROPERTY(EditAnywhere)
    ENDISkeletalMesh_SkinningMode SkinningMode;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> SamplingRegions;
    
    UPROPERTY(EditAnywhere)
    int32 WholeMeshLOD;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> FilteredBones;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> FilteredSockets;
    
    UPROPERTY(EditAnywhere)
    FName ExcludeBoneName;
    
    UPROPERTY(EditAnywhere)
    uint8 bExcludeBone: 1;
    
    UPROPERTY(EditAnywhere)
    int32 UvSetIndex;
    
    UPROPERTY(EditAnywhere)
    bool bRequireCurrentFrameData;
    
    UNiagaraDataInterfaceSkeletalMesh();

protected:
    UFUNCTION()
    void OnSourceEndPlay(AActor* InSource, TEnumAsByte<EEndPlayReason> Reason);
    
};

