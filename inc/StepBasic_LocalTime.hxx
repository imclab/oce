// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_LocalTime_HeaderFile
#define _StepBasic_LocalTime_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_LocalTime_HeaderFile
#include <Handle_StepBasic_LocalTime.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_StepBasic_CoordinatedUniversalTimeOffset_HeaderFile
#include <Handle_StepBasic_CoordinatedUniversalTimeOffset.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class StepBasic_CoordinatedUniversalTimeOffset;



class StepBasic_LocalTime : public MMgt_TShared {

public:

  //! Returns a LocalTime <br>
  Standard_EXPORT   StepBasic_LocalTime();
  
  Standard_EXPORT   virtual  void Init(const Standard_Integer aHourComponent,const Standard_Boolean hasAminuteComponent,const Standard_Integer aMinuteComponent,const Standard_Boolean hasAsecondComponent,const Standard_Real aSecondComponent,const Handle(StepBasic_CoordinatedUniversalTimeOffset)& aZone) ;
  
  Standard_EXPORT     void SetHourComponent(const Standard_Integer aHourComponent) ;
  
  Standard_EXPORT     Standard_Integer HourComponent() const;
  
  Standard_EXPORT     void SetMinuteComponent(const Standard_Integer aMinuteComponent) ;
  
  Standard_EXPORT     void UnSetMinuteComponent() ;
  
  Standard_EXPORT     Standard_Integer MinuteComponent() const;
  
  Standard_EXPORT     Standard_Boolean HasMinuteComponent() const;
  
  Standard_EXPORT     void SetSecondComponent(const Standard_Real aSecondComponent) ;
  
  Standard_EXPORT     void UnSetSecondComponent() ;
  
  Standard_EXPORT     Standard_Real SecondComponent() const;
  
  Standard_EXPORT     Standard_Boolean HasSecondComponent() const;
  
  Standard_EXPORT     void SetZone(const Handle(StepBasic_CoordinatedUniversalTimeOffset)& aZone) ;
  
  Standard_EXPORT     Handle_StepBasic_CoordinatedUniversalTimeOffset Zone() const;




  DEFINE_STANDARD_RTTI(StepBasic_LocalTime)

protected:




private: 


Standard_Integer hourComponent;
Standard_Integer minuteComponent;
Standard_Real secondComponent;
Handle_StepBasic_CoordinatedUniversalTimeOffset zone;
Standard_Boolean hasMinuteComponent;
Standard_Boolean hasSecondComponent;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif