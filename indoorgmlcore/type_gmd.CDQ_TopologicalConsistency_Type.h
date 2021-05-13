#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_TopologicalConsistency_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_TopologicalConsistency_Type

#include "type_gmd.CAbstractDQ_LogicalConsistency_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CDQ_TopologicalConsistency_Type : public ::indoorgmlcore::gmd::CAbstractDQ_LogicalConsistency_Type
{
public:
	indoorgmlcore_EXPORT CDQ_TopologicalConsistency_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDQ_TopologicalConsistency_Type(CDQ_TopologicalConsistency_Type const& init);
	void operator=(CDQ_TopologicalConsistency_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CDQ_TopologicalConsistency_Type); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_TopologicalConsistency_Type
