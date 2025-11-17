#ifndef UE4SS_SDK_DataflowCore_HPP
#define UE4SS_SDK_DataflowCore_HPP

struct FDataflowConnection
{
};

struct FDataflowInput : public FDataflowConnection
{
};

struct FDataflowNode
{
    bool bActive;

};

struct FDataflowOutput : public FDataflowConnection
{
};

#endif
