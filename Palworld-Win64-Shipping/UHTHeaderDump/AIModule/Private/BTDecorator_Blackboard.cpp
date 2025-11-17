#include "BTDecorator_Blackboard.h"

UBTDecorator_Blackboard::UBTDecorator_Blackboard() {
    this->NodeName = TEXT("Blackboard Based Condition");
    this->IntValue = 0;
    this->FloatValue = 0.00f;
    this->operationType = 0;
    this->NotifyObserver = EBTBlackboardRestart::ResultChange;
}


