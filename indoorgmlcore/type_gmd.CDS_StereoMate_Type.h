#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDS_StereoMate_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDS_StereoMate_Type

#include "type_gmd.CDS_OtherAggregate_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CDS_StereoMate_Type : public ::indoorgmlcore::gmd::CDS_OtherAggregate_Type
{
public:
	indoorgmlcore_EXPORT CDS_StereoMate_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDS_StereoMate_Type(CDS_StereoMate_Type const& init);
	void operator=(CDS_StereoMate_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CDS_StereoMate_Type); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDS_StereoMate_Type
