// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ApprovalRelationship_HeaderFile
#define _StepBasic_ApprovalRelationship_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_ApprovalRelationship_HeaderFile
#include <Handle_StepBasic_ApprovalRelationship.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_StepBasic_Approval_HeaderFile
#include <Handle_StepBasic_Approval.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class TCollection_HAsciiString;
class StepBasic_Approval;



class StepBasic_ApprovalRelationship : public MMgt_TShared {

public:

  //! Returns a ApprovalRelationship <br>
  Standard_EXPORT   StepBasic_ApprovalRelationship();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(TCollection_HAsciiString)& aDescription,const Handle(StepBasic_Approval)& aRelatingApproval,const Handle(StepBasic_Approval)& aRelatedApproval) ;
  
  Standard_EXPORT     void SetName(const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString Name() const;
  
  Standard_EXPORT     void SetDescription(const Handle(TCollection_HAsciiString)& aDescription) ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString Description() const;
  
  Standard_EXPORT     void SetRelatingApproval(const Handle(StepBasic_Approval)& aRelatingApproval) ;
  
  Standard_EXPORT     Handle_StepBasic_Approval RelatingApproval() const;
  
  Standard_EXPORT     void SetRelatedApproval(const Handle(StepBasic_Approval)& aRelatedApproval) ;
  
  Standard_EXPORT     Handle_StepBasic_Approval RelatedApproval() const;




  DEFINE_STANDARD_RTTI(StepBasic_ApprovalRelationship)

protected:




private: 


Handle_TCollection_HAsciiString name;
Handle_TCollection_HAsciiString description;
Handle_StepBasic_Approval relatingApproval;
Handle_StepBasic_Approval relatedApproval;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
