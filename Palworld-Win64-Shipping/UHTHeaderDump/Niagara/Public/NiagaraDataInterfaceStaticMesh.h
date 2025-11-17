#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "ENDIStaticMesh_SourceMode.h"
#include "NDIStaticMeshSectionFilter.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceStaticMesh.generated.h"

class AActor;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ENDIStaticMesh_SourceMode SourceMode;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* DefaultMesh;
    
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AActor> SoftSourceActor;
    
    UPROPERTY(Instanced, Transient)
    UStaticMeshComponent* SourceComponent;
    
public:
    UPROPERTY(EditAnywhere)
    FNDIStaticMeshSectionFilter SectionFilter;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bUsePhysicsBodyVelocity;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> FilteredSockets;
    
    UNiagaraDataInterfaceStaticMesh();

protected:
    UFUNCTION()
    void OnSourceEndPlay(AActor* InSource, TEnumAsByte<EEndPlayReason> Reason);
    
};

