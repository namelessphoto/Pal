#include "PawnAction.h"
#include "Templates/SubclassOf.h"

UPawnAction::UPawnAction() {
    this->ChildAction = NULL;
    this->ParentAction = NULL;
    this->OwnerComponent = NULL;
    this->Instigator = NULL;
    this->BrainComp = NULL;
    this->bAllowNewSameClassInstance = false;
    this->bReplaceActiveSameClassInstance = false;
    this->bShouldPauseMovement = false;
    this->bAlwaysNotifyOnFinished = false;
    this->bDoParallelTick = false;
}

TEnumAsByte<EAIRequestPriority> UPawnAction::GetActionPriority() {
    return EAIRequestPriority::SoftScript;
}

void UPawnAction::Finish(TEnumAsByte<EPawnActionResult> WithResult) {
}

UPawnAction* UPawnAction::CreateActionInstance(UObject* WorldContextObject, TSubclassOf<UPawnAction> actionClass) {
    return NULL;
}


