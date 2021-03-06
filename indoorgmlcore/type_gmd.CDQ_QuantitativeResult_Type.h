#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_QuantitativeResult_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_QuantitativeResult_Type

#include "type_gmd.CAbstractDQ_Result_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CDQ_QuantitativeResult_Type : public ::indoorgmlcore::gmd::CAbstractDQ_Result_Type
{
public:
	indoorgmlcore_EXPORT CDQ_QuantitativeResult_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDQ_QuantitativeResult_Type(CDQ_QuantitativeResult_Type const& init);
	void operator=(CDQ_QuantitativeResult_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CDQ_QuantitativeResult_Type); }
	MemberElement<gco::CRecordType_PropertyType, _altova_mi_gmd_altova_CDQ_QuantitativeResult_Type_altova_valueType> valueType;
	struct valueType { typedef Iterator<gco::CRecordType_PropertyType> iterator; };
	MemberElement<gco::CUnitOfMeasure_PropertyType, _altova_mi_gmd_altova_CDQ_QuantitativeResult_Type_altova_valueUnit> valueUnit;
	struct valueUnit { typedef Iterator<gco::CUnitOfMeasure_PropertyType> iterator; };
	MemberElement<gco::CCharacterString_PropertyType, _altova_mi_gmd_altova_CDQ_QuantitativeResult_Type_altova_errorStatistic> errorStatistic;
	struct errorStatistic { typedef Iterator<gco::CCharacterString_PropertyType> iterator; };
	MemberElement<gco::CRecord_PropertyType, _altova_mi_gmd_altova_CDQ_QuantitativeResult_Type_altova_value2> value2;
	struct value2 { typedef Iterator<gco::CRecord_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_QuantitativeResult_Type
