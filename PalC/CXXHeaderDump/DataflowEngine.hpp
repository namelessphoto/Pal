#ifndef UE4SS_SDK_DataflowEngine_HPP
#define UE4SS_SDK_DataflowEngine_HPP

class UDataflow : public UEdGraph
{
    bool bActive;
    TArray<class UObject*> Targets;

};

class UDataflowEdNode : public UEdGraphNode
{
};

#endif
