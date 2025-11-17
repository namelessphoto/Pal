#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceRigidMeshCollisionQuery.generated.h"

class AActor;

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceRigidMeshCollisionQuery : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> ActorTags;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ComponentTags;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<AActor>> SourceActors;
    
    UPROPERTY(EditAnywhere)
    bool OnlyUseMoveable;
    
    UPROPERTY(EditAnywhere)
    bool GlobalSearchAllowed;
    
    UPROPERTY(EditAnywhere)
    bool GlobalSearchForced;
    
    UPROPERTY(EditAnywhere)
    bool GlobalSearchFallback_Unscripted;
    
    UPROPERTY(EditAnywhere)
    int32 MaxNumPrimitives;
    
    UNiagaraDataInterfaceRigidMeshCollisionQuery();

};

