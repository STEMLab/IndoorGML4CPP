#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDS_DataSet_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDS_DataSet_Type

#include "type_gco.CAbstractObject_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CDS_DataSet_Type : public ::indoorgmlcore::gco::CAbstractObject_Type
{
public:
	indoorgmlcore_EXPORT CDS_DataSet_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDS_DataSet_Type(CDS_DataSet_Type const& init);
	void operator=(CDS_DataSet_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CDS_DataSet_Type); }
	MemberElement<gmd::CMD_Metadata_PropertyType, _altova_mi_gmd_altova_CDS_DataSet_Type_altova_has> has;
	struct has { typedef Iterator<gmd::CMD_Metadata_PropertyType> iterator; };
	MemberElement<gmd::CDS_Aggregate_PropertyType, _altova_mi_gmd_altova_CDS_DataSet_Type_altova_partOf> partOf;
	struct partOf { typedef Iterator<gmd::CDS_Aggregate_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDS_DataSet_Type
